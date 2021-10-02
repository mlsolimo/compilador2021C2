
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



/* Line 189 of yacc.c  */
#line 93 "y.tab.c"

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

/* Line 214 of yacc.c  */
#line 20 "Sintactico.y"

    char* strVal;



/* Line 214 of yacc.c  */
#line 227 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 239 "y.tab.c"

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
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    48,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    14,    16,    18,    20,
      22,    24,    26,    28,    32,    36,    38,    40,    42,    46,
      50,    52,    56,    60,    63,    65,    69,    71,    73,    76,
      79,    82,    89,    91,    93,    94,   107,   109,   110,   111,
     117,   118,   119,   120,   130,   131,   137,   141,   145,   151,
     157,   163,   169,   172,   178,   184,   190,   196,   200,   204,
     208,   213,   218,   224,   226,   230,   232,   234,   236,   238,
     242,   246,   250,   254,   258,   262,   266,   270,   273,   278,
     284,   290,   292,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    -1,    52,    -1,    52,    53,    18,
      -1,    53,    18,    -1,    80,    -1,    54,    -1,    60,    -1,
      61,    -1,    67,    -1,    62,    -1,    64,    -1,    33,    47,
      57,    -1,    33,    47,    55,    -1,    34,    -1,    31,    -1,
      32,    -1,    57,    42,    58,    -1,    57,    43,    58,    -1,
      58,    -1,    58,    45,    59,    -1,    58,    44,    59,    -1,
      48,    58,    -1,    59,    -1,    19,    57,    20,    -1,    56,
      -1,    33,    -1,    13,    55,    -1,    13,    57,    -1,    12,
      33,    -1,     4,    19,    73,    20,    63,     5,    -1,    52,
      -1,    62,    -1,    -1,    38,    33,    47,    57,    40,    57,
      15,    66,    16,    65,    39,    33,    -1,    31,    -1,    -1,
      -1,     6,    73,    52,    68,     8,    -1,    -1,    -1,    -1,
       6,    73,    52,    69,     7,    70,    52,    71,     8,    -1,
      -1,     6,    73,     7,    72,     8,    -1,     6,    73,     8,
      -1,    19,    73,    20,    -1,    19,    73,    27,    73,    20,
      -1,    19,    73,    26,    73,    20,    -1,    19,    73,    27,
      79,    20,    -1,    19,    73,    26,    79,    20,    -1,    25,
      73,    -1,    19,    79,    27,    73,    20,    -1,    19,    79,
      26,    73,    20,    -1,    19,    79,    26,    79,    20,    -1,
      19,    79,    27,    79,    20,    -1,    19,    79,    20,    -1,
      19,    75,    20,    -1,    19,    74,    20,    -1,    29,    19,
      76,    20,    -1,    30,    19,    76,    20,    -1,    57,    18,
      15,    77,    16,    -1,    78,    -1,    77,    17,    78,    -1,
      31,    -1,    32,    -1,    34,    -1,    33,    -1,    57,    28,
      57,    -1,    57,    24,    57,    -1,    57,    23,    57,    -1,
      57,    21,    57,    -1,    57,    22,    57,    -1,    57,    26,
      57,    -1,    57,    27,    57,    -1,    57,    25,    58,    -1,
      25,    33,    -1,     3,    15,    81,    16,    -1,    33,    17,
      81,    17,    82,    -1,    33,    16,    14,    15,    82,    -1,
       9,    -1,    10,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    74,    77,    78,    81,    82,    83,    84,
      85,    86,    87,    90,    91,    94,    98,   101,   105,   106,
     107,   110,   111,   112,   113,   117,   118,   119,   122,   123,
     126,   129,   134,   135,   138,   138,   142,   143,   147,   146,
     150,   151,   152,   149,   155,   154,   157,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     176,   179,   181,   183,   184,   187,   188,   189,   190,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   204,   220,
     221,   225,   226,   227
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIM", "WHILE", "ENDWHILE", "IF", "ELSE",
  "ENDIF", "INT", "REAL", "STRING", "GET", "DISPLAY", "AS", "CORCHETE_A",
  "CORCHETE_C", "COMA", "PUNTO_COMA", "PARENTESIS_A", "PARENTESIS_C",
  "OP_MENOR", "OP_MAYOR", "OP_MEN_IGU", "OP_MAY_IGU", "OP_NOT", "OP_AND",
  "OP_OR", "OP_COMP", "EQU_MAX", "EQU_MIN", "CONST_INT", "CONST_REAL",
  "VARIABLE", "CONST_STRING", "COMENTARIO_A", "COMENTARIO_C", "COMENTARIO",
  "FOR", "NEXT", "TO", ".", "OP_SUMA", "OP_RESTA", "OP_DIV", "OP_MULT",
  "MENOS_UNARIO", "OP_ASIG", "'-'", "$accept", "programa", "prog",
  "sentencia", "grammar", "asig", "CONST_STRING_R", "NUMERO", "expr",
  "termino", "factor", "display", "get", "while", "while_exp", "for",
  "$@1", "step", "if", "$@2", "$@3", "$@4", "$@5", "$@6", "cond_completa",
  "equmax", "equmin", "cond_equ", "lista", "expr_list", "cond", "dec_var",
  "dupla_asig", "tipo", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    56,    56,    57,    57,
      57,    58,    58,    58,    58,    59,    59,    59,    60,    60,
      61,    62,    63,    63,    65,    64,    66,    66,    68,    67,
      69,    70,    71,    67,    72,    67,    67,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      74,    75,    76,    77,    77,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    81,
      81,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     3,     3,
       1,     3,     3,     2,     1,     3,     1,     1,     2,     2,
       2,     6,     1,     1,     0,    12,     1,     0,     0,     5,
       0,     0,     0,     9,     0,     5,     3,     3,     5,     5,
       5,     5,     2,     5,     5,     5,     5,     3,     3,     3,
       4,     4,     5,     1,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     5,
       5,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     0,     7,     8,     9,    11,    12,    10,     6,     0,
       0,     0,     0,     0,    30,     0,    16,    17,    27,    15,
       0,    28,    26,    29,    20,    24,     0,     0,     1,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    44,    46,    38,     0,    23,     0,
       0,     0,     0,    14,    13,     0,     4,     0,     0,    78,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,    59,    58,    57,     0,
       0,     0,     0,     0,    25,    18,    19,    22,    21,     0,
       0,     0,    32,    11,     0,     0,     0,     0,    72,    73,
      71,    70,    76,    74,    75,    69,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    39,    41,     0,     0,     0,
      31,     0,    60,    61,    49,    51,    48,    50,    54,    55,
      53,    56,     0,     0,    81,    82,    83,    80,    79,     0,
      42,    37,    65,    66,    68,    67,     0,    63,     0,    36,
       0,    62,     0,    43,    34,    64,     0,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    31,    32,    48,    34,
      35,    13,    14,    15,   104,    16,   166,   160,    17,    92,
      93,   142,   158,    91,    49,    50,    51,   106,   156,   157,
      52,    18,    42,   147
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -27
static const yytype_int16 yypact[] =
{
      25,    -3,   -14,   -11,     2,    48,    -8,    10,    62,   -27,
      25,    34,   -27,   -27,   -27,   -27,   -27,   -27,   -27,    35,
     -11,    -6,   -11,     3,   -27,    76,   -27,   -27,   -27,   -27,
      76,   -27,   -27,   -25,    90,   -27,    48,    17,   -27,    70,
     -27,    31,    78,    77,    -6,   139,    85,    95,   128,    24,
     102,   137,    93,   -27,   -27,   -27,    53,    63,   -27,    76,
      76,    79,    79,   -27,   -25,    76,   -27,   151,    35,   -27,
      25,   105,   -27,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,   -27,    68,    68,   -27,   -27,   -27,    68,
      68,   158,   159,   161,   -27,    90,    90,   -27,   -27,    75,
     154,   156,    25,   169,   170,    12,   157,   160,   -25,   -25,
     -25,   -25,    90,   -25,   -25,   -25,   162,   163,   164,   165,
     166,   167,   168,   171,   -27,   -27,   -27,    76,   150,   150,
     -27,   174,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,    25,    60,   -27,   -27,   -27,   -27,   -27,   112,
      25,   145,   -27,   -27,   -27,   -27,   122,   -27,   173,   -27,
     176,   -27,   112,   -27,   -27,   -27,   140,   172,   -27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -27,   -27,   -27,   -21,   -10,   -27,   142,   -27,    -4,   -26,
     101,   -27,   -27,   120,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -27,   119,   -27,    32,
      52,   -27,   127,    67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -41
static const yytype_int16 yytable[] =
{
      39,    33,    56,    23,    58,    20,     1,     2,    21,     3,
      54,    55,    19,    44,    22,     4,     5,    59,    60,    45,
      43,    57,    53,    46,    47,    26,    27,    28,     1,     2,
     131,     3,    64,    95,    96,    24,     6,     4,     5,    36,
      71,     7,    30,    37,    83,    53,    39,    67,    68,   102,
      84,    85,    40,   112,    59,    60,     1,     2,     6,     3,
     -40,    99,    38,     7,    65,     4,     5,    25,    41,   105,
     105,   108,   109,   110,   111,   151,   113,   114,   115,    26,
      27,    28,    29,    94,   116,   118,     6,    44,    66,   120,
     122,     7,    39,    45,    69,    25,    30,    70,    25,    26,
      27,    28,    59,    60,    73,    59,    60,    26,    27,    28,
      26,    27,    28,    88,    74,   127,    30,    59,    60,    89,
      90,   150,    86,   143,    30,    94,    75,    76,    77,    78,
      79,    80,    81,    82,    61,    62,   117,   119,   161,   162,
      39,   121,   123,   152,   153,   154,   155,    59,    60,    75,
      76,    77,    78,    79,    80,    81,    82,    87,    21,   144,
     145,   146,    97,    98,    22,   100,   124,   125,   126,   128,
      59,    60,    72,   129,   -33,   130,   159,   132,    63,   167,
     133,   163,   134,   135,   136,   137,   138,   139,   140,   149,
     103,   141,   164,   107,   165,   101,   148,     0,     0,     0,
       0,     0,     0,     0,     0,   168
};

static const yytype_int16 yycheck[] =
{
      10,     5,    23,     3,    30,    19,     3,     4,    19,     6,
       7,     8,    15,    19,    25,    12,    13,    42,    43,    25,
      20,    25,    22,    29,    30,    31,    32,    33,     3,     4,
      18,     6,    36,    59,    60,    33,    33,    12,    13,    47,
      44,    38,    48,    33,    20,    45,    56,    16,    17,    70,
      26,    27,    18,    79,    42,    43,     3,     4,    33,     6,
       7,    65,     0,    38,    47,    12,    13,    19,    33,    73,
      74,    75,    76,    77,    78,    15,    80,    81,    82,    31,
      32,    33,    34,    20,    84,    85,    33,    19,    18,    89,
      90,    38,   102,    25,    16,    19,    48,    20,    19,    31,
      32,    33,    42,    43,    19,    42,    43,    31,    32,    33,
      31,    32,    33,    20,    19,    40,    48,    42,    43,    26,
      27,   142,    20,   127,    48,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    44,    45,    84,    85,    16,    17,
     150,    89,    90,    31,    32,    33,    34,    42,    43,    21,
      22,    23,    24,    25,    26,    27,    28,    20,    19,     9,
      10,    11,    61,    62,    25,    14,     8,     8,     7,    15,
      42,    43,    33,    17,     5,     5,    31,    20,    36,    39,
      20,     8,    20,    20,    20,    20,    20,    20,    20,    15,
      70,    20,    16,    74,   162,    68,   129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,    12,    13,    33,    38,    50,    51,
      52,    53,    54,    60,    61,    62,    64,    67,    80,    15,
      19,    19,    25,    73,    33,    19,    31,    32,    33,    34,
      48,    55,    56,    57,    58,    59,    47,    33,     0,    53,
      18,    33,    81,    73,    19,    25,    29,    30,    57,    73,
      74,    75,    79,    73,     7,     8,    52,    57,    58,    42,
      43,    44,    45,    55,    57,    47,    18,    16,    17,    16,
      20,    57,    33,    19,    19,    21,    22,    23,    24,    25,
      26,    27,    28,    20,    26,    27,    20,    20,    20,    26,
      27,    72,    68,    69,    20,    58,    58,    59,    59,    57,
      14,    81,    52,    62,    63,    57,    76,    76,    57,    57,
      57,    57,    58,    57,    57,    57,    73,    79,    73,    79,
      73,    79,    73,    79,     8,     8,     7,    40,    15,    17,
       5,    18,    20,    20,    20,    20,    20,    20,    20,    20,
      20,    20,    70,    57,     9,    10,    11,    82,    82,    15,
      52,    15,    31,    32,    33,    34,    77,    78,    71,    31,
      66,    16,    17,     8,    16,    78,    65,    39,    33
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
#line 74 "Sintactico.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 77 "Sintactico.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 78 "Sintactico.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 81 "Sintactico.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 82 "Sintactico.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 83 "Sintactico.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 84 "Sintactico.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 85 "Sintactico.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 86 "Sintactico.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 87 "Sintactico.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 90 "Sintactico.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 91 "Sintactico.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 94 "Sintactico.y"
    {
	    insertString(&symbolTable, (yyvsp[(1) - (1)].strVal));
	}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 98 "Sintactico.y"
    {
        insertNumber(&symbolTable,(yyvsp[(1) - (1)].strVal));
      }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 101 "Sintactico.y"
    {
        insertNumber(&symbolTable,(yyvsp[(1) - (1)].strVal));
      }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 105 "Sintactico.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 106 "Sintactico.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 107 "Sintactico.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 110 "Sintactico.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 111 "Sintactico.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 113 "Sintactico.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 117 "Sintactico.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 118 "Sintactico.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 119 "Sintactico.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 122 "Sintactico.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 123 "Sintactico.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 126 "Sintactico.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 138 "Sintactico.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 142 "Sintactico.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 143 "Sintactico.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 147 "Sintactico.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 148 "Sintactico.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 150 "Sintactico.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 151 "Sintactico.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 152 "Sintactico.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 153 "Sintactico.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 155 "Sintactico.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 156 "Sintactico.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 158 "Sintactico.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 161 "Sintactico.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 162 "Sintactico.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 163 "Sintactico.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 164 "Sintactico.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 165 "Sintactico.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 166 "Sintactico.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 167 "Sintactico.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 168 "Sintactico.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 169 "Sintactico.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 170 "Sintactico.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 171 "Sintactico.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 172 "Sintactico.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 173 "Sintactico.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 176 "Sintactico.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 179 "Sintactico.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 181 "Sintactico.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 183 "Sintactico.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 184 "Sintactico.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 187 "Sintactico.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 188 "Sintactico.y"
    {;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 189 "Sintactico.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 190 "Sintactico.y"
    {;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 193 "Sintactico.y"
    {;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 194 "Sintactico.y"
    {;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 195 "Sintactico.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 196 "Sintactico.y"
    {;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 197 "Sintactico.y"
    {;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 198 "Sintactico.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 199 "Sintactico.y"
    {;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 200 "Sintactico.y"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 201 "Sintactico.y"
    {;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 204 "Sintactico.y"
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

  case 79:

/* Line 1455 of yacc.c  */
#line 220 "Sintactico.y"
    {pushStack(&stackVar,(yyvsp[(1) - (5)].strVal));}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 221 "Sintactico.y"
    {pushStack(&stackVar,(yyvsp[(1) - (5)].strVal));}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 225 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"INTEGER");}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 226 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"FLOAT");}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 227 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"STRING");}
    break;



/* Line 1455 of yacc.c  */
#line 2149 "y.tab.c"
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
#line 230 "Sintactico.y"



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
