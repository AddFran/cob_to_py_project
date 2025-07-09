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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int yylex(void);
void yyerror(const char *s);

int indent_level = 0;

void print_indent() {
    for (int i = 0; i < indent_level; i++)
        printf("    ");
}


typedef struct {
    char* name;
    char* type; 
} Variable;

#define MAX_VARIABLES 100
Variable variables[MAX_VARIABLES];
int variable_count = 0;

void add_variable(const char* name, const char* type) {
    variables[variable_count].name = strdup(name);
    variables[variable_count].type = strdup(type);
    variable_count++;
}

const char* get_variable_type(const char* name) {
    for (int i = 0; i < variable_count; i++) {
        if (strcmp(variables[i].name, name) == 0) {
            return variables[i].type;
        }
    }
    return NULL;
}


#line 114 "translator.tab.c"

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
  YYSYMBOL_51_ = 51,                       /* '.'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_X_ = 54,                     /* 'X'  */
  YYSYMBOL_55_A_ = 55,                     /* 'A'  */
  YYSYMBOL_56_n_ = 56,                     /* '\n'  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_statement = 59,                 /* statement  */
  YYSYMBOL_if_statement = 60,              /* if_statement  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_62_2 = 62,                      /* $@2  */
  YYSYMBOL_63_3 = 63,                      /* $@3  */
  YYSYMBOL_64_4 = 64,                      /* $@4  */
  YYSYMBOL_65_5 = 65,                      /* $@5  */
  YYSYMBOL_66_6 = 66,                      /* $@6  */
  YYSYMBOL_67_7 = 67,                      /* $@7  */
  YYSYMBOL_optional_else = 68,             /* optional_else  */
  YYSYMBOL_69_8 = 69,                      /* $@8  */
  YYSYMBOL_perform_statement = 70,         /* perform_statement  */
  YYSYMBOL_71_9 = 71,                      /* $@9  */
  YYSYMBOL_optional_point = 72,            /* optional_point  */
  YYSYMBOL_optional_number_identifier = 73, /* optional_number_identifier  */
  YYSYMBOL_pic_type = 74,                  /* pic_type  */
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
#define YYLAST   291

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      56,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,    53,     2,     2,     2,     2,    51,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    55,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    84,    88,    92,    96,   115,   119,   123,
     127,   131,   135,   139,   143,   147,   151,   155,   159,   163,
     167,   170,   173,   176,   179,   182,   185,   188,   191,   194,
     197,   200,   217,   218,   222,   222,   231,   231,   240,   240,
     248,   248,   256,   256,   264,   264,   272,   272,   282,   284,
     284,   294,   294,   304,   306,   309,   310,   313,   317,   321,
     325,   329,   333,   340,   341,   346,   354,   355,   356,   360,
     361,   365
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
  "DIGIT_V9", "PERFORM", "ENDPERFORM", "TIMES", "'.'", "'('", "')'", "'X'",
  "'A'", "'\\n'", "$accept", "program", "statement", "if_statement", "$@1",
  "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "optional_else", "$@8",
  "perform_statement", "$@9", "optional_point",
  "optional_number_identifier", "pic_type", "maybe_value", "statements",
  "statement_with_newline", "newline_only", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -117,    87,  -117,    65,    11,    14,    33,     7,    39,    39,
      39,    40,    10,    23,    34,    37,    50,    51,    55,    42,
      20,    47,  -117,    39,    56,  -117,  -117,  -117,    45,    45,
      45,     4,   -34,    74,    75,    76,  -117,  -117,    82,    78,
      81,    86,    77,    57,    58,    59,    71,    72,    92,    93,
      94,    41,    95,    70,  -117,  -117,  -117,  -117,  -117,    36,
      44,    46,    -8,  -117,   115,   121,   123,    52,    54,    68,
      39,    69,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
      96,   124,  -117,  -117,    90,   109,   110,   111,   112,   113,
     114,   102,   103,   104,   105,   131,    45,    45,    45,   -16,
     153,   -16,   154,   155,   156,  -117,   155,   157,  -117,   132,
     243,  -117,  -117,  -117,  -117,  -117,  -117,  -117,   175,   176,
     177,   178,    38,   149,  -117,  -117,  -117,  -117,   197,  -117,
     199,   202,   204,  -117,   -20,   168,  -117,   243,   243,   243,
     243,   243,   243,   243,   158,   162,   166,   169,  -117,  -117,
    -117,    45,    45,    45,    45,  -117,  -117,    45,  -117,   207,
     207,   207,   207,   207,   207,   207,   163,   180,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,   170,   216,   217,   218,   227,
     228,   230,   231,   193,   195,  -117,    45,    45,    45,    45,
      45,    45,    45,   238,   239,   243,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,   200,   201,   243,  -117,  -117
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,    32,    33,     3,    53,    53,
      53,     0,     0,     0,     0,     0,    56,    55,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    54,     4,     5,     6,     0,
       0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    19,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    53,    53,    53,    53,
       0,    53,     0,    14,     0,    18,    16,     0,    20,     0,
       0,    34,    36,    38,    44,    46,    40,    42,     0,     0,
       0,     0,     0,     0,     7,     9,     8,    10,     0,    12,
       0,     0,     0,    21,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
      31,    53,    53,    53,    53,    71,    68,    53,    67,    48,
      48,    48,    48,    48,    48,    48,    57,    61,    59,    60,
      11,    13,    15,    17,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    53,    53,    53,    53,
      53,    53,    53,     0,     0,     0,    35,    37,    39,    45,
      47,    41,    43,     0,     0,    50,    58,    62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -117,  -117,  -109,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,   -23,  -117,  -117,  -117,   -21,    -7,  -117,  -117,  -116,
      -1,  -117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    24,    25,   137,   138,   139,   142,   143,   140,
     141,   176,   195,    26,   110,    56,    38,    95,   123,   135,
     136,   156
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   134,    39,    40,    42,    91,    62,   -56,    57,    58,
      33,    34,    59,    60,    61,    30,    53,    63,    31,    54,
      35,   159,   160,   161,   162,   163,   164,   165,   134,   134,
     134,   134,   134,   134,   134,    55,   155,    32,    92,    84,
      85,   148,    43,    36,    41,    80,    93,    94,    87,    86,
      89,   149,    37,    37,    81,    44,    99,    88,   101,    90,
     100,   102,   104,   105,   107,    37,    45,    37,    28,    29,
      46,    51,   103,   106,    50,   124,   125,   126,   127,   205,
     129,    37,    37,    47,    48,    52,   134,     2,    49,    64,
      65,    66,     3,     4,     5,    54,    55,    67,    68,    71,
       6,     7,    69,     8,     9,    10,    11,    70,    72,    73,
      74,    12,    13,    14,    15,    16,    17,    18,    19,    96,
      83,    20,    75,    76,    21,    97,    22,    98,   109,   111,
     170,   171,   172,   173,   158,    23,   174,   177,   178,   179,
     180,   181,   182,    77,    78,    79,    82,   108,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   158,   158,
     158,   158,   158,   158,   158,   196,   197,   198,   199,   200,
     201,   202,   122,     3,     4,     5,   128,   130,   -56,   131,
     132,     6,     7,   133,     8,     9,    10,    11,   144,   145,
     146,   147,    12,    13,    14,    15,    16,    17,    18,    19,
     150,   151,    20,   152,   158,    21,   153,    22,   154,   185,
     183,   166,     3,     4,     5,   167,    23,   157,   175,   168,
       6,     7,   169,     8,     9,    10,    11,   184,   186,   187,
     188,    12,    13,    14,    15,    16,    17,    18,    19,   189,
     190,    20,   191,   192,    21,   193,    22,   194,     3,     4,
       5,   203,   204,   206,   207,    23,     6,     7,     0,     8,
       9,    10,    11,     0,     0,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,    20,     0,     0,
      21,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,    23
};

static const yytype_int16 yycheck[] =
{
       1,   110,     9,    10,    11,    13,    40,    23,    29,    30,
       3,     4,     8,     9,    10,     4,    23,    51,     4,    39,
      13,   137,   138,   139,   140,   141,   142,   143,   137,   138,
     139,   140,   141,   142,   143,    51,    56,     4,    46,     3,
       4,     3,    32,     4,     4,     4,    54,    55,     4,    13,
       4,    13,    13,    13,    13,    32,     4,    13,     4,    13,
      67,    68,    69,    70,    71,    13,    32,    13,     3,     4,
      33,    51,     4,     4,    32,    96,    97,    98,    99,   195,
     101,    13,    13,    33,    33,    38,   195,     0,    33,    15,
      15,    15,     5,     6,     7,    39,    51,    15,    20,    22,
      13,    14,    21,    16,    17,    18,    19,    21,    51,    51,
      51,    24,    25,    26,    27,    28,    29,    30,    31,     4,
      50,    34,    51,    51,    37,     4,    39,     4,     4,    39,
     151,   152,   153,   154,   135,    48,   157,   160,   161,   162,
     163,   164,   165,    51,    51,    51,    51,    51,    39,    39,
      39,    39,    39,    39,    52,    52,    52,    52,   159,   160,
     161,   162,   163,   164,   165,   186,   187,   188,   189,   190,
     191,   192,    41,     5,     6,     7,    23,    23,    23,    23,
      23,    13,    14,    51,    16,    17,    18,    19,    13,    13,
      13,    13,    24,    25,    26,    27,    28,    29,    30,    31,
      51,     4,    34,     4,   205,    37,     4,    39,     4,    39,
      47,    53,     5,     6,     7,    53,    48,    49,    11,    53,
      13,    14,    53,    16,    17,    18,    19,    47,    12,    12,
      12,    24,    25,    26,    27,    28,    29,    30,    31,    12,
      12,    34,    12,    12,    37,    52,    39,    52,     5,     6,
       7,    13,    13,    53,    53,    48,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    58,     0,     5,     6,     7,    13,    14,    16,    17,
      18,    19,    24,    25,    26,    27,    28,    29,    30,    31,
      34,    37,    39,    48,    59,    60,    70,    77,     3,     4,
       4,     4,     4,     3,     4,    13,     4,    13,    73,    73,
      73,     4,    73,    32,    32,    32,    33,    33,    33,    33,
      32,    51,    38,    73,    39,    51,    72,    72,    72,     8,
       9,    10,    40,    51,    15,    15,    15,    15,    20,    21,
      21,    22,    51,    51,    51,    51,    51,    51,    51,    51,
       4,    13,    51,    50,     3,     4,    13,     4,    13,     4,
      13,    13,    46,    54,    55,    74,     4,     4,     4,     4,
      73,     4,    73,     4,    73,    73,     4,    73,    51,     4,
      71,    39,    39,    39,    39,    39,    39,    39,    52,    52,
      52,    52,    41,    75,    72,    72,    72,    72,    23,    72,
      23,    23,    23,    51,    59,    76,    77,    61,    62,    63,
      66,    67,    64,    65,    13,    13,    13,    13,     3,    13,
      51,     4,     4,     4,     4,    56,    78,    49,    77,    76,
      76,    76,    76,    76,    76,    76,    53,    53,    53,    53,
      72,    72,    72,    72,    72,    11,    68,    68,    68,    68,
      68,    68,    68,    47,    47,    39,    12,    12,    12,    12,
      12,    12,    12,    52,    52,    69,    72,    72,    72,    72,
      72,    72,    72,    13,    13,    76,    53,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    61,    60,    62,    60,    63,    60,
      64,    60,    65,    60,    66,    60,    67,    60,    68,    69,
      68,    71,    70,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    77,
      77,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     3,     5,     5,     5,
       5,     7,     5,     7,     4,     7,     4,     7,     4,     3,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     6,     1,     1,     0,    10,     0,    10,     0,    10,
       0,    10,     0,    10,     0,    10,     0,    10,     0,     0,
       4,     0,     7,     0,     1,     1,     1,     4,     8,     4,
       4,     4,     8,     0,     2,     2,     1,     2,     2,     2,
       1,     1
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
#line 88 "translator.y"
                                  {
        print_indent();
        printf("print(\"%s\")\n", (yyvsp[-1].str));
    }
#line 1327 "translator.tab.c"
    break;

  case 5: /* statement: DISPLAY IDENTIFIER optional_point  */
#line 92 "translator.y"
                                        {
        print_indent();
        printf("print(%s)\n", (yyvsp[-1].str));
    }
#line 1336 "translator.tab.c"
    break;

  case 6: /* statement: ACCEPT IDENTIFIER optional_point  */
#line 96 "translator.y"
                                       {
        const char* tipo = get_variable_type((yyvsp[-1].str));
        print_indent();
        if (tipo == NULL) {
            printf("%s = input()  # tipo desconocido\n", (yyvsp[-1].str));
        } 
        else if (strcmp(tipo, "int") == 0) {
            printf("%s = int(input())\n", (yyvsp[-1].str));
        } 
        else if (strcmp(tipo, "float") == 0) {
            printf("%s = float(input())\n", (yyvsp[-1].str));
        } 
        else if (strcmp(tipo, "str") == 0) {
            printf("%s = str(input())\n", (yyvsp[-1].str)); 
        } 
        else {
            printf("%s = input()  # tipo de dato no manejado: %s\n", (yyvsp[-1].str), tipo);
        }
    }
#line 1360 "translator.tab.c"
    break;

  case 7: /* statement: MOVE STRING TO IDENTIFIER optional_point  */
#line 115 "translator.y"
                                               {
        print_indent();
        printf("%s = \"%s\"\n", (yyvsp[-1].str), (yyvsp[-3].str));
    }
#line 1369 "translator.tab.c"
    break;

  case 8: /* statement: MOVE NUMBER TO IDENTIFIER optional_point  */
#line 119 "translator.y"
                                               {
        print_indent();
        printf("%s = %s\n", (yyvsp[-1].str), (yyvsp[-3].str));
    }
#line 1378 "translator.tab.c"
    break;

  case 9: /* statement: MOVE IDENTIFIER TO IDENTIFIER optional_point  */
#line 123 "translator.y"
                                                   {
        print_indent();
        printf("%s = %s\n", (yyvsp[-1].str), (yyvsp[-3].str));
    }
#line 1387 "translator.tab.c"
    break;

  case 10: /* statement: ADD optional_number_identifier TO IDENTIFIER optional_point  */
#line 127 "translator.y"
                                                                  {
        print_indent();
        printf("%s += %s\n", (yyvsp[-1].str), (yyvsp[-3].str));
    }
#line 1396 "translator.tab.c"
    break;

  case 11: /* statement: ADD optional_number_identifier TO optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 131 "translator.y"
                                                                                                    {
        print_indent();
        printf("%s = %s + %s\n", (yyvsp[-1].str), (yyvsp[-3].str), (yyvsp[-5].str));
    }
#line 1405 "translator.tab.c"
    break;

  case 12: /* statement: SUBTRACT optional_number_identifier FROM IDENTIFIER optional_point  */
#line 135 "translator.y"
                                                                         {
        print_indent();
        printf("%s -= %s\n", (yyvsp[-1].str), (yyvsp[-3].str));
    }
#line 1414 "translator.tab.c"
    break;

  case 13: /* statement: SUBTRACT optional_number_identifier FROM optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 139 "translator.y"
                                                                                                           {
        print_indent();
        printf("%s = %s - %s\n", (yyvsp[-1].str), (yyvsp[-3].str), (yyvsp[-5].str));
    }
#line 1423 "translator.tab.c"
    break;

  case 14: /* statement: MULTIPLY optional_number_identifier BY IDENTIFIER  */
#line 143 "translator.y"
                                                        {
        print_indent();
        printf("%s *= %s\n", (yyvsp[0].str), (yyvsp[-2].str));
    }
#line 1432 "translator.tab.c"
    break;

  case 15: /* statement: MULTIPLY optional_number_identifier BY optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 147 "translator.y"
                                                                                                         {
        print_indent();
        printf("%s = %s * %s\n", (yyvsp[-1].str), (yyvsp[-3].str), (yyvsp[-5].str));
    }
#line 1441 "translator.tab.c"
    break;

  case 16: /* statement: DIVIDE optional_number_identifier INTO IDENTIFIER  */
#line 151 "translator.y"
                                                        {
        print_indent();
        printf("%s /= %s\n", (yyvsp[0].str), (yyvsp[-2].str));
    }
#line 1450 "translator.tab.c"
    break;

  case 17: /* statement: DIVIDE optional_number_identifier INTO optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 155 "translator.y"
                                                                                                         {
        print_indent();
        printf("%s = %s / %s\n", (yyvsp[-1].str), (yyvsp[-3].str), (yyvsp[-5].str));
    }
#line 1459 "translator.tab.c"
    break;

  case 18: /* statement: DIVIDE IDENTIFIER BY optional_number_identifier  */
#line 159 "translator.y"
                                                      {
        print_indent();
        printf("%s /= %s\n", (yyvsp[-2].str), (yyvsp[0].str));
    }
#line 1468 "translator.tab.c"
    break;

  case 19: /* statement: IDENTIFICATION DIVISION '.'  */
#line 163 "translator.y"
                                  {
        print_indent();
        printf("# IDENTIFICATION DIVISION\n");
    }
#line 1477 "translator.tab.c"
    break;

  case 20: /* statement: PROGRAMID '.' IDENTIFIER '.'  */
#line 167 "translator.y"
                                   {
        printf("# PROGRAM-ID: %s\n", (yyvsp[-1].str));
    }
#line 1485 "translator.tab.c"
    break;

  case 21: /* statement: PROGRAMID '.' NUMBER IDENTIFIER '.'  */
#line 170 "translator.y"
                                          {
        printf("# PROGRAM-ID: %s%s\n", (yyvsp[-2].str), (yyvsp[-1].str));
    }
#line 1493 "translator.tab.c"
    break;

  case 22: /* statement: ENVIRONMENT DIVISION '.'  */
#line 173 "translator.y"
                               {
        printf("# ENVIRONMENT DIVISION\n");
    }
#line 1501 "translator.tab.c"
    break;

  case 23: /* statement: DATA DIVISION '.'  */
#line 176 "translator.y"
                        {
        printf("# DATA DIVISION\n");
    }
#line 1509 "translator.tab.c"
    break;

  case 24: /* statement: FIL SECTION '.'  */
#line 179 "translator.y"
                      {
        printf("# FILE SECTION\n");
    }
#line 1517 "translator.tab.c"
    break;

  case 25: /* statement: WORKINGSTORAGE SECTION '.'  */
#line 182 "translator.y"
                                 {
        printf("# WORKING-STORAGE SECTION\n");
    }
#line 1525 "translator.tab.c"
    break;

  case 26: /* statement: LOCALSTORAGE SECTION '.'  */
#line 185 "translator.y"
                               {
        printf("# LOCAL-STORAGE SECTION\n");
    }
#line 1533 "translator.tab.c"
    break;

  case 27: /* statement: LINKAGE SECTION '.'  */
#line 188 "translator.y"
                          {
        printf("# LINKAGE SECTION\n");
    }
#line 1541 "translator.tab.c"
    break;

  case 28: /* statement: PROCEDURE DIVISION '.'  */
#line 191 "translator.y"
                             {
        printf("# PROCEDURE DIVISION\n");
    }
#line 1549 "translator.tab.c"
    break;

  case 29: /* statement: STOP RUN '.'  */
#line 194 "translator.y"
                   {
        printf("# STOP RUN\n");
    }
#line 1557 "translator.tab.c"
    break;

  case 30: /* statement: NUMBER IDENTIFIER '.'  */
#line 197 "translator.y"
                            {
        printf("# NIVEL %s DE VARIABLES %s\n", (yyvsp[-2].str), (yyvsp[-1].str));
    }
#line 1565 "translator.tab.c"
    break;

  case 31: /* statement: NUMBER IDENTIFIER PIC pic_type maybe_value '.'  */
#line 200 "translator.y"
                                                     {
        add_variable((yyvsp[-4].str), (yyvsp[-2].picinfo).type);
        if((yyvsp[-1].str) == NULL){
            printf("# var %s: %s%s%s\n", 
            (yyvsp[-4].str),                 
            (yyvsp[-2].picinfo).type,            
            (yyvsp[-2].picinfo).length != NULL ? (yyvsp[-2].picinfo).length : "", 
            (yyvsp[-1].str) != NULL ? (yyvsp[-1].str) : ""
            );
        }
        else{
            printf("%s%s\n", 
                (yyvsp[-4].str),                 
                (yyvsp[-1].str) != NULL ? (yyvsp[-1].str) : ""
            );
        }
    }
#line 1587 "translator.tab.c"
    break;

  case 34: /* $@1: %empty  */
#line 222 "translator.y"
                                        {
        print_indent();
        printf("if (%s == \"%s\"):\n", (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
    }
#line 1597 "translator.tab.c"
    break;

  case 35: /* if_statement: IF IDENTIFIER EQUALS STRING NEWLINE $@1 statements optional_else ENDIF optional_point  */
#line 227 "translator.y"
                                                  {
        indent_level--;
    }
#line 1605 "translator.tab.c"
    break;

  case 36: /* $@2: %empty  */
#line 231 "translator.y"
                                              {
        print_indent();
        printf("if (%s == %s):\n", (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
    }
#line 1615 "translator.tab.c"
    break;

  case 37: /* if_statement: IF IDENTIFIER EQUALS IDENTIFIER NEWLINE $@2 statements optional_else ENDIF optional_point  */
#line 236 "translator.y"
                                                  {
        indent_level--;
    }
#line 1623 "translator.tab.c"
    break;

  case 38: /* $@3: %empty  */
#line 240 "translator.y"
                                          {
        print_indent();
        printf("if (%s == %s):\n", (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
    }
#line 1633 "translator.tab.c"
    break;

  case 39: /* if_statement: IF IDENTIFIER EQUALS NUMBER NEWLINE $@3 statements optional_else ENDIF optional_point  */
#line 245 "translator.y"
                                                  {
        indent_level--;
    }
#line 1641 "translator.tab.c"
    break;

  case 40: /* $@4: %empty  */
#line 248 "translator.y"
                                             {
        print_indent();
        printf("if (%s < %s):\n", (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
    }
#line 1651 "translator.tab.c"
    break;

  case 41: /* if_statement: IF IDENTIFIER MINOR IDENTIFIER NEWLINE $@4 statements optional_else ENDIF optional_point  */
#line 253 "translator.y"
                                                  {
        indent_level--;
    }
#line 1659 "translator.tab.c"
    break;

  case 42: /* $@5: %empty  */
#line 256 "translator.y"
                                         {
        print_indent();
        printf("if (%s < %s):\n", (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
    }
#line 1669 "translator.tab.c"
    break;

  case 43: /* if_statement: IF IDENTIFIER MINOR NUMBER NEWLINE $@5 statements optional_else ENDIF optional_point  */
#line 261 "translator.y"
                                                  {
        indent_level--;
    }
#line 1677 "translator.tab.c"
    break;

  case 44: /* $@6: %empty  */
#line 264 "translator.y"
                                             {
        print_indent();
        printf("if (%s > %s):\n", (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
    }
#line 1687 "translator.tab.c"
    break;

  case 45: /* if_statement: IF IDENTIFIER MAJOR IDENTIFIER NEWLINE $@6 statements optional_else ENDIF optional_point  */
#line 269 "translator.y"
                                                  {
        indent_level--;
    }
#line 1695 "translator.tab.c"
    break;

  case 46: /* $@7: %empty  */
#line 272 "translator.y"
                                         {
        print_indent();
        printf("if (%s > %s):\n", (yyvsp[-3].str), (yyvsp[-1].str));
        indent_level++;
    }
#line 1705 "translator.tab.c"
    break;

  case 47: /* if_statement: IF IDENTIFIER MAJOR NUMBER NEWLINE $@7 statements optional_else ENDIF optional_point  */
#line 277 "translator.y"
                                                  {
        indent_level--;
    }
#line 1713 "translator.tab.c"
    break;

  case 49: /* $@8: %empty  */
#line 284 "translator.y"
                   {
        indent_level--; 
        print_indent();
        printf("else:\n");
        indent_level++; 
    }
#line 1724 "translator.tab.c"
    break;

  case 51: /* $@9: %empty  */
#line 294 "translator.y"
                                             {
        print_indent();
        printf("for _ in range(%s):\n", (yyvsp[-1].str));
        indent_level++;
    }
#line 1734 "translator.tab.c"
    break;

  case 52: /* perform_statement: PERFORM optional_number_identifier TIMES $@9 statements ENDPERFORM optional_point  */
#line 299 "translator.y"
                                         {
        indent_level--;
    }
#line 1742 "translator.tab.c"
    break;

  case 55: /* optional_number_identifier: NUMBER  */
#line 309 "translator.y"
           { (yyval.str) = (yyvsp[0].str); }
#line 1748 "translator.tab.c"
    break;

  case 56: /* optional_number_identifier: IDENTIFIER  */
#line 310 "translator.y"
                 { (yyval.str) = (yyvsp[0].str); }
#line 1754 "translator.tab.c"
    break;

  case 57: /* pic_type: NUMBER '(' NUMBER ')'  */
#line 313 "translator.y"
                          {
        (yyval.picinfo).type = strdup("int");
        (yyval.picinfo).length = strdup((yyvsp[-1].str));
    }
#line 1763 "translator.tab.c"
    break;

  case 58: /* pic_type: NUMBER '(' NUMBER ')' DIGIT_V9 '(' NUMBER ')'  */
#line 317 "translator.y"
                                                    {
        (yyval.picinfo).type = strdup("float");
        (yyval.picinfo).length = strdup((yyvsp[-5].str));
    }
#line 1772 "translator.tab.c"
    break;

  case 59: /* pic_type: 'X' '(' NUMBER ')'  */
#line 321 "translator.y"
                         {
        (yyval.picinfo).type = strdup("str");
        (yyval.picinfo).length = strdup((yyvsp[-1].str));
    }
#line 1781 "translator.tab.c"
    break;

  case 60: /* pic_type: 'A' '(' NUMBER ')'  */
#line 325 "translator.y"
                         {
        (yyval.picinfo).type = strdup("str");
        (yyval.picinfo).length = strdup((yyvsp[-1].str));
    }
#line 1790 "translator.tab.c"
    break;

  case 61: /* pic_type: DIGIT_S9 '(' NUMBER ')'  */
#line 329 "translator.y"
                              {
        (yyval.picinfo).type = strdup("int");
        (yyval.picinfo).length = strdup((yyvsp[-1].str));
    }
#line 1799 "translator.tab.c"
    break;

  case 62: /* pic_type: DIGIT_S9 '(' NUMBER ')' DIGIT_V9 '(' NUMBER ')'  */
#line 333 "translator.y"
                                                      {
        (yyval.picinfo).type = strdup("float");
        (yyval.picinfo).length = strdup((yyvsp[-5].str));
    }
#line 1808 "translator.tab.c"
    break;

  case 63: /* maybe_value: %empty  */
#line 340 "translator.y"
                 { (yyval.str) = NULL; }
#line 1814 "translator.tab.c"
    break;

  case 64: /* maybe_value: VALUE STRING  */
#line 341 "translator.y"
                   {
        char* buf = malloc(strlen((yyvsp[0].str)) + 10);
        sprintf(buf, " = \"%s\"", (yyvsp[0].str));
        (yyval.str) = buf;
    }
#line 1824 "translator.tab.c"
    break;

  case 65: /* maybe_value: VALUE NUMBER  */
#line 346 "translator.y"
                   {
        char* buf = malloc(strlen((yyvsp[0].str)) + 10);
        sprintf(buf, " = %s", (yyvsp[0].str));
        (yyval.str) = buf;
    }
#line 1834 "translator.tab.c"
    break;

  case 71: /* newline_only: '\n'  */
#line 365 "translator.y"
         {
        printf("\n");
    }
#line 1842 "translator.tab.c"
    break;


#line 1846 "translator.tab.c"

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

#line 369 "translator.y"


int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s archivo_entrada.cob archivo_salida.py\n", argv[0]);
        return 1;
    }

    if (freopen(argv[1], "r", stdin) == NULL) {
        perror("No se pudo abrir el archivo de entrada");
        return 1;
    }

    if (freopen(argv[2], "w", stdout) == NULL) {
        perror("No se pudo abrir el archivo de salida");
        return 1;
    }

    yyparse();

    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
