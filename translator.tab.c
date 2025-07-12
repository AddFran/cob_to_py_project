/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "translator.y"

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int yylex(void);
void yyerror(const char *s);
int indent_level=0;

void print_indent(){
    for(int i=0;i<indent_level;i++)
        printf("    ");
}

typedef struct {
    char* name;
    char* type; 
} Variable;

#define MAX_VARIABLES 100
Variable variables[MAX_VARIABLES];
int variable_count=0;

void add_variable(const char* name, const char* type){
    variables[variable_count].name=strdup(name);
    variables[variable_count].type=strdup(type);
    variable_count++;
}

const char* get_variable_type(const char* name){
    for (int i=0;i<variable_count;i++){
        if(strcmp(variables[i].name,name)==0){
            return variables[i].type;
        }
    }
    return NULL;
}


#line 113 "translator.tab.c"

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

#include "translator.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STRING = 3,                     /* STRING  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_DISPLAY = 5,                    /* DISPLAY  */
  YYSYMBOL_ACCEPT = 6,                     /* ACCEPT  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_EQUALS = 8,                     /* EQUALS  */
  YYSYMBOL_MAJOR = 9,                      /* MAJOR  */
  YYSYMBOL_MINOR = 10,                     /* MINOR  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_ENDIF = 12,                     /* ENDIF  */
  YYSYMBOL_NUMBER = 13,                    /* NUMBER  */
  YYSYMBOL_MOVE = 14,                      /* MOVE  */
  YYSYMBOL_TO = 15,                        /* TO  */
  YYSYMBOL_ADD = 16,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 17,                  /* SUBTRACT  */
  YYSYMBOL_MULTIPLY = 18,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 19,                    /* DIVIDE  */
  YYSYMBOL_FROM = 20,                      /* FROM  */
  YYSYMBOL_BY = 21,                        /* BY  */
  YYSYMBOL_INTO = 22,                      /* INTO  */
  YYSYMBOL_GIVING = 23,                    /* GIVING  */
  YYSYMBOL_IDENTIFICATION = 24,            /* IDENTIFICATION  */
  YYSYMBOL_ENVIRONMENT = 25,               /* ENVIRONMENT  */
  YYSYMBOL_DATA = 26,                      /* DATA  */
  YYSYMBOL_FIL = 27,                       /* FIL  */
  YYSYMBOL_WORKINGSTORAGE = 28,            /* WORKINGSTORAGE  */
  YYSYMBOL_LOCALSTORAGE = 29,              /* LOCALSTORAGE  */
  YYSYMBOL_LINKAGE = 30,                   /* LINKAGE  */
  YYSYMBOL_PROCEDURE = 31,                 /* PROCEDURE  */
  YYSYMBOL_DIVISION = 32,                  /* DIVISION  */
  YYSYMBOL_SECTION = 33,                   /* SECTION  */
  YYSYMBOL_PROGRAMID = 34,                 /* PROGRAMID  */
  YYSYMBOL_END = 35,                       /* END  */
  YYSYMBOL_PROGRAM = 36,                   /* PROGRAM  */
  YYSYMBOL_STOP = 37,                      /* STOP  */
  YYSYMBOL_RUN = 38,                       /* RUN  */
  YYSYMBOL_NEWLINE = 39,                   /* NEWLINE  */
  YYSYMBOL_PIC = 40,                       /* PIC  */
  YYSYMBOL_VALUE = 41,                     /* VALUE  */
  YYSYMBOL_DIGIT_X = 42,                   /* DIGIT_X  */
  YYSYMBOL_DIGIT_9 = 43,                   /* DIGIT_9  */
  YYSYMBOL_DIGIT_A = 44,                   /* DIGIT_A  */
  YYSYMBOL_DIGIT_S = 45,                   /* DIGIT_S  */
  YYSYMBOL_DIGIT_S9 = 46,                  /* DIGIT_S9  */
  YYSYMBOL_DIGIT_V9 = 47,                  /* DIGIT_V9  */
  YYSYMBOL_PERFORM = 48,                   /* PERFORM  */
  YYSYMBOL_ENDPERFORM = 49,                /* ENDPERFORM  */
  YYSYMBOL_TIMES = 50,                     /* TIMES  */
  YYSYMBOL_UNTIL = 51,                     /* UNTIL  */
  YYSYMBOL_VARYING = 52,                   /* VARYING  */
  YYSYMBOL_53_ = 53,                       /* '.'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_X_ = 56,                     /* 'X'  */
  YYSYMBOL_57_A_ = 57,                     /* 'A'  */
  YYSYMBOL_58_n_ = 58,                     /* '\n'  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_if_statement = 62,              /* if_statement  */
  YYSYMBOL_63_1 = 63,                      /* $@1  */
  YYSYMBOL_optional_else = 64,             /* optional_else  */
  YYSYMBOL_65_2 = 65,                      /* $@2  */
  YYSYMBOL_conditional = 66,               /* conditional  */
  YYSYMBOL_perform_statement = 67,         /* perform_statement  */
  YYSYMBOL_68_3 = 68,                      /* $@3  */
  YYSYMBOL_69_4 = 69,                      /* $@4  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_optional_point = 71,            /* optional_point  */
  YYSYMBOL_optional_number_identifier = 72, /* optional_number_identifier  */
  YYSYMBOL_pic_type = 73,                  /* pic_type  */
  YYSYMBOL_optional_long = 74,             /* optional_long  */
  YYSYMBOL_maybe_value = 75,               /* maybe_value  */
  YYSYMBOL_statements = 76,                /* statements  */
  YYSYMBOL_statement_with_newline = 77,    /* statement_with_newline  */
  YYSYMBOL_newline_only = 78               /* newline_only  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      58,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,     2,     2,     2,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    57,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    85,    89,    93,    97,   116,   120,   124,
     128,   132,   136,   140,   144,   148,   152,   156,   160,   164,
     168,   171,   174,   177,   180,   183,   186,   189,   192,   195,
     198,   201,   204,   207,   221,   222,   226,   226,   237,   239,
     239,   249,   252,   255,   258,   261,   264,   267,   273,   273,
     281,   281,   290,   290,   304,   306,   310,   311,   315,   319,
     323,   327,   331,   335,   342,   343,   347,   348,   353,   361,
     362,   363,   367,   368,   372
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "STRING", "IDENTIFIER",
  "DISPLAY", "ACCEPT", "IF", "EQUALS", "MAJOR", "MINOR", "ELSE", "ENDIF",
  "NUMBER", "MOVE", "TO", "ADD", "SUBTRACT", "MULTIPLY", "DIVIDE", "FROM",
  "BY", "INTO", "GIVING", "IDENTIFICATION", "ENVIRONMENT", "DATA", "FIL",
  "WORKINGSTORAGE", "LOCALSTORAGE", "LINKAGE", "PROCEDURE", "DIVISION",
  "SECTION", "PROGRAMID", "END", "PROGRAM", "STOP", "RUN", "NEWLINE",
  "PIC", "VALUE", "DIGIT_X", "DIGIT_9", "DIGIT_A", "DIGIT_S", "DIGIT_S9",
  "DIGIT_V9", "PERFORM", "ENDPERFORM", "TIMES", "UNTIL", "VARYING", "'.'",
  "'('", "')'", "'X'", "'A'", "'\\n'", "$accept", "program", "statement",
  "if_statement", "$@1", "optional_else", "$@2", "conditional",
  "perform_statement", "$@3", "$@4", "$@5", "optional_point",
  "optional_number_identifier", "pic_type", "optional_long", "maybe_value",
  "statements", "statement_with_newline", "newline_only", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-58)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -116,     7,  -116,    73,    13,    18,    46,    48,    43,    43,
      43,    53,   -21,    26,    40,    62,    63,    67,    74,    79,
      59,    70,    75,  -116,    35,    76,  -116,  -116,  -116,    61,
      61,    61,    95,    77,   -13,   102,   104,   105,  -116,  -116,
     106,   103,   101,   107,   108,    72,    90,    91,    92,    94,
      96,    97,    98,    60,    71,    99,    18,   120,    81,  -116,
    -116,  -116,  -116,  -116,    50,    78,    84,  -116,     3,  -116,
     123,   125,   135,    85,    86,    88,    43,    89,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,   100,   137,   110,   138,
    -116,  -116,   134,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,   300,   112,   112,   112,   112,   114,    61,    61,    61,
      -8,   136,    -8,   148,   149,   150,  -116,   149,   160,  -116,
     121,  -116,   139,   300,    43,   300,     4,   264,  -116,   174,
     144,   156,  -116,  -116,    16,   143,  -116,  -116,  -116,  -116,
     157,  -116,   193,   194,   204,  -116,  -116,   151,   189,   188,
    -116,  -116,   170,   199,  -116,   165,   167,   172,  -116,  -116,
    -116,    61,    61,    61,    61,    61,    43,    61,  -116,    61,
    -116,   211,   215,  -116,  -116,  -116,  -116,  -116,   178,  -116,
     300,  -116,   179,   180,    18,   300,  -116,  -116,  -116,   300,
     225,    61,  -116
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,    34,    35,     3,    54,
      54,    54,     0,     0,     0,     0,     0,     0,    57,    56,
       0,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      55,     4,     5,     6,     0,     0,     0,    36,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,     0,
      31,    50,     0,    48,    43,    41,    42,    46,    47,    44,
      45,     0,    64,    64,    64,    64,    66,    54,    54,    54,
      54,     0,    54,     0,    14,     0,    18,    16,     0,    20,
       0,    22,     0,     0,     0,     0,     0,    38,    69,     0,
      58,    62,    60,    61,     0,     0,     7,     9,     8,    10,
       0,    12,     0,     0,     0,    21,    23,     0,     0,     0,
      74,    71,     0,     0,    70,     0,     0,     0,    67,    68,
      33,    54,    54,    54,    54,    54,     0,    54,    39,    54,
      65,     0,     0,    11,    13,    15,    17,    51,     0,    49,
       0,    37,     0,     0,     0,    40,    59,    63,    52,     0,
       0,    54,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -116,  -116,   -95,  -116,  -116,  -116,  -116,   -47,  -116,  -116,
    -116,  -116,   -29,    -6,  -116,     5,  -116,  -115,    -1,  -116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    25,    26,   101,   153,   180,    33,    27,   125,
     123,   189,    61,    40,   106,   130,   135,   127,   128,   151
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    62,    63,    41,    42,    44,   126,     2,   147,    91,
     149,    45,     3,     4,     5,   -57,   102,    31,    58,   158,
       6,     7,    32,     8,     9,    10,    11,    68,   126,   159,
     126,    12,    13,    14,    15,    16,    17,    18,    19,    38,
      69,    20,    21,    59,    22,    60,    23,    38,    39,   103,
      34,    35,    36,    94,    95,    24,    39,    43,    46,   104,
     105,    37,   150,    96,    86,   185,    39,   111,   113,   115,
     116,   118,    47,    87,   190,    88,    29,    30,   136,   137,
     138,   139,    97,   141,    89,   126,    56,    57,    99,   110,
     112,    98,   114,   117,   126,    48,    49,   100,    39,    39,
      50,    39,    39,    64,    65,    66,    54,    51,   131,   132,
     133,    52,    53,    55,    60,    59,    67,    70,   148,    71,
      72,    73,    75,    74,    92,    78,   154,   107,    76,   108,
      77,    93,   173,   174,   175,   176,   177,   188,   179,   109,
     181,   120,   122,    79,    80,    81,   154,    82,   154,    83,
      84,    85,    90,   119,   124,   134,     3,     4,     5,   140,
     178,   161,   192,   121,     6,     7,   129,     8,     9,    10,
      11,   142,   -57,   143,   145,    12,    13,    14,    15,    16,
      17,    18,    19,   144,   154,    20,    21,   155,    22,   154,
      23,   156,   146,     3,     4,     5,   160,   162,   163,    24,
     165,     6,     7,   157,     8,     9,    10,    11,   164,   168,
     166,   169,    12,    13,    14,    15,    16,    17,    18,    19,
     170,   171,    20,    21,   182,    22,   172,    23,   183,   184,
       3,     4,     5,     0,   186,   187,    24,   167,     6,     7,
       0,     8,     9,    10,    11,     0,     0,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,    20,
      21,     0,    22,     0,    23,     0,     0,     0,     0,     3,
       4,     5,     0,    24,   191,   152,     0,     6,     7,     0,
       8,     9,    10,    11,     0,     0,     0,     0,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    20,    21,
       0,    22,     0,    23,     0,     3,     4,     5,     0,     0,
       0,     0,    24,     6,     7,     0,     8,     9,    10,    11,
       0,     0,     0,     0,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,    20,    21,     0,    22,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
       1,    30,    31,     9,    10,    11,   101,     0,   123,    56,
     125,    32,     5,     6,     7,    23,    13,     4,    24,     3,
      13,    14,     4,    16,    17,    18,    19,    40,   123,    13,
     125,    24,    25,    26,    27,    28,    29,    30,    31,     4,
      53,    34,    35,    39,    37,    53,    39,     4,    13,    46,
       4,     3,     4,     3,     4,    48,    13,     4,    32,    56,
      57,    13,    58,    13,     4,   180,    13,    73,    74,    75,
      76,    77,    32,    13,   189,     4,     3,     4,   107,   108,
     109,   110,     4,   112,    13,   180,    51,    52,     4,     4,
       4,    13,     4,     4,   189,    33,    33,    13,    13,    13,
      33,    13,    13,     8,     9,    10,    36,    33,   103,   104,
     105,    32,    53,    38,    53,    39,    39,    15,   124,    15,
      15,    15,    21,    20,     4,    53,   127,     4,    21,     4,
      22,    50,   161,   162,   163,   164,   165,   184,   167,     4,
     169,     4,     4,    53,    53,    53,   147,    53,   149,    53,
      53,    53,    53,    53,    20,    41,     5,     6,     7,    23,
     166,     4,   191,    53,    13,    14,    54,    16,    17,    18,
      19,    23,    23,    23,    53,    24,    25,    26,    27,    28,
      29,    30,    31,    23,   185,    34,    35,    13,    37,   190,
      39,    47,    53,     5,     6,     7,    53,     4,     4,    48,
      49,    13,    14,    47,    16,    17,    18,    19,     4,    39,
      21,    12,    24,    25,    26,    27,    28,    29,    30,    31,
      55,    54,    34,    35,    13,    37,    54,    39,    13,    51,
       5,     6,     7,    -1,    55,    55,    48,    49,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,     5,
       6,     7,    -1,    48,    49,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    35,
      -1,    37,    -1,    39,    -1,     5,     6,     7,    -1,    -1,
      -1,    -1,    48,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    -1,    37,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    60,     0,     5,     6,     7,    13,    14,    16,    17,
      18,    19,    24,    25,    26,    27,    28,    29,    30,    31,
      34,    35,    37,    39,    48,    61,    62,    67,    77,     3,
       4,     4,     4,    66,     4,     3,     4,    13,     4,    13,
      72,    72,    72,     4,    72,    32,    32,    32,    33,    33,
      33,    33,    32,    53,    36,    38,    51,    52,    72,    39,
      53,    71,    71,    71,     8,     9,    10,    39,    40,    53,
      15,    15,    15,    15,    20,    21,    21,    22,    53,    53,
      53,    53,    53,    53,    53,    53,     4,    13,     4,    13,
      53,    66,     4,    50,     3,     4,    13,     4,    13,     4,
      13,    63,    13,    46,    56,    57,    73,     4,     4,     4,
       4,    72,     4,    72,     4,    72,    72,     4,    72,    53,
       4,    53,     4,    69,    20,    68,    61,    76,    77,    54,
      74,    74,    74,    74,    41,    75,    71,    71,    71,    71,
      23,    71,    23,    23,    23,    53,    53,    76,    72,    76,
      58,    78,    11,    64,    77,    13,    47,    47,     3,    13,
      53,     4,     4,     4,     4,    49,    21,    49,    39,    12,
      55,    54,    54,    71,    71,    71,    71,    71,    72,    71,
      65,    71,    13,    13,    51,    76,    55,    55,    66,    70,
      76,    49,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    63,    62,    64,    65,
      64,    66,    66,    66,    66,    66,    66,    66,    68,    67,
      69,    67,    70,    67,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    75,    75,    75,    76,
      76,    76,    77,    77,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     3,     5,     5,     5,
       5,     7,     5,     7,     4,     7,     4,     7,     4,     3,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     6,     1,     1,     0,     8,     0,     0,
       4,     3,     3,     3,     3,     3,     3,     3,     0,     7,
       0,     7,     0,    13,     0,     1,     1,     1,     2,     6,
       2,     2,     2,     6,     0,     3,     0,     2,     2,     1,
       2,     2,     2,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 4: /* statement: DISPLAY STRING optional_point  */
#line 89 "translator.y"
                                  {
        print_indent();
        printf("print(\"%s\")\n",(yyvsp[-1].str));
    }
#line 1331 "translator.tab.c"
    break;

  case 5: /* statement: DISPLAY IDENTIFIER optional_point  */
#line 93 "translator.y"
                                        {
        print_indent();
        printf("print(%s)\n",(yyvsp[-1].str));
    }
#line 1340 "translator.tab.c"
    break;

  case 6: /* statement: ACCEPT IDENTIFIER optional_point  */
#line 97 "translator.y"
                                       {
        const char* tipo=get_variable_type((yyvsp[-1].str));
        print_indent();
        if(tipo==NULL) {
            printf("%s = input()  # tipo desconocido\n",(yyvsp[-1].str));
        } 
        else if(strcmp(tipo,"int")==0) {
            printf("%s = int(input())\n",(yyvsp[-1].str));
        } 
        else if(strcmp(tipo,"float")==0) {
            printf("%s = float(input())\n",(yyvsp[-1].str));
        } 
        else if(strcmp(tipo, "str")==0) {
            printf("%s = str(input())\n",(yyvsp[-1].str)); 
        } 
        else{
            printf("%s=input()  # tipo de dato no manejado: %s\n",(yyvsp[-1].str),tipo);
        }
    }
#line 1364 "translator.tab.c"
    break;

  case 7: /* statement: MOVE STRING TO IDENTIFIER optional_point  */
#line 116 "translator.y"
                                               {
        print_indent();
        printf("%s = \"%s\"\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1373 "translator.tab.c"
    break;

  case 8: /* statement: MOVE NUMBER TO IDENTIFIER optional_point  */
#line 120 "translator.y"
                                               {
        print_indent();
        printf("%s = %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1382 "translator.tab.c"
    break;

  case 9: /* statement: MOVE IDENTIFIER TO IDENTIFIER optional_point  */
#line 124 "translator.y"
                                                   {
        print_indent();
        printf("%s = %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1391 "translator.tab.c"
    break;

  case 10: /* statement: ADD optional_number_identifier TO IDENTIFIER optional_point  */
#line 128 "translator.y"
                                                                  {
        print_indent();
        printf("%s += %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1400 "translator.tab.c"
    break;

  case 11: /* statement: ADD optional_number_identifier TO optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 132 "translator.y"
                                                                                                    {
        print_indent();
        printf("%s = %s + %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1409 "translator.tab.c"
    break;

  case 12: /* statement: SUBTRACT optional_number_identifier FROM IDENTIFIER optional_point  */
#line 136 "translator.y"
                                                                         {
        print_indent();
        printf("%s -= %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1418 "translator.tab.c"
    break;

  case 13: /* statement: SUBTRACT optional_number_identifier FROM optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 140 "translator.y"
                                                                                                           {
        print_indent();
        printf("%s = %s - %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1427 "translator.tab.c"
    break;

  case 14: /* statement: MULTIPLY optional_number_identifier BY IDENTIFIER  */
#line 144 "translator.y"
                                                        {
        print_indent();
        printf("%s *= %s\n",(yyvsp[0].str),(yyvsp[-2].str));
    }
#line 1436 "translator.tab.c"
    break;

  case 15: /* statement: MULTIPLY optional_number_identifier BY optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 148 "translator.y"
                                                                                                         {
        print_indent();
        printf("%s = %s * %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1445 "translator.tab.c"
    break;

  case 16: /* statement: DIVIDE optional_number_identifier INTO IDENTIFIER  */
#line 152 "translator.y"
                                                        {
        print_indent();
        printf("%s /= %s\n",(yyvsp[0].str),(yyvsp[-2].str));
    }
#line 1454 "translator.tab.c"
    break;

  case 17: /* statement: DIVIDE optional_number_identifier INTO optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 156 "translator.y"
                                                                                                         {
        print_indent();
        printf("%s = %s / %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1463 "translator.tab.c"
    break;

  case 18: /* statement: DIVIDE IDENTIFIER BY optional_number_identifier  */
#line 160 "translator.y"
                                                      {
        print_indent();
        printf("%s /= %s\n",(yyvsp[-2].str),(yyvsp[0].str));
    }
#line 1472 "translator.tab.c"
    break;

  case 19: /* statement: IDENTIFICATION DIVISION '.'  */
#line 164 "translator.y"
                                  {
        print_indent();
        printf("# IDENTIFICATION DIVISION\n");
    }
#line 1481 "translator.tab.c"
    break;

  case 20: /* statement: PROGRAMID '.' IDENTIFIER '.'  */
#line 168 "translator.y"
                                   {
        printf("# PROGRAM-ID: %s\n",(yyvsp[-1].str));
    }
#line 1489 "translator.tab.c"
    break;

  case 21: /* statement: PROGRAMID '.' NUMBER IDENTIFIER '.'  */
#line 171 "translator.y"
                                          {
        printf("# PROGRAM-ID: %s%s\n",(yyvsp[-2].str),(yyvsp[-1].str));
    }
#line 1497 "translator.tab.c"
    break;

  case 22: /* statement: END PROGRAM IDENTIFIER '.'  */
#line 174 "translator.y"
                                 {
        printf("# END PROGRAM %s", (yyvsp[-1].str));
    }
#line 1505 "translator.tab.c"
    break;

  case 23: /* statement: END PROGRAM NUMBER IDENTIFIER '.'  */
#line 177 "translator.y"
                                        {
        printf("# END PROGRAM %s%s", (yyvsp[-2].str), (yyvsp[-1].str));
    }
#line 1513 "translator.tab.c"
    break;

  case 24: /* statement: ENVIRONMENT DIVISION '.'  */
#line 180 "translator.y"
                               {
        printf("# ENVIRONMENT DIVISION\n");
    }
#line 1521 "translator.tab.c"
    break;

  case 25: /* statement: DATA DIVISION '.'  */
#line 183 "translator.y"
                        {
        printf("# DATA DIVISION\n");
    }
#line 1529 "translator.tab.c"
    break;

  case 26: /* statement: FIL SECTION '.'  */
#line 186 "translator.y"
                      {
        printf("# FILE SECTION\n");
    }
#line 1537 "translator.tab.c"
    break;

  case 27: /* statement: WORKINGSTORAGE SECTION '.'  */
#line 189 "translator.y"
                                 {
        printf("# WORKING-STORAGE SECTION\n");
    }
#line 1545 "translator.tab.c"
    break;

  case 28: /* statement: LOCALSTORAGE SECTION '.'  */
#line 192 "translator.y"
                               {
        printf("# LOCAL-STORAGE SECTION\n");
    }
#line 1553 "translator.tab.c"
    break;

  case 29: /* statement: LINKAGE SECTION '.'  */
#line 195 "translator.y"
                          {
        printf("# LINKAGE SECTION\n");
    }
#line 1561 "translator.tab.c"
    break;

  case 30: /* statement: PROCEDURE DIVISION '.'  */
#line 198 "translator.y"
                             {
        printf("# PROCEDURE DIVISION\n");
    }
#line 1569 "translator.tab.c"
    break;

  case 31: /* statement: STOP RUN '.'  */
#line 201 "translator.y"
                   {
        printf("# STOP RUN\n");
    }
#line 1577 "translator.tab.c"
    break;

  case 32: /* statement: NUMBER IDENTIFIER '.'  */
#line 204 "translator.y"
                            {
        printf("# NIVEL %s DE VARIABLES %s\n",(yyvsp[-2].str),(yyvsp[-1].str));
    }
#line 1585 "translator.tab.c"
    break;

  case 33: /* statement: NUMBER IDENTIFIER PIC pic_type maybe_value '.'  */
#line 207 "translator.y"
                                                     {
        add_variable((yyvsp[-4].str),(yyvsp[-2].picinfo).type);
        if((yyvsp[-1].str)==NULL){
            printf("# var %s: %s%s%s\n", 
            (yyvsp[-4].str),                 
            (yyvsp[-2].picinfo).type,            
            (yyvsp[-2].picinfo).length != NULL ? (yyvsp[-2].picinfo).length : "", 
            (yyvsp[-1].str) != NULL ? (yyvsp[-1].str) : ""
            );
        }
        else{
            printf("%s%s\n",(yyvsp[-4].str),(yyvsp[-1].str) != NULL ? (yyvsp[-1].str) : "");
        }
    }
#line 1604 "translator.tab.c"
    break;

  case 36: /* $@1: %empty  */
#line 226 "translator.y"
                           {
        print_indent();
        printf("if (%s):\n",(yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-1].str));  
    }
#line 1615 "translator.tab.c"
    break;

  case 37: /* if_statement: IF conditional NEWLINE $@1 statements optional_else ENDIF optional_point  */
#line 232 "translator.y"
                                                  {
        indent_level--;
    }
#line 1623 "translator.tab.c"
    break;

  case 39: /* $@2: %empty  */
#line 239 "translator.y"
                   {
        indent_level--; 
        print_indent();
        printf("else:\n");
        indent_level++; 
    }
#line 1634 "translator.tab.c"
    break;

  case 41: /* conditional: IDENTIFIER EQUALS IDENTIFIER  */
#line 249 "translator.y"
                                 { 
        asprintf(&(yyval.str), "%s == %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1642 "translator.tab.c"
    break;

  case 42: /* conditional: IDENTIFIER EQUALS NUMBER  */
#line 252 "translator.y"
                               { 
        asprintf(&(yyval.str), "%s == %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1650 "translator.tab.c"
    break;

  case 43: /* conditional: IDENTIFIER EQUALS STRING  */
#line 255 "translator.y"
                               { 
        asprintf(&(yyval.str), "%s == \"%s\"",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1658 "translator.tab.c"
    break;

  case 44: /* conditional: IDENTIFIER MINOR IDENTIFIER  */
#line 258 "translator.y"
                                  { 
        asprintf(&(yyval.str), "%s < %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1666 "translator.tab.c"
    break;

  case 45: /* conditional: IDENTIFIER MINOR NUMBER  */
#line 261 "translator.y"
                              { 
        asprintf(&(yyval.str), "%s < %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1674 "translator.tab.c"
    break;

  case 46: /* conditional: IDENTIFIER MAJOR IDENTIFIER  */
#line 264 "translator.y"
                                  { 
        asprintf(&(yyval.str), "%s > %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1682 "translator.tab.c"
    break;

  case 47: /* conditional: IDENTIFIER MAJOR NUMBER  */
#line 267 "translator.y"
                              { 
        asprintf(&(yyval.str), "%s > %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1690 "translator.tab.c"
    break;

  case 48: /* $@3: %empty  */
#line 273 "translator.y"
                                             {
        print_indent();
        printf("for _ in range(%s):\n",(yyvsp[-1].str));
        indent_level++;
    }
#line 1700 "translator.tab.c"
    break;

  case 49: /* perform_statement: PERFORM optional_number_identifier TIMES $@3 statements ENDPERFORM optional_point  */
#line 278 "translator.y"
                                         {
        indent_level--;
    }
#line 1708 "translator.tab.c"
    break;

  case 50: /* $@4: %empty  */
#line 281 "translator.y"
                                {
        print_indent();
        printf("while not %s:\n",(yyvsp[0].str));
        indent_level++;
        free((yyvsp[0].str));
    }
#line 1719 "translator.tab.c"
    break;

  case 51: /* perform_statement: PERFORM UNTIL conditional $@4 statements ENDPERFORM optional_point  */
#line 287 "translator.y"
                                         {
        indent_level--;
    }
#line 1727 "translator.tab.c"
    break;

  case 52: /* $@5: %empty  */
#line 290 "translator.y"
                                                                                                                 {
        print_indent();
        printf("%s = %s - 1\n", (yyvsp[-6].str), (yyvsp[-4].str));
        printf("while not %s:\n", (yyvsp[0].str));
        indent_level++;
        print_indent();
        printf("%s += %s\n", (yyvsp[-6].str), (yyvsp[-2].str));
        free((yyvsp[-6].str));
    }
#line 1741 "translator.tab.c"
    break;

  case 53: /* perform_statement: PERFORM VARYING IDENTIFIER FROM optional_number_identifier BY optional_number_identifier UNTIL conditional $@5 statements ENDPERFORM optional_point  */
#line 299 "translator.y"
                                         {
        indent_level--;
    }
#line 1749 "translator.tab.c"
    break;

  case 56: /* optional_number_identifier: NUMBER  */
#line 310 "translator.y"
           { (yyval.str)=(yyvsp[0].str); }
#line 1755 "translator.tab.c"
    break;

  case 57: /* optional_number_identifier: IDENTIFIER  */
#line 311 "translator.y"
                 { (yyval.str)=(yyvsp[0].str); }
#line 1761 "translator.tab.c"
    break;

  case 58: /* pic_type: NUMBER optional_long  */
#line 315 "translator.y"
                         {
        (yyval.picinfo).type=strdup("int");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1770 "translator.tab.c"
    break;

  case 59: /* pic_type: NUMBER optional_long DIGIT_V9 '(' NUMBER ')'  */
#line 319 "translator.y"
                                                   {
        (yyval.picinfo).type=strdup("float");
        (yyval.picinfo).length=strdup((yyvsp[-4].str));
    }
#line 1779 "translator.tab.c"
    break;

  case 60: /* pic_type: 'X' optional_long  */
#line 323 "translator.y"
                        {
        (yyval.picinfo).type=strdup("str");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1788 "translator.tab.c"
    break;

  case 61: /* pic_type: 'A' optional_long  */
#line 327 "translator.y"
                        {
        (yyval.picinfo).type=strdup("str");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1797 "translator.tab.c"
    break;

  case 62: /* pic_type: DIGIT_S9 optional_long  */
#line 331 "translator.y"
                             {
        (yyval.picinfo).type=strdup("int");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1806 "translator.tab.c"
    break;

  case 63: /* pic_type: DIGIT_S9 optional_long DIGIT_V9 '(' NUMBER ')'  */
#line 335 "translator.y"
                                                     {
        (yyval.picinfo).type=strdup("float");
        (yyval.picinfo).length=strdup((yyvsp[-4].str));
    }
#line 1815 "translator.tab.c"
    break;

  case 64: /* optional_long: %empty  */
#line 342 "translator.y"
          { (yyval.str)=NULL; }
#line 1821 "translator.tab.c"
    break;

  case 65: /* optional_long: '(' NUMBER ')'  */
#line 343 "translator.y"
                     { (yyval.str)=(yyvsp[-1].str); }
#line 1827 "translator.tab.c"
    break;

  case 66: /* maybe_value: %empty  */
#line 347 "translator.y"
          { (yyval.str)=NULL; }
#line 1833 "translator.tab.c"
    break;

  case 67: /* maybe_value: VALUE STRING  */
#line 348 "translator.y"
                   {
        char* buf=malloc(strlen((yyvsp[0].str))+10);
        sprintf(buf," = \"%s\"",(yyvsp[0].str));
        (yyval.str)=buf;
    }
#line 1843 "translator.tab.c"
    break;

  case 68: /* maybe_value: VALUE NUMBER  */
#line 353 "translator.y"
                   {
        char* buf=malloc(strlen((yyvsp[0].str))+10);
        sprintf(buf," = %s",(yyvsp[0].str));
        (yyval.str)=buf;
    }
#line 1853 "translator.tab.c"
    break;

  case 74: /* newline_only: '\n'  */
#line 372 "translator.y"
         {
        printf("\n");
    }
#line 1861 "translator.tab.c"
    break;


#line 1865 "translator.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 376 "translator.y"


int main(int argc, char *argv[]){
    if(argc!=3){
        fprintf(stderr,"Uso: %s archivo_entrada.cob archivo_salida.py\n",argv[0]);
        return 1;
    }
    if(freopen(argv[1],"r",stdin)==NULL){
        perror("No se pudo abrir el archivo de entrada");
        return 1;
    }
    if(freopen(argv[2],"w",stdout)==NULL){
        perror("No se pudo abrir el archivo de salida");
        return 1;
    }
    yyparse();
    return 0;
}

void yyerror(const char *s){
    fprintf(stderr,"Error: %s\n",s);
}
