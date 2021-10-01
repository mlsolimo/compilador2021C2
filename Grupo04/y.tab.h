
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
     DIM = 258,
     AS = 259,
     OP_MENOR = 260,
     OP_MAYOR = 261,
     OP_ASIG = 262,
     OP_SUM = 263,
     OP_DIVISION = 264,
     OP_RESTA = 265,
     OP_MULT = 266,
     OP_COMP = 267,
     OP_MAYORIGUAL = 268,
     OP_MENORIGUAL = 269,
     OP_DISTINTO = 270,
     VARIABLE = 271,
     COMA = 272,
     TYPE_INTEGER = 273,
     TYPE_FLOAT = 274,
     TYPE_STRING = 275,
     DISPLAY = 276,
     CONST_STRING = 277,
     CONST_INT = 278,
     CONST_REAL = 279,
     DIGITO = 280,
     GET = 281,
     WHILE = 282,
     ENDWHILE = 283,
     IF = 284,
     ELSE = 285,
     ENDIF = 286,
     PUNTO_COMA = 287,
     PARENTESIS_A = 288,
     PARENTESIS_C = 289,
     CORCHETE_A = 290,
     CORCHETE_C = 291,
     FOR = 292,
     TO = 293,
     NEXT = 294,
     EQUMIN = 295,
     EQUMAX = 296,
     AND = 297,
     OR = 298,
     NOT = 299,
     OP_SUMA = 300,
     OP_DIVISIONISION = 301
   };
#endif
/* Tokens.  */
#define DIM 258
#define AS 259
#define OP_MENOR 260
#define OP_MAYOR 261
#define OP_ASIG 262
#define OP_SUM 263
#define OP_DIVISION 264
#define OP_RESTA 265
#define OP_MULT 266
#define OP_COMP 267
#define OP_MAYORIGUAL 268
#define OP_MENORIGUAL 269
#define OP_DISTINTO 270
#define VARIABLE 271
#define COMA 272
#define TYPE_INTEGER 273
#define TYPE_FLOAT 274
#define TYPE_STRING 275
#define DISPLAY 276
#define CONST_STRING 277
#define CONST_INT 278
#define CONST_REAL 279
#define DIGITO 280
#define GET 281
#define WHILE 282
#define ENDWHILE 283
#define IF 284
#define ELSE 285
#define ENDIF 286
#define PUNTO_COMA 287
#define PARENTESIS_A 288
#define PARENTESIS_C 289
#define CORCHETE_A 290
#define CORCHETE_C 291
#define FOR 292
#define TO 293
#define NEXT 294
#define EQUMIN 295
#define EQUMAX 296
#define AND 297
#define OR 298
#define NOT 299
#define OP_SUMA 300
#define OP_DIVISIONISION 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 18 "Sintactico.y"

    char* strVal;



/* Line 1676 of yacc.c  */
#line 150 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


