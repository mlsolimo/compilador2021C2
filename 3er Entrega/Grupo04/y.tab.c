
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Sintactico.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
#include "Funciones.h"


extern int yylex();
extern void yyerror();
extern char* yytext;
extern int yylineno;

void generarAssembler(t_arbol* pArbol);

extern FILE* yyin;

void reiniciarPunteros();

tLista listaSimbolos;
tLista listaAux;
t_cola cola;
t_pila pilaSint;

FILE *pIntermedia;
FILE *pArbol;
FILE *pAssembler;
FILE *pCode;
FILE *graph;

char str_cuerpo[50];
char str_sentencias[50];
char str_elementos[50];

t_NodoArbol* Ptr;
t_NodoArbol* Sptr;
t_NodoArbol* Gptr;
t_NodoArbol* Aptr;
t_NodoArbol* Eptr;
t_NodoArbol* Tptr;
t_NodoArbol* Fptr;
t_NodoArbol* Cptr; //Puntero constantes string
t_NodoArbol* Condptr;
t_NodoArbol* Condptraux;
t_NodoArbol* Ifptr;
t_NodoArbol* Whileptr;
t_NodoArbol* Cuerpoptr;
t_NodoArbol* CuerpoWhileptr;
t_NodoArbol* Trueptr;
t_NodoArbol* Falseptr;
t_NodoArbol* Dptr;
t_NodoArbol* Getptr;
//t_NodoArbol* Auxptr;
t_NodoArbol* Lptr;
t_NodoArbol* Emaxptr;
t_NodoArbol* Eminptr;
t_NodoArbol* Equmax;
t_NodoArbol* Equaux;
t_NodoArbol* Equaux2;
t_NodoArbol* Nodocond;
t_NodoArbol* Nodocond2;
t_NodoArbol* Nodocuerpo;
t_NodoArbol* Nodocuerpo2;
t_NodoArbol* Nodoif;
t_NodoArbol* Nodoif2;
t_NodoArbol* Equmin;
t_NodoArbol* Nodoaux;
t_NodoArbol* Nodoaux2;
t_NodoArbol* Nodomin;
t_NodoArbol* Nodomax;
t_NodoArbol* SptrCuerpo;

// Equmax y Equmin //
int min;
int aux;
int max;

int isEqumax;
int isEqumin;


int esIf=0;
int isAnd=0;
int isOr=0;
int contElementos = 0;

int isWhile=0;
int contCuerpo=0;
int contSentencias=0;


/* Line 189 of yacc.c  */
#line 165 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 92 "Sintactico.y"

    /* Aca dentro se definen los campos de la variable yylval */
	char* strVal; 



/* Line 214 of yacc.c  */
#line 328 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 340 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  174

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    61,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    14,    17,    19,    21,
      24,    28,    31,    34,    36,    38,    40,    42,    44,    46,
      48,    52,    56,    62,    68,    69,    70,    82,    83,    90,
      91,    98,   101,   104,   107,   109,   111,   113,   119,   120,
     127,   128,   135,   139,   142,   146,   150,   154,   158,   162,
     166,   170,   174,   178,   182,   186,   190,   192,   196,   200,
     204,   208,   211,   213,   214,   228,   229,   240,   241,   251,
     252,   262,   264,   268,   272,   274,   276,   281,   287,   293,
     295,   297,   299
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    64,    -1,    65,    -1,    65,    67,    60,
      -1,    67,    60,    -1,    65,    67,    -1,    67,    -1,    94,
      -1,    65,    94,    -1,    66,    67,    60,    -1,    67,    60,
      -1,    66,    67,    -1,    67,    -1,    68,    -1,    69,    -1,
      75,    -1,    76,    -1,    85,    -1,    70,    -1,    35,    43,
      83,    -1,    35,    43,    77,    -1,     3,    79,    54,    66,
      53,    -1,    32,    79,    54,    66,    53,    -1,    -1,    -1,
      32,    79,    54,    66,    53,    71,    31,    54,    66,    53,
      72,    -1,    -1,    32,    90,    54,    66,    73,    53,    -1,
      -1,    32,    88,    54,    66,    74,    53,    -1,     5,    77,
      -1,     5,    83,    -1,     6,    35,    -1,    30,    -1,    27,
      -1,    28,    -1,    56,    79,    51,    79,    55,    -1,    -1,
      56,    82,    51,    80,    82,    55,    -1,    -1,    56,    82,
      50,    81,    82,    55,    -1,    56,    82,    55,    -1,    52,
      79,    -1,    56,    79,    55,    -1,    83,    44,    84,    -1,
      83,    45,    84,    -1,    83,    47,    84,    -1,    83,    46,
      84,    -1,    83,    48,    84,    -1,    83,    49,    84,    -1,
      83,    50,    84,    -1,    83,    51,    84,    -1,    83,    52,
      84,    -1,    83,    37,    84,    -1,    83,    36,    84,    -1,
      84,    -1,    84,    40,    93,    -1,    84,    39,    93,    -1,
      84,    42,    93,    -1,    84,    38,    93,    -1,    61,    84,
      -1,    93,    -1,    -1,    17,    35,    43,    83,    19,    83,
      57,    27,    58,    86,    65,    18,    35,    -1,    -1,    17,
      35,    43,    83,    19,    83,    87,    65,    18,    35,    -1,
      -1,    13,    56,    83,    89,    60,    57,    92,    58,    55,
      -1,    -1,    14,    56,    83,    91,    60,    57,    92,    58,
      55,    -1,    83,    -1,    92,    59,    83,    -1,    56,    83,
      55,    -1,    78,    -1,    35,    -1,    34,    57,    95,    58,
      -1,    35,    59,    95,    59,    96,    -1,    35,    58,    15,
      57,    96,    -1,     8,    -1,     9,    -1,    16,    -1,    10,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   178,   178,   180,   183,   196,   199,   212,   215,   216,
     221,   225,   228,   235,   240,   241,   242,   243,   244,   245,
     250,   251,   255,   260,   266,   266,   266,   267,   267,   268,
     268,   272,   273,   277,   282,   288,   292,   300,   301,   301,
     302,   302,   303,   304,   305,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   319,   320,   321,   324,   325,   326,
     327,   328,   329,   333,   333,   336,   336,   341,   341,   351,
     351,   360,   363,   386,   387,   388,   395,   410,   411,   415,
     416,   417,   418
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHILE_T", "ENDWHILE", "DISPLAY", "GET",
  "READ_T", "FLOAT_T", "INT_T", "CHAR", "IN_T", "DO_T", "EQUMAX", "EQUMIN",
  "AS", "STRING", "FOR", "NEXT", "TO", "whitespace", "linefeed", "DIGITO",
  "LETRA", "COMILLA_D", "COMILLA_A", "COMILLA_C", "CONST_INT",
  "CONST_FLOAT", "OP_AVG", "CONST_STRING", "ELSE_T", "IF_T", "ENDIF",
  "DIM", "ID_T", "OP_MENOS", "OP_SUM", "OP_DIV", "OP_DIVISION", "OP_MUL",
  "MENOS_UNARIO", "OP_MOD", "OP_ASIG", "OP_DISTINTO", "OP_IGUAL",
  "OP_MAYORIGUAL", "OP_MAYOR", "OP_MENOR", "OP_MENORIGUAL", "OR_T",
  "AND_T", "NOT_T", "LLAVE_C", "LLAVE_A", "PARENT_C", "PARENT_A",
  "CORCH_A", "CORCH_C", "COMA", "SEP_LINEA", "'-'", "$accept",
  "programa_final", "programa", "sentencia", "sentenciaCuerpo", "grammar",
  "asig", "while", "if", "$@1", "$@2", "$@3", "$@4", "display", "get",
  "const_string_r", "numero", "cond_final", "$@5", "$@6", "cond", "expr",
  "termino", "for", "$@7", "$@8", "equmax", "$@9", "equmin", "$@10",
  "lista", "factor", "declaracion", "dupla_asig", "tipo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      68,    68,    69,    70,    71,    72,    70,    73,    70,    74,
      70,    75,    75,    76,    77,    78,    78,    79,    80,    79,
      81,    79,    79,    79,    79,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    84,    84,    84,
      84,    84,    84,    86,    85,    87,    85,    89,    88,    91,
      90,    92,    92,    93,    93,    93,    94,    95,    95,    96,
      96,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     2,     1,     1,     2,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     5,     5,     0,     0,    11,     0,     6,     0,
       6,     2,     2,     2,     1,     1,     1,     5,     0,     6,
       0,     6,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     2,     1,     0,    13,     0,    10,     0,     9,     0,
       9,     1,     3,     3,     1,     1,     4,     5,     5,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     7,    14,    15,    19,    16,    17,    18,     8,     0,
       0,     0,    35,    36,    34,    75,     0,     0,    31,    74,
      32,    56,    62,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     6,     9,     5,    43,     0,     0,     0,
       0,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    20,
       4,     0,     0,    44,    40,    38,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    73,    55,
      54,    60,    58,    57,    59,     0,    67,    69,     0,    29,
      27,     0,     0,    76,     0,     0,     0,    45,    46,    48,
      47,    49,    50,    51,    52,    53,    22,    12,    11,     0,
       0,     0,    23,     0,     0,     0,     0,    37,     0,     0,
      10,    65,     0,     0,     0,    30,    28,     0,     0,    41,
      39,     0,     0,     0,     0,     0,    79,    80,    82,    81,
      78,    77,     0,     0,    71,     0,     0,     0,    63,     0,
       0,     0,     0,     0,     0,    66,    68,    72,    70,    25,
       0,    26,     0,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    86,    87,    12,    13,    14,   134,
     171,   124,   123,    15,    16,    28,    29,    48,   106,   105,
      49,    50,    31,    17,   164,   142,    38,   120,    39,   121,
     155,    32,    18,    67,   150
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
      98,   -34,    46,    -1,    33,    23,   -44,    -4,    70,  -127,
      98,    17,  -127,  -127,  -127,  -127,  -127,  -127,  -127,   -34,
      56,    26,  -127,  -127,  -127,  -127,    60,    60,  -127,  -127,
      57,   170,  -127,  -127,    39,    36,    41,    55,    68,    72,
      89,    46,  -127,    54,  -127,  -127,  -127,    56,    34,    -3,
     155,     9,    74,   101,    60,    60,    78,    78,    78,    78,
      60,    60,    60,     9,     9,     9,   -31,    73,  -127,    57,
    -127,   138,   -34,  -127,  -127,  -127,  -127,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    14,    81,  -127,   170,
     170,  -127,  -127,  -127,  -127,    99,    57,    57,    18,     9,
       9,   134,    89,  -127,   100,    60,    60,   170,   170,   170,
     170,   170,   170,   170,   170,   170,  -127,   102,  -127,    60,
     107,   111,   128,   119,   141,   103,   114,  -127,   156,   158,
    -127,   -28,   139,   157,   184,  -127,  -127,   142,   142,  -127,
    -127,   189,    98,    60,    60,   164,  -127,  -127,  -127,  -127,
    -127,  -127,   159,   122,    57,    61,    79,     9,  -127,   185,
     166,    60,   167,    37,    98,  -127,  -127,    57,  -127,  -127,
     163,  -127,   188,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,  -126,   -61,     0,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,   178,  -127,     6,  -127,  -127,
      40,     4,   -22,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
      80,   120,    -9,   123,    88
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -25
static const yytype_int16 yytable[] =
{
      11,    44,    98,    99,   100,    53,    30,    21,    54,    55,
      43,    37,     1,    40,     2,     3,   153,     1,    19,     2,
       3,     1,    20,     2,     3,    46,     4,   101,   102,   141,
      52,     4,    89,    90,    33,     4,    35,    36,   170,    41,
       1,     5,     2,     3,     7,    69,     5,    74,    75,     7,
       5,    71,    76,     7,     4,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    95,    96,    97,   116,    34,     5,
      42,   122,     7,    22,    23,    19,    24,    45,   104,    20,
      51,    25,    60,    22,    23,    72,   117,    22,    23,    73,
     169,    25,    61,    54,    55,    25,   163,    62,   117,   117,
     117,     1,    26,     2,     3,    22,    23,    27,    19,    63,
      54,    55,    47,    25,    70,     4,    26,    27,   119,   160,
     161,    27,    64,   131,    66,     1,    65,     2,     3,    88,
       5,   103,     6,     7,    26,    54,    55,   162,   161,     4,
     159,   118,    11,    59,    44,   128,   129,   154,   154,   125,
     146,   147,   148,    43,     5,   127,     6,     7,   149,   -24,
     137,    44,   130,   117,    11,   167,     1,   132,     2,     3,
      43,   133,   135,   138,    54,    55,    91,    92,    93,    94,
       4,   172,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    54,    55,    88,   136,     5,   143,     6,     7,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    56,    57,
      58,   139,    59,   140,   144,   145,   152,   158,   157,    68,
     165,   166,   168,   173,   156,   126,   151
};

static const yytype_uint8 yycheck[] =
{
       0,    10,    63,    64,    65,    27,     2,     1,    36,    37,
      10,     5,     3,    57,     5,     6,   142,     3,    52,     5,
       6,     3,    56,     5,     6,    19,    17,    58,    59,    57,
      26,    17,    54,    55,    35,    17,    13,    14,   164,    43,
       3,    32,     5,     6,    35,    41,    32,    50,    51,    35,
      32,    47,    55,    35,    17,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    60,    61,    62,    53,    35,    32,
       0,    53,    35,    27,    28,    52,    30,    60,    72,    56,
      54,    35,    43,    27,    28,    51,    86,    27,    28,    55,
      53,    35,    56,    36,    37,    35,   157,    56,    98,    99,
     100,     3,    56,     5,     6,    27,    28,    61,    52,    54,
      36,    37,    56,    35,    60,    17,    56,    61,    19,    58,
      59,    61,    54,   119,    35,     3,    54,     5,     6,    55,
      32,    58,    34,    35,    56,    36,    37,    58,    59,    17,
      18,    60,   142,    42,   153,   105,   106,   143,   144,    15,
       8,     9,    10,   153,    32,    55,    34,    35,    16,    31,
      57,   170,    60,   163,   164,   161,     3,    60,     5,     6,
     170,    60,    53,    59,    36,    37,    56,    57,    58,    59,
      17,    18,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    36,    37,    55,    53,    32,    57,    34,    35,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    38,    39,
      40,    55,    42,    55,    57,    31,    27,    58,    54,    41,
      35,    55,    55,    35,   144,   102,   138
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,    17,    32,    34,    35,    63,    64,
      65,    67,    68,    69,    70,    75,    76,    85,    94,    52,
      56,    79,    27,    28,    30,    35,    56,    61,    77,    78,
      83,    84,    93,    35,    35,    13,    14,    79,    88,    90,
      57,    43,     0,    67,    94,    60,    79,    56,    79,    82,
      83,    54,    83,    84,    36,    37,    38,    39,    40,    42,
      43,    56,    56,    54,    54,    54,    35,    95,    77,    83,
      60,    83,    51,    55,    50,    51,    55,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    66,    67,    55,    84,
      84,    93,    93,    93,    93,    83,    83,    83,    66,    66,
      66,    58,    59,    58,    79,    81,    80,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    53,    67,    60,    19,
      89,    91,    53,    74,    73,    15,    95,    55,    82,    82,
      60,    83,    60,    60,    71,    53,    53,    57,    59,    55,
      55,    57,    87,    57,    57,    31,     8,     9,    10,    16,
      96,    96,    27,    65,    83,    92,    92,    54,    58,    18,
      58,    59,    58,    66,    86,    35,    55,    83,    55,    53,
      65,    72,    18,    35
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 178 "Sintactico.y"
    { printf("Empieza Assembler \n"); /*tree_print_dot(&Ptr,graph);*/ InOrden(&Ptr, pIntermedia); generarAssembler(&Ptr);  printf("Termina assembler \n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 180 "Sintactico.y"
    {Ptr=Sptr;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 183 "Sintactico.y"
    { 
													if(Sptr == NULL)
													{
														Sptr=Gptr;
													}
													else
													{
														sprintf(str_sentencias,"Sentencia%d",++contSentencias);
														Sptr=crearNodo(str_sentencias,Sptr,Gptr);}
													;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 196 "Sintactico.y"
    {
													Sptr=Gptr; 
													}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 199 "Sintactico.y"
    { 

													if(Sptr == NULL)
													{
														Sptr=Gptr;
													}
													else
													{
														sprintf(str_sentencias,"Sentencia%d",++contSentencias);
														Sptr=crearNodo(str_sentencias,Sptr,Gptr);}
													
												;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 212 "Sintactico.y"
    {
													Sptr=Gptr;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 215 "Sintactico.y"
    {printf("Regla - Declaracion de variable\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 216 "Sintactico.y"
    {/*sprintf(str_sentencias,"Sentencia%d",++contSentencias);
													Sptr=crearNodo(str_sentencias,Sptr,Gptr);*/}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 221 "Sintactico.y"
    { 
													sprintf(str_cuerpo,"SentenciaCuerpo%d",++contCuerpo);
													SptrCuerpo=crearNodo(str_cuerpo,SptrCuerpo,Gptr);
														}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 225 "Sintactico.y"
    {
													SptrCuerpo=Gptr; 
													}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 228 "Sintactico.y"
    { 
													sprintf(str_cuerpo,"SentenciaCuerpo%d",++contCuerpo);
													SptrCuerpo=crearNodo(str_cuerpo,SptrCuerpo,Gptr);
													
												
															
												;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 235 "Sintactico.y"
    {SptrCuerpo=Gptr; }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 240 "Sintactico.y"
    {printf("Regla - Asignacion\n"); Gptr=Aptr;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 241 "Sintactico.y"
    {printf("Regla - While \n"); Gptr=Whileptr;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 242 "Sintactico.y"
    {printf("Regla - Display\n"); Gptr=crearNodo("DISPLAY",Dptr,NULL); /*InOrden(&Gptr, pIntermedia); fprintf(pIntermedia, "\n"*/;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 243 "Sintactico.y"
    {printf("Regla - Get\n");Gptr=crearNodo("GET",Getptr,NULL); /*InOrden(&Gptr, pIntermedia); fprintf(pIntermedia, "\n")*/;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 244 "Sintactico.y"
    {printf("Regla - For \n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 245 "Sintactico.y"
    {printf("Regla - IF \n"); Gptr=Ifptr;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 250 "Sintactico.y"
    {Aptr=crearNodo(":=",crearHoja((yyvsp[(1) - (3)].strVal)),Eptr); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 251 "Sintactico.y"
    {Aptr=crearNodo(":=",crearHoja((yyvsp[(1) - (3)].strVal)),Cptr);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 255 "Sintactico.y"
    { 
																	Whileptr=crearNodo("WHILE",Condptr,SptrCuerpo);
																	}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 260 "Sintactico.y"
    {if(isAnd==1){ 
                                                         Ifptr=crearNodo("IF",Condptraux,crearNodo("IF",Condptr,SptrCuerpo));   
													    }else if (isOr==1){
														  Ifptr=crearNodo("IF", Condptr, SptrCuerpo);
														  Ifptr=crearNodo("IF",Condptraux,crearNodo("CUERPO",SptrCuerpo,Ifptr));
														}else Ifptr=crearNodo("IF",Condptr,SptrCuerpo);}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 266 "Sintactico.y"
    {Trueptr=Gptr;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 266 "Sintactico.y"
    {Falseptr=Gptr;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 266 "Sintactico.y"
    {printf("Else\n"); Cuerpoptr=crearNodo("CUERPO",Trueptr,Falseptr); Ifptr=crearNodo("IF",Condptr,Cuerpoptr);  esIf=0;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 267 "Sintactico.y"
    {(Nodoif)->der=SptrCuerpo;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 267 "Sintactico.y"
    {printf("Regla Equmin\n");Ifptr=Equmin ; /*InOrden(&Equmin, pIntermedia); fprintf(pIntermedia, "\n");*/}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 268 "Sintactico.y"
    {(Nodoif2)->der=SptrCuerpo;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 268 "Sintactico.y"
    {printf("Regla Equmax\n");Ifptr=Equmax ;/*InOrden(&Equmax, pIntermedia); fprintf(pIntermedia, "\n");*/}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 272 "Sintactico.y"
    {Dptr=Cptr; printf("Regla - Sentencia de display con constante string\n");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 273 "Sintactico.y"
    {Dptr=Eptr; printf("Regla - Sentencia de display con expresion\n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 277 "Sintactico.y"
    {Getptr = crearHoja((yyvsp[(2) - (2)].strVal)); printf("Regla - Sentencia de Get con variable\n");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 282 "Sintactico.y"
    {
			insertarString(&listaSimbolos, (yyvsp[(1) - (1)].strVal));
			Cptr = crearHoja((yyvsp[(1) - (1)].strVal));
	}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 289 "Sintactico.y"
    {
			insertarInt(&listaSimbolos, (yyvsp[(1) - (1)].strVal)) ; Fptr = crearHoja((yyvsp[(1) - (1)].strVal));
		}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 293 "Sintactico.y"
    {
			insertarFloat(&listaSimbolos, (yyvsp[(1) - (1)].strVal)); Fptr = crearHoja((yyvsp[(1) - (1)].strVal));
		}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 301 "Sintactico.y"
    { Condptraux=Condptr;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 301 "Sintactico.y"
    {isAnd=1;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 302 "Sintactico.y"
    { Condptraux=Condptr;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 302 "Sintactico.y"
    {isOr=1;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 308 "Sintactico.y"
    {Condptr=crearNodo("!=",Eptr,Tptr);}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 309 "Sintactico.y"
    {Condptr=crearNodo("==",Eptr,Tptr);}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 310 "Sintactico.y"
    {Condptr=crearNodo(">",Eptr,Tptr);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 311 "Sintactico.y"
    {Condptr=crearNodo(">=",Eptr,Tptr);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 312 "Sintactico.y"
    {Condptr=crearNodo("<",Eptr,Tptr);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 313 "Sintactico.y"
    {Condptr=crearNodo("<=",Eptr,Tptr);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 314 "Sintactico.y"
    {Condptr=crearNodo("||",Eptr,Tptr);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 315 "Sintactico.y"
    {Condptr=crearNodo("&&",Eptr,Tptr);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 316 "Sintactico.y"
    {Condptr=crearNodo("!",Eptr,Tptr);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 319 "Sintactico.y"
    {Eptr=crearNodo("+",Eptr,Tptr);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 320 "Sintactico.y"
    {Eptr=crearNodo("-",Eptr,Tptr);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 321 "Sintactico.y"
    {Eptr=Tptr;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 324 "Sintactico.y"
    {Tptr=crearNodo("*",Tptr,Fptr);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 325 "Sintactico.y"
    {Tptr=crearNodo("/",Tptr,Fptr);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 326 "Sintactico.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 327 "Sintactico.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 328 "Sintactico.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 329 "Sintactico.y"
    {Tptr=Fptr;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 333 "Sintactico.y"
    {printf("Regla - Sentencia de FOR con valor en corchete\n");}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 336 "Sintactico.y"
    {printf("Regla - Sentencia de FOR sin valor en corchete\n");}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 341 "Sintactico.y"
    {isEqumax = 1; Equmax=crearNodo(":=",crearHoja("@emax"),Eptr); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 341 "Sintactico.y"
    {isEqumin = 0;
																									Equaux2=crearNodo("EQUAUX",Equmax,Nodomax);
																									Nodocond2=crearNodo("==",crearHoja("@emax"),crearHoja("@max"));
																								
																									Nodoif2=crearNodo("IF",Nodocond2,NULL);
																									Equmax=crearNodo("EQUMAX",Equaux2,Nodoif2);
																									printf("Regla - Sentencia de EQUMAX\n");
																									}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 351 "Sintactico.y"
    {isEqumin = 1; Equmin=crearNodo(":=",crearHoja("@emin"),Eptr); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 351 "Sintactico.y"
    {isEqumax = 0;																									
																									Equaux=crearNodo("EQUAUX",Equmin,Nodomin);
																									Nodocond=crearNodo("==",crearHoja("@emin"),crearHoja("@min"));
																									Nodoif=crearNodo("IF",Nodocond,NULL);
																									Equmin=crearNodo("EQUMIN",Equaux,Nodoif);
																									printf("Regla - Sentencia de EQUMIN\n");
																									}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 360 "Sintactico.y"
    {
											if(isEqumin) Nodomin=crearNodo(":=",crearHoja("@min"),Eptr);
											else if(isEqumax) Nodomax=crearNodo(":=",crearHoja("@max"),Eptr);}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 363 "Sintactico.y"
    {
		   									if(isEqumin)
	   											{
													  //Lptr=crearNodo("IF",crearNodo("<",Eptr,Lptr),crearNodo(":=",crearHoja("@min"),Eptr));
													  Lptr=crearNodo(":=",crearHoja("@aux"),Eptr);
													  Nodocond=crearNodo("<",crearHoja("@aux"),crearHoja("@min"));
													  Nodoif=crearNodo("IF",Nodocond,crearNodo(":=",crearHoja("@min"),crearHoja("@aux")));
													  Nodoaux=crearNodo("NODOAUX",Lptr,Nodoif);
													  Nodomin=crearNodo("MIN",Nodomin,Nodoaux);
												}
													   
											else if(isEqumax)
												{
												      Lptr=crearNodo(":=",crearHoja("@aux"),Eptr);
													  Nodocond2=crearNodo(">",crearHoja("@aux"),crearHoja("@max"));
													  Nodoif2=crearNodo("IF",Nodocond2,crearNodo(":=",crearHoja("@max"),crearHoja("@aux")));
													  Nodoaux2=crearNodo("NODOAUX",Lptr,Nodoif2);
													  Nodomax=crearNodo("MAX",Nodomax,Nodoaux2);
												}
											}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 386 "Sintactico.y"
    {;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 387 "Sintactico.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 388 "Sintactico.y"
    {Fptr = crearHoja((yyvsp[(1) - (1)].strVal)); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 395 "Sintactico.y"
    {    
													    char id[100];
													    char auxString[100];
													    char tipoVar[20];
													    while(!pila_vacia(&pilaSint) || !cola_vacia(&cola) )
														{
													        desapilar(&pilaSint, id);
													        desacolar(&cola, tipoVar);
													        insertarID(&listaSimbolos,id,tipoVar);
													    
													    }
													}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 410 "Sintactico.y"
    {apilar(&pilaSint, (yyvsp[(1) - (5)].strVal));}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 411 "Sintactico.y"
    {apilar(&pilaSint, (yyvsp[(1) - (5)].strVal));}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 415 "Sintactico.y"
    {acolar(&cola, "Float");}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 416 "Sintactico.y"
    {acolar(&cola, "Int");}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 417 "Sintactico.y"
    {acolar(&cola, "String");}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 418 "Sintactico.y"
    {acolar(&cola, "Char");}
    break;



/* Line 1455 of yacc.c  */
#line 2324 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 422 "Sintactico.y"



int main(int argc, char* argv[])
{

	if((pIntermedia = fopen("Intermedia.txt", "wt")) == NULL)
	{
        printf("\nNo se puede abrir el archivo %s\n", "Intermedia.txt");
    }

    if((yyin = fopen(argv[1],"rt")) == NULL)
    {
        printf("\nNo se puede abrir el archivo %s\n", argv[1]);
    }

	printf("\n Compilando... \n\n");

    crearLista(&listaSimbolos);
	crearLista(&listaAux);
	crear_pila(&pilaSint);
	crear_cola(&cola);
	
    yyparse();

	eliminarTabla(&listaSimbolos);

    printf("\n Compilacion exitosa \n");
	reiniciarPunteros();
	
    fclose(yyin);
	fclose(pIntermedia);
    
    return 0;
}

void generarAssembler(t_arbol* pArbol)
{
	char Linea[300];

	pCode = fopen("Code.asm", "wt");

	pAssembler = fopen("Final.asm", "wt");

	if(!pAssembler) {
		printf("No se pudo abrir Final.asm\n\n");
	}

	printf("Direccion de pArbol: %x\n", pArbol);

	while(recorrerArbol(pArbol,pCode, &listaAux) != pArbol){
		printf("recorrearArbol generar assembler: %s\n", (*pArbol)->info);
	}
 
	fclose(pCode);

	pCode = fopen("Code.asm", "rt");

	fprintf(pAssembler, "include macros2.asm\ninclude number.asm\n.MODEL LARGE	; Modelo de Memoria\n.386	        ; Tipo de Procesador\n.STACK 200h		; Bytes en el Stack\n\n.DATA \n\n");

	grabarListaEnAssembler(&listaSimbolos, pAssembler);

	grabarListaEnAssembler(&listaAux, pAssembler);

	fprintf(pAssembler, "\n\n.CODE\n\nmov AX,@DATA    ; Se inicializa el segmento de datos\nmov DS,AX\nmov es,ax ;\n\n");

	while(fgets(Linea, sizeof(Linea), pCode))
	{
		fprintf(pAssembler, Linea);
	}

	fprintf(pAssembler, "\n\n\nmov ax,4c00h	; Se indica fin de ejecucion\nint 21h\n\nEnd");

	fclose(pCode);

	remove("Code.asm");

	fclose(pAssembler);
}


void reiniciarPunteros(){
Sptr = NULL;
Gptr = NULL;
Aptr = NULL;
Eptr = NULL;
Tptr = NULL;
Fptr = NULL;
Condptr = NULL;
Ifptr = NULL;
Whileptr = NULL;
Cuerpoptr = NULL;
CuerpoWhileptr = NULL;
Trueptr = NULL;
Falseptr = NULL;
 Lptr = NULL;
 Emaxptr = NULL;
 Eminptr = NULL;
 Equmax = NULL;
 Equaux = NULL;
 Equaux2 = NULL;
 Nodocond = NULL;
 Nodocond2 = NULL;
 Nodocuerpo = NULL;
 Nodocuerpo2 = NULL;
 Nodoif = NULL;
 Nodoif2 = NULL;
 Equmin = NULL;
 Nodoaux = NULL;
  Nodoaux2 = NULL;
 Nodomin = NULL;
 Nodomax = NULL;

																						
}
