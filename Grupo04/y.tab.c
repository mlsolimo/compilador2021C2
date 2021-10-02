
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


/* Line 189 of yacc.c  */
#line 91 "y.tab.c"

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

/* Line 214 of yacc.c  */
#line 18 "Sintactico.y"

    char* strVal;



/* Line 214 of yacc.c  */
#line 225 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 237 "y.tab.c"

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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    42,    48,
      54,    56,    58,    60,    64,    68,    72,    76,    80,    82,
      86,    90,    92,    96,    98,   100,   103,   106,   109,   112,
     113,   126,   128,   129,   136,   137,   143,   144,   145,   146,
     156,   157,   163,   167,   173,   179,   185,   191,   197,   203,
     209,   215,   218,   222,   226,   230,   234,   238,   242,   246,
     250,   254,   258,   261,   270,   279,   281,   285,   287,   289,
     291
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,    50,    51,    -1,    51,    -1,
      50,    51,    32,    -1,    51,    32,    -1,    51,    -1,    52,
      -1,    55,    -1,    59,    -1,    60,    -1,    61,    -1,    65,
      -1,    64,    -1,    73,    -1,    74,    -1,     3,    35,    53,
      36,    -1,    16,    17,    53,    17,    54,    -1,    16,    35,
       4,    35,    54,    -1,    18,    -1,    19,    -1,    20,    -1,
      16,     7,    56,    -1,    16,     7,    22,    -1,    16,     7,
      24,    -1,    56,    45,    57,    -1,    56,    10,    57,    -1,
      57,    -1,    57,    11,    58,    -1,    57,     9,    58,    -1,
      58,    -1,    33,    56,    34,    -1,    23,    -1,    16,    -1,
      21,    22,    -1,    21,    23,    -1,    21,    24,    -1,    26,
      16,    -1,    -1,    37,    16,     7,    56,    38,    56,    35,
      63,    36,    62,    39,    16,    -1,    23,    -1,    -1,    27,
      33,    71,    34,    50,    28,    -1,    -1,    29,    71,    50,
      66,    31,    -1,    -1,    -1,    -1,    29,    71,    50,    67,
      30,    68,    50,    69,    31,    -1,    -1,    29,    71,    30,
      70,    31,    -1,    29,    71,    31,    -1,    33,    71,    42,
      71,    34,    -1,    33,    72,    42,    71,    34,    -1,    33,
      71,    42,    72,    34,    -1,    33,    71,    43,    71,    34,
      -1,    33,    72,    43,    71,    34,    -1,    33,    71,    43,
      72,    34,    -1,    33,    72,    42,    72,    34,    -1,    33,
      72,    43,    72,    34,    -1,    44,    71,    -1,    33,    71,
      34,    -1,    33,    72,    34,    -1,    56,    12,    56,    -1,
      56,    13,    56,    -1,    56,    14,    56,    -1,    56,     5,
      56,    -1,    56,     6,    56,    -1,    56,    42,    56,    -1,
      56,    43,    56,    -1,    56,    44,    57,    -1,    44,    16,
      -1,    41,    33,    56,    32,    35,    75,    36,    34,    -1,
      40,    33,    56,    32,    35,    75,    36,    34,    -1,    76,
      -1,    75,    17,    76,    -1,    23,    -1,    24,    -1,    22,
      -1,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    73,    74,    77,    78,    79,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    96,   111,   112,
     115,   116,   117,   123,   124,   125,   128,   129,   130,   133,
     134,   135,   138,   139,   140,   144,   145,   146,   150,   154,
     154,   158,   159,   162,   170,   169,   173,   174,   175,   172,
     178,   177,   180,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   210,   214,   217,   218,   221,   222,   223,
     224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIM", "AS", "OP_MENOR", "OP_MAYOR",
  "OP_ASIG", "OP_SUM", "OP_DIVISION", "OP_RESTA", "OP_MULT", "OP_COMP",
  "OP_MAYORIGUAL", "OP_MENORIGUAL", "OP_DISTINTO", "VARIABLE", "COMA",
  "TYPE_INTEGER", "TYPE_FLOAT", "TYPE_STRING", "DISPLAY", "CONST_STRING",
  "CONST_INT", "CONST_REAL", "DIGITO", "GET", "WHILE", "ENDWHILE", "IF",
  "ELSE", "ENDIF", "PUNTO_COMA", "PARENTESIS_A", "PARENTESIS_C",
  "CORCHETE_A", "CORCHETE_C", "FOR", "TO", "NEXT", "EQUMIN", "EQUMAX",
  "AND", "OR", "NOT", "OP_SUMA", "OP_DIVISIONISION", "$accept",
  "programa_final", "programa", "sentencia", "gramatica", "dec_variable",
  "lista_asig", "tipo", "asig", "expresion", "termino", "factor",
  "display", "get", "for", "$@1", "step", "while", "if", "$@2", "$@3",
  "$@4", "$@5", "$@6", "cond_final", "cond", "equmax", "equmin", "lista",
  "expr_list", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    52,    53,    53,
      54,    54,    54,    55,    55,    55,    56,    56,    56,    57,
      57,    57,    58,    58,    58,    59,    59,    59,    60,    62,
      61,    63,    63,    64,    66,    65,    67,    68,    69,    65,
      70,    65,    65,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    74,    75,    75,    76,    76,    76,
      76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     5,
       1,     1,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     1,     2,     2,     2,     2,     0,
      12,     1,     0,     6,     0,     5,     0,     0,     0,     9,
       0,     5,     3,     5,     5,     5,     5,     5,     5,     5,
       5,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     8,     8,     1,     3,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     7,     8,     9,    10,    11,    12,    14,
      13,    15,    16,     0,     0,    35,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     1,     3,     6,     0,
       0,    34,    24,    33,    25,     0,    23,    28,    31,     0,
       0,     0,     0,     0,     0,    61,    50,    52,    44,     7,
       0,     0,     0,     5,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,    62,     0,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    27,
      26,    30,    29,     0,    67,    68,    64,    65,    66,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    45,    47,     0,     0,     0,     0,     0,    43,    53,
      55,    56,    58,    54,    59,    57,    60,     0,     0,    80,
      79,    77,    78,     0,    75,     0,    20,    21,    22,    18,
      19,    48,    42,     0,     0,     0,     0,    41,     0,    76,
      74,    73,    49,    39,     0,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    59,    14,    40,   149,    15,    52,
      47,    48,    16,    17,    18,   164,   158,    19,    20,    91,
      92,   137,   156,    89,    53,    54,    21,    22,   143,   144
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -32
static const yytype_int16 yypact[] =
{
     136,   -21,    14,    49,    29,    67,   -24,    86,    72,    83,
      26,   -32,   136,     4,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   104,   156,   -32,   -32,   -32,   -32,   -24,
      78,   -24,    88,   116,   -10,   -10,   -32,    92,   -32,    -7,
      91,   -32,   -32,   -32,   -32,   -10,     7,    84,   -32,    99,
      78,    66,    25,    32,   107,   -32,   -32,   -32,   105,   108,
     -10,     1,    44,   -32,   104,   140,   -32,     6,   -10,   -10,
     -10,   -10,   136,    43,   -32,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -32,    78,    78,   -32,    78,    78,   128,
      92,   129,   117,     5,   123,   126,   149,   134,   -32,    84,
      84,   -32,   -32,   127,     7,     7,     7,     7,     7,     7,
       7,    84,   137,   141,   152,   153,   154,   157,   158,   159,
     -32,   -32,   -32,   -10,    74,    74,   118,   118,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   136,    -3,   -32,
     -32,   -32,   -32,   -14,   -32,   -12,   -32,   -32,   -32,   -32,
     -32,   136,   147,    74,   160,   161,   143,   -32,   162,   -32,
     -32,   -32,   -32,   -32,   144,   174,   -32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -32,   -32,   -32,   -31,     0,   -32,   132,    70,   -32,   -16,
      10,    42,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,    -4,    97,   -32,   -32,    75,    46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -47
static const yytype_int16 yytable[] =
{
      13,    58,    32,   153,    -4,   153,    41,    68,    46,    30,
      64,    68,    37,    43,    23,    68,    68,    68,    61,    62,
      31,    24,   154,    45,   155,    49,    36,    55,    65,    67,
      75,    76,   152,    94,    73,    68,    38,    77,    78,    79,
      98,   103,    69,   123,    93,    28,    69,    55,    75,    76,
      69,    69,    69,    68,    68,    77,    78,    79,    90,   104,
     105,   106,   107,   108,   109,   110,    83,    80,    81,    82,
      69,    25,    26,    27,    84,    85,    95,    98,    99,   100,
     112,   114,    74,   116,   118,    80,    81,    82,    69,    69,
     139,     1,   111,    70,    41,    71,   140,   141,   142,    30,
      29,    43,    33,    90,     2,    34,   151,   138,     1,     3,
      31,    50,   101,   102,     4,     5,    35,     6,    56,    57,
      39,     2,    51,    60,    63,     7,     3,    66,     8,     9,
       1,     4,     5,    72,     6,   -46,   146,   147,   148,     1,
      38,    86,     7,     2,    97,     8,     9,   122,     3,    87,
      88,    90,     2,     4,     5,   128,     6,     3,   124,   120,
     121,   125,     4,     5,     7,     6,   126,     8,     9,   127,
     157,   129,    41,     7,   162,   130,     8,     9,    42,    43,
      44,   113,   115,   165,   117,   119,   131,   132,   133,    45,
     166,   134,   135,   136,   160,   161,    96,   150,   163,   159,
     145
};

static const yytype_uint8 yycheck[] =
{
       0,    32,     6,    17,     0,    17,    16,    10,    24,    33,
      17,    10,    12,    23,    35,    10,    10,    10,    34,    35,
      44,     7,    36,    33,    36,    29,     0,    31,    35,    45,
       5,     6,    35,    32,    50,    10,    32,    12,    13,    14,
      34,    72,    45,    38,    60,    16,    45,    51,     5,     6,
      45,    45,    45,    10,    10,    12,    13,    14,    58,    75,
      76,    77,    78,    79,    80,    81,    34,    42,    43,    44,
      45,    22,    23,    24,    42,    43,    32,    34,    68,    69,
      84,    85,    16,    87,    88,    42,    43,    44,    45,    45,
      16,     3,    82,     9,    16,    11,    22,    23,    24,    33,
      33,    23,    16,   103,    16,    33,   137,   123,     3,    21,
      44,    33,    70,    71,    26,    27,    33,    29,    30,    31,
      16,    16,    44,     7,    32,    37,    21,    36,    40,    41,
       3,    26,    27,    34,    29,    30,    18,    19,    20,     3,
      32,    34,    37,    16,     4,    40,    41,    30,    21,    42,
      43,   151,    16,    26,    27,    28,    29,    21,    35,    31,
      31,    35,    26,    27,    37,    29,    17,    40,    41,    35,
      23,    34,    16,    37,    31,    34,    40,    41,    22,    23,
      24,    84,    85,    39,    87,    88,    34,    34,    34,    33,
      16,    34,    34,    34,    34,    34,    64,   127,    36,   153,
     125
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    16,    21,    26,    27,    29,    37,    40,    41,
      48,    49,    50,    51,    52,    55,    59,    60,    61,    64,
      65,    73,    74,    35,     7,    22,    23,    24,    16,    33,
      33,    44,    71,    16,    33,    33,     0,    51,    32,    16,
      53,    16,    22,    23,    24,    33,    56,    57,    58,    71,
      33,    44,    56,    71,    72,    71,    30,    31,    50,    51,
       7,    56,    56,    32,    17,    35,    36,    56,    10,    45,
       9,    11,    34,    56,    16,     5,     6,    12,    13,    14,
      42,    43,    44,    34,    42,    43,    34,    42,    43,    70,
      51,    66,    67,    56,    32,    32,    53,     4,    34,    57,
      57,    58,    58,    50,    56,    56,    56,    56,    56,    56,
      56,    57,    71,    72,    71,    72,    71,    72,    71,    72,
      31,    31,    30,    38,    35,    35,    17,    35,    28,    34,
      34,    34,    34,    34,    34,    34,    34,    68,    56,    16,
      22,    23,    24,    75,    76,    75,    18,    19,    20,    54,
      54,    50,    35,    17,    36,    36,    69,    23,    63,    76,
      34,    34,    31,    36,    62,    39,    16
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
#line 71 "Sintactico.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 73 "Sintactico.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 74 "Sintactico.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 77 "Sintactico.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 78 "Sintactico.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 "Sintactico.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 82 "Sintactico.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 83 "Sintactico.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 84 "Sintactico.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 85 "Sintactico.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 86 "Sintactico.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 87 "Sintactico.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 88 "Sintactico.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 89 "Sintactico.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 90 "Sintactico.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 96 "Sintactico.y"
    {
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

                                                }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 111 "Sintactico.y"
    {pushStack(&stackVar,(yyvsp[(1) - (5)].strVal));}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 112 "Sintactico.y"
    {pushStack(&stackVar,(yyvsp[(1) - (5)].strVal));}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 115 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"INTEGER");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 116 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"FLOAT");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 117 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"STRING");}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 123 "Sintactico.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 124 "Sintactico.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 125 "Sintactico.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 128 "Sintactico.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 129 "Sintactico.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 130 "Sintactico.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 133 "Sintactico.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 134 "Sintactico.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 135 "Sintactico.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 138 "Sintactico.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 139 "Sintactico.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 140 "Sintactico.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 144 "Sintactico.y"
    {insertString(&symbolTable,"STRING");}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 145 "Sintactico.y"
    {insertNumber(&symbolTable,"INTEGER");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 146 "Sintactico.y"
    {insertNumber(&symbolTable,"FLOAT");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 150 "Sintactico.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 154 "Sintactico.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 158 "Sintactico.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 159 "Sintactico.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 170 "Sintactico.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 171 "Sintactico.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 173 "Sintactico.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 174 "Sintactico.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 175 "Sintactico.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 176 "Sintactico.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 178 "Sintactico.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 179 "Sintactico.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 181 "Sintactico.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 185 "Sintactico.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 186 "Sintactico.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 187 "Sintactico.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 188 "Sintactico.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 189 "Sintactico.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 190 "Sintactico.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 191 "Sintactico.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 192 "Sintactico.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 193 "Sintactico.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 194 "Sintactico.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 195 "Sintactico.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 198 "Sintactico.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 199 "Sintactico.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 200 "Sintactico.y"
    {;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 201 "Sintactico.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 202 "Sintactico.y"
    {;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 203 "Sintactico.y"
    {;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 204 "Sintactico.y"
    {;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 205 "Sintactico.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 206 "Sintactico.y"
    {;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 210 "Sintactico.y"
    {;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 214 "Sintactico.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 217 "Sintactico.y"
    {;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 218 "Sintactico.y"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 221 "Sintactico.y"
    {;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 222 "Sintactico.y"
    {;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 223 "Sintactico.y"
    {;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 224 "Sintactico.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2139 "y.tab.c"
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
#line 227 "Sintactico.y"


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
