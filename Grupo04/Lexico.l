%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include "y.tab.h"

#define MAX_CHARACTERS 30
#define MAX_FLOAT_32 2147483647
#define MAX_INT_16 65536

FILE *yyin;
FILE *ptTxt;

void displayError(char* msg);
int yyerror(void);


%}

%option noyywrap
%option yylineno

COMENTARIO_A      "*/"
COMENTARIO_C      "/*"
COMENTARIO        {COMENTARIO_A}(.)*{COMENTARIO_C}
OP_AND            "&&"|"AND"
OP_OR             "||"|"OR"
OP_NOT            "!"
ESPACIO_EN_BLANCO [ \t\r\v\f]
SALTO_LINEA       [\n]
NUMERO            [0-9]
LETRA             [a-zA-Z]
VARIABLE          {LETRA}({LETRA}|{NUMERO}|"_")*
COMA              ","
PUNTO_COMA        ";"
COMILLA           ["]
COMILLA_A         [“]
COMILLA_C         [”]
CONST_REAL        {NUMERO}+"."{NUMERO}+|{NUMERO}+"."|"."{NUMERO}+
CONST_INT         {NUMERO}+
CONST_STRING      ({COMILLA}|{COMILLA_A}|{COMILLA_C}){1}(.)*({COMILLA}|{COMILLA_A}|{COMILLA_C}){1}
AS                "AS"|"as"
INT               "INT"|"int"|"INTEGER"|"integer"
REAL              "REAL"|"real"|"FLOAT"|"float"
STRING            "STRING"|"string"
DIM               "DIM"|"dim"
WHILE             "while"|"WHILE"
ENDWHILE          "endwhile"|"ENDWHILE"
IF                "IF"|"if"
ELSE              "else"|"ELSE"
ENDIF             "endif"|"ENDIF"
GET               "GET"|"get"
DISPLAY         "DISPLAY"|"display"
CORCHETE_A        "["
CORCHETE_C        "]"
PARENTESIS_A      "("
PARENTESIS_C      ")"
OP_ASIG           ":="|"="
OP_SUMA            "+"
OP_RESTA           "-"
OP_MENOR          "<"
OP_MAYOR          ">"
OP_COMP           "=="
OP_MULT           "*"
OP_DIV            "/"
EQU_MAX           "EQUMAX"|"equmax"
EQU_MIN           "EQUMIN"|"equmin"
OP_MEN_IGU        {OP_MENOR}{OP_ASIG}
OP_MAY_IGU        {OP_MAYOR}{OP_ASIG}
FOR             "FOR"|"for"
TO              "TO"|"to"
NEXT            "NEXT"|"next"

%%

{DIM}                     {return DIM;}    
{AS}                      {return AS;}        
{IF}                      {return IF;}        
{ELSE}                    {return ELSE;}      
{ENDIF}                   {return ENDIF;} 
{WHILE}                   {return WHILE;}             
{ENDWHILE}                {return ENDWHILE;}
{EQU_MAX}                 {return EQU_MAX;}
{EQU_MIN}                 {return EQU_MIN;}
{FOR}                     {return FOR;} 
{TO}                      {return TO;} 
{NEXT}                    {return NEXT;}
{REAL}                    {return REAL;}      
{INT}                     {return INT;}    
{GET}                     {return GET;}       
{DISPLAY}                 {return DISPLAY;}   
{CORCHETE_A}              {return CORCHETE_A;}  
{CORCHETE_C}              {return CORCHETE_C;}  
{STRING}                  {return STRING;}    
{COMENTARIO_A}            {;}
{COMENTARIO_C}            {;}
{COMENTARIO}              {;}
{CONST_STRING}            {
                            if(strlen(yytext) > 30)
                            {
                                    displayError("Constante String supera el maximo de caracteres permitido");
                            } 
                            else 
                                {
                                    yylval.strVal = strdup(yytext);
                                    return CONST_STRING;
                                }

                          }

{CONST_INT}                 {   
                                int value = atoi(strdup(yytext));
                                if( value > MAX_INT_16 ) {
                                    displayError("Entero supera los 16 bits");
                                } else {
                                     yylval.strVal = strdup(yytext);
                                     return CONST_INT;
                                }
                            }   

{CONST_REAL}                 {  
                                float value = atof(strdup(yytext));
                                if ( value > MAX_FLOAT_32 ) 
                                {
                                    displayError("Numero real supera los 32 bits");
                                } 
                                else 
                                {
                                     yylval.strVal = strdup(yytext);
                                     return CONST_REAL;
                                }
                            }   
    
{VARIABLE}                  {
                                yylval.strVal = strdup(yytext);
                                return VARIABLE;
                            }    
{OP_ASIG}                 {return OP_ASIG;}   
{OP_SUMA}                  {return OP_SUMA;}    
{OP_RESTA}                 {return OP_RESTA;}   
{OP_MULT}                 {return OP_MULT;}   
{OP_DIV}                  {return OP_DIV;}    
{OP_MENOR}                {return OP_MENOR;}      
{OP_MAYOR}                {return OP_MAYOR;}      
{OP_MEN_IGU}              {return OP_MEN_IGU;}  
{OP_MAY_IGU}              {return OP_MAY_IGU;}  
{OP_NOT}                  {return OP_NOT;}     
{OP_AND}                  {return OP_AND;}      
{OP_OR}                   {return OP_OR;}            
{OP_COMP}                 {return OP_COMP;}        
{COMA}                  {return COMA;}      
{PUNTO_COMA}              {return PUNTO_COMA;}   
{PARENTESIS_A}            {return PARENTESIS_A;}    
{PARENTESIS_C}            {return PARENTESIS_C;}    
{ESPACIO_EN_BLANCO}          {;} 
{SALTO_LINEA}                {;} 
.                           {displayError("Error en Lexico - Token no valido");} 

%%


void displayError(char* msg)
{
    printf("%s - linea del archivo analizado: %d\n", msg, yylineno); 
    system("Pause");
    exit(1);
}

int yyerror(void){

	printf("Error en analizador sintactico en la linea del archivo analizado: %d\n", yylineno);
	system("Pause");
	exit(1);
}