%{
#include "lista.h"
#include "pila.h"
#include "y.tab.h"

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
%token WHILE
%token ENDWHILE
%token IF
%token ELSE
%token ENDIF
%token INT         
%token REAL       
%token STRING      
%token GET        
%token DISPLAY    
%token AS  
%token CORCHETE_A 
%token CORCHETE_C   
%token COMA      
%token PUNTO_COMA 
%token PARENTESIS_A    
%token PARENTESIS_C     
%token OP_MENOR      
%token OP_MAYOR       
%token OP_MEN_IGU
%token OP_MAY_IGU 
%token OP_NOT       
%token OP_AND      
%token OP_OR    
%token OP_COMP    
%token EQU_MAX
%token EQU_MIN
%token <strVal>CONST_INT
%token <strVal>CONST_REAL
%token <strVal>VARIABLE    
%token <strVal>CONST_STRING 
%token COMENTARIO_A
%token COMENTARIO_C
%token COMENTARIO
%token FOR
%token NEXT
%token TO
%token .

%left  OP_RESTA OP_SUMA
%right OP_MULT OP_DIV
%right MENOS_UNARIO
%right OP_ASIG   

%%

programa:   prog             {;}
        ;

prog: sentencia                 {;}
  ;

sentencia: sentencia grammar PUNTO_COMA  {;}
        | grammar PUNTO_COMA             {;}
        ;

grammar:   dec_var                    {;}
       |   asig                       {;}
       |   display                    {;}
       |   get                        {;}
       |   if                         {;}
       |   while                      {;}
       |   for                        {;}
       ;

asig:   VARIABLE OP_ASIG expr             {;}
    |   VARIABLE OP_ASIG CONST_STRING_R     {;}
    ;

CONST_STRING_R: CONST_STRING {
	    insertString(&symbolTable, $1);
	};

NUMERO: CONST_INT{
        insertNumber(&symbolTable,$1);
      }    
      | CONST_REAL {
        insertNumber(&symbolTable,$1);
      };

expr: expr OP_SUMA termino         {;}
	| expr OP_RESTA termino        {;} 
	| termino                       {;}
    ;

termino: termino OP_MULT factor   {;}
	   | termino OP_DIV factor    {;}
     | '-' termino %prec MENOS_UNARIO
	   | factor                     {;}
       ;

                    
factor: PARENTESIS_A expr PARENTESIS_C    {;}
      | NUMERO                    {;}
	    | VARIABLE                  {;}
      ;

display: DISPLAY CONST_STRING_R   {;}
       | DISPLAY expr             {;}
       ;

get: GET VARIABLE {;}
   ;

while: WHILE  cond_completa 
       while_exp
       ENDWHILE
    ;

while_exp: sentencia {;}
            ;

for: FOR VARIABLE OP_ASIG expr TO expr CORCHETE_A CONST_INT CORCHETE_C {;}
     sentencia
     NEXT VARIABLE
    | FOR VARIABLE OP_ASIG expr TO expr {;}
      sentencia
      NEXT VARIABLE
    ;

if: IF cond_completa 
    sentencia             {;}
    ENDIF                 {;}
    | IF cond_completa 
      sentencia             {;}
      ELSE                {;}
      sentencia             {;}
      ENDIF               {;}
    | IF cond_completa 
      ELSE                {;}
      ENDIF               {;}
    | IF cond_completa 
      ENDIF               {;}
    ;

cond_completa: PARENTESIS_A cond_completa PARENTESIS_C                      {;}
             | PARENTESIS_A cond_completa OP_OR cond_completa PARENTESIS_C {;}
             | PARENTESIS_A cond_completa OP_AND cond_completa PARENTESIS_C {;}
             | PARENTESIS_A cond_completa OP_OR cond PARENTESIS_C {;}
             | PARENTESIS_A cond_completa OP_AND cond PARENTESIS_C {;}
             | OP_NOT cond_completa                       {;}
             | PARENTESIS_A cond OP_OR cond_completa PARENTESIS_C {;}
             | PARENTESIS_A cond OP_AND cond_completa PARENTESIS_C {;}
             | PARENTESIS_A cond OP_AND cond PARENTESIS_C {;}
             | PARENTESIS_A cond OP_OR cond PARENTESIS_C  {;} 
             | PARENTESIS_A cond PARENTESIS_C {;}
             | PARENTESIS_A equmin PARENTESIS_C {;}
             | PARENTESIS_A equmax PARENTESIS_C {;}
             ;

equmax: EQU_MAX PARENTESIS_A cond_equ PARENTESIS_C	{;}
        ;

equmin: EQU_MIN PARENTESIS_A cond_equ PARENTESIS_C {;}
        ;
cond_equ: expr PUNTO_COMA CORCHETE_A lista CORCHETE_C {;}
        ;
lista: expr_list 							{;}
      | lista COMA expr_list  				{;}
	    ;

expr_list: CONST_INT      {;}
        |  CONST_REAL     {;}
        |  CONST_STRING   {;}
        |  VARIABLE       {;}
        ;

cond: expr OP_COMP expr  {;}
    | expr OP_MAY_IGU expr {;}
    | expr OP_MEN_IGU expr {;}
    | expr OP_MENOR expr {;}
    | expr OP_MAYOR expr {;}
    | expr OP_AND expr {;}
    | expr OP_OR expr {;}
    | expr OP_NOT termino {;}
    | OP_NOT VARIABLE {;}
    ;

dec_var: DIM CORCHETE_A seg_asig CORCHETE_C {
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


seg_asig:  VARIABLE COMA seg_asig COMA tipo                 {pushStack(&stackVar,$1);}
          |  VARIABLE CORCHETE_C AS CORCHETE_A tipo         {pushStack(&stackVar,$1);}
          ;
			 
 
tipo: 	INT 	    {pushStack(&stackDataTypeDecVar,"INTEGER");}
      | REAL      {pushStack(&stackDataTypeDecVar,"FLOAT");}	
      | STRING  	{pushStack(&stackDataTypeDecVar,"STRING");}
      ;

%%


int main(int argc, char* argv[])
{
    if((yyin = fopen(argv[1],"rt")) == NULL)
    {
        printf("\n No se puede abrir el archivo %s \n", argv[1]);
    }

    printf("\n Compilando... \n\n");

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