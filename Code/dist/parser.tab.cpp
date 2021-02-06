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
#line 1 "src/parser.ypp" /* yacc.c:339  */

	#include <iostream>
	#include <bits/stdc++.h>
	#include "../src/symboltable/symbol.hpp"

	#include <typeinfo>	
	#include <stdio.h> 
	#include <stdlib.h>
	#include <string>
	#include <string.h>

	using namespace std;

	int yyparse();
	void yyerror(const char *s);

	void showstack(stack <int> s);
	int calculate(int token , int leftVal , int rightVal);

	int find_free_register(int* array , int size);

	extern FILE* yyin;
	extern int yylex();
	extern int yylineno;
	extern char* yytext;

	FILE* mips;

	stack <string> semantic_stack;

	string current_scope = "global";
	string current_variable_data_type = "NONE";

	SymbolTable st;
	Node* node;

	int temporal_registers[10] = {};

	int saved_regsiters[8] = {};
	

#line 108 "./dist/parser.tab.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_DIST_PARSER_TAB_HPP_INCLUDED
# define YY_YY_DIST_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KW_VOID = 258,
    KW_IF = 259,
    KW_RETURN = 260,
    KW_INT = 261,
    KW_ELSE = 262,
    KW_MAIN = 263,
    KW_FOR = 264,
    KW_BREAK = 265,
    KW_CHAR = 266,
    KW_WHILE = 267,
    KW_CONTINUE = 268,
    KW_ELSEIF = 269,
    NEW_LINE = 270,
    OTHER = 271,
    OP_ASSIGN = 272,
    OP_PLUS = 273,
    OP_MINUS = 274,
    OP_MULTIPLY = 275,
    OP_DIVIDE = 276,
    OP_LESS = 277,
    OP_LESS_EQUAL = 278,
    OP_EQUAL = 279,
    OP_NOT_EQUAL = 280,
    OP_GREATER = 281,
    OP_GREATER_EQUAL = 282,
    OP_BITWISE_OR = 283,
    OP_BITWISE_AND = 284,
    OP_BITWISE_XOR = 285,
    OP_LOGICAL_OR = 286,
    OP_LOGICAL_AND = 287,
    OP_LOGICAL_NOT = 288,
    ST_LPAR = 289,
    ST_RPAR = 290,
    ST_LCURL = 291,
    ST_RCURL = 292,
    ST_LBR = 293,
    ST_RBR = 294,
    ST_DOLLAR = 295,
    ST_COMMA = 296,
    ST_SEMICOLON = 297,
    LCHAR = 298,
    UCHAR = 299,
    NCHAR = 300,
    IDENTIFIER = 301,
    NUMBER = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "src/parser.ypp" /* yacc.c:355  */


	int intVal;
	char charVal;
	char* stringVal;


#line 204 "./dist/parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_DIST_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "./dist/parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   317

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    93,    93,    95,    95,    97,    97,    99,
      99,   101,   101,   103,   103,   104,   104,   104,   104,   104,
     104,   106,   108,   109,   125,   126,   142,   147,   149,   149,
     151,   151,   156,   170,   173,   173,   174,   174,   174,   175,
     175,   175,   175,   176,   176,   177,   177,   179,   179,   180,
     180,   180,   180,   186,   190,   194,   198,   202,   206,   210,
     214,   218,   222,   226,   230,   234,   238,   242,   247,   248,
     250,   251,   264,   267,   270,   273,   276,   279,   279,   280,
     280,   296,   296
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_VOID", "KW_IF", "KW_RETURN",
  "KW_INT", "KW_ELSE", "KW_MAIN", "KW_FOR", "KW_BREAK", "KW_CHAR",
  "KW_WHILE", "KW_CONTINUE", "KW_ELSEIF", "NEW_LINE", "OTHER", "OP_ASSIGN",
  "OP_PLUS", "OP_MINUS", "OP_MULTIPLY", "OP_DIVIDE", "OP_LESS",
  "OP_LESS_EQUAL", "OP_EQUAL", "OP_NOT_EQUAL", "OP_GREATER",
  "OP_GREATER_EQUAL", "OP_BITWISE_OR", "OP_BITWISE_AND", "OP_BITWISE_XOR",
  "OP_LOGICAL_OR", "OP_LOGICAL_AND", "OP_LOGICAL_NOT", "ST_LPAR",
  "ST_RPAR", "ST_LCURL", "ST_RCURL", "ST_LBR", "ST_RBR", "ST_DOLLAR",
  "ST_COMMA", "ST_SEMICOLON", "LCHAR", "UCHAR", "NCHAR", "IDENTIFIER",
  "NUMBER", "$accept", "program", "functions", "main", "$@1", "$@2",
  "function", "$@3", "$@4", "stmts", "stmt", "type", "stmt_declare", "ids",
  "stmt_call_function", "fun_arguments", "args_part2", "stmt_assignment",
  "stmt_return", "stmt_if", "matched", "$@5", "$@6", "elseif", "$@7",
  "$@8", "else", "$@9", "unmatched", "$@10", "stmt_while", "$@11",
  "loop_stmts", "expression", "arguments", "args_part1", "$@12", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -66

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-66)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -66,    12,    28,   -66,    11,    15,   -66,   -66,   -16,     3,
       5,    21,   -66,   -66,   -66,   -66,    27,    27,    27,    27,
     -66,   -66,    31,    64,   -66,    70,    77,    78,   -66,    74,
      85,    86,    87,    84,    16,    16,    16,    16,    27,   -66,
      92,    45,    94,    -4,    95,    16,    83,   -66,    91,   -66,
     -66,   -66,   -66,   -66,   -66,   113,   114,   115,   -66,   -66,
      45,    45,    45,   -66,   -66,   -66,   119,   -66,   -66,   141,
     -66,    45,    27,   -66,   -66,    42,   -66,   -66,   -66,   -66,
      45,    45,    60,   -66,   187,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
     -66,    45,   164,   120,   -66,    45,   -66,   108,   -66,   205,
     223,   -66,    60,    60,   -66,   -66,    66,    66,    75,    75,
      97,    97,   290,   290,   290,   277,   277,   241,   -66,   -66,
     117,    42,   138,   139,   140,   -66,   -66,    16,    16,   -66,
     142,   143,    63,   -66,   -66,   116,   137,   -66,   -66,    18,
     -66,   -66,   161,   144,   -66,   -66,   -66,   -66,    16,    45,
     162,   259,   -66,   165,    16,   163,   -66,    18,   -66
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     0,     7,    11,     5,     9,    78,    78,    78,    78,
      21,    22,     0,     0,    77,     0,     0,     0,    79,     0,
       0,     0,     0,    31,    14,    14,    14,    14,     0,    80,
       0,     0,     0,     0,     0,    14,     0,    15,     0,    16,
      18,    17,    34,    35,    19,     0,     0,     0,    30,    36,
       0,     0,     0,    75,    74,    73,    71,    72,    76,     0,
      47,     0,    29,     8,    13,     0,    20,    12,     6,    10,
       0,     0,    69,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    28,     0,    24,     0,    23,     0,
       0,    70,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    65,    66,    67,    63,    64,     0,    32,    27,
       0,     0,     0,     0,     0,    26,    25,    14,    14,    52,
       0,     0,     0,    37,    46,     0,     0,    48,    49,     0,
      50,    51,     0,     0,    38,    42,    43,    39,    14,     0,
       0,     0,    44,     0,    14,     0,    40,     0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -31,
     -66,    -9,   -66,   -65,   -34,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,    35,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -45,    53,   -14,   -66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    18,    16,     7,    19,    17,    44,
      45,    46,    47,   108,    68,   103,    39,    49,    50,    51,
      52,    80,   149,   154,   159,   167,   155,   158,    53,    81,
      54,   101,   142,    69,    23,    24,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,    48,    48,    48,    55,    56,    57,    22,    22,    22,
      22,    48,     3,    71,    74,    82,    83,    84,    12,     8,
      40,    41,    20,    10,    58,   152,   102,    21,    42,    22,
      72,     4,   153,    20,     5,   109,   110,    13,    21,    14,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    15,   127,     9,   104,   105,
     130,    11,    43,    22,    60,   135,   136,    40,    41,    20,
      25,    26,    27,   145,    21,    42,   146,    28,    61,    62,
      87,    88,   106,   107,    85,    86,    87,    88,    63,    64,
      65,    66,    67,    85,    86,    87,    88,    89,    90,    29,
     147,    93,    94,    48,    48,    30,   140,   141,    48,    43,
      34,   148,    31,    32,   161,    85,    86,    87,    88,    89,
      90,    35,    36,    37,    48,    38,    59,   160,    70,    75,
      48,    76,    73,   165,   105,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      77,    78,    79,    72,   131,   129,   150,   106,   107,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   137,   138,   139,   151,   157,   143,
     144,   100,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   156,     0,   162,
     166,   164,   168,     0,   128,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       0,     0,   111,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,     0,
     132,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     0,     0,   133,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     0,     0,   134,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,     0,   163,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94
};

static const yytype_int16 yycheck[] =
{
      34,    35,    36,    37,    35,    36,    37,    16,    17,    18,
      19,    45,     0,    17,    45,    60,    61,    62,    34,     8,
       4,     5,     6,     8,    38,     7,    71,    11,    12,    38,
      34,     3,    14,     6,     6,    80,    81,    34,    11,    34,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    34,   101,    46,    72,    17,
     105,    46,    46,    72,    19,   130,   131,     4,     5,     6,
      17,    18,    19,    10,    11,    12,    13,    46,    33,    34,
      20,    21,    40,    41,    18,    19,    20,    21,    43,    44,
      45,    46,    47,    18,    19,    20,    21,    22,    23,    35,
      37,    26,    27,   137,   138,    35,   137,   138,   142,    46,
      36,   142,    35,    35,   159,    18,    19,    20,    21,    22,
      23,    36,    36,    36,   158,    41,    34,   158,    34,    46,
     164,    40,    37,   164,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      37,    37,    37,    34,    46,    35,    40,    40,    41,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    36,    36,    36,    40,    34,    37,
      37,    40,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    36,    -1,    37,
      37,    36,   167,    -1,    40,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    50,     0,     3,     6,    51,    54,     8,    46,
       8,    46,    34,    34,    34,    34,    53,    56,    52,    55,
       6,    11,    59,    82,    83,    82,    82,    82,    46,    35,
      35,    35,    35,    84,    36,    36,    36,    36,    41,    64,
       4,     5,    12,    46,    57,    58,    59,    60,    62,    65,
      66,    67,    68,    76,    78,    57,    57,    57,    83,    34,
      19,    33,    34,    43,    44,    45,    46,    47,    62,    81,
      34,    17,    34,    37,    57,    46,    40,    37,    37,    37,
      69,    77,    81,    81,    81,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      40,    79,    81,    63,    83,    17,    40,    41,    61,    81,
      81,    35,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    40,    35,
      81,    46,    35,    35,    35,    61,    61,    36,    36,    36,
      57,    57,    80,    37,    37,    10,    13,    37,    57,    70,
      40,    40,     7,    14,    71,    74,    36,    34,    75,    72,
      57,    81,    37,    35,    36,    57,    37,    73,    71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    52,    51,    53,    51,    55,
      54,    56,    54,    57,    57,    58,    58,    58,    58,    58,
      58,    59,    59,    60,    61,    61,    61,    62,    63,    63,
      64,    64,    65,    66,    67,    67,    69,    70,    68,    72,
      73,    71,    71,    75,    74,    77,    76,    79,    78,    80,
      80,    80,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    84,
      83,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     0,     9,     0,     9,     0,
       9,     0,     9,     2,     0,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     3,     3,     4,     1,     0,
       2,     0,     4,     3,     1,     1,     0,     0,    10,     0,
       0,    10,     1,     0,     5,     0,     8,     0,     8,     2,
       3,     3,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     0,     0,
       4,     2,     0
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
        case 5:
#line 95 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = "main"; semantic_stack.push(current_scope);}
#line 1448 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = semantic_stack.top(); semantic_stack.pop();}
#line 1454 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 97 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = "main";  semantic_stack.push(current_scope);}
#line 1460 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = semantic_stack.top(); semantic_stack.pop();}
#line 1466 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 99 "src/parser.ypp" /* yacc.c:1646  */
    {string str((yyvsp[-1].stringVal)); current_scope = str; semantic_stack.push(current_scope);}
#line 1472 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 99 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = semantic_stack.top(); semantic_stack.pop();}
#line 1478 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 101 "src/parser.ypp" /* yacc.c:1646  */
    {string str((yyvsp[-1].stringVal)); current_scope = str; semantic_stack.push(current_scope);}
#line 1484 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 101 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = semantic_stack.top(); semantic_stack.pop();}
#line 1490 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 106 "src/parser.ypp" /* yacc.c:1646  */
    {current_variable_data_type = "int";}
#line 1496 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 108 "src/parser.ypp" /* yacc.c:1646  */
    {current_variable_data_type = "char";}
#line 1502 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 109 "src/parser.ypp" /* yacc.c:1646  */
    {

						string str((yyvsp[-1].stringVal));
						Node* result = st.find(str , semantic_stack);
						if(result == NULL)
						{
							int index_of_free_register = find_free_register(saved_regsiters , 8);
							string register_name = "$s" + to_string(index_of_free_register);
							st.insert(str,current_scope,current_variable_data_type,yylineno,register_name,"" , (yyvsp[0].intVal));
						}
						else
						{
							yyerror("multiple declaration of variable");
							exit(1);
						}
					}
#line 1523 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 125 "src/parser.ypp" /* yacc.c:1646  */
    {(yyval.intVal) = 0;}
#line 1529 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 126 "src/parser.ypp" /* yacc.c:1646  */
    {

						string str((yyvsp[-1].stringVal));
						Node* result = st.find(str , semantic_stack);
						if(result == NULL)
						{
							int index_of_free_register = find_free_register(saved_regsiters , 8);
							string register_name = "$s" + to_string(index_of_free_register);
							st.insert(str,current_scope,current_variable_data_type,yylineno,register_name,"",(yyvsp[0].intVal));
						}
						else
						{
							yyerror("multiple declaration of variable");
							exit(1);
						}
					}
#line 1550 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 142 "src/parser.ypp" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-1].intVal);}
#line 1556 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 156 "src/parser.ypp" /* yacc.c:1646  */
    {
						string str((yyvsp[-3].stringVal));
						Node* result = st.find(str , semantic_stack);
						if(result == NULL)
						{
							yyerror("variable is not declared");
							exit(1);
						}
						else
						{
							result->value = (yyvsp[-1].intVal);
						}
					}
#line 1574 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 174 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = current_scope + "__if"; semantic_stack.push(current_scope);}
#line 1580 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 174 "src/parser.ypp" /* yacc.c:1646  */
    { semantic_stack.pop(); current_scope = semantic_stack.top(); }
#line 1586 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 175 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = current_scope + "__elseif"; semantic_stack.push(current_scope);}
#line 1592 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 175 "src/parser.ypp" /* yacc.c:1646  */
    { semantic_stack.pop(); current_scope = semantic_stack.top(); }
#line 1598 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 176 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = current_scope + "__else"; semantic_stack.push(current_scope);}
#line 1604 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 176 "src/parser.ypp" /* yacc.c:1646  */
    { semantic_stack.pop(); current_scope = semantic_stack.top(); }
#line 1610 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 177 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = current_scope + "__if"; semantic_stack.push(current_scope);}
#line 1616 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 177 "src/parser.ypp" /* yacc.c:1646  */
    { semantic_stack.pop(); current_scope = semantic_stack.top(); }
#line 1622 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 179 "src/parser.ypp" /* yacc.c:1646  */
    {current_scope = current_scope + "__while"; semantic_stack.push(current_scope);}
#line 1628 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "src/parser.ypp" /* yacc.c:1646  */
    { semantic_stack.pop(); current_scope = semantic_stack.top(); }
#line 1634 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 186 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_PLUS , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1642 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_MINUS , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1650 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 194 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_MULTIPLY , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1658 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 198 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_DIVIDE , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1666 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 202 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_LESS , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1674 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 206 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_LESS_EQUAL , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1682 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 210 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_EQUAL , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1690 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 214 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_NOT_EQUAL , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1698 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 218 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_GREATER , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1706 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 222 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_GREATER_EQUAL , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1714 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 226 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_LOGICAL_OR , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1722 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 230 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_LOGICAL_AND , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1730 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 234 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_BITWISE_OR , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1738 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 238 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_BITWISE_AND , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1746 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 242 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = calculate(OP_BITWISE_XOR , (yyvsp[-2].intVal) , (yyvsp[0].intVal));
					}
#line 1754 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 247 "src/parser.ypp" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal) == 0 ? 1 : 0;}
#line 1760 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 248 "src/parser.ypp" /* yacc.c:1646  */
    {(yyval.intVal) = -1 * (yyvsp[0].intVal);}
#line 1766 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 250 "src/parser.ypp" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[-1].intVal);}
#line 1772 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 251 "src/parser.ypp" /* yacc.c:1646  */
    {
						string str((yyvsp[0].stringVal));
						Node* result = st.find(str , semantic_stack);
						if(result == NULL)
						{
							yyerror("variable not found");
							exit(1);
						}
						else
						{
							(yyval.intVal) = result->value;
						}
					}
#line 1790 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 264 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = (yyvsp[0].intVal);
					}
#line 1798 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 267 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = (yyvsp[0].charVal);
					}
#line 1806 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 270 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = (yyvsp[0].charVal);
					}
#line 1814 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 273 "src/parser.ypp" /* yacc.c:1646  */
    {
						(yyval.intVal) = (yyvsp[0].charVal);
					}
#line 1822 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 276 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.intVal) = (yyvsp[0].intVal) ;}
#line 1828 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 280 "src/parser.ypp" /* yacc.c:1646  */
    {

						string str((yyvsp[0].stringVal));
						Node* result = st.find(str , semantic_stack);
						if(result == NULL)
						{
							int index_of_free_register = find_free_register(saved_regsiters , 8);
							string register_name = "$s" + to_string(index_of_free_register);
							st.insert(str,current_scope,current_variable_data_type,yylineno,register_name,"" , 0);
						}
						else
						{
							yyerror("multiple declaration of variable");
							exit(1);
						}
					}
#line 1849 "./dist/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1853 "./dist/parser.tab.cpp" /* yacc.c:1646  */
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
#line 299 "src/parser.ypp" /* yacc.c:1906  */



int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	// it will be called in the expression of if

	mips = fopen("./mips" , "w+");

    if(!yyparse())
		printf("\nParsing Complete\n");
	else
	{
		fprintf(stderr,"\nParsing Failed\n");
		exit(0);
	}
	
	// closing the opened file
	fclose(mips);
	fclose(yyin);
    return 0;
}

void yyerror(const char *s) {
	fprintf(stderr,"Syntex Error in line number : %d : %s\n", yylineno, s);
}


int find_free_register(int* array , int size)
{
	for(int i = 0;i < size;i++)
	{
		if(array[i] == 0)
		{
			array[i] = 1;
			return i;
		}
	}
	return -1;
}

void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 


int calculate(int token , int leftVal , int rightVal)
{
    switch (token)
    {
		case OP_PLUS:
			return (leftVal + rightVal);
			break;
		case OP_MINUS:
			return (leftVal - rightVal);
			break;
		case OP_MULTIPLY:
			return (leftVal * rightVal);
			break;
		case OP_DIVIDE:
			if(rightVal == 0)
			{
				yyerror("Division by Zero");
				exit(1);
			}
			return (leftVal / rightVal);
			break;
		case OP_LESS:
			return (leftVal < rightVal);
			break;
		case OP_LESS_EQUAL:
			return (leftVal <= rightVal);
			break;
		case OP_EQUAL:
			return (leftVal == rightVal);
			break;
		case OP_NOT_EQUAL:
			return (leftVal != rightVal);
			break;
		case OP_GREATER:
			return (leftVal > rightVal);
			break;
		case OP_GREATER_EQUAL:
			return (leftVal >= rightVal);
			break;
		case OP_LOGICAL_OR:
			return (leftVal || rightVal);
			break;
		case OP_LOGICAL_AND:
			return (leftVal && rightVal);
			break;
		case OP_BITWISE_OR:
			return (leftVal | rightVal);
			break;
		case OP_BITWISE_AND:
			return (leftVal & rightVal);
			break;
		case OP_BITWISE_XOR:
			return (leftVal ^ rightVal);
			break;
		case OP_LOGICAL_NOT:
			return (!leftVal);
			break;
		
    }
	return 0;
}
