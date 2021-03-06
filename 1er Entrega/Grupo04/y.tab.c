
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
#define YYLAST   220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  170

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
      79,    82,    83,    89,    91,    92,   106,   107,   118,   119,
     125,   132,   133,   134,   141,   142,   147,   151,   157,   163,
     169,   175,   178,   184,   190,   196,   202,   206,   210,   214,
     219,   224,   230,   232,   236,   238,   240,   242,   244,   248,
     252,   256,   260,   264,   268,   272,   276,   279,   284,   290,
     296,   298,   300
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    -1,    52,    -1,    52,    53,    18,
      -1,    53,    18,    -1,    80,    -1,    54,    -1,    60,    -1,
      61,    -1,    68,    -1,    62,    -1,    65,    -1,    33,    47,
      57,    -1,    33,    47,    55,    -1,    34,    -1,    31,    -1,
      32,    -1,    57,    42,    58,    -1,    57,    43,    58,    -1,
      58,    -1,    58,    45,    59,    -1,    58,    44,    59,    -1,
      48,    58,    -1,    59,    -1,    19,    57,    20,    -1,    56,
      -1,    33,    -1,    13,    55,    -1,    13,    57,    -1,    12,
      33,    -1,    -1,     4,    73,    63,    64,     5,    -1,    52,
      -1,    -1,    38,    33,    47,    57,    40,    57,    15,    31,
      16,    66,    52,    39,    33,    -1,    -1,    38,    33,    47,
      57,    40,    57,    67,    52,    39,    33,    -1,    -1,     6,
      73,    52,    69,     8,    -1,     6,    73,    52,     7,    52,
       8,    -1,    -1,    -1,     6,    73,    70,     7,    71,     8,
      -1,    -1,     6,    73,    72,     8,    -1,    19,    73,    20,
      -1,    19,    73,    27,    73,    20,    -1,    19,    73,    26,
      73,    20,    -1,    19,    73,    27,    79,    20,    -1,    19,
      73,    26,    79,    20,    -1,    25,    73,    -1,    19,    79,
      27,    73,    20,    -1,    19,    79,    26,    73,    20,    -1,
      19,    79,    26,    79,    20,    -1,    19,    79,    27,    79,
      20,    -1,    19,    79,    20,    -1,    19,    75,    20,    -1,
      19,    74,    20,    -1,    29,    19,    76,    20,    -1,    30,
      19,    76,    20,    -1,    57,    18,    15,    77,    16,    -1,
      78,    -1,    77,    17,    78,    -1,    31,    -1,    32,    -1,
      34,    -1,    33,    -1,    57,    28,    57,    -1,    57,    24,
      57,    -1,    57,    23,    57,    -1,    57,    21,    57,    -1,
      57,    22,    57,    -1,    57,    26,    57,    -1,    57,    27,
      57,    -1,    57,    25,    58,    -1,    25,    33,    -1,     3,
      15,    81,    16,    -1,    33,    17,    81,    17,    82,    -1,
      33,    16,    14,    15,    82,    -1,     9,    -1,    10,    -1,
      11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    74,    77,    78,    81,    82,    83,    84,
      85,    86,    87,    90,    91,    94,    98,   101,   105,   106,
     107,   110,   111,   112,   113,   117,   118,   119,   122,   123,
     126,   129,   129,   134,   137,   137,   140,   140,   146,   145,
     148,   153,   154,   153,   156,   156,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   175,
     178,   180,   182,   183,   186,   187,   188,   189,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   203,   220,   224,
     231,   232,   233
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
  "termino", "factor", "display", "get", "while", "$@1", "while_exp",
  "for", "$@2", "$@3", "if", "$@4", "$@5", "$@6", "$@7", "cond_completa",
  "equmax", "equmin", "cond_equ", "lista", "expr_list", "cond", "dec_var",
  "seg_asig", "tipo", 0
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
      61,    63,    62,    64,    66,    65,    67,    65,    69,    68,
      68,    70,    71,    68,    72,    68,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    74,
      75,    76,    77,    77,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    80,    81,    81,
      82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     3,     3,
       1,     3,     3,     2,     1,     3,     1,     1,     2,     2,
       2,     0,     5,     1,     0,    13,     0,    10,     0,     5,
       6,     0,     0,     6,     0,     4,     3,     5,     5,     5,
       5,     2,     5,     5,     5,     5,     3,     3,     3,     4,
       4,     5,     1,     3,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     4,     5,     5,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     0,     7,     8,     9,    11,    12,    10,     6,     0,
       0,     0,    31,    41,    30,     0,    16,    17,    27,    15,
       0,    28,    26,    29,    20,    24,     0,     0,     1,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,    38,     0,     0,     0,    23,     0,
       0,     0,     0,    14,    13,     0,     4,     0,     0,    77,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,    58,    57,    56,     0,     0,
      33,     0,     0,     0,    42,    45,    25,    18,    19,    22,
      21,     0,     0,     0,     0,     0,     0,    71,    72,    70,
      69,    75,    73,    74,    68,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,    39,     0,     0,     0,     0,
       0,    59,    60,    48,    50,    47,    49,    53,    54,    52,
      55,    40,    43,    36,    80,    81,    82,    79,    78,     0,
       0,     0,    64,    65,    67,    66,     0,    62,     0,     0,
      61,     0,    34,     0,    63,     0,    37,     0,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    31,    32,    47,    34,
      35,    13,    14,    15,    53,    91,    16,   165,   151,    17,
      93,    55,   126,    56,    48,    49,    50,   105,   156,   157,
      51,    18,    42,   147
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int16 yypact[] =
{
     141,   -11,   -12,   -12,   -18,    -9,   -21,     3,    57,   -35,
     141,    50,   -35,   -35,   -35,   -35,   -35,   -35,   -35,    38,
      30,   -12,   -35,    88,   -35,   139,   -35,   -35,   -35,   -35,
     139,   -35,   -35,    62,    68,   -35,    -9,    32,   -35,    59,
     -35,   108,    71,    30,    31,    74,    76,   176,   -15,    79,
      89,    49,   -35,   141,   104,   125,   107,     0,   -35,   139,
     139,    87,    87,   -35,    62,   139,   -35,   120,    38,   -35,
     168,   -35,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   -35,   136,   136,   -35,   -35,   -35,   136,   136,
     141,   133,   141,   138,   -35,   -35,   -35,    68,    68,   -35,
     -35,   -34,   126,   131,    23,   132,   146,    62,    62,    62,
      62,    68,    62,    62,    62,   162,   163,   165,   166,   185,
     186,   187,   188,   -35,   127,   -35,   148,   139,   153,   153,
     158,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -13,   -35,   -35,   -35,   -35,   -35,   144,
     128,   141,   -35,   -35,   -35,   -35,   134,   -35,   193,    15,
     -35,   144,   -35,   179,   -35,   141,   -35,    34,   180,   -35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -35,   -35,   -35,   -22,   -10,   -35,   178,   -35,     9,   -27,
     119,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,    14,   -35,   -35,   142,   -35,    55,
      39,   -35,   149,    91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int16 yytable[] =
{
      39,    54,   150,    58,    19,    82,   127,    20,    59,    60,
      25,    83,    84,    21,    33,    24,    22,    23,     1,     2,
      96,     3,    26,    27,    28,    29,    36,     4,     5,    59,
      60,    90,    97,    98,    57,    52,    37,     1,     2,    30,
       3,   130,    59,    60,    39,    64,     4,     5,     6,    43,
      20,   111,    70,     7,   163,    44,    21,    38,    52,    45,
      46,    26,    27,    28,    71,    59,    60,     6,    40,    87,
     124,    41,     7,   168,   101,    88,    89,    66,    30,    65,
      39,   104,   104,   107,   108,   109,   110,    69,   112,   113,
     114,     1,     2,    72,     3,    73,   -44,   115,   117,    85,
       4,     5,   119,   121,    59,    60,    25,     1,     2,    86,
       3,    92,    61,    62,    39,    95,     4,     5,    26,    27,
      28,     6,   116,   118,    67,    68,     7,   120,   122,   159,
       1,     2,    94,     3,   102,   141,   143,     6,   123,     4,
       5,   128,     7,   167,     1,     2,   125,     3,   129,    39,
     160,   161,   131,     4,     5,    43,   142,    39,    25,   158,
       6,    44,   144,   145,   146,     7,   132,    26,    27,    28,
      26,    27,    28,   149,     6,   152,   153,   154,   155,     7,
      99,   100,   133,   134,    30,   135,   136,    30,    96,    74,
      75,    76,    77,    78,    79,    80,    81,    74,    75,    76,
      77,    78,    79,    80,    81,   137,   138,   139,   140,   162,
      59,    60,   166,   169,    63,   106,   164,   103,    59,    60,
     148
};

static const yytype_uint8 yycheck[] =
{
      10,    23,    15,    30,    15,    20,    40,    19,    42,    43,
      19,    26,    27,    25,     5,    33,     2,     3,     3,     4,
      20,     6,    31,    32,    33,    34,    47,    12,    13,    42,
      43,    53,    59,    60,    25,    21,    33,     3,     4,    48,
       6,    18,    42,    43,    54,    36,    12,    13,    33,    19,
      19,    78,    43,    38,    39,    25,    25,     0,    44,    29,
      30,    31,    32,    33,    33,    42,    43,    33,    18,    20,
      92,    33,    38,    39,    65,    26,    27,    18,    48,    47,
      90,    72,    73,    74,    75,    76,    77,    16,    79,    80,
      81,     3,     4,    19,     6,    19,     8,    83,    84,    20,
      12,    13,    88,    89,    42,    43,    19,     3,     4,    20,
       6,     7,    44,    45,   124,     8,    12,    13,    31,    32,
      33,    33,    83,    84,    16,    17,    38,    88,    89,   151,
       3,     4,     7,     6,    14,     8,   127,    33,     5,    12,
      13,    15,    38,   165,     3,     4,     8,     6,    17,   159,
      16,    17,    20,    12,    13,    19,     8,   167,    19,    31,
      33,    25,     9,    10,    11,    38,    20,    31,    32,    33,
      31,    32,    33,    15,    33,    31,    32,    33,    34,    38,
      61,    62,    20,    20,    48,    20,    20,    48,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    21,    22,    23,
      24,    25,    26,    27,    28,    20,    20,    20,    20,    16,
      42,    43,    33,    33,    36,    73,   161,    68,    42,    43,
     129
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,    12,    13,    33,    38,    50,    51,
      52,    53,    54,    60,    61,    62,    65,    68,    80,    15,
      19,    25,    73,    73,    33,    19,    31,    32,    33,    34,
      48,    55,    56,    57,    58,    59,    47,    33,     0,    53,
      18,    33,    81,    19,    25,    29,    30,    57,    73,    74,
      75,    79,    73,    63,    52,    70,    72,    57,    58,    42,
      43,    44,    45,    55,    57,    47,    18,    16,    17,    16,
      57,    33,    19,    19,    21,    22,    23,    24,    25,    26,
      27,    28,    20,    26,    27,    20,    20,    20,    26,    27,
      52,    64,     7,    69,     7,     8,    20,    58,    58,    59,
      59,    57,    14,    81,    57,    76,    76,    57,    57,    57,
      57,    58,    57,    57,    57,    73,    79,    73,    79,    73,
      79,    73,    79,     5,    52,     8,    71,    40,    15,    17,
      18,    20,    20,    20,    20,    20,    20,    20,    20,    20,
      20,     8,     8,    57,     9,    10,    11,    82,    82,    15,
      15,    67,    31,    32,    33,    34,    77,    78,    31,    52,
      16,    17,    16,    39,    78,    66,    33,    52,    39,    33
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
    {printf("Regla - fin de Sentencia de declaracion de variable\n\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 82 "Sintactico.y"
    {printf("Regla - fin de Sentencia de asignacion \n\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 83 "Sintactico.y"
    {printf("Regla - fin de Sentencia de Display \n\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 84 "Sintactico.y"
    {printf("Regla - fin de Sentencia de Get \n\n");}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 85 "Sintactico.y"
    {printf("Regla - fin de Sentencia de IF \n\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 86 "Sintactico.y"
    {printf("Regla - fin de Sentencia de While \n\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 87 "Sintactico.y"
    {printf("Regla - fin de Sentencia de Tema especial - For \n\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 90 "Sintactico.y"
    {printf("Regla - Sentencia de asignacion por expresion \n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 91 "Sintactico.y"
    {printf("Regla - Sentencia de asignacion por constante string \n");}
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
        insertFloat(&symbolTable,(yyvsp[(1) - (1)].strVal));
      }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 105 "Sintactico.y"
    {printf("Regla - Sentencia de suma \n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 106 "Sintactico.y"
    {printf("Regla - Sentencia de resta \n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 107 "Sintactico.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 110 "Sintactico.y"
    {printf("Regla - Sentencia de multiplicacion\n");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 111 "Sintactico.y"
    {printf("Regla - Sentencia de division\n");}
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
    {printf("Regla - Sentencia de display con constante string\n");}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 123 "Sintactico.y"
    {printf("Regla - Sentencia de display con expresion\n");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 126 "Sintactico.y"
    {printf("Regla - Sentencia de Get con variable\n");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 129 "Sintactico.y"
    {printf("Regla - Sentencia de while con condicion\n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 134 "Sintactico.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 137 "Sintactico.y"
    {printf("Regla - Sentencia de FOR con valor en corchete\n");}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 140 "Sintactico.y"
    {printf("Regla - Sentencia de FOR sin valor en corchete\n");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 146 "Sintactico.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 147 "Sintactico.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 153 "Sintactico.y"
    {printf("Regla - if y else sin sentencia\n");}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 154 "Sintactico.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 155 "Sintactico.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 156 "Sintactico.y"
    {printf("Regla - if sin sentencia\n");}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 157 "Sintactico.y"
    {printf("Regla - fin de if sin sentencia\n");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 160 "Sintactico.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 161 "Sintactico.y"
    {printf("Regla - Sentencia de condicion OR multiple\n");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 162 "Sintactico.y"
    {printf("Regla - Sentencia de condicion AND multiple\n");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 163 "Sintactico.y"
    {printf("Regla - Sentencia de condicion OR multiple\n");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 164 "Sintactico.y"
    {printf("Regla - Sentencia de condicion AND multiple\n");}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 165 "Sintactico.y"
    {printf("Regla - Sentencia de condicion negada\n");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 166 "Sintactico.y"
    {printf("Regla - Sentencia de condicion OR multiple\n");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 167 "Sintactico.y"
    {printf("Regla - Sentencia de condicion AND multiple\n");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 168 "Sintactico.y"
    {printf("Regla - Sentencia de condicion AND multiple\n");}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 169 "Sintactico.y"
    {printf("Regla - Sentencia de condicion OR multiple\n");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 170 "Sintactico.y"
    {printf("Regla - Sentencia de condicion simple\n");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 171 "Sintactico.y"
    {printf("Regla - Sentencia de condicion equmin\n");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 172 "Sintactico.y"
    {printf("Regla - Sentencia de condicion equmax\n");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 175 "Sintactico.y"
    {printf("Regla - Sentencia de EQUMAX\n");}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 178 "Sintactico.y"
    {printf("Regla - Sentencia de EQUMIN\n");}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 180 "Sintactico.y"
    {printf("Regla - Sentencia de Expresion y Listado de variables o constantes en EQUMIN/EQUMAX\n");}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 182 "Sintactico.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 183 "Sintactico.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 186 "Sintactico.y"
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
#line 192 "Sintactico.y"
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
#line 203 "Sintactico.y"
    {
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

}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 220 "Sintactico.y"
    {
                                                              printf("Regla - sentencia declaracion de variable\n");
                                                              pushStack(&stackVar,(yyvsp[(1) - (5)].strVal));
                                                            }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 224 "Sintactico.y"
    {
                                                              printf("Regla - sentencia de declaracion de tipo\n");
                                                              pushStack(&stackVar,(yyvsp[(1) - (5)].strVal));
                                                            }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 231 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"INTEGER");}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 232 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"FLOAT");}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 233 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"STRING");}
    break;



/* Line 1455 of yacc.c  */
#line 2147 "y.tab.c"
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
#line 236 "Sintactico.y"



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
