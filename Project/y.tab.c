/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


#include <stdio.h>
#include "fcn.h"
int err=0;
FILE *g ;
extern FILE* yyin;
extern FILE* yyout;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror();



# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    comentariu = 258,
    incep_sintaxa = 259,
    sfarsit_sintaxa = 260,
    nume_sintaxe = 261,
    cuvinte = 262,
    drept = 263,
    ghili = 264,
    paranteze1 = 265,
    sageata = 266,
    inm = 267,
    atribut = 268,
    imp = 269,
    plus = 270,
    minus = 271,
    smir = 272,
    and = 273,
    Sma = 274,
    Soe = 275,
    paranteze31 = 276,
    paranteze32 = 277,
    simb = 278,
    special = 279,
    incep_semantica = 280,
    import = 281,
    k = 282,
    configur = 283,
    env = 284,
    store = 285,
    stack = 286,
    instream = 287,
    outstream = 288,
    var = 289,
    rule = 290,
    tip_i = 291,
    tip_st = 292,
    tip_bl = 293,
    mme = 294,
    mMe = 295,
    pInt = 296,
    sp = 297,
    mmeInt = 298,
    ttrue = 299,
    ffalse = 300,
    tip_B = 301,
    simpleR = 302,
    incepK = 303,
    sfarsitK = 304,
    incepEnv = 305,
    sfarsitEnv = 306,
    incepSto = 307,
    sfarsitSto = 308,
    ghmi = 309,
    drp = 310,
    incepSta = 311,
    sfarsitSta = 312
  };
#endif
/* Tokens.  */
#define comentariu 258
#define incep_sintaxa 259
#define sfarsit_sintaxa 260
#define nume_sintaxe 261
#define cuvinte 262
#define drept 263
#define ghili 264
#define paranteze1 265
#define sageata 266
#define inm 267
#define atribut 268
#define imp 269
#define plus 270
#define minus 271
#define smir 272
#define and 273
#define Sma 274
#define Soe 275
#define paranteze31 276
#define paranteze32 277
#define simb 278
#define special 279
#define incep_semantica 280
#define import 281
#define k 282
#define configur 283
#define env 284
#define store 285
#define stack 286
#define instream 287
#define outstream 288
#define var 289
#define rule 290
#define tip_i 291
#define tip_st 292
#define tip_bl 293
#define mme 294
#define mMe 295
#define pInt 296
#define sp 297
#define mmeInt 298
#define ttrue 299
#define ffalse 300
#define tip_B 301
#define simpleR 302
#define incepK 303
#define sfarsitK 304
#define incepEnv 305
#define sfarsitEnv 306
#define incepSto 307
#define sfarsitSto 308
#define ghmi 309
#define drp 310
#define incepSta 311
#define sfarsitSta 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{

char *coment;char *nume;


};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */



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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,     2,     2,     2,     2,     2,
      64,    65,     2,    61,     2,    72,    60,     2,    73,    74,
       2,     2,     2,     2,     2,     2,     2,     2,    62,    63,
      69,    66,    70,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,     2,    75,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    21,    21,    23,    25,    25,    27,    29,    29,    29,
      31,    33,    34,    35,    36,    37,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    57,    59,    61,    63,    65,    67,    67,
      69,    69,    71,    71,    73,    73,    75,    75,    77,    77,
      79,    81,    81,    81,    83,    85,    87,    88,    89,    90,
      91,    91,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   106,   108,   109,   110,   111,   113,   115,
     117,   118,   120,   122,   124,   126,   128,   130,   132,   134,
     136,   138,   140,   142,   144,   145,   145,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   175,   177,   177,   179,   179
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "comentariu", "incep_sintaxa",
  "sfarsit_sintaxa", "nume_sintaxe", "cuvinte", "drept", "ghili",
  "paranteze1", "sageata", "inm", "atribut", "imp", "plus", "minus",
  "smir", "and", "Sma", "Soe", "paranteze31", "paranteze32", "simb",
  "special", "incep_semantica", "import", "k", "configur", "env", "store",
  "stack", "instream", "outstream", "var", "rule", "tip_i", "tip_st",
  "tip_bl", "mme", "mMe", "pInt", "sp", "mmeInt", "ttrue", "ffalse",
  "tip_B", "simpleR", "incepK", "sfarsitK", "incepEnv", "sfarsitEnv",
  "incepSto", "sfarsitSto", "ghmi", "drp", "incepSta", "sfarsitSta", "'{'",
  "'}'", "'.'", "'+'", "':'", "';'", "'('", "')'", "'='", "'['", "']'",
  "'<'", "'>'", "'!'", "'-'", "'0'", "'1'", "'_'", "$accept", "PGM",
  "numeSintaxa", "sintaxe", "numesintaxe", "continutsintaxe", "cuvintee",
  "altcon", "simbol", "numeSemantica", "continutSemantica", "imports",
  "configuration", "config", "kk", "eenv", "sstore", "sstack", "iinstream",
  "ooutstream", "inceprules", "rules", "simpleRules", "rulee", "elemente",
  "ssimbol", "rezult", "variabila", "type", "complexRules", "ruleee",
  "pack", "First", "IncepK", "SfarsitK", "Second", "IncepEnv",
  "SfarsitEnv", "Third", "IncepSto", "SfarsitSto", "Fourth", "IncepSta",
  "SfarsitSta", "elemente2", "ssimbol2", "sfarsitSemantica", "comm",
  "commm", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   123,   125,
      46,    43,    58,    59,    40,    41,    61,    91,    93,    60,
      62,    33,    45,    48,    49,    95
};
# endif

#define YYPACT_NINF -97

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-97)))

#define YYTABLE_NINF -80

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   -97,     4,   -97,   -97,    16,   -10,   -97,   227,   -97,
      -2,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   227,    19,   -97,    18,   -97,   209,   -97,    19,   -97,
      24,   -97,   -97,    -3,   -97,   227,    24,   -97,    24,    24,
     -97,   -97,   -97,    10,    24,    -4,   -97,    12,   -97,   -97,
     -97,    14,    40,   -97,    15,     1,   -97,    17,    28,   -97,
     -97,   -97,    29,   -97,    39,   155,   -97,   -97,    31,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -39,   -97,    -7,   -97,   -97,   -97,
     -97,   -97,   -97,    33,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,    73,   113,   -97,   -97,   -97,
     -97,   -97,   -97
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     5,     1,     0,     0,     6,     0,    33,
       0,    10,    16,    17,    18,    21,    23,    24,    25,    26,
      27,    28,    29,    31,    30,    19,    20,    32,    22,     4,
     128,     9,   126,    35,     0,     5,     7,   126,   126,   126,
      15,   124,     2,     0,   127,     8,    14,   126,    13,    11,
     125,    37,     5,    39,    12,     0,    38,    41,    50,    53,
      40,    43,     5,    42,    45,     0,    44,    47,    55,    51,
      61,    52,     0,    46,    49,    54,    83,    78,     0,    96,
      48,    36,    60,    73,    74,    75,    76,    62,    69,    66,
      67,    65,    71,    72,    77,    63,    64,    68,    70,    59,
      56,    57,    58,    86,     0,    96,     0,    89,    92,    80,
      96,    81,    96,     0,    95,   115,   116,   117,   103,   108,
     106,   118,    84,   119,   120,   104,   105,    99,   107,    97,
      98,   100,   101,   102,   109,   110,   111,   112,   113,   114,
     121,   122,   123,    82,    94,     0,     0,    87,    85,    90,
      88,    93,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -97,   -34,   -97,   -97,     0,    42,   -26,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -96,   -97,   -97,   -27,   -97
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     8,    29,    37,    31,    32,    10,
      34,    35,    52,    53,    57,    61,    64,    67,    74,    81,
      59,    62,    69,    70,    75,    99,   100,   101,   102,    71,
      72,    77,    78,    79,   143,   104,   105,   148,   109,   110,
     150,   111,   112,   152,   106,   144,    42,    40,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,    43,     7,     7,     4,    38,     1,     7,    30,   113,
      46,    48,    49,   107,   145,     9,   146,   108,    55,    38,
      54,     6,     7,    41,    33,    51,    11,    50,    65,   115,
     116,   117,    39,   118,   119,   120,    68,    56,    47,   121,
     114,    60,   122,    58,    63,   -34,    66,   123,   124,    73,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   115,
     116,   117,    80,   118,   119,   120,   -79,    76,    45,   121,
     114,   103,     0,     0,   147,     0,     0,   123,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   115,
     116,   117,     0,   118,   119,   120,     0,     0,     0,   121,
     114,     0,     0,     0,     0,     0,   149,   123,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   115,
     116,   117,     0,   118,   119,   120,     0,     0,     0,   121,
       0,     0,    82,     0,     0,     0,     0,   123,   124,     0,
     151,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,    83,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    95,    96,    97,    98,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28
};

static const yytype_int8 yycheck[] =
{
       7,    35,     6,     6,     0,    31,     4,     6,     8,   105,
      37,    38,    39,    52,   110,    25,   112,    56,    52,    45,
      47,     5,     6,     5,    26,    28,     7,     3,    62,    36,
      37,    38,    32,    40,    41,    42,    35,    27,    38,    46,
       7,    29,    49,    47,    30,     5,    31,    54,    55,    32,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    36,
      37,    38,    33,    40,    41,    42,    48,    48,    36,    46,
       7,    50,    -1,    -1,    51,    -1,    -1,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    36,
      37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,    46,
       7,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    36,
      37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,    46,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    58,    59,    60,    61,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    77,    78,     0,    79,     5,     6,    80,    25,
      85,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    81,
      82,    83,    84,    26,    86,    87,   124,    82,    84,    82,
     123,     5,   122,    79,     3,    83,   123,    82,   123,   123,
       3,    28,    88,    89,   123,    79,    27,    90,    47,    96,
      29,    91,    97,    30,    92,    79,    31,    93,    35,    98,
      99,   105,   106,    32,    94,   100,    48,   107,   108,   109,
      33,    95,     7,    34,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    58,    59,    60,    61,   101,
     102,   103,   104,    50,   111,   112,   120,    52,    56,   114,
     115,   117,   118,   120,     7,    36,    37,    38,    40,    41,
      42,    46,    49,    54,    55,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   110,   121,   120,   120,    51,   113,    53,
     116,    57,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    79,    79,    80,    81,    81,    81,
      82,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    86,    87,    88,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    97,    97,    97,    98,    99,   100,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   102,   102,   103,   104,   104,   104,   104,   105,   106,
     107,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   122,   123,   123,   124,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     1,     3,     0,     1,     2,     3,     1,
       1,     3,     4,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     7,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     3,     3,     0,     2,     1,     2,     2,     2,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     3,     3,     1,     1,     3,     1,     1,     3,     1,
       1,     3,     1,     1,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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

    {if(err==0){fprintf(g,buffer);;printf("Programul a reusit . . . NOOTHINX >.<\n");}else printf("\nlimbaj cu %d erori",err);}

    break;

  case 3:

    {if(err==0){scrie_comentariusintaxa();printcomentariu((yyvsp[0].nume));}}

    break;

  case 6:

    {if(err==0){printsintaxe((yyvsp[0].nume));}}

    break;

  case 10:

    {if(err==0){scrie_buffer(" ");printcuvinte((yyvsp[0].nume));scrie_buffer(" ");}}

    break;

  case 11:

    {if(err==0){scrie_buffer("\n");}}

    break;

  case 12:

    {if(err==0){scrie_buffer("\n");}}

    break;

  case 13:

    {scrie_buffer("\n");}

    break;

  case 14:

    {scrie_buffer("\n");}

    break;

  case 15:

    {scrie_buffer("");}

    break;

  case 16:

    {if(err==0){scrie_buffer("\n \n");printdrept();}}

    break;

  case 17:

    {if(err==0){printcuvinte((yyvsp[0].nume));}}

    break;

  case 18:

    {if(err==0){printcuvinte((yyvsp[0].nume));}}

    break;

  case 19:

    {if(err==0){printcuvinte(" \"\\{\" ");}}

    break;

  case 20:

    {if(err==0){printcuvinte(" \"\\}\" ");}}

    break;

  case 21:

    {if(err==0){scrie_buffer("\n");printsageata();}}

    break;

  case 22:

    {if(err==0){scrie_buffer("\n");printsageatas();}}

    break;

  case 23:

    {if(err==0){scrie_buffer((yyvsp[0].nume));}}

    break;

  case 24:

    {if(err==0){printcuvinte((yyvsp[0].nume));}}

    break;

  case 25:

    {if(err==0){scrie_buffer((yyvsp[0].nume));}}

    break;

  case 26:

    {if(err==0){scrie_buffer((yyvsp[0].nume));}}

    break;

  case 27:

    {if(err==0){scrie_buffer((yyvsp[0].nume));}}

    break;

  case 28:

    {if(err==0){scrie_buffer((yyvsp[0].nume));}}

    break;

  case 29:

    {if(err==0){scrie_buffer(" \"\\&\\&\" ");}}

    break;

  case 30:

    {if(err==0){scrie_buffer(" \"$<=$\" ");}}

    break;

  case 31:

    {if(err==0){scrie_buffer(" \"$<$\" ");}}

    break;

  case 32:

    {if(err==0){scrie_buffer((yyvsp[0].nume));}}

    break;

  case 33:

    {if(err==0){scrie_comentariusemantica();scrie_buffer("\\newline \n \\newline \n");printcomentariu((yyvsp[0].nume));}}

    break;

  case 35:

    {if(err==0){printcomentariu((yyvsp[0].nume));}}

    break;

  case 36:

    {if(err==0)scrie_buffer("\\newline\\newline\\newline");}

    break;

  case 37:

    {if(err==0){scrie_comentariuConfig();scrie_buffer("\\newline\\newline\n\\textit{CONFIGURATION: }");}}

    break;

  case 38:

    {if(err==0){configk();}}

    break;

  case 40:

    {if(err==0){configenv();}}

    break;

  case 42:

    {if(err==0){configstore();}}

    break;

  case 44:

    {if(err==0){configstack();}}

    break;

  case 46:

    {if(err==0){configin();}}

    break;

  case 48:

    {if(err==0){configout();}}

    break;

  case 50:

    {if(err==0)scrie_comentariuSimpleR();}

    break;

  case 54:

    {if(err==0)scrie_buffer("}}");}

    break;

  case 55:

    {if(err==0)scrie_buffer("\n\\noindent\\fcolorbox{Black}{White}{\\parbox{3in}{RULE \\newline ");}

    break;

  case 60:

    {if(err==0)verrifica_cuvant((yyvsp[0].nume));}

    break;

  case 62:

    {if(err==0)scrie_buffer("$<=$ ");}

    break;

  case 63:

    {if(err==0)scrie_buffer("$\\{$ ");}

    break;

  case 64:

    {if(err==0)scrie_buffer("$\\}$ ");}

    break;

  case 65:

    {if(err==0)scrie_buffer("$<=int$ ");}

    break;

  case 66:

    {if(err==0)scrie_buffer("$+int$ ");}

    break;

  case 67:

    {if(err==0)scrie_buffer("$\\sim>$ ");}

    break;

  case 68:

    {if(err==0)scrie_buffer("$.$ ");}

    break;

  case 69:

    {if(err==0)scrie_buffer("$=>$ ");}

    break;

  case 70:

    {if(err==0)scrie_buffer("$+$ ");}

    break;

  case 71:

    {if(err==0)scrie_buffer("true ");}

    break;

  case 72:

    {if(err==0)scrie_buffer("false ");}

    break;

  case 73:

    {if(err==0)scrie_buffer((yyvsp[0].nume));scrie_buffer(" ");}

    break;

  case 74:

    {if(err==0)scrie_buffer("$int$ ");}

    break;

  case 75:

    {if(err==0)scrie_buffer("$stmt$ ");}

    break;

  case 76:

    {if(err==0)scrie_buffer("$block$ ");}

    break;

  case 77:

    {if(err==0)scrie_buffer("$BExp$ ");}

    break;

  case 79:

    {if(err==0)scrie_buffer("\n\\newline\\newline\\newline\n\\noindent\\fcolorbox{Black}{White}{\\parbox{2in}{RULE ");}

    break;

  case 80:

    {if(err==0)scrie_buffer("}\n}\\newline");}

    break;

  case 81:

    {if(err==0)scrie_buffer("}\n}\\newline");}

    break;

  case 83:

    {if(err==0)scrie_buffer("\n\\newline\\newline\\newline\n\\begin{tikzpicture}\n\\fill[color=SkyBlue] (0,0) rectangle (3,2);\n\\draw[color=SkyBlue] (0,0) rectangle (3,2); \n\\fill[color=SkyBlue] (3,0) -- (3.2,0.2) -- (3,0.4) -- (3.2,0.6) -- (3,0.8) -- (3.2,1) -- (3,1.2) -- (3.2,1.4)--(3,1.6)--(3.2,1.8)--(3,2)--(3,0);\n\\fill[color=SkyBlue] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=MidnightBlue] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=SkyBlue,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=MidnightBlue] at (0.8,1.8){\\underline{\\textit{k}}};\n\\node[draw=SkyBlue] at (1.5,1) {\\ssmall ");}

    break;

  case 84:

    {if(err==0)scrie_buffer("};\n\\end{tikzpicture}");}

    break;

  case 86:

    {if(err==0)scrie_buffer("\n\\newline\\newline\n\\begin{tikzpicture}\n\\fill[color=CarnationPink] (0,0) rectangle (3,2);\n\\draw[color=CarnationPink] (0,0) rectangle (3,2); \n\\fill[color=CarnationPink] (3,0) -- (3.2,0.2) -- (3,0.4) -- (3.2,0.6) -- (3,0.8) -- (3.2,1) -- (3,1.2) -- (3.2,1.4)--(3,1.6)--(3.2,1.8)--(3,2)--(3,0);\n\\fill[color=CarnationPink] (0,0) -- (-0.2,0.2) -- (0,0.4) -- (-0.2,0.6) -- (0,0.8) -- (-0.2,1) -- (0,1.2) -- (-0.2,1.4)--(0,1.6)--(-0.2,1.8)--(0,2)--(0,0);\n\\fill[color=Sepia] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=CarnationPink,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=Sepia] at (0.8,1.8){\\underline{\\textit{env}}};\n\\node[draw=CarnationPink] at (1.5,1) {\\ssmall ");}

    break;

  case 87:

    {if(err==0)scrie_buffer("};\n\\end{tikzpicture}");}

    break;

  case 89:

    {if(err==0)scrie_buffer("\n\\newline\\newline\n\\begin{tikzpicture}\n\\fill[color=CornflowerBlue] (0,0) rectangle (3,2);\n\\draw[color=CornflowerBlue] (0,0) rectangle (3,2); \n\\fill[color=CornflowerBlue] (3,0).. controls (3.25,1).. (3,2) -- (3,0);\n\\fill[color=CornflowerBlue] (0,0).. controls (-0.25,1).. (0,2) -- (0,0);\n\\fill[color=NavyBLue] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=CornflowerBlue,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=NavyBLue] at (0.8,1.8){\\underline{\\textit{store}}};\n\\node[draw=CornflowerBlue] at (1.5,1) {\\ssmall ");}

    break;

  case 90:

    {if(err==0)scrie_buffer("};\n\\end{tikzpicture}");}

    break;

  case 92:

    {if(err==0)scrie_buffer("\n\\newline\\newline\n\\begin{tikzpicture}\n\\fill[color=YellowGreen] (0,0) rectangle (3,2);\n\\draw[color=YellowGreen] (0,0) rectangle (3,2); \n\\fill[color=YellowGreen] (3,0) -- (3.2,0.2) -- (3,0.4) -- (3.2,0.6) -- (3,0.8) -- (3.2,1) -- (3,1.2) -- (3.2,1.4)--(3,1.6)--(3.2,1.8)--(3,2)--(3,0);\n\\fill[color=YellowGreen] (0,0) -- (-0.2,0.2) -- (0,0.4) -- (-0.2,0.6) -- (0,0.8) -- (-0.2,1) -- (0,1.2) -- (-0.2,1.4)--(0,1.6)--(-0.2,1.8)--(0,2)--(0,0);\n\\fill[color=ForestGreen] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\draw[color=YellowGreen,line width=1pt] (0.27,2).. controls (0.25,2.15).. (0.27,2.25)--(0.27,2.26).. controls(0.87,2.31).. (1.37,2.26)--(1.37,2.25).. controls(1.39,2.15).. (1.37,2)--(0.27,2);\n\\node[draw=ForestGreen] at (0.8,1.8){\\underline{\\textit{stack}}};\n\\node[draw=YellowGreen] at (1.5,1) {\\ssmall ");}

    break;

  case 93:

    {if(err==0)scrie_buffer("};\n\\end{tikzpicture}");}

    break;

  case 95:

    {if(err==0)scrie_buffer((yyvsp[0].nume));}

    break;

  case 97:

    {if(err==0)scrie_buffer("$:$ ");}

    break;

  case 98:

    {if(err==0)scrie_buffer("$;$ ");}

    break;

  case 99:

    {if(err==0)scrie_buffer("$.$ ");}

    break;

  case 100:

    {if(err==0)scrie_buffer("$($ ");}

    break;

  case 101:

    {if(err==0)scrie_buffer("$)$ ");}

    break;

  case 102:

    {if(err==0)scrie_buffer("$=$ ");}

    break;

  case 103:

    {if(err==0)scrie_buffer("$=>$ ");}

    break;

  case 104:

    {if(err==0)scrie_buffer("$\\{$ ");}

    break;

  case 105:

    {if(err==0)scrie_buffer("$\\}$ ");}

    break;

  case 106:

    {if(err==0)scrie_buffer("$\\sim>$ ");}

    break;

  case 107:

    {if(err==0)scrie_buffer("$+$ ");}

    break;

  case 108:

    {if(err==0)scrie_buffer("$+int$ ");}

    break;

  case 109:

    {if(err==0)scrie_buffer("$[$ ");}

    break;

  case 110:

    {if(err==0)scrie_buffer("$]$ ");}

    break;

  case 111:

    {if(err==0)scrie_buffer("$<$ ");}

    break;

  case 112:

    {if(err==0)scrie_buffer("$>$ ");}

    break;

  case 113:

    {if(err==0)scrie_buffer("! ");}

    break;

  case 114:

    {if(err==0)scrie_buffer("- ");}

    break;

  case 115:

    {if(err==0)scrie_buffer("$:Int$ ");}

    break;

  case 116:

    {if(err==0)scrie_buffer("$:Stmt$ ");}

    break;

  case 117:

    {if(err==0)scrie_buffer("$:Block$ ");}

    break;

  case 118:

    {if(err==0)scrie_buffer("$:BExp$ ");}

    break;

  case 119:

    {if(err==0)scrie_buffer("\"");}

    break;

  case 120:

    {if(err==0)scrie_buffer("$|->$");}

    break;

  case 121:

    {if(err==0)scrie_buffer("0");}

    break;

  case 122:

    {if(err==0)scrie_buffer("1");}

    break;

  case 123:

    {if(err==0)scrie_buffer("\\_");}

    break;

  case 124:

    {if(err==0)scrie_comentariuClo();}

    break;

  case 125:

    {if(err==0){scrie_buffer(" ( ");printcuvinte((yyvsp[0].coment));scrie_buffer(" ) \n");}}

    break;

  case 127:

    {if(err==0){scrie_buffer(" ( ");printcuvinte((yyvsp[0].coment));scrie_buffer(" ) \n\n");}}

    break;



      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}



int yyerror(char * s){
err++;
printf("\n!!! eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){

yyin=fopen(argv[1],"r");

if(!(g = fopen("finish.tex","w")))
    fprintf(stderr,"eroare creare fisier!");

fprintf(g,"\\documentclass{article}\n\\usepackage[dvipsnames]{xcolor}\n\\usepackage{calc}\n\\usepackage{fancybox}\n");
fprintf(g,"\\usepackage{tikz}\n\\usepackage{mathptmx}\n\\usepackage[11pt]{moresize}\n\\usetikzlibrary{positioning}\n\\usetikzlibrary{shapes,snakes}\n\\usepackage{amsmath,amssymb}\n");
fprintf(g,"\\begin{document}\n\\title{Project K Tools}\n\\maketitle\n\\author{\\textit{S\\^{a}rbu Iulia Iustina, grupa B1}}\n\\newline\n");

yyparse(); 

fprintf(g,"\n");
fprintf(g,"\\end{document}\n"); 
} 
