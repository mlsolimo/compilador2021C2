
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     WHILE_T = 258,
     ENDWHILE = 259,
     DISPLAY = 260,
     GET = 261,
     READ_T = 262,
     FLOAT_T = 263,
     INT_T = 264,
     CHAR = 265,
     IN_T = 266,
     DO_T = 267,
     EQUMAX = 268,
     EQUMIN = 269,
     AS = 270,
     STRING = 271,
     FOR = 272,
     NEXT = 273,
     TO = 274,
     whitespace = 275,
     linefeed = 276,
     DIGITO = 277,
     LETRA = 278,
     COMILLA_D = 279,
     COMILLA_A = 280,
     COMILLA_C = 281,
     CONST_INT = 282,
     CONST_FLOAT = 283,
     OP_AVG = 284,
     CONST_STRING = 285,
     ELSE_T = 286,
     IF_T = 287,
     ENDIF = 288,
     DIM = 289,
     ID_T = 290,
     OP_MENOS = 291,
     OP_SUM = 292,
     OP_DIV = 293,
     OP_DIVISION = 294,
     OP_MUL = 295,
     MENOS_UNARIO = 296,
     OP_MOD = 297,
     OP_ASIG = 298,
     OP_DISTINTO = 299,
     OP_IGUAL = 300,
     OP_MAYORIGUAL = 301,
     OP_MAYOR = 302,
     OP_MENOR = 303,
     OP_MENORIGUAL = 304,
     OR_T = 305,
     AND_T = 306,
     NOT_T = 307,
     LLAVE_C = 308,
     LLAVE_A = 309,
     PARENT_C = 310,
     PARENT_A = 311,
     CORCH_A = 312,
     CORCH_C = 313,
     COMA = 314,
     SEP_LINEA = 315
   };
#endif
/* Tokens.  */
#define WHILE_T 258
#define ENDWHILE 259
#define DISPLAY 260
#define GET 261
#define READ_T 262
#define FLOAT_T 263
#define INT_T 264
#define CHAR 265
#define IN_T 266
#define DO_T 267
#define EQUMAX 268
#define EQUMIN 269
#define AS 270
#define STRING 271
#define FOR 272
#define NEXT 273
#define TO 274
#define whitespace 275
#define linefeed 276
#define DIGITO 277
#define LETRA 278
#define COMILLA_D 279
#define COMILLA_A 280
#define COMILLA_C 281
#define CONST_INT 282
#define CONST_FLOAT 283
#define OP_AVG 284
#define CONST_STRING 285
#define ELSE_T 286
#define IF_T 287
#define ENDIF 288
#define DIM 289
#define ID_T 290
#define OP_MENOS 291
#define OP_SUM 292
#define OP_DIV 293
#define OP_DIVISION 294
#define OP_MUL 295
#define MENOS_UNARIO 296
#define OP_MOD 297
#define OP_ASIG 298
#define OP_DISTINTO 299
#define OP_IGUAL 300
#define OP_MAYORIGUAL 301
#define OP_MAYOR 302
#define OP_MENOR 303
#define OP_MENORIGUAL 304
#define OR_T 305
#define AND_T 306
#define NOT_T 307
#define LLAVE_C 308
#define LLAVE_A 309
#define PARENT_C 310
#define PARENT_A 311
#define CORCH_A 312
#define CORCH_C 313
#define COMA 314
#define SEP_LINEA 315




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 92 "Sintactico.y"

    /* Aca dentro se definen los campos de la variable yylval */
	char* strVal; 



/* Line 1676 of yacc.c  */
#line 179 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


