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
%token AS
%token OP_MENOR
%token OP_MAYOR
%token OP_ASIG
%token OP_SUM
%token OP_DIVISION
%token OP_RESTA
%token OP_MULT
%token OP_COMP
%token OP_MAYORIGUAL
%token OP_MENORIGUAL
%token OP_DISTINTO
%token <strVal>VARIABLE
%token COMA
%token TYPE_INTEGER
%token TYPE_FLOAT
%token TYPE_STRING
%token DISPLAY
%token <strVal>CONST_STRING
%token <strVal>CONST_INT
%token <strVal>CONST_REAL
%token DIGITO
%token GET
%token WHILE
%token ENDWHILE
%token IF
%token ELSE
%token ENDIF
%token PUNTO_COMA
%token PARENTESIS_A
%token PARENTESIS_C
%token CORCHETE_A
%token CORCHETE_C
%token FOR
%token TO
%token NEXT
%token EQUMIN
%token EQUMAX
%token AND
%token OR
%token NOT

%left  OP_RESTA OP_SUMA
%right OP_MULT OP_DIVISIONISION
%right OP_ASIG 

%%

programa_final: programa {;};

programa: sentencia gramatica {;}
        | gramatica           {;}
        ;

sentencia: sentencia gramatica PUNTO_COMA  {;}
        |  gramatica PUNTO_COMA            {;}
        ;

gramatica: dec_variable       {;}
        |  asig               {;}
        |  display            {;}
        |  get                {;}
        |  for                {;}
        |  if                 {;}
        |  while              {;}
        |  equmax             {;}
        |  equmin             {;}
        ;


//Declaracion de variables

dec_variable: DIM CORCHETE_A lista_asig CORCHETE_C {
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

lista_asig: VARIABLE COMA lista_asig COMA tipo            {pushStack(&stackVar,$1);}
        |   VARIABLE CORCHETE_C AS CORCHETE_A tipo        {pushStack(&stackVar,$1);}
        ;

tipo:   TYPE_INTEGER                            {pushStack(&stackDataTypeDecVar,"INTEGER");}
    |   TYPE_FLOAT                              {pushStack(&stackDataTypeDecVar,"FLOAT");}
    |   TYPE_STRING                             {pushStack(&stackDataTypeDecVar,"STRING");}
    ;


//Asignacion de variables

asig:   VARIABLE OP_ASIG expresion          {;}
    |   VARIABLE OP_ASIG CONST_STRING       {;}
    ;

expresion:  expresion OP_SUMA termino         {;}
	| expresion OP_RESTA termino        {;} 
	| termino                       {;}
    ;

termino: termino OP_MULT factor   {;}
	   | termino OP_DIVISION factor    {;}
	   | factor                     {;}
       ;
            
factor: PARENTESIS_A expresion PARENTESIS_C     {;}
      | DIGITO                          {;}
	  | VARIABLE                        {;}
      ;

// display
display: DISPLAY CONST_STRING    {insertString(&symbolTable,"STRING");}
       | DISPLAY CONST_INT       {insertNumber(&symbolTable,"INTEGER");}    
       | DISPLAY CONST_REAL      {insertNumber(&symbolTable,"FLOAT");}
       ;

// get
get: GET VARIABLE {;}
   ;

// Ciclo for
for: FOR VARIABLE OP_ASIG expresion TO expresion CORCHETE_A step CORCHETE_C {;}
     NEXT VARIABLE
;

step: CONST_INT {;}
      | {;}

// Ciclo While
while: WHILE PARENTESIS_A cond_final PARENTESIS_C  
       sentencia
       ENDWHILE
    ;


//Ciclo if
if: IF cond_final 
    sentencia               {;}
    ENDIF                 {;}
    | IF cond_final 
      sentencia             {;}
      ELSE                {;}
      sentencia             {;}
      ENDIF               {;}
    | IF cond_final 
      ELSE                {;}
      ENDIF               {;}
    | IF cond_final 
      ENDIF               {;}
    ;


cond_final: PARENTESIS_A cond_final AND cond_final PARENTESIS_C
			| PARENTESIS_A cond AND cond_final PARENTESIS_C
			| PARENTESIS_A cond_final AND cond PARENTESIS_C
			| PARENTESIS_A cond_final OR cond_final  PARENTESIS_C 
			| PARENTESIS_A cond OR cond_final PARENTESIS_C 
			| PARENTESIS_A cond_final OR cond PARENTESIS_C 
		    | PARENTESIS_A cond AND cond PARENTESIS_C
			| PARENTESIS_A cond OR cond PARENTESIS_C 
		    | PARENTESIS_A cond PARENTESIS_C
		    | NOT cond_final
		    | PARENTESIS_A cond_final PARENTESIS_C
		  ;

cond: expresion OP_COMP expresion  {;}
    | expresion OP_MAYORIGUAL expresion {;}
    | expresion OP_MENORIGUAL expresion {;}
    | expresion OP_MENOR expresion {;}
    | expresion OP_MAYOR expresion {;}
    | expresion AND expresion {;}
    | expresion OR expresion {;}
    | expresion NOT termino {;}
    | NOT VARIABLE {;}
    ;

// equmax
equmax: EQUMAX PARENTESIS_A expresion PUNTO_COMA CORCHETE_A lista CORCHETE_C PARENTESIS_C 	{;}
        ;

// equmin
equmin: EQUMIN PARENTESIS_A expresion PUNTO_COMA CORCHETE_A lista CORCHETE_C PARENTESIS_C 	{;}
        ;

lista: expr_list 							    {;}
      | lista COMA expr_list  				{;}
	    ;

expr_list: CONST_INT      {;}
        |  CONST_REAL     {;}
        |  CONST_STRING   {;}
        |  VARIABLE       {;}


%%

int main(int argc, char* argv[])
{
    if((yyin = fopen(argv[1],"rt")) == NULL)
    {
        printf("\n No se puede abrir el archivo %s \n", argv[1]);
    }

    printf("\n Inicio de compilacion \n\n");

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