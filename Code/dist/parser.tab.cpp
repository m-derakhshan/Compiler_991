/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 9 "src/parser.ypp"

	#include <iostream>
	#include <fstream> 
	#include <bits/stdc++.h>

	#include "../src/symboltable/symbol.hpp"
	#include "../src/mips_generator/mips.hpp"
	#include "../src/utility/util.hpp"

	#include <typeinfo>	
	#include <stdio.h> 
	#include <stdlib.h>
	#include <string>
	#include <string.h>

	using namespace std;

	ofstream mips;
	stack <string> semantic_stack;
	stack <string> function_call_stack;
	stack <string> while_stack;

	stack <string> end_if_stack;
	stack <string> if_scope_stack;

	map <string,stack <string>> map_of_call_stacks;

	string current_scope = "global";
	string current_variable_data_type = "NONE";
	string current_temp_register = "NONE";

	SymbolTable st;
	MIPSCodeGenerator cg;

	int temporal_registers[10] = {};
	int saved_regsiters[8] = {};
	int args_registers[4] = {};
	

#line 111 "./dist/parser.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_KW_VOID = 3,                    /* KW_VOID  */
  YYSYMBOL_KW_IF = 4,                      /* KW_IF  */
  YYSYMBOL_KW_RETURN = 5,                  /* KW_RETURN  */
  YYSYMBOL_KW_INT = 6,                     /* KW_INT  */
  YYSYMBOL_KW_ELSE = 7,                    /* KW_ELSE  */
  YYSYMBOL_KW_MAIN = 8,                    /* KW_MAIN  */
  YYSYMBOL_KW_FOR = 9,                     /* KW_FOR  */
  YYSYMBOL_KW_BREAK = 10,                  /* KW_BREAK  */
  YYSYMBOL_KW_CHAR = 11,                   /* KW_CHAR  */
  YYSYMBOL_KW_WHILE = 12,                  /* KW_WHILE  */
  YYSYMBOL_KW_CONTINUE = 13,               /* KW_CONTINUE  */
  YYSYMBOL_KW_ELSEIF = 14,                 /* KW_ELSEIF  */
  YYSYMBOL_NEW_LINE = 15,                  /* NEW_LINE  */
  YYSYMBOL_OTHER = 16,                     /* OTHER  */
  YYSYMBOL_OP_ASSIGN = 17,                 /* OP_ASSIGN  */
  YYSYMBOL_OP_PLUS = 18,                   /* OP_PLUS  */
  YYSYMBOL_OP_MINUS = 19,                  /* OP_MINUS  */
  YYSYMBOL_OP_MULTIPLY = 20,               /* OP_MULTIPLY  */
  YYSYMBOL_OP_DIVIDE = 21,                 /* OP_DIVIDE  */
  YYSYMBOL_OP_LESS = 22,                   /* OP_LESS  */
  YYSYMBOL_OP_LESS_EQUAL = 23,             /* OP_LESS_EQUAL  */
  YYSYMBOL_OP_EQUAL = 24,                  /* OP_EQUAL  */
  YYSYMBOL_OP_NOT_EQUAL = 25,              /* OP_NOT_EQUAL  */
  YYSYMBOL_OP_GREATER = 26,                /* OP_GREATER  */
  YYSYMBOL_OP_GREATER_EQUAL = 27,          /* OP_GREATER_EQUAL  */
  YYSYMBOL_OP_BITWISE_OR = 28,             /* OP_BITWISE_OR  */
  YYSYMBOL_OP_BITWISE_AND = 29,            /* OP_BITWISE_AND  */
  YYSYMBOL_OP_BITWISE_XOR = 30,            /* OP_BITWISE_XOR  */
  YYSYMBOL_OP_LOGICAL_OR = 31,             /* OP_LOGICAL_OR  */
  YYSYMBOL_OP_LOGICAL_AND = 32,            /* OP_LOGICAL_AND  */
  YYSYMBOL_OP_LOGICAL_NOT = 33,            /* OP_LOGICAL_NOT  */
  YYSYMBOL_ST_LPAR = 34,                   /* ST_LPAR  */
  YYSYMBOL_ST_RPAR = 35,                   /* ST_RPAR  */
  YYSYMBOL_ST_LCURL = 36,                  /* ST_LCURL  */
  YYSYMBOL_ST_RCURL = 37,                  /* ST_RCURL  */
  YYSYMBOL_ST_LBR = 38,                    /* ST_LBR  */
  YYSYMBOL_ST_RBR = 39,                    /* ST_RBR  */
  YYSYMBOL_ST_DOLLAR = 40,                 /* ST_DOLLAR  */
  YYSYMBOL_ST_COMMA = 41,                  /* ST_COMMA  */
  YYSYMBOL_ST_SEMICOLON = 42,              /* ST_SEMICOLON  */
  YYSYMBOL_LCHAR = 43,                     /* LCHAR  */
  YYSYMBOL_UCHAR = 44,                     /* UCHAR  */
  YYSYMBOL_NCHAR = 45,                     /* NCHAR  */
  YYSYMBOL_IDENTIFIER = 46,                /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 47,                    /* NUMBER  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_start = 49,                     /* start  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_global_declare = 52,            /* global_declare  */
  YYSYMBOL_functions = 53,                 /* functions  */
  YYSYMBOL_main = 54,                      /* main  */
  YYSYMBOL_55_2 = 55,                      /* $@2  */
  YYSYMBOL_56_3 = 56,                      /* $@3  */
  YYSYMBOL_function = 57,                  /* function  */
  YYSYMBOL_58_4 = 58,                      /* $@4  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_60_6 = 60,                      /* $@6  */
  YYSYMBOL_61_7 = 61,                      /* $@7  */
  YYSYMBOL_stmts = 62,                     /* stmts  */
  YYSYMBOL_63_8 = 63,                      /* $@8  */
  YYSYMBOL_stmt = 64,                      /* stmt  */
  YYSYMBOL_65_9 = 65,                      /* $@9  */
  YYSYMBOL_type = 66,                      /* type  */
  YYSYMBOL_stmt_declare = 67,              /* stmt_declare  */
  YYSYMBOL_ids = 68,                       /* ids  */
  YYSYMBOL_stmt_call_function = 69,        /* stmt_call_function  */
  YYSYMBOL_70_10 = 70,                     /* $@10  */
  YYSYMBOL_fun_arguments = 71,             /* fun_arguments  */
  YYSYMBOL_fun_args_part1 = 72,            /* fun_args_part1  */
  YYSYMBOL_73_11 = 73,                     /* $@11  */
  YYSYMBOL_fun_args_part2 = 74,            /* fun_args_part2  */
  YYSYMBOL_stmt_assignment = 75,           /* stmt_assignment  */
  YYSYMBOL_stmt_return = 76,               /* stmt_return  */
  YYSYMBOL_stmt_if = 77,                   /* stmt_if  */
  YYSYMBOL_78_12 = 78,                     /* $@12  */
  YYSYMBOL_79_13 = 79,                     /* $@13  */
  YYSYMBOL_80_14 = 80,                     /* $@14  */
  YYSYMBOL_81_15 = 81,                     /* $@15  */
  YYSYMBOL_elseif = 82,                    /* elseif  */
  YYSYMBOL_83_16 = 83,                     /* $@16  */
  YYSYMBOL_84_17 = 84,                     /* $@17  */
  YYSYMBOL_85_18 = 85,                     /* $@18  */
  YYSYMBOL_else = 86,                      /* else  */
  YYSYMBOL_87_19 = 87,                     /* $@19  */
  YYSYMBOL_stmt_for = 88,                  /* stmt_for  */
  YYSYMBOL_89_20 = 89,                     /* $@20  */
  YYSYMBOL_90_21 = 90,                     /* $@21  */
  YYSYMBOL_stmt_for_assign_declare = 91,   /* stmt_for_assign_declare  */
  YYSYMBOL_stmt_for_step = 92,             /* stmt_for_step  */
  YYSYMBOL_stmt_while = 93,                /* stmt_while  */
  YYSYMBOL_94_22 = 94,                     /* $@22  */
  YYSYMBOL_95_23 = 95,                     /* $@23  */
  YYSYMBOL_loop_stmts = 96,                /* loop_stmts  */
  YYSYMBOL_97_24 = 97,                     /* $@24  */
  YYSYMBOL_98_25 = 98,                     /* $@25  */
  YYSYMBOL_expression = 99,                /* expression  */
  YYSYMBOL_arguments = 100,                /* arguments  */
  YYSYMBOL_args_part1 = 101,               /* args_part1  */
  YYSYMBOL_102_26 = 102,                   /* $@26  */
  YYSYMBOL_args_part2 = 103                /* args_part2  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,    95,    95,    95,    95,    97,    99,    99,   101,   101,
     103,   103,   109,   109,   115,   120,   122,   115,   131,   131,
     144,   144,   144,   145,   146,   147,   148,   149,   150,   150,
     150,   150,   150,   150,   163,   165,   166,   183,   184,   201,
     210,   210,   223,   223,   224,   224,   233,   233,   238,   253,
     261,   262,   267,   268,   261,   270,   274,   276,   270,   282,
     283,   283,   290,   293,   298,   292,   309,   309,   311,   314,
     320,   313,   330,   331,   331,   332,   332,   333,   339,   351,
     361,   371,   382,   393,   404,   415,   425,   435,   445,   455,
     465,   475,   485,   496,   505,   515,   518,   535,   544,   552,
     561,   570,   579,   579,   580,   580,   595,   595
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "KW_VOID", "KW_IF",
  "KW_RETURN", "KW_INT", "KW_ELSE", "KW_MAIN", "KW_FOR", "KW_BREAK",
  "KW_CHAR", "KW_WHILE", "KW_CONTINUE", "KW_ELSEIF", "NEW_LINE", "OTHER",
  "OP_ASSIGN", "OP_PLUS", "OP_MINUS", "OP_MULTIPLY", "OP_DIVIDE",
  "OP_LESS", "OP_LESS_EQUAL", "OP_EQUAL", "OP_NOT_EQUAL", "OP_GREATER",
  "OP_GREATER_EQUAL", "OP_BITWISE_OR", "OP_BITWISE_AND", "OP_BITWISE_XOR",
  "OP_LOGICAL_OR", "OP_LOGICAL_AND", "OP_LOGICAL_NOT", "ST_LPAR",
  "ST_RPAR", "ST_LCURL", "ST_RCURL", "ST_LBR", "ST_RBR", "ST_DOLLAR",
  "ST_COMMA", "ST_SEMICOLON", "LCHAR", "UCHAR", "NCHAR", "IDENTIFIER",
  "NUMBER", "$accept", "start", "$@1", "program", "global_declare",
  "functions", "main", "$@2", "$@3", "function", "$@4", "$@5", "$@6",
  "$@7", "stmts", "$@8", "stmt", "$@9", "type", "stmt_declare", "ids",
  "stmt_call_function", "$@10", "fun_arguments", "fun_args_part1", "$@11",
  "fun_args_part2", "stmt_assignment", "stmt_return", "stmt_if", "$@12",
  "$@13", "$@14", "$@15", "elseif", "$@16", "$@17", "$@18", "else", "$@19",
  "stmt_for", "$@20", "$@21", "stmt_for_assign_declare", "stmt_for_step",
  "stmt_while", "$@22", "$@23", "loop_stmts", "$@24", "$@25", "expression",
  "arguments", "args_part1", "$@26", "args_part2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-33)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -85,    26,   -85,    69,   -85,   -85,   -85,    11,   -85,   -85,
      76,    33,    -1,     3,   -85,   -85,    57,   -85,    20,   -85,
      10,    17,    52,    53,    57,    57,    57,   -85,   -85,   -85,
      54,   -85,   -85,   168,    33,   -85,   -85,   -85,   -85,     4,
     -85,   284,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,   -85,   -85,
      69,    69,    69,    69,   -85,   -85,   -85,   338,     4,     4,
     -85,   -85,   161,   161,   103,   103,   148,   148,   137,   137,
     137,   353,   353,    21,    58,   -85,    62,    63,    71,    72,
      67,   -85,    74,    75,    78,    79,   -85,    57,   -85,    86,
      49,    49,    49,   -85,   -85,    69,   -85,   -85,    57,    60,
      77,    85,   105,   -11,   109,   -85,   112,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   116,   135,    49,   -85,   139,   192,
      37,   -85,   -85,   -85,    57,   -85,   138,   -85,   -85,   -85,
     -85,   -85,   -85,    95,   -85,   -85,   -85,    57,   215,   -85,
     140,    57,    57,   338,   -85,   -85,   302,   238,   141,   -85,
     -85,   147,   165,   129,   -85,    49,   185,   169,    59,   166,
      57,   170,    77,   105,   -85,   -85,   -85,   261,   -85,   167,
     186,     5,   -85,   128,   -85,   -85,   189,   171,   -85,   -85,
     -85,   -85,   -85,    49,    57,   190,   320,   -85,   -85,   193,
      49,   191,   -85,     5,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     2,     1,     7,    34,    35,     9,     0,     6,     3,
       0,     0,     0,     0,     5,     8,     0,    37,     0,    36,
       0,     0,     0,     0,     0,     0,     0,   100,    99,    98,
      96,    97,   101,     0,     0,    12,    18,    10,    14,    94,
      93,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    38,
     103,   103,   103,   103,    95,    40,    42,    44,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    90,    91,
      92,    88,    89,     0,     0,   102,     0,     0,     0,     0,
      47,   104,     0,     0,     0,     0,    41,     0,    45,   107,
      22,    22,    22,    15,    46,     0,   105,    50,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    23,    30,    24,
      28,    27,    31,    29,     0,     0,    22,   106,     0,     0,
       0,    25,    69,    26,     0,    13,    22,    33,    19,    11,
      16,    51,    49,     0,    67,    66,    63,     0,     0,    21,
       0,     0,     0,    70,    48,    17,     0,     0,     0,    52,
      64,     0,     0,     0,    77,    22,     0,     0,    22,     0,
       0,     0,     0,     0,    71,    72,    53,     0,    77,     0,
       0,    62,    68,    22,    74,    76,     0,     0,    54,    59,
      65,    60,    55,    22,     0,     0,     0,    61,    56,     0,
      22,     0,    57,    62,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -80,   -85,   -85,   -85,   -58,    -2,
      44,   -84,   -85,   -85,   133,   -85,   -85,   101,   -85,   -85,
     -85,   -85,   -85,   -85,    45,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    73,   -85,
     -85,   -16,   -48,   144,   -85,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,     9,     6,    10,    14,    62,    60,    15,
      63,   126,   150,    61,   175,   136,   115,   116,     7,   117,
      19,    32,    89,    65,    66,    90,    98,   119,   120,   121,
     128,   151,   162,   181,   188,   194,   199,   203,   189,   193,
     122,   152,   163,   146,   167,   123,   147,   158,   168,   179,
     180,    67,    84,    85,    99,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,     8,    83,    83,    83,    83,   134,    20,    39,    40,
      41,    22,   186,    86,    87,    88,   118,   118,   118,   187,
     114,   124,   125,    42,    45,    46,     2,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,   118,     4,    35,    21,   140,    83,     5,    23,
      16,    36,   118,   107,   108,     4,   149,    11,   109,   110,
       5,   111,   112,   107,   108,     4,    34,    91,   109,   172,
       5,   111,   173,    17,    18,     4,    24,    58,    59,    12,
       5,   118,    13,   143,   118,   169,    37,    38,    42,   -32,
      25,    26,   129,    92,   130,   113,   174,    93,    94,   118,
      27,    28,    29,    30,    31,   113,    95,    96,    97,   118,
     100,   101,   134,   195,   102,   103,   118,   131,   148,   132,
     201,    43,    44,    45,    46,    47,    48,   105,   144,    51,
      52,   153,   107,   108,     4,   156,   157,   109,   172,     5,
     111,   173,   107,   108,     4,   133,   135,   109,   110,     5,
     111,   112,   137,   138,   177,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   190,    43,    44,    45,    46,
      47,    48,   139,   141,   113,   166,   161,   155,   196,    43,
      44,    45,    46,   164,   113,    16,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   165,   170,   176,   171,   192,   178,   184,    17,    18,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,   191,   185,   197,   202,   200,
     104,   145,   142,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,   204,   127,
       0,   183,     0,     0,     0,   154,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,   160,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,   182,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     0,     0,    64,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,     0,     0,   159,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     0,     0,   198,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55
};

static const yytype_int16 yycheck[] =
{
      16,     3,    60,    61,    62,    63,    17,     8,    24,    25,
      26,     8,     7,    61,    62,    63,   100,   101,   102,    14,
     100,   101,   102,    34,    20,    21,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,   126,     6,    34,    46,   126,   105,    11,    46,
      17,    34,   136,     4,     5,     6,   136,    46,     9,    10,
      11,    12,    13,     4,     5,     6,    46,    46,     9,    10,
      11,    12,    13,    40,    41,     6,    19,    33,    34,     3,
      11,   165,     6,    46,   168,   165,    34,    34,    34,    40,
      33,    34,   108,    35,    34,    46,    37,    35,    35,   183,
      43,    44,    45,    46,    47,    46,    35,    35,    41,   193,
      36,    36,    17,   193,    36,    36,   200,    40,   134,    34,
     200,    18,    19,    20,    21,    22,    23,    41,   130,    26,
      27,   147,     4,     5,     6,   151,   152,     9,    10,    11,
      12,    13,     4,     5,     6,    40,    37,     9,    10,    11,
      12,    13,    40,    37,   170,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    37,    18,    19,    20,    21,
      22,    23,    37,    34,    46,    46,    35,    37,   194,    18,
      19,    20,    21,    36,    46,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    36,    17,    37,    35,    34,    36,    40,    40,    41,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    36,    40,    37,    37,    36,
      97,   130,    40,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   203,   105,
      -1,   178,    -1,    -1,    -1,    40,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,     0,    50,     6,    11,    52,    66,    67,    51,
      53,    46,     3,     6,    54,    57,    17,    40,    41,    68,
       8,    46,     8,    46,    19,    33,    34,    43,    44,    45,
      46,    47,    69,    99,    46,    34,    34,    34,    34,    99,
      99,    99,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    68,    68,
      56,    61,    55,    58,    35,    71,    72,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    66,   100,   101,   100,   100,   100,    70,
      73,    46,    35,    35,    35,    35,    35,    41,    74,   102,
      36,    36,    36,    36,    72,    41,   103,     4,     5,     9,
      10,    12,    13,    46,    62,    64,    65,    67,    69,    75,
      76,    77,    88,    93,    62,    62,    59,   101,    78,    99,
      34,    40,    34,    40,    17,    37,    63,    40,    37,    37,
      62,    34,    40,    46,    67,    75,    91,    94,    99,    62,
      60,    79,    89,    99,    40,    37,    99,    99,    95,    35,
      40,    35,    80,    90,    36,    36,    46,    92,    96,    62,
      17,    35,    10,    13,    37,    62,    37,    99,    36,    97,
      98,    81,    40,    96,    40,    40,     7,    14,    82,    86,
      37,    36,    34,    87,    83,    62,    99,    37,    35,    84,
      36,    62,    37,    85,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    49,    51,    52,    52,    53,    53,
      55,    54,    56,    54,    58,    59,    60,    57,    61,    57,
      63,    62,    62,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    64,    66,    66,    67,    68,    68,    68,
      70,    69,    71,    71,    73,    72,    74,    74,    75,    76,
      78,    79,    80,    81,    77,    83,    84,    85,    82,    82,
      87,    86,    86,    89,    90,    88,    91,    91,    92,    94,
      95,    93,    96,    97,    96,    98,    96,    96,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   102,   101,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     1,     0,     2,     0,
       0,     9,     0,     9,     0,     0,     0,    11,     0,     9,
       0,     3,     0,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     3,     1,     3,     3,
       0,     5,     1,     0,     0,     3,     2,     0,     4,     3,
       0,     0,     0,     0,    12,     0,     0,     0,    11,     1,
       0,     5,     0,     0,     0,    12,     1,     1,     4,     0,
       0,     9,     2,     0,     4,     0,     4,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     4,     2,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* $@1: %empty  */
#line 95 "src/parser.ypp"
                                      {semantic_stack.push(current_scope);}
#line 1653 "./dist/parser.tab.cpp"
    break;

  case 10: /* $@2: %empty  */
#line 103 "src/parser.ypp"
                                                       {
						current_scope = "main";
						semantic_stack.push(current_scope);
						cg.add_label(current_scope);
					}
#line 1663 "./dist/parser.tab.cpp"
    break;

  case 11: /* main: KW_INT KW_MAIN ST_LPAR $@2 arguments ST_RPAR ST_LCURL stmts ST_RCURL  */
#line 107 "src/parser.ypp"
                                                                                     {current_scope = semantic_stack.top(); semantic_stack.pop();}
#line 1669 "./dist/parser.tab.cpp"
    break;

  case 12: /* $@3: %empty  */
#line 109 "src/parser.ypp"
                                                                {
						current_scope = "main";
						semantic_stack.push(current_scope);
						cg.add_label(current_scope);
					}
#line 1679 "./dist/parser.tab.cpp"
    break;

  case 13: /* main: KW_VOID KW_MAIN ST_LPAR $@3 arguments ST_RPAR ST_LCURL stmts ST_RCURL  */
#line 113 "src/parser.ypp"
                                                                                    {current_scope = semantic_stack.top(); semantic_stack.pop();}
#line 1685 "./dist/parser.tab.cpp"
    break;

  case 14: /* $@4: %empty  */
#line 115 "src/parser.ypp"
                                                  {
						string str((yyvsp[-1].stringVal));
						current_scope = str;
						semantic_stack.push(current_scope);
						cg.add_label(current_scope);
					}
#line 1696 "./dist/parser.tab.cpp"
    break;

  case 15: /* $@5: %empty  */
#line 120 "src/parser.ypp"
                                                                     {

					}
#line 1704 "./dist/parser.tab.cpp"
    break;

  case 16: /* $@6: %empty  */
#line 122 "src/parser.ypp"
                                                {cg.jr("$ra");}
#line 1710 "./dist/parser.tab.cpp"
    break;

  case 17: /* function: KW_INT IDENTIFIER ST_LPAR $@4 arguments ST_RPAR ST_LCURL $@5 stmts $@6 ST_RCURL  */
#line 122 "src/parser.ypp"
                                                                         {
						current_scope = semantic_stack.top();
						semantic_stack.pop();

						// bade har tarif function register haye args ro available mikonim
						clear_registers(args_registers , 4);
						
					}
#line 1723 "./dist/parser.tab.cpp"
    break;

  case 18: /* $@7: %empty  */
#line 131 "src/parser.ypp"
                                                                   {
						string str((yyvsp[-1].stringVal)); 
						current_scope = str; 
						semantic_stack.push(current_scope);
						cg.add_label(current_scope);
					}
#line 1734 "./dist/parser.tab.cpp"
    break;

  case 19: /* function: KW_VOID IDENTIFIER ST_LPAR $@7 arguments ST_RPAR ST_LCURL stmts ST_RCURL  */
#line 136 "src/parser.ypp"
                                                                                        {
						current_scope = semantic_stack.top(); 
						semantic_stack.pop();

						// bade har tarif function register haye args ro available mikonim
						clear_registers(args_registers , 4);
					}
#line 1746 "./dist/parser.tab.cpp"
    break;

  case 20: /* $@8: %empty  */
#line 144 "src/parser.ypp"
                                     {clear_registers(temporal_registers , 10);}
#line 1752 "./dist/parser.tab.cpp"
    break;

  case 25: /* stmt: KW_BREAK ST_DOLLAR  */
#line 147 "src/parser.ypp"
                                                           {cg.j(while_stack.top());}
#line 1758 "./dist/parser.tab.cpp"
    break;

  case 26: /* stmt: KW_CONTINUE ST_DOLLAR  */
#line 148 "src/parser.ypp"
                                                              {cg.j(semantic_stack.top());}
#line 1764 "./dist/parser.tab.cpp"
    break;

  case 27: /* stmt: stmt_if  */
#line 149 "src/parser.ypp"
                                                {cg.add_label(end_if_stack.top()); end_if_stack.pop();}
#line 1770 "./dist/parser.tab.cpp"
    break;

  case 32: /* $@9: %empty  */
#line 150 "src/parser.ypp"
                                                                                                     {

						// baraye inke be vasile esme scope be function_call_stack dashte bashim
						// chon momkene chandta function toye har function call beshe va call stack
						// az bein bere bara hamin az map estefade kardim
						// map_of_call_stacks[current_scope] = function_call_stack;

						// bad az etmam function call bayad function_call_stack ke shamel
						// register haye arguman haye vorodi bood ro khali koni baraye estefade
						// mojadad az ona
						stack<string>().swap(function_call_stack);
					}
#line 1787 "./dist/parser.tab.cpp"
    break;

  case 34: /* type: KW_INT  */
#line 163 "src/parser.ypp"
                                       {current_variable_data_type = "int";}
#line 1793 "./dist/parser.tab.cpp"
    break;

  case 35: /* type: KW_CHAR  */
#line 165 "src/parser.ypp"
                                                {current_variable_data_type = "char";}
#line 1799 "./dist/parser.tab.cpp"
    break;

  case 36: /* stmt_declare: type IDENTIFIER ids  */
#line 166 "src/parser.ypp"
                                            {

						string str((yyvsp[-1].stringVal));
						Node* result = st.find(str , semantic_stack);
						if(result == NULL)
						{
							string register_name = find_free_register(saved_regsiters , 8 , 0);
							st.insert(str,current_scope,current_variable_data_type,yylineno,register_name,"" , (yyvsp[0].intVal));
							
							cg.move(register_name , current_temp_register);
						}
						else
						{
							yyerror("multiple declaration of variable");
							exit(1);
						}
					}
#line 1821 "./dist/parser.tab.cpp"
    break;

  case 37: /* ids: ST_DOLLAR  */
#line 183 "src/parser.ypp"
                                          {(yyval.intVal) = 0;}
#line 1827 "./dist/parser.tab.cpp"
    break;

  case 38: /* ids: ST_COMMA IDENTIFIER ids  */
#line 184 "src/parser.ypp"
                                                                {

						string str((yyvsp[-1].stringVal));
						Node* result = st.find(str , semantic_stack);
						if(result == NULL)
						{
							string register_name = find_free_register(saved_regsiters , 8 , 0);
							st.insert(str,current_scope,current_variable_data_type,yylineno,register_name,"",(yyvsp[0].intVal));
							
							cg.move(register_name , current_temp_register);
						}
						else
						{
							yyerror("multiple declaration of variable");
							exit(1);
						}
					}
#line 1849 "./dist/parser.tab.cpp"
    break;

  case 39: /* ids: OP_ASSIGN expression ids  */
#line 201 "src/parser.ypp"
                                                                 {
						// Node* result = st.find(current_identifying_variable , semantic_stack);
						(yyval.intVal) = (yyvsp[-1].node).value;
						current_temp_register = (yyvsp[-1].node).reg;
					}
#line 1859 "./dist/parser.tab.cpp"
    break;

  case 40: /* $@10: %empty  */
#line 210 "src/parser.ypp"
                                                         {
						//modify kardan argument ha
						for(int i = function_call_stack.size() - 1;!function_call_stack.empty();i--)
						{
							string arg_reg_name = "$a" + to_string(i);
							cg.move(arg_reg_name , function_call_stack.top());
							function_call_stack.pop();
						}

						cg.jal((yyvsp[-2].stringVal));
						
					}
#line 1876 "./dist/parser.tab.cpp"
    break;

  case 44: /* $@11: %empty  */
#line 224 "src/parser.ypp"
                                   {

						// arguman haye vorodi ke
						// har kodom dakhel ye register hastan
						// ro miaym esme registerashono push mikonim
						// toye function_call_stack va toye badane function
						// onaro dobare bazyabi mikonim ba pop kardan
						function_call_stack.push((yyvsp[0].node).reg);
					}
#line 1890 "./dist/parser.tab.cpp"
    break;

  case 48: /* stmt_assignment: IDENTIFIER OP_ASSIGN expression ST_DOLLAR  */
#line 238 "src/parser.ypp"
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
							result->value = (yyvsp[-1].node).value;
							cg.move(result->reg , (yyvsp[-1].node).reg);
						}
					}
#line 1909 "./dist/parser.tab.cpp"
    break;

  case 49: /* stmt_return: KW_RETURN expression ST_DOLLAR  */
#line 253 "src/parser.ypp"
                                                       {
						
						cg.move("$v0" , (yyvsp[-1].node).reg);
						cg.jr("$ra");
					}
#line 1919 "./dist/parser.tab.cpp"
    break;

  case 50: /* $@12: %empty  */
#line 261 "src/parser.ypp"
                                      {end_if_stack.push("END_IF_" + to_string(yylineno));}
#line 1925 "./dist/parser.tab.cpp"
    break;

  case 51: /* $@13: %empty  */
#line 262 "src/parser.ypp"
                                            {
						current_scope = current_scope + "__if" + to_string(yylineno);
						semantic_stack.push(current_scope); 
						if_scope_stack.push(current_scope);
					}
#line 1935 "./dist/parser.tab.cpp"
    break;

  case 52: /* $@14: %empty  */
#line 267 "src/parser.ypp"
                                                            {cg.beq((yyvsp[-1].node).reg,"$zero",if_scope_stack.top());}
#line 1941 "./dist/parser.tab.cpp"
    break;

  case 53: /* $@15: %empty  */
#line 268 "src/parser.ypp"
                                                                { cg.j(end_if_stack.top());  semantic_stack.pop(); current_scope = semantic_stack.top();   cg.add_label(if_scope_stack.top()); if_scope_stack.pop();  }
#line 1947 "./dist/parser.tab.cpp"
    break;

  case 55: /* $@16: %empty  */
#line 270 "src/parser.ypp"
                                          {
						current_scope = current_scope + "__elseif" + to_string(yylineno); 
						semantic_stack.push(current_scope); 
						if_scope_stack.push(current_scope);
					}
#line 1957 "./dist/parser.tab.cpp"
    break;

  case 56: /* $@17: %empty  */
#line 274 "src/parser.ypp"
                                                             {
						cg.beq((yyvsp[-1].node).reg,"$zero",if_scope_stack.top());
					}
#line 1965 "./dist/parser.tab.cpp"
    break;

  case 57: /* $@18: %empty  */
#line 276 "src/parser.ypp"
                                                                   { 
						cg.j(end_if_stack.top()); 
						semantic_stack.pop(); 
						current_scope = semantic_stack.top();  
						cg.add_label(if_scope_stack.top()); 
						if_scope_stack.pop();
					}
#line 1977 "./dist/parser.tab.cpp"
    break;

  case 60: /* $@19: %empty  */
#line 283 "src/parser.ypp"
                                         {
						current_scope = current_scope + "__else" + to_string(yylineno);
						semantic_stack.push(current_scope);
					}
#line 1986 "./dist/parser.tab.cpp"
    break;

  case 61: /* else: KW_ELSE ST_LCURL $@19 stmts ST_RCURL  */
#line 286 "src/parser.ypp"
                                                         {
						semantic_stack.pop(); 
						current_scope = semantic_stack.top(); 
						cg.j(end_if_stack.top()); 
					}
#line 1996 "./dist/parser.tab.cpp"
    break;

  case 63: /* $@20: %empty  */
#line 293 "src/parser.ypp"
                                        {
						current_scope = current_scope + "__for" + to_string(yylineno);
						semantic_stack.push(current_scope);
						while_stack.push("END_" + current_scope);
						cg.add_label(current_scope);
					}
#line 2007 "./dist/parser.tab.cpp"
    break;

  case 64: /* $@21: %empty  */
#line 298 "src/parser.ypp"
                                                                { cg.beq( (yyvsp[-1].node).reg , "$zero", while_stack.top()); }
#line 2013 "./dist/parser.tab.cpp"
    break;

  case 65: /* stmt_for: KW_FOR ST_LPAR stmt_for_assign_declare $@20 expression ST_DOLLAR $@21 stmt_for_step ST_RPAR ST_LCURL loop_stmts ST_RCURL  */
#line 300 "src/parser.ypp"
                                        {
						
						cg.j(current_scope);
						semantic_stack.pop();
						current_scope = semantic_stack.top();
						cg.add_label(while_stack.top());
						while_stack.pop();
					}
#line 2026 "./dist/parser.tab.cpp"
    break;

  case 69: /* $@22: %empty  */
#line 314 "src/parser.ypp"
                                        {
						current_scope = current_scope + "__while" + to_string(yylineno);
						semantic_stack.push(current_scope);
						while_stack.push("END_"+ current_scope);
						cg.add_label(current_scope);
					}
#line 2037 "./dist/parser.tab.cpp"
    break;

  case 70: /* $@23: %empty  */
#line 320 "src/parser.ypp"
                                                   { cg.beq( (yyvsp[0].node).reg , "$zero", while_stack.top()); }
#line 2043 "./dist/parser.tab.cpp"
    break;

  case 71: /* stmt_while: KW_WHILE ST_LPAR $@22 expression $@23 ST_RPAR ST_LCURL loop_stmts ST_RCURL  */
#line 322 "src/parser.ypp"
                                        {
						cg.j(current_scope);
						semantic_stack.pop();
						current_scope = semantic_stack.top();
						cg.add_label(while_stack.top());
						while_stack.pop();
					}
#line 2055 "./dist/parser.tab.cpp"
    break;

  case 73: /* $@24: %empty  */
#line 331 "src/parser.ypp"
                                                              {cg.j(while_stack.top());}
#line 2061 "./dist/parser.tab.cpp"
    break;

  case 75: /* $@25: %empty  */
#line 332 "src/parser.ypp"
                                                                 {cg.j(semantic_stack.top());}
#line 2067 "./dist/parser.tab.cpp"
    break;

  case 78: /* expression: expression OP_PLUS expression  */
#line 339 "src/parser.ypp"
                                                      {
	
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_PLUS , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.add(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					
					}
#line 2083 "./dist/parser.tab.cpp"
    break;

  case 79: /* expression: expression OP_MINUS expression  */
#line 351 "src/parser.ypp"
                                                                       {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_MINUS , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.sub(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2097 "./dist/parser.tab.cpp"
    break;

  case 80: /* expression: expression OP_MULTIPLY expression  */
#line 361 "src/parser.ypp"
                                                                          {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_MULTIPLY , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.mul(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2111 "./dist/parser.tab.cpp"
    break;

  case 81: /* expression: expression OP_DIVIDE expression  */
#line 371 "src/parser.ypp"
                                                                        {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_DIVIDE , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.div((yyvsp[-2].node).reg , (yyvsp[0].node).reg);
						cg.divQ(dst.reg);
					}
#line 2126 "./dist/parser.tab.cpp"
    break;

  case 82: /* expression: expression OP_LESS expression  */
#line 382 "src/parser.ypp"
                                                                      {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_LESS , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.slt(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);

					}
#line 2141 "./dist/parser.tab.cpp"
    break;

  case 83: /* expression: expression OP_LESS_EQUAL expression  */
#line 393 "src/parser.ypp"
                                                                            {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_LESS_EQUAL , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.sle(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);

					}
#line 2156 "./dist/parser.tab.cpp"
    break;

  case 84: /* expression: expression OP_EQUAL expression  */
#line 404 "src/parser.ypp"
                                                                       {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_EQUAL , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.seq(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);

					}
#line 2171 "./dist/parser.tab.cpp"
    break;

  case 85: /* expression: expression OP_NOT_EQUAL expression  */
#line 415 "src/parser.ypp"
                                                                           {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_NOT_EQUAL , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.sne(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2185 "./dist/parser.tab.cpp"
    break;

  case 86: /* expression: expression OP_GREATER expression  */
#line 425 "src/parser.ypp"
                                                                         {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_GREATER , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.sgt(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2199 "./dist/parser.tab.cpp"
    break;

  case 87: /* expression: expression OP_GREATER_EQUAL expression  */
#line 435 "src/parser.ypp"
                                                                               {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_GREATER_EQUAL , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.sge(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2213 "./dist/parser.tab.cpp"
    break;

  case 88: /* expression: expression OP_LOGICAL_OR expression  */
#line 445 "src/parser.ypp"
                                                                            {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_LOGICAL_OR , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg._or(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2227 "./dist/parser.tab.cpp"
    break;

  case 89: /* expression: expression OP_LOGICAL_AND expression  */
#line 455 "src/parser.ypp"
                                                                             {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_LOGICAL_AND , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg._and(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2241 "./dist/parser.tab.cpp"
    break;

  case 90: /* expression: expression OP_BITWISE_OR expression  */
#line 465 "src/parser.ypp"
                                                                            {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_BITWISE_OR , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg._or(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2255 "./dist/parser.tab.cpp"
    break;

  case 91: /* expression: expression OP_BITWISE_AND expression  */
#line 475 "src/parser.ypp"
                                                                             {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_BITWISE_AND , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg._and(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2269 "./dist/parser.tab.cpp"
    break;

  case 92: /* expression: expression OP_BITWISE_XOR expression  */
#line 485 "src/parser.ypp"
                                                                             {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = calculate(OP_BITWISE_XOR , (yyvsp[-2].node).value , (yyvsp[0].node).value);
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg._xor(dst.reg , (yyvsp[-2].node).reg , (yyvsp[0].node).reg);
					}
#line 2283 "./dist/parser.tab.cpp"
    break;

  case 93: /* expression: OP_LOGICAL_NOT expression  */
#line 496 "src/parser.ypp"
                                                                  {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = (yyvsp[0].node).value == 0 ? 1 : 0;
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.neg(dst.reg , (yyvsp[0].node).reg);
					}
#line 2297 "./dist/parser.tab.cpp"
    break;

  case 94: /* expression: OP_MINUS expression  */
#line 505 "src/parser.ypp"
                                                            {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						dst.value = (yyvsp[0].node).value * -1;
						strcpy(dst.reg, reg.c_str());
						(yyval.node) = dst;

						cg.neg(dst.reg , (yyvsp[0].node).reg);
					}
#line 2311 "./dist/parser.tab.cpp"
    break;

  case 95: /* expression: ST_LPAR expression ST_RPAR  */
#line 515 "src/parser.ypp"
                                                                   {
						(yyval.node) = (yyvsp[-1].node);
					}
#line 2319 "./dist/parser.tab.cpp"
    break;

  case 96: /* expression: IDENTIFIER  */
#line 518 "src/parser.ypp"
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
							node_t dst;
							dst.value = result->value;
							strcpy(dst.reg, result->reg.c_str());
							(yyval.node) = dst;

						}
					}
#line 2341 "./dist/parser.tab.cpp"
    break;

  case 97: /* expression: NUMBER  */
#line 535 "src/parser.ypp"
                                               {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						strcpy(dst.reg, reg.c_str());
						dst.value = (yyvsp[0].intVal);
						(yyval.node) = dst;
						cg.li(dst.reg , dst.value);

					}
#line 2355 "./dist/parser.tab.cpp"
    break;

  case 98: /* expression: NCHAR  */
#line 544 "src/parser.ypp"
                                              {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						strcpy(dst.reg, reg.c_str());
						dst.value = (yyvsp[0].charVal);
						(yyval.node) = dst;
						cg.li(dst.reg , dst.value);
					}
#line 2368 "./dist/parser.tab.cpp"
    break;

  case 99: /* expression: UCHAR  */
#line 552 "src/parser.ypp"
                                              {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						strcpy(dst.reg, reg.c_str());
						dst.value = (yyvsp[0].charVal);
						(yyval.node) = dst;
						cg.li(dst.reg , dst.value);

					}
#line 2382 "./dist/parser.tab.cpp"
    break;

  case 100: /* expression: LCHAR  */
#line 561 "src/parser.ypp"
                                              {
						node_t dst;
						string reg = find_free_register(temporal_registers , 10 , 1);
						strcpy(dst.reg, reg.c_str());
						dst.value = (yyvsp[0].charVal);
						(yyval.node) = dst;
						cg.li(dst.reg , dst.value);

					}
#line 2396 "./dist/parser.tab.cpp"
    break;

  case 101: /* expression: stmt_call_function  */
#line 570 "src/parser.ypp"
                                                           {

						node_t dst;
						strcpy(dst.reg, "$v0");
						dst.value = (yyvsp[0].intVal);
						(yyval.node) = dst;
					}
#line 2408 "./dist/parser.tab.cpp"
    break;

  case 104: /* $@26: %empty  */
#line 580 "src/parser.ypp"
                                                {

						string str((yyvsp[0].stringVal));
						Node* result = st.find(str , semantic_stack);
						if(result == NULL)
						{
							string register_name = find_free_register(args_registers , 4 , 2);
							st.insert(str,current_scope,current_variable_data_type,yylineno,register_name,"",0);
						}
						else
						{
							yyerror("multiple declaration of variable");
							exit(1);
						}
					}
#line 2428 "./dist/parser.tab.cpp"
    break;


#line 2432 "./dist/parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 598 "src/parser.ypp"



int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	// it will be called in the expression of if
	mips.open("./mips.asm");

	cg.init(&mips);

    if(!yyparse())
		printf("\nParsing Complete\n");
	else
	{
		fprintf(stderr,"\nParsing Failed\n");
		exit(0);
	}
	
	// closing the opened file
	
	fclose(yyin);
    return 0;
}

