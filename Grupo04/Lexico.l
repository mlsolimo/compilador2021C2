%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

FILE *yyin;
int yylval;

int yyerror(void);
int errorLex(void);

%}

%option noyywrap
%option yylineno

DIGITO          [0-9]
LETRA           [a-zA-Z]
COMILLA         ["]
LLAVE_A         "{"
LLAVE_C         "}"
PARENTESIS_A    "("
PARENTESIS_C    ")"
CORCHETE_A      "["
CORCHETE_C      "]"
WHILE           "WHILE"|"while"
ENDWHILE        "ENDWHILE"|"endwhile"
IF              "IF"|"if"
ENDIF           "ENDIF"|"endif"
ELSE            "ELSE"|"else"
OP_ASIG         ":="
CONST_ENTERA    {DIGITO}+
CONST_REAL      "-"?{DIGITO}+.".".{DIGITO}+
CONST_STRING    {COMILLA}.(.)+.{COMILLA}
ID		        {LETRA}({LETRA}|{DIGITO})*
COMENTARIO      "/*".(.)*."*/"
DISPLAY         "DISPLAY"|"display"
GET             "GET"|"get"
OP_COMP			"=""="
OP_MAYORIGUAL	">""="
OP_MAYOR		">"
OP_MENOR		"<"
OP_MENORIGUAL	"<""="
OP_DISTINTO		"!""="
OR			    "OR"|"||"
AND			    "AND"|"&&"
NOT 			"NOT"|"!"
OP_DIVISION		"/"
OP_SUMA			"+"
OP_MULT			"*"
OP_RESTA		"-"
DIM             "DIM"|"dim"
AS              "AS"|"as"         
TYPE_INTEGER    "INTEGER"|"integer"
TYPE_FLOAT      "REAL"|"real"
TYPE_CONST      "STRING"|"string"
FOR             "FOR"|"for"
TO              "TO"|"to"
NEXT            "NEXT"|"next"
EQUMAX          "EQUMAX"|"equmax"
EQUMIN          "EQUMIN"|"equmin"
PUNTO_COMA      ";"
COMA          ","



%%
{WHILE}         {printf("\nPalabra reservada: %s\n", yytext); return WHILE;}
{ENDWHILE}      {printf("\nPalabra reservada: %s\n", yytext); return ENDWHILE;}
{IF}            {printf("\nPalabra reservada: %s\n", yytext); return IF;}
{ENDIF}         {printf("\nPalabra reservada: %s\n", yytext); return ENDIF;}
{OP_ASIG}       {printf("\nPalabra reservada: %s\n", yytext); return OP_ASIG;}
{CONST_ENTERA}  {
                        printf("\nConstante entera:" %s\n, yytext);
                        int num = atoi(strdup(yytext));
						if (num > 65535) {
							printf("Valor numerico mayor a 65535 %d\n",num);
							errorLexico();
						} else {
                            printf("\nPalabra reservada: %s\n", yytext);
                            yylval.strVal = strdup(yytext);
					 		return CONST_ENTERA;
						}
                }
{CONST_REAL}    {
                        printf("\nConstante real:" %s\n, yytext);
                        float num = atoi(strdup(yytext));
						if (num < -2147483648 && num > 2147483647) {
							printf("Valor numerico menor a -2147483648 o mayor a 2147483647\n");
							errorLexico();
						} else {
                            printf("\nPalabra reservada: %s\n", yytext);
                            yylval.strVal = strdup(yytext);
					 		return CONST_FLOAT;
						}

                }
{CONST_STRING}  {
                    printf("\nConstante string:" %s\n, yytext);
                    if(strlen(yytext)<=30)
                    {
                        printf("\nPalabra reservada: %s\n", yytext);
                        yylval.strVal = strdup(yytext);
						return CONST_STRING;
                    }
					else
                    {
						printf("Longitud de la cadena mayor a 30\n");
						errorLexico();
                    }
                }
{ID}            {printf("\nPalabra reservada: %s\n", yytext); return ID;}
{COMENTARIO}    
{DISPLAY}       {printf("\nPalabra reservada: %s\n", yytext); return DISPLAY;}
{GET}           {printf("\nPalabra reservada: %s\n", yytext); return GET;}
{OP_COMP}       {printf("\nPalabra reservada: %s\n", yytext); return OP_COMP;}
{OP_MAYORIGUAL} {printf("\nPalabra reservada: %s\n", yytext); return OP_MAYORIGUAL;}
{OP_MAYOR}      {printf("\nPalabra reservada: %s\n", yytext); return OP_MAYOR;}
{OP_MENOR}      {printf("\nPalabra reservada: %s\n", yytext); return OP_MENOR;}
{OP_MENORIGUAL} {printf("\nPalabra reservada: %s\n", yytext); return OP_MENORIGUAL;}
{OP_DISTINTO}	{printf("\nPalabra reservada: %s\n", yytext); return OP_DISTINTO;}
{OR}            {printf("\nPalabra reservada: %s\n", yytext); return OR;}
{AND}           {printf("\nPalabra reservada: %s\n", yytext); return AND;}
{NOT}           {printf("\nPalabra reservada: %s\n", yytext); return NOT;}
{OP_DIVISION}   {printf("\nPalabra reservada: %s\n", yytext); return OP_DIVISION;}
{OP_SUMA}       {printf("\nPalabra reservada: %s\n", yytext); return OP_SUMA;}
{OP_MULT}       {printf("\nPalabra reservada: %s\n", yytext); return OP_MULT;}
{OP_RESTA}      {printf("\nPalabra reservada: %s\n", yytext); return OP_RESTA;}
{PARENTESIS_A}  {printf("\nPalabra reservada: %s\n", yytext); return PARENTESIS_A;}    
{PARENTESIS_C}  {printf("\nPalabra reservada: %s\n", yytext); return PARENTESIS_C;}    
{CORCHETE_A}    {printf("\nPalabra reservada: %s\n", yytext); return CORCHETE_A;}  
{CORCHETE_C}    {printf("\nPalabra reservada: %s\n", yytext); return CORCHETE_C;}  
{DIM}           {printf("\nPalabra reservada: %s\n", yytext); return DIM;}  
{AS}            {printf("\nPalabra reservada: %s\n", yytext); return AS;}  
{TYPE_INTEGER}  {printf("\nPalabra reservada: %s\n", yytext); return TYPE_INTEGER;}  
{TYPE_FLOAT}    {printf("\nPalabra reservada: %s\n", yytext); return TYPE_FLOAT;}  
{TYPE_CONST}    {printf("\nPalabra reservada: %s\n", yytext); return TYPE_CONST;}
{FOR}           {printf("\nPalabra reservada: %s\n", yytext); return FOR;}
{TO}            {printf("\nPalabra reservada: %s\n", yytext); return TO;}
{NEXT}          {printf("\nPalabra reservada: %s\n", yytext); return NEXT;}
{EQUMAX}        {printf("\nPalabra reservada: %s\n", yytext); return EQUMAX;}
{EQUMIN}        {printf("\nPalabra reservada: %s\n", yytext); return EQUMIN;}
{PUNTO_COMA}    {printf("\nPalabra reservada: %s\n", yytext); return PUNTO_COMA;}
{COMA}          {printf("\nPalabra reservada: %s\n", yytext); return COMA;}
"\n"
"\t"
" "
.				{printf("FLEX - No se encontro token\n"); errorLexico();}
%%

int errorLex(void)
{
    printf("Error de lexico\n");
    system("Pause");
    exit(1);
}

int yyerror(void)
{
    printf("Error de sintasix\n");
    system("Pause");
    exit(1);
}