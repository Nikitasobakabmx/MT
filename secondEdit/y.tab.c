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
#line 1 "goParse.y" /* yacc.c:339  */
 
#include "stdlib.h" 
#include "stdio.h" 
#include "sheet.h"
#include "suport.h"
#include <string.h>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <iostream>

extern int yylex(); 
extern int yyparse(); 
extern FILE* yyin;
void yyerror(const char* s);

int str = 0;

std::string *app;

std::list<std::string> *Errors = NULL;
std::map<std::string, contain> *funcions = NULL;
std::map<std::string, int> *vars = NULL;



#line 94 "y.tab.c" /* yacc.c:339  */

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
    VAR = 258,
    SPACE = 259,
    PACKAGE = 260,
    LITER = 261,
    TRUE = 262,
    FALSE = 263,
    NEW_LINE = 264,
    FUNC = 265,
    RETURN = 266,
    TYPE_INT = 267,
    LOGIC_AND = 268,
    LOGIC_OR = 269,
    LOGIC_NOT = 270,
    L_PAREN = 271,
    R_PAREN = 272,
    L_CURLY = 273,
    R_CURLY = 274,
    COMMA = 275,
    DOT = 276,
    ASSIGN = 277,
    ASSIGN_ADD = 278,
    PLUS = 279,
    MINUS = 280,
    MULTIPLY = 281,
    DIV = 282,
    TYPE_FLOAT = 283,
    TYPE_STR = 284,
    UNSIGNED = 285,
    SEMICOLON = 286,
    TAB = 287,
    QUOTES = 288,
    D_QUOTES = 289,
    TYPE_BOOL = 290,
    END_OF_FILE = 291
  };
#endif
/* Tokens.  */
#define VAR 258
#define SPACE 259
#define PACKAGE 260
#define LITER 261
#define TRUE 262
#define FALSE 263
#define NEW_LINE 264
#define FUNC 265
#define RETURN 266
#define TYPE_INT 267
#define LOGIC_AND 268
#define LOGIC_OR 269
#define LOGIC_NOT 270
#define L_PAREN 271
#define R_PAREN 272
#define L_CURLY 273
#define R_CURLY 274
#define COMMA 275
#define DOT 276
#define ASSIGN 277
#define ASSIGN_ADD 278
#define PLUS 279
#define MINUS 280
#define MULTIPLY 281
#define DIV 282
#define TYPE_FLOAT 283
#define TYPE_STR 284
#define UNSIGNED 285
#define SEMICOLON 286
#define TAB 287
#define QUOTES 288
#define D_QUOTES 289
#define TYPE_BOOL 290
#define END_OF_FILE 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "goParse.y" /* yacc.c:355  */

   struct sheet *table;

#line 210 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    76,    77,    78,    79,    83,    84,    85,
      89,   102,   103,   106,   110,   114,   118,   145,   146,   154,
     155,   156,   160,   164,   165,   170,   192,   196,   197,   198,
     199,   200,   204,   205,   206,   210,   214,   215,   216,   218,
     222,   223,   224,   225,   226,   227,   231,   232,   233,   234,
     235,   236,   240,   241,   245,   247,   249,   251,   253,   258,
     265,   269,   272,   275,   279,   282,   286,   287,   288,   289,
     293,   297,   298,   299,   300,   301,   302,   303,   304,   308
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "SPACE", "PACKAGE", "LITER",
  "TRUE", "FALSE", "NEW_LINE", "FUNC", "RETURN", "TYPE_INT", "LOGIC_AND",
  "LOGIC_OR", "LOGIC_NOT", "L_PAREN", "R_PAREN", "L_CURLY", "R_CURLY",
  "COMMA", "DOT", "ASSIGN", "ASSIGN_ADD", "PLUS", "MINUS", "MULTIPLY",
  "DIV", "TYPE_FLOAT", "TYPE_STR", "UNSIGNED", "SEMICOLON", "TAB",
  "QUOTES", "D_QUOTES", "TYPE_BOOL", "END_OF_FILE", "$accept", "program",
  "define", "funcDef", "continiue", "packageDef", "varDef",
  "continiueVarDef", "varCallList", "var", "redefenition", "func_var_call",
  "call_parametres", "listParam", "varAsign", "operations", "operands",
  "dataType", "integer", "parametres", "typed_identifyList",
  "typed_identyfy", "type", "block", "statementList", "return_statement", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -135

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-135)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    50,     0,    -2,     0,     4,   151,    -1,    17,     0,
    -135,  -135,  -135,     0,    50,    50,  -135,  -135,    50,   119,
    -135,  -135,  -135,  -135,  -135,  -135,    80,  -135,    16,  -135,
      22,   151,  -135,   151,    37,   198,  -135,  -135,   119,   119,
      28,    35,    38,   151,   151,   151,  -135,  -135,   151,  -135,
    -135,   151,   119,  -135,  -135,  -135,  -135,  -135,  -135,   119,
    -135,  -135,  -135,    61,    90,   119,    91,    12,    27,    39,
    -135,  -135,   104,   108,  -135,  -135,  -135,   119,  -135,  -135,
    -135,  -135,    89,  -135,  -135,   113,   198,  -135,   198,   198,
    -135,  -135,  -135,   119,   119,   119,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,   173,   173,  -135,   173,   173,   173,   173,
      63,    70,  -135,    89,    47,  -135,    89,    89,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,    65,    93,  -135,    65,  -135,
      47,  -135,  -135,  -135,    -5,    47,  -135,  -135,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,     0,     0,     0,    20,    67,     0,     0,
      66,    68,    19,    69,    24,    16,     0,     4,     0,     5,
       0,     0,    25,     0,     0,     0,    78,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    34,     0,    33,
      70,     0,     0,     1,     2,     3,    21,    22,    23,     0,
      56,    57,    44,     0,     0,     0,     0,     0,     0,     0,
      59,    45,     0,     0,    52,    17,    42,     0,    53,    58,
      18,    15,     0,    71,    72,     0,     0,    36,     0,     0,
      35,    27,    28,     0,     0,     0,    73,    74,    76,    75,
      77,     6,    40,     0,     0,    43,     0,     0,     0,     0,
       0,     0,    41,     0,     0,    10,     0,     0,    14,    79,
      37,    39,    38,    29,    30,    31,    50,    51,    46,    47,
      49,    48,    54,    55,    11,     0,     0,    63,     0,    60,
       0,    12,    13,    65,     0,     0,    61,    64,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,    64,  -135,  -135,   -26,  -135,   184,    94,    98,  -135,
    -135,    -6,  -135,   -74,   -19,  -135,   123,  -135,  -135,  -135,
    -134,   -83,   -81,   -69,    55,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,   115,    11,    45,    24,    25,    46,
      47,    74,    49,    90,    75,    76,    77,    78,    79,   116,
     139,   140,    26,    13,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,   117,    28,     1,     2,     3,   146,    17,    30,     4,
       5,   148,   120,   118,   121,   122,   107,    53,     6,    91,
      92,    52,    81,    20,    21,    48,     7,    48,    82,    89,
      23,   108,   117,   101,    93,   117,   117,    48,    48,    48,
     102,    85,    48,   109,   118,    48,   105,   118,   118,    94,
      93,   135,   143,   136,    14,   145,    15,    94,   112,    16,
      95,    95,    17,   147,   137,   103,    27,   138,    29,   135,
      18,   136,    19,    54,   123,   124,   125,    55,    20,    21,
      89,    22,    89,    89,    14,    23,    83,   134,    84,    16,
     141,   142,    17,   113,   104,   106,   132,   144,    96,    97,
      98,    17,    19,    99,   133,   114,   100,     6,    20,    21,
     110,    22,    56,    57,   111,    23,    58,    20,    21,   119,
      80,     0,     0,    59,    23,    32,    60,    61,    62,     0,
       0,     0,    63,    64,     0,    35,     0,     0,     0,    65,
      37,    38,    39,    66,    67,    68,    69,     0,     0,    70,
      71,     0,    72,    73,     1,    31,     0,    32,     0,     0,
      33,     0,    34,     0,     0,     0,     0,    35,     0,     0,
      36,     0,    37,    38,    39,     0,    40,    41,    42,    32,
      60,    61,    43,    44,    12,     0,    12,     0,    12,    35,
       0,     0,     0,    12,    37,    38,    39,    12,    40,    41,
      42,     0,    86,    70,    32,     0,    72,    73,     0,     0,
       0,     0,     0,     0,    35,    87,     0,     0,    88,    37,
      38,    39,     0,    40,    41,    42,   126,   127,     0,   128,
     129,   130,   131
};

static const yytype_int16 yycheck[] =
{
       6,    82,     4,     3,     4,     5,   140,    12,     4,     9,
      10,   145,    86,    82,    88,    89,     4,     0,    18,    38,
      39,    22,     6,    28,    29,    31,    26,    33,     6,    35,
      35,     4,   113,    52,    22,   116,   117,    43,    44,    45,
      59,     4,    48,     4,   113,    51,    65,   116,   117,    22,
      22,     4,   135,     6,     4,   138,     6,    22,    77,     9,
      22,    22,    12,   144,    17,     4,     2,    20,     4,     4,
      20,     6,    22,     9,    93,    94,    95,    13,    28,    29,
      86,    31,    88,    89,     4,    35,    31,   113,    33,     9,
     116,   117,    12,     4,     4,     4,    33,     4,    43,    44,
      45,    12,    22,    48,    34,    16,    51,    18,    28,    29,
       6,    31,    14,    15,     6,    35,    18,    28,    29,     6,
      26,    -1,    -1,     4,    35,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    14,    -1,    16,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    30,
      31,    -1,    33,    34,     3,     4,    -1,     6,    -1,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      19,    -1,    21,    22,    23,    -1,    25,    26,    27,     6,
       7,     8,    31,    32,     0,    -1,     2,    -1,     4,    16,
      -1,    -1,    -1,     9,    21,    22,    23,    13,    25,    26,
      27,    -1,     4,    30,     6,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    -1,    25,    26,    27,   103,   104,    -1,   106,
     107,   108,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     9,    10,    18,    26,    38,    39,
      40,    42,    43,    60,     4,     6,     9,    12,    20,    22,
      28,    29,    31,    35,    44,    45,    59,    38,     4,    38,
       4,     4,     6,     9,    11,    16,    19,    21,    22,    23,
      25,    26,    27,    31,    32,    43,    46,    47,    48,    49,
      61,    62,    22,     0,    38,    38,    45,    45,    45,     4,
       7,     8,     9,    13,    14,    20,    24,    25,    26,    27,
      30,    31,    33,    34,    48,    51,    52,    53,    54,    55,
      44,     6,     6,    61,    61,     4,     4,    17,    20,    48,
      50,    51,    51,    22,    22,    22,    61,    61,    61,    61,
      61,    51,    51,     4,     4,    51,     4,     4,     4,     4,
       6,     6,    51,     4,    16,    41,    56,    59,    60,     6,
      50,    50,    50,    51,    51,    51,    53,    53,    53,    53,
      53,    53,    33,    34,    41,     4,     6,    17,    20,    57,
      58,    41,    41,    58,     4,    58,    57,    59,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    38,    38,    38,    39,    39,    39,
      40,    41,    41,    41,    41,    42,    43,    44,    44,    44,
      44,    44,    45,    45,    45,    46,    46,    47,    47,    47,
      47,    47,    48,    48,    48,    49,    50,    50,    50,    50,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    52,    53,    53,    54,    54,    54,    54,    54,    55,
      56,    57,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    61,    61,    61,    61,    61,    61,    61,    61,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     3,     1,     1,     1,
       4,     2,     2,     2,     1,     3,     2,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     2,     2,     3,
       3,     3,     1,     1,     1,     2,     1,     2,     2,     2,
       2,     2,     1,     2,     1,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     1,     1,     1,
       2,     2,     3,     1,     3,     2,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3
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
        case 7:
#line 83 "goParse.y" /* yacc.c:1646  */
    {}
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 84 "goParse.y" /* yacc.c:1646  */
    {}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 85 "goParse.y" /* yacc.c:1646  */
    {}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "goParse.y" /* yacc.c:1646  */
    {
            contain tmp;
            if((yyvsp[-1].table)->retype != NULL)
            {
                tmp.reType = *((yyvsp[-1].table)->retype);
                (yyvsp[-1].table) = (yyvsp[-1].table)->next;
            }
            tmp.values = to_vector((yyvsp[-1].table));
            funcions-> insert(std::pair<std::string,contain>(*(new std::string((yyvsp[-1].table)->line)),tmp));
            }
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 102 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 103 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = (struct sheet *)malloc(sizeof(struct sheet));
                            (yyval.table)->next = deepCopy((yyvsp[-1].table));
                            }
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 106 "goParse.y" /* yacc.c:1646  */
    {
        (yyval.table) = deepCopy((yyvsp[-1].table));
        (yyval.table)->retype = new int((yyval.table)->type);
        (yyval.table)->next = deepCopy((yyvsp[0].table));}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 118 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));
            
            auto xTmp = (yyval.table);
            std::list<std::string>* tmp = new std::list<std::string>();
            while(xTmp != NULL)
            {
                if(xTmp->type != LITER)
                    break;
                tmp->push_back(*(new std::string(xTmp->line)));
                xTmp = xTmp->next;
            }
            auto type = xTmp->type;
            for(auto it: *tmp)
                try{
                    vars->at(it);
                    Errors->push_back(makeErrorMsg(*app, str,
                                "redefinition",
                                it));
                }catch(std::out_of_range &ex)
                {
                    vars->insert(std::pair<std::string, int>(it, type));
                }
                
            }
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 145 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 146 "goParse.y" /* yacc.c:1646  */
    {
        (yyval.table) = deepCopy((yyvsp[-1].table));
        if((yyvsp[0].table) != NULL)
        {
            if((yyval.table)->type != (yyvsp[0].table)->type)
                Errors->push_back(makeErrorMsg(*app, str,"incompatible type in initialization",*(new std::string((yyvsp[-1].table)->line))));
        }
    }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 154 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = NULL;}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 155 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = NULL;}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 156 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 160 "goParse.y" /* yacc.c:1646  */
    {  
        (yyvsp[-1].table)->next = (yyvsp[0].table);
        (yyval.table) = deepCopy((yyvsp[-1].table));
    }
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 164 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 165 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = (yyvsp[0].table);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "goParse.y" /* yacc.c:1646  */
    {
        bool tmp = false;
        std::string sTmp((yyvsp[0].table)->line);
        try{
            vars->at(sTmp);
        }catch(std::out_of_range &ex){
            tmp = true;
        }
        if(tmp)
            try{
                funcions->at(sTmp);
                tmp = false;
            }catch(std::out_of_range &ex){
                tmp = true;
            }

        if(tmp)
            Errors->push_back(makeErrorMsg(*app, str+1,
                                "Undefined var",
                                sTmp));
    }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 205 "goParse.y" /* yacc.c:1646  */
    {}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 210 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 214 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = NULL;}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 215 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 216 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[-1].table));
                                (yyval.table)->next = deepCopy((yyvsp[0].table));}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 218 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 222 "goParse.y" /* yacc.c:1646  */
    {if((yyvsp[0].table) != NULL)(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 223 "goParse.y" /* yacc.c:1646  */
    {if((yyvsp[0].table) == NULL)(yyval.table) = (yyvsp[-1].table);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 226 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = NULL;}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 227 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = NULL;}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 240 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 241 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 245 "goParse.y" /* yacc.c:1646  */
    { (yyval.table) = deepCopy((yyvsp[-2].table));
                            (yyval.table)->type= TYPE_STR;}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 247 "goParse.y" /* yacc.c:1646  */
    { (yyval.table) = deepCopy((yyvsp[-2].table));
                            (yyval.table)->type= TYPE_STR;}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 249 "goParse.y" /* yacc.c:1646  */
    { (yyval.table) = deepCopy((yyvsp[0].table));
                            (yyval.table)->type= TYPE_BOOL;}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 251 "goParse.y" /* yacc.c:1646  */
    { (yyval.table) = deepCopy((yyvsp[0].table));
                            (yyval.table)->type= TYPE_BOOL;}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 253 "goParse.y" /* yacc.c:1646  */
    { (yyval.table) = deepCopy((yyvsp[0].table));
                            (yyval.table)->type= TYPE_INT;}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 258 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 265 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 269 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[-1].table));
                                        (yyval.table)->next = deepCopy((yyvsp[0].table));
                                        }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 272 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[-1].table));
                                        (yyval.table)->next = deepCopy((yyvsp[0].table));
                                        }
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 275 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = NULL;}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 279 "goParse.y" /* yacc.c:1646  */
    {
        vars->insert(std::pair<std::string,int>(*(new std::string((yyvsp[-2].table)->line)), (yyvsp[0].table)->type));
    }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 286 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 287 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 288 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 289 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 293 "goParse.y" /* yacc.c:1646  */
    {}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 297 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 298 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 299 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 300 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 304 "goParse.y" /* yacc.c:1646  */
    {}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 308 "goParse.y" /* yacc.c:1646  */
    {(yyval.table) = deepCopy((yyvsp[0].table));}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1810 "y.tab.c" /* yacc.c:1646  */
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
#line 311 "goParse.y" /* yacc.c:1906  */


void yyerror(const char* s)
{ 
}


int main(int argc, char **argv)
{
    app = new std::string(argv[0]);
    vars = new std::map<std::string, int>();
    funcions = new std::map<std::string, contain>();
    Errors = new std::list<std::string>();
    if(argc >= 2)   
        yyin = fopen(argv[1], "r");
    else
        yyin = fopen("tmp.go", "r");
    yylex();
    yyparse();
    fclose(yyin);
    std::cout << str << std:: endl;
    for(auto it: *Errors)
        std::cout << it << std::endl;
    return 0;
}
