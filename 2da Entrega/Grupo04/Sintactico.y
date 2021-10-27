%{
#include "lista.h"
#include "pila.h"
#include "y.tab.h"
#include "arbol.h"

FILE *yyin;

tList symbolTable;
tStack stackDataTypeDecVar;
tStack invertStackDataType;
tStack stackVar;

FILE *pIntermedia;

extern int yylex();
extern void yyerror();
extern char* yytext;
extern int yylineno;


t_NodoArbol* numeroPtr;
t_NodoArbol* getPtr;
t_NodoArbol* displayPtr;
t_NodoArbol* constStringPtr;
t_NodoArbol* swPtr;
t_NodoArbol* sentenciaPtr;
t_NodoArbol* grammarPtr;
t_NodoArbol* asigPtr;
t_NodoArbol* ifPtr;
t_NodoArbol* whilePtr;
t_NodoArbol* expPtr;
t_NodoArbol* terminoPtr;
t_NodoArbol* factorPtr;
t_NodoArbol* bodyPtr;
t_NodoArbol* condPtr;
t_NodoArbol* truePtr;
t_NodoArbol* falsePtr;
t_NodoArbol* listaPtr;
t_NodoArbol* equmaxPtr;
t_NodoArbol* equminPtr;
t_NodoArbol* condComPtr;
t_NodoArbol* condEquPtr;
t_NodoArbol* whileExpPtr;
t_NodoArbol* condCompPtr;
t_NodoArbol* exprPtr;
t_NodoArbol* exprListPtr;
t_NodoArbol* auxPtr;

int min;
int aux;
int max;
int isEqumax;
int isEqumin;
int isWhile=0;

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

programa:   prog             
        ;

prog: sentencia                 {;}
  ;

sentencia: sentencia grammar PUNTO_COMA  { 
                                            if(isWhile==1) {
																              swPtr=crear_nodo("BODY",sentenciaPtr,grammarPtr); 
																              isWhile=0;
                                           }
                                         }
        | grammar PUNTO_COMA             {sentenciaPtr = grammarPtr;}
        ;

grammar:   dec_var                    {printf("Regla - Declaracion de variable\n");}
       |   asig                       {printf("Regla - Asignacion\n"); guardarEnArchivoInorden(&asigPtr, pIntermedia); fprintf(pIntermedia, "\n"); grammarPtr=asigPtr;}
       |   display                    {printf("Regla - Display\n"); grammarPtr=displayPtr; guardarEnArchivoInorden(&grammarPtr, pIntermedia); fprintf(pIntermedia, "\n");}
       |   get                        {printf("Regla - Get\n"); grammarPtr=getPtr; guardarEnArchivoInorden(&grammarPtr, pIntermedia); fprintf(pIntermedia, "\n");}
       |   if                         {printf("Regla - IF \n"); guardarEnArchivoInorden(&ifPtr, pIntermedia); fprintf(pIntermedia, "\n");}
       |   while                      {printf("Regla - While \n"); guardarEnArchivoInorden(&whilePtr, pIntermedia); fprintf(pIntermedia, "\n"); grammarPtr=whilePtr;}
       |   for                        {printf("Regla - For \n");}
       ;

asig:   VARIABLE OP_ASIG expr             {asigPtr = crear_nodo("=", crear_hoja($1), expPtr); printf("Regla - Sentencia de asignacion por expresion \n");}
    |   VARIABLE OP_ASIG CONST_STRING_R     {asigPtr = crear_nodo("=", crear_hoja($1), constStringPtr); printf("Regla - Sentencia de asignacion por constante string \n");}
    ;

CONST_STRING_R: CONST_STRING { constStringPtr = crear_hoja($1);
	                              insertString(&symbolTable, $1);
	                            };

NUMERO: CONST_INT{
        insertNumber(&symbolTable,$1);
        numeroPtr = crear_hoja($1);
      }    
      | CONST_REAL {
        insertFloat(&symbolTable,$1);
        numeroPtr = crear_hoja($1);
      };

expr: expr OP_SUMA termino         {exprPtr = crear_nodo("+", exprPtr, terminoPtr); printf("Regla - Sentencia de suma \n");}
	| expr OP_RESTA termino          {exprPtr = crear_nodo("-", exprPtr, terminoPtr); printf("Regla - Sentencia de resta \n");} 
	| termino                        {exprPtr = terminoPtr;}
    ;

termino: termino OP_MULT factor   {terminoPtr = crear_nodo("*", terminoPtr, factorPtr); printf("Regla - Sentencia de multiplicacion\n");}
	   | termino OP_DIV factor      {terminoPtr = crear_nodo("/", terminoPtr, factorPtr);   printf("Regla - Sentencia de division\n");}
     | '-' termino %prec MENOS_UNARIO
	   | factor                     {terminoPtr = factorPtr;}
       ;

                    
factor: PARENTESIS_A expr PARENTESIS_C    {factorPtr = expPtr;}
      | NUMERO                    {factorPtr = numeroPtr;}
	    | VARIABLE                  {factorPtr = crear_hoja($1);}
      ;

display: DISPLAY CONST_STRING_R   {displayPtr = crear_nodo("DISPLAY", NULL, constStringPtr);   printf("Regla - Sentencia de display con constante string\n");}
       | DISPLAY expr             {displayPtr = crear_nodo("DISPLAY", NULL, exprPtr); printf("Regla - Sentencia de display con expresion\n");}
       ;

get: GET VARIABLE { getPtr = crear_nodo("GET", NULL, crear_hoja($2));
                    printf("Regla - Sentencia de Get con variable\n");
                  }
   ;

while: WHILE {isWhile = 1;} cond_completa { 
                                          if(swPtr) {
																	          whilePtr = crear_nodo("WHILE", condComPtr, swPtr);
                                          }
																	        else {
                                            whilePtr=crear_nodo("WHILE", condComPtr,grammarPtr);
                                          }
                                    }
       while_exp
       ENDWHILE
    ;

while_exp: sentencia {whileExpPtr = sentenciaPtr;}
            ;

for: FOR VARIABLE OP_ASIG expr TO expr CORCHETE_A CONST_INT CORCHETE_C {printf("Regla - Sentencia de FOR con valor en corchete\n");}
     sentencia
     NEXT VARIABLE
    | FOR VARIABLE OP_ASIG expr TO expr {printf("Regla - Sentencia de FOR sin valor en corchete\n");}
      sentencia
      NEXT VARIABLE
    ;

if: IF cond_completa      {ifPtr=crear_nodo("IF",condComPtr, sentenciaPtr);}
    sentencia             {;}
    ENDIF                 {;}
    | IF cond_completa     
      sentencia           {truePtr = sentenciaPtr;}
      ELSE  
      sentencia           {falsePtr = sentenciaPtr;} 
      ENDIF               {bodyPtr=crear_nodo("BODY",truePtr,falsePtr); ifPtr=crear_nodo("IF",condComPtr,bodyPtr); }
    | IF cond_completa    {printf("Regla - if y else sin sentencia\n");}
      ELSE                {bodyPtr=crear_hoja("BODY"); ifPtr=crear_nodo("IF",condComPtr,bodyPtr);}
      ENDIF               {;}
    | IF cond_completa    {ifPtr=crear_nodo("IF",condComPtr, NULL); printf("Regla - if sin sentencia\n");}
      ENDIF               {;}
    ;

cond_completa: PARENTESIS_A cond PARENTESIS_C                      {condComPtr=condPtr;}
             | PARENTESIS_A cond_completa OP_OR cond PARENTESIS_C {condComPtr=crear_nodo("OR", condCompPtr, condPtr);}
             | PARENTESIS_A cond_completa OP_AND cond PARENTESIS_C {condComPtr=crear_nodo("AND", condCompPtr, condPtr);}
             | OP_NOT cond_completa                                {condComPtr=crear_nodo("NOT", condCompPtr, NULL);}
             | PARENTESIS_A cond OP_OR cond_completa PARENTESIS_C {;}
             | PARENTESIS_A cond OP_AND cond_completa PARENTESIS_C {;}
             | PARENTESIS_A cond OP_AND cond PARENTESIS_C {;}
             | PARENTESIS_A cond OP_OR cond PARENTESIS_C  {;}
             | PARENTESIS_A equmin PARENTESIS_C {condComPtr=equminPtr;}
             | PARENTESIS_A equmax PARENTESIS_C {condComPtr=equmaxPtr;}
             ;

equmax: EQU_MAX PARENTESIS_A cond_equ {isEqumax = 1;} PARENTESIS_C	{isEqumin=0; equmaxPtr = condEquPtr;
                                                                    printf("Regla - Sentencia de EQUMAX\n");}
        ;

equmin: EQU_MIN PARENTESIS_A cond_equ {isEqumin = 1;} PARENTESIS_C {isEqumax=0; equminPtr = condEquPtr; printf("Regla - Sentencia de EQUMIN\n");}
        ;
cond_equ: expr { auxPtr=crear_nodo("=",crear_hoja("@aux"),exprPtr);} PUNTO_COMA CORCHETE_A lista CORCHETE_C { condEquPtr = crear_nodo("IF",crear_nodo("==",listaPtr,auxPtr),crear_hoja("Cuerpo")); printf("Regla - Sentencia de Expresion y Listado de variables o constantes en EQUMIN/EQUMAX\n");}
        ;
lista: expr_list 							{ 
                                if (isEqumin)
                                  listaPtr=crear_nodo("=",crear_hoja("@min"),exprListPtr);
											          
                                if (isEqumax)
                                  listaPtr=crear_nodo("=",crear_hoja("@max"),exprListPtr);
                              }
      | lista COMA expr_list  				{
                          if(isEqumin)
	   											{
													  listaPtr=crear_nodo("IF",crear_nodo("<",exprListPtr,listaPtr),crear_nodo("=",crear_hoja("@min"),exprListPtr));
												  }
													   
											    if(isEqumax)
                          {
                            listaPtr=crear_nodo("IF",crear_nodo(">",exprListPtr,listaPtr),crear_nodo("=",crear_hoja("@max"),exprListPtr));
                          }
                          
                          };

expr_list: CONST_INT      {exprListPtr = crear_hoja($1);}
        |  CONST_REAL     {exprListPtr = crear_hoja($1);}
        |  CONST_STRING   {exprListPtr = crear_hoja($1);}
        |  VARIABLE       {exprListPtr = crear_hoja($1);}
        ;

cond: expr OP_COMP termino  {condPtr = crear_nodo("==", expPtr, terminoPtr);}
    | expr OP_MAY_IGU termino {condPtr = crear_nodo(">=",expPtr, terminoPtr);}
    | expr OP_MEN_IGU termino {condPtr = crear_nodo("<=",expPtr, terminoPtr);}
    | expr OP_MENOR termino {condPtr = crear_nodo("<",expPtr, terminoPtr);}
    | expr OP_MAYOR termino {condPtr = crear_nodo(">",expPtr, terminoPtr);}
    | expr OP_AND termino {condPtr = crear_nodo("&&", expPtr, terminoPtr);}
    | expr OP_OR termino {condPtr = crear_nodo("||", exprPtr, terminoPtr);}
    | expr OP_NOT termino {condPtr = crear_nodo("!", exprPtr, terminoPtr);}
    | OP_NOT VARIABLE {condPtr = crear_nodo("!", NULL, crear_hoja($2));}
    ;

dec_var: DIM CORCHETE_A seg_asig CORCHETE_C {
                                        printf("Regla - Sentencia de declaracion de variable\n");
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


seg_asig:  VARIABLE COMA seg_asig COMA tipo                 {
                                                              printf("Regla - sentencia declaracion de variable\n");
                                                              pushStack(&stackVar,$1);
                                                            }
          |  VARIABLE CORCHETE_C AS CORCHETE_A tipo         {
                                                              printf("Regla - sentencia de declaracion de tipo\n");
                                                              pushStack(&stackVar,$1);
                                                            }
          ;
			 
 
tipo: 	INT 	    {pushStack(&stackDataTypeDecVar,"INTEGER");}
      | REAL      {pushStack(&stackDataTypeDecVar,"FLOAT");}	
      | STRING  	{pushStack(&stackDataTypeDecVar,"STRING");}
      ;

%%


int main(int argc, char* argv[])
{

  if((pIntermedia = fopen("Intermedia.txt", "wt")) == NULL)
	{
      printf("\nNo se puede abrir el archivo %s\n", "Intermedia.txt");
  }

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