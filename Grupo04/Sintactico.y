%{
#include "lista.h"
#include "pila.h"

FILE *yyin;

tList symbolTable;
tStack stackDataTypeDecVar;
tStack invertStackDataType;
tStack stackVar;

extern int yylex();
extern void yyerror();
extern char* yytext;
extern int yylineno;
%}

%union{
    char* strVal;
}

%token DIM
%token OP_MENOR
%token OP_MAYOR
%token ID
%token COMA
%token TYPE_INTEGER
%token TYPE_FLOAT
%token TYPE_STRING
%token DISPLAY
%token CONST_STRING
%token GET
%token WHILE
%token ENDWHILE


%%

programa_final: programa {;};

programa: sentencia gramatica {;}
        | gramatica           {;}
        ;

gramatica: dec_variable       {;}
        |  asig               {;}
        |  display            {;}
        |  get                {;}
        |  ciclo_especial     {;}
        |  if                 {;}
        |  equmax             {;}
        |  equmin             {;}
        ;

display: DISPLAY CONST_STRING    {insertString(&symbolTable, $1);}
       | DISPLAY ID              {;}
       ;

get: GET ID {;}
   ;

dec_variable: DIM OP_MENOR lista_asig OP_MAYOR {
                                                    char dataType[100];
                                                    char variable[100];
                                                    while(!emptyStack(&stackDataTypeDecVar)){
                                                    popStack(&stackDataTypeDecVar,dataType);
                                                    pushStack(&invertStackDataType,dataType);
                                                    }
                                                    while(!emptyStack(&invertStackDataType) && !emptyStack(&stackVar)){
                                                        popStack(&invertStackDataType,dataType);
                                                        popStack(&stackVar,variable);
                                                        insertVariable(&symbolTable,variable,dataType);
                                                    }

                                                };

lista_asig: ID COMA lista_asig COMA tipo        {pushStack(&stackVar,$1);}
        |   ID OP_MAYOR AS OP_MENOR tipo        {pushStack(&stackVar,$1);}
        ;

tipo:   TYPE_INTEGER                            {pushStack(&stackDataTypeDecVar,"INTEGER");}
    |   TYPE_FLOAT                              {pushStack(&stackDataTypeDecVar,"FLOAT");}
    |   TYPE_STRING                             {pushStack(&stackDataTypeDecVar,"STRING");}
    ;

%%

int main(int argc, char* argv[])
{
    if((yyin = fopen(argv[1],"rt")) == NULL)
    {
        printf("\n No se puede abrir el archivo %s \n", argv[1]);
    }

    printf("\n Comienzo de la compilacion \n\n");

    createList(&symbolTable);
    createStack(&stackVar);
    createStack(&stackDataTypeDecVar);
    createStack(&invertStackDataType);
    yyparse();

    deleteTable(&symbolTable);
    
    printf("\n Compilacion exitosa \n");
    fclose(yyin);
    return 0;
}