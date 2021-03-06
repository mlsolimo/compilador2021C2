%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include "y.tab.h"

#define MAX_VALUE_STRING 30
#define MAX_VALUE_INTEGER 65535
#define MAX_VALUE_FLOAT INT_MAX

FILE *yyin;
FILE *archSal;

void displayError(char* msg);
int yyerror(void);
%}

%option noyywrap
%option yylineno


/* Palabras reservadas */

WHILE_T			"while"|"WHILE"|"While"
ENDWHILE		"ENDWHILE"|"Endwhile"|"EndWhile"|"endwhile"
DISPLAY			"DISPLAY"|"Display"|"display"
GET				"GET"|"Get"|"get"
READ_T			"read"|"READ"
FLOAT_T			"Float"|"float"|"FLOAT"
INT_T		    "Int"|"int"|"INT"|"Integer"|"INTEGER"|"integer"
CHAR            "Char"|"char"|"CHAR"
STRING          "STRING"|"String"|"string"
IN_T 			"in"|"In"|"IN"
DO_T 			"do"|"Do"|"DO"
OP_AVG			"avg"|"AVG"
ELSE_T			"else"|"ELSE"|"Else"
IF_T			"if"|"IF"|"If"
ENDIF			"ENDIF"|"endif"|"Endif"
DIM				"DIM"|"Dim"|"dim"
FOR             "FOR"|"for"
TO              "TO"|"to"
NEXT            "NEXT"|"next"

/* Saltos de linea, espacios, definiciones de exp reg */

whitespace      [ \t\r\v\f]
linefeed        [\n]
DIGITO 			[0-9]
LETRA			[a-zA-Z]
COMILLA_D		["]
COMILLA_A		[“]
COMILLA_C		[”]



CONST_INT 		{DIGITO}+
CONST_FLOAT 	{DIGITO}+"."{DIGITO}+
CONST_STRING	({COMILLA_A}|{COMILLA_D}|{COMILLA_C}){1}(.)*({COMILLA_A}|{COMILLA_D}|{COMILLA_C}){1}
ID_T			{LETRA}({LETRA}|{DIGITO}|"_")*

/* Operadores */

OP_DISTINTO	 	"!""="
OP_IGUAL		"=""="
OP_MAYORIGUAL	">""="
OP_MAYOR		">"
OP_MENOR		"<"
OP_MENORIGUAL	"<""="
OP_ASIG			":="|"="
OP_DIVISION		"/"
OP_SUM			"+"
OP_MUL			"*"
OP_MENOS		"-"
OP_MOD 			"MOD"|"Mod"|"mod"
OP_DIV 			"DIV"|"Div"|"div"
OR_T			"OR"|"||"
AND_T			"AND"|"&&"
NOT_T 			"!"
EQUMIN          "EQUMIN"|"Equmin"|"equmin"
EQUMAX          "EQUMAX"|"Equmax"|"equmax"
AS              "AS"|"As"|"as"



/* Comentarios */

COMENTARIO_A    "*""/"
COMENTARIO_C	"/""*"
COMENTARIO      {COMENTARIO_A}(.)*{COMENTARIO_C}


/* Llaves, parentensis, etc */

LLAVE_C			"}"
LLAVE_A			"{"
PARENT_C		")"
PARENT_A		"("
CORCH_A         "["
CORCH_C         "]"
COMA			","
SEP_LINEA		";"



%%		
{DIM}				 {return DIM;}
{ELSE_T}			 {return ELSE_T;}
{IF_T}				 {return IF_T;}
{ENDIF}				 {return ENDIF;}
{IN_T}				 {return IN_T;}
{DO_T}				 {return DO_T;}
{WHILE_T}			 {return WHILE_T;}
{ENDWHILE}			 {return ENDWHILE;}
{FOR}                {return FOR;} 
{TO}                 {return TO;} 
{NEXT}               {return NEXT;}
{DISPLAY}			 {return DISPLAY;}
{GET}				 {return GET;}
{READ_T}			 {return READ_T;}
{FLOAT_T}			 {return FLOAT_T;}
{INT_T}			     {return INT_T;}
{CHAR} 			     {return CHAR;} 
{CORCH_A} 			 {return CORCH_A;} 
{CORCH_C}            {return CORCH_C;}
{EQUMIN}             {return EQUMIN;}
{EQUMAX}             {return EQUMAX;}
{AS}                 {return AS;}
{STRING}             {return STRING;}

{COMENTARIO}		{;}
{COMENTARIO_A}		{;}		
{COMENTARIO_C}		{;}





{CONST_STRING}		{
                    if(strlen(yytext) > MAX_VALUE_STRING)
                        {
                          displayError("Constante String supera el maximo de caracteres permitido");
                        }
                    else
                        {
                            yylval.strVal = strdup(yytext);
                            return CONST_STRING;
                        }
                    }

{CONST_INT}			{
                    int num = atoi(strdup(yytext));
                        if(num > MAX_VALUE_INTEGER)
                        {
                             displayError("Entero supera los 16 bits");
                        }
                    else
                        {
                            yylval.strVal = strdup(yytext);
                            return CONST_INT;	        
                        }
                    }	

{CONST_FLOAT}	    {
                    float num = atof(strdup(yytext));
                        if(num > MAX_VALUE_FLOAT)
                        {
                            displayError("Numero real supera los 32 bits");
                        }
                    else
                        {
                            yylval.strVal = strdup(yytext);
                            return CONST_FLOAT;
                        }
                    }
					
{ID_T}				{yylval.strVal = strdup(yytext); return ID_T;}


{OP_DISTINTO}		{return OP_DISTINTO;}
{OP_IGUAL}			{return OP_IGUAL;}
{OP_MAYORIGUAL}		{return OP_MAYORIGUAL;}
{OP_MAYOR}			{return OP_MAYOR;}
{OP_MENOR}			{return OP_MENOR;}
{OP_MENORIGUAL}		{return OP_MENORIGUAL;}
{OP_MOD} 			{return OP_MOD;}
{OP_DIV} 			{return OP_DIV;}
{OP_DIVISION}		{return OP_DIVISION;}
{OP_SUM}			{return OP_SUM;}
{OP_MENOS}			{return OP_MENOS ;}
{OP_AVG}			{return OP_AVG;}
{OP_MUL}			{return OP_MUL;}
{OP_ASIG}			{return OP_ASIG;}
{AND_T}				{return AND_T;}
{OR_T}				{return OR_T;}
{NOT_T}				{return NOT_T;}


{LLAVE_C}			{return LLAVE_C;}
{LLAVE_A}			{return LLAVE_A;}
{PARENT_C}			{return PARENT_C;}
{PARENT_A}			{return PARENT_A;}
{COMA}				{return COMA;}
{SEP_LINEA}			{return SEP_LINEA;}
{linefeed}			{;} // linefeed = \n
{whitespace}		{;}
" "
.					{displayError("Error en Lexico - Token no valido");}

%%


void displayError(char* msg)
{
    printf("%s - linea del archivo analizado: %d\n", msg, yylineno); 
    system("Pause");
    exit(1);
}

int yyerror(void)
{

	printf("Error en analizador sintactico en la linea del archivo analizado: %d\n", yylineno);
	system("Pause");
	exit(1);
}