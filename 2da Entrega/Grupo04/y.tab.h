
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
     WHILE = 259,
     ENDWHILE = 260,
     IF = 261,
     ELSE = 262,
     ENDIF = 263,
     INT = 264,
     REAL = 265,
     STRING = 266,
     GET = 267,
     DISPLAY = 268,
     AS = 269,
     CORCHETE_A = 270,
     CORCHETE_C = 271,
     COMA = 272,
     PUNTO_COMA = 273,
     PARENTESIS_A = 274,
     PARENTESIS_C = 275,
     OP_MENOR = 276,
     OP_MAYOR = 277,
     OP_MEN_IGU = 278,
     OP_MAY_IGU = 279,
     OP_NOT = 280,
     OP_AND = 281,
     OP_OR = 282,
     OP_COMP = 283,
     EQU_MAX = 284,
     EQU_MIN = 285,
     CONST_INT = 286,
     CONST_REAL = 287,
     VARIABLE = 288,
     CONST_STRING = 289,
     COMENTARIO_A = 290,
     COMENTARIO_C = 291,
     COMENTARIO = 292,
     FOR = 293,
     NEXT = 294,
     TO = 295,
     OP_SUMA = 297,
     OP_RESTA = 298,
     OP_DIV = 299,
     OP_MULT = 300,
     MENOS_UNARIO = 301,
     OP_ASIG = 302
   };
#endif
/* Tokens.  */
#define DIM 258
#define WHILE 259
#define ENDWHILE 260
#define IF 261
#define ELSE 262
#define ENDIF 263
#define INT 264
#define REAL 265
#define STRING 266
#define GET 267
#define DISPLAY 268
#define AS 269
#define CORCHETE_A 270
#define CORCHETE_C 271
#define COMA 272
#define PUNTO_COMA 273
#define PARENTESIS_A 274
#define PARENTESIS_C 275
#define OP_MENOR 276
#define OP_MAYOR 277
#define OP_MEN_IGU 278
#define OP_MAY_IGU 279
#define OP_NOT 280
#define OP_AND 281
#define OP_OR 282
#define OP_COMP 283
#define EQU_MAX 284
#define EQU_MIN 285
#define CONST_INT 286
#define CONST_REAL 287
#define VARIABLE 288
#define CONST_STRING 289
#define COMENTARIO_A 290
#define COMENTARIO_C 291
#define COMENTARIO 292
#define FOR 293
#define NEXT 294
#define TO 295
#define OP_SUMA 297
#define OP_RESTA 298
#define OP_DIV 299
#define OP_MULT 300
#define MENOS_UNARIO 301
#define OP_ASIG 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 59 "Sintactico.y"

    char* strVal;



/* Line 1676 of yacc.c  */
#line 150 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


