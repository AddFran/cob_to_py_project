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
  YYSYMBOL_COMPUTE = 53,                   /* COMPUTE  */
  YYSYMBOL_54_ = 54,                       /* '+'  */
  YYSYMBOL_55_ = 55,                       /* '-'  */
  YYSYMBOL_56_ = 56,                       /* '*'  */
  YYSYMBOL_57_ = 57,                       /* '/'  */
  YYSYMBOL_OR = 58,                        /* OR  */
  YYSYMBOL_AND = 59,                       /* AND  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_X_ = 63,                     /* 'X'  */
  YYSYMBOL_64_A_ = 64,                     /* 'A'  */
  YYSYMBOL_65_n_ = 65,                     /* '\n'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program = 67,                   /* program  */
  YYSYMBOL_statement = 68,                 /* statement  */
  YYSYMBOL_compute_statement = 69,         /* compute_statement  */
  YYSYMBOL_exp = 70,                       /* exp  */
  YYSYMBOL_tet = 71,                       /* tet  */
  YYSYMBOL_fef = 72,                       /* fef  */
  YYSYMBOL_if_statement = 73,              /* if_statement  */
  YYSYMBOL_74_1 = 74,                      /* $@1  */
  YYSYMBOL_optional_else = 75,             /* optional_else  */
  YYSYMBOL_76_2 = 76,                      /* $@2  */
  YYSYMBOL_conditional = 77,               /* conditional  */
  YYSYMBOL_conjunction = 78,               /* conjunction  */
  YYSYMBOL_comparison = 79,                /* comparison  */
  YYSYMBOL_perform_statement = 80,         /* perform_statement  */
  YYSYMBOL_81_3 = 81,                      /* $@3  */
  YYSYMBOL_82_4 = 82,                      /* $@4  */
  YYSYMBOL_83_5 = 83,                      /* $@5  */
  YYSYMBOL_optional_point = 84,            /* optional_point  */
  YYSYMBOL_optional_number_identifier = 85, /* optional_number_identifier  */
  YYSYMBOL_pic_type = 86,                  /* pic_type  */
  YYSYMBOL_optional_long = 87,             /* optional_long  */
  YYSYMBOL_maybe_value = 88,               /* maybe_value  */
  YYSYMBOL_statements = 89,                /* statements  */
  YYSYMBOL_statement_with_newline = 90,    /* statement_with_newline  */
  YYSYMBOL_newline_only = 91               /* newline_only  */
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
#define YYLAST   404

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
      65,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,    62,    56,    54,     2,    55,    60,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    64,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    58,
      59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    98,   102,   106,   110,   129,   133,   137,
     141,   145,   149,   153,   157,   161,   165,   169,   173,   177,
     181,   184,   187,   190,   193,   196,   199,   202,   205,   208,
     211,   214,   217,   220,   234,   235,   236,   240,   248,   253,
     258,   261,   266,   271,   274,   278,   282,   289,   289,   300,
     302,   302,   312,   316,   322,   327,   331,   334,   337,   340,
     343,   346,   349,   352,   359,   359,   367,   367,   376,   376,
     390,   392,   396,   397,   401,   405,   409,   413,   417,   421,
     428,   429,   433,   434,   439,   447,   448,   449,   453,   454,
     458
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
  "DIGIT_V9", "PERFORM", "ENDPERFORM", "TIMES", "UNTIL", "VARYING",
  "COMPUTE", "'+'", "'-'", "'*'", "'/'", "OR", "AND", "'.'", "'('", "')'",
  "'X'", "'A'", "'\\n'", "$accept", "program", "statement",
  "compute_statement", "exp", "tet", "fef", "if_statement", "$@1",
  "optional_else", "$@2", "conditional", "conjunction", "comparison",
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

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -127,    21,  -127,    50,    27,     5,    32,    10,    55,    55,
      55,    69,    35,    38,    43,    52,    72,   102,   103,    51,
      56,   101,   100,  -127,    12,   128,   104,  -127,  -127,  -127,
    -127,    79,    79,    79,   111,     5,   -15,    81,  -127,   -18,
     126,   127,   129,  -127,  -127,   131,   130,   132,   133,   125,
      88,    89,    91,    92,   106,   109,   110,   112,    82,    83,
     113,     5,   156,   114,   154,  -127,  -127,  -127,  -127,  -127,
      68,    84,    94,    44,  -127,     5,     5,    -2,  -127,   159,
     167,   170,    95,    96,    97,    55,    99,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,   115,   172,   117,   174,  -127,
     121,   160,  -127,     4,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,   351,    81,  -127,   120,   120,   120,   120,   141,
      79,    79,    79,    -3,   161,    -3,   164,   165,   166,  -127,
     165,   168,  -127,   123,  -127,   134,   351,    55,   351,  -127,
    -127,     4,    63,    71,  -127,   -24,   199,  -127,   179,   146,
     148,  -127,  -127,    16,   136,  -127,  -127,  -127,  -127,   193,
    -127,   194,   195,   196,  -127,  -127,   237,   180,   275,    60,
       4,     4,  -127,     4,     4,  -127,  -127,   163,   191,  -127,
     145,   147,   150,  -127,  -127,  -127,    79,    79,    79,    79,
      79,    55,    79,  -127,    71,    71,  -127,  -127,  -127,    79,
    -127,   207,   208,  -127,  -127,  -127,  -127,  -127,   158,  -127,
     351,  -127,   169,   173,     5,   351,  -127,  -127,   121,   351,
     313,    79,  -127
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,    36,    34,    35,
       3,    70,    70,    70,     0,     0,     0,    53,    55,     0,
       0,     0,     0,    73,    72,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    71,     4,     5,     6,
       0,     0,     0,     0,    47,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    24,    25,
      26,    27,    28,    29,    30,     0,     0,     0,     0,    31,
      66,     0,    64,     0,    58,    56,    57,    61,    62,    59,
      60,    63,     0,    52,    54,    80,    80,    80,    80,    82,
      70,    70,    70,    70,     0,    70,     0,    14,     0,    18,
      16,     0,    20,     0,    22,     0,     0,     0,     0,    45,
      46,     0,    70,    40,    43,     0,    49,    85,     0,    74,
      78,    76,    77,     0,     0,     7,     9,     8,    10,     0,
      12,     0,     0,     0,    21,    23,     0,     0,     0,     0,
       0,     0,    37,     0,     0,    90,    87,     0,     0,    86,
       0,     0,     0,    83,    84,    33,    70,    70,    70,    70,
      70,     0,    70,    44,    38,    39,    41,    42,    50,    70,
      81,     0,     0,    11,    13,    15,    17,    67,     0,    65,
       0,    48,     0,     0,     0,    51,    75,    79,    68,     0,
       0,    70,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -106,  -127,    98,   -41,   -40,  -127,  -127,  -127,
    -127,   -28,   157,   181,  -127,  -127,  -127,  -127,   -31,    -6,
    -127,     8,  -127,  -126,    -1,  -127
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    26,    27,   142,   143,   144,    28,   112,   178,
     210,    36,    37,    38,    29,   138,   136,   219,    67,    45,
     119,   149,   154,   146,   147,   176
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    68,    69,    46,    47,    49,   145,    73,   139,    34,
     166,   115,   168,    40,    41,    65,    43,   140,    63,   183,
     -73,     2,    77,    42,    74,    44,     3,     4,     5,   184,
     145,    33,   145,   100,     6,     7,    39,     8,     9,    10,
      11,   175,    78,    75,   116,    12,    13,    14,    15,    16,
      17,    18,    19,    31,    32,    20,    21,    66,    22,    43,
      23,   117,   118,    61,    62,   141,    35,    50,    44,    24,
      51,   104,   105,    48,    25,    52,   124,   126,   128,   129,
     131,   106,    44,    57,   215,    53,    95,    97,   107,   155,
     156,   157,   158,   220,   160,    96,    98,   108,   109,   123,
     125,   127,    75,   130,   145,    54,   111,   110,    44,    44,
      44,   172,    44,   145,   170,   171,    58,   170,   171,    70,
      71,    72,   193,    66,   150,   151,   152,   173,   174,   194,
     195,   167,    64,   196,   197,    55,    56,    59,    60,    66,
      76,    79,    80,    65,    81,   179,    82,    86,    87,    88,
      83,    89,    90,    84,    85,   203,   204,   205,   206,   207,
     101,   209,   103,   120,   102,   179,    91,   179,   211,    92,
      93,   121,    94,    99,   122,   132,   133,   134,   135,    75,
     137,   148,   153,   164,   159,   208,   218,   161,   -73,   162,
     222,   163,   180,   181,   165,   182,   185,   186,   187,   188,
     189,   191,   198,   199,     3,     4,     5,   200,   201,   214,
     177,   202,     6,     7,   179,     8,     9,    10,    11,   179,
     212,   213,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   216,   113,    20,    21,   217,    22,     0,    23,   169,
       0,     0,     3,     4,     5,     0,     0,    24,     0,     0,
       6,     7,    25,     8,     9,    10,    11,   114,     0,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,    20,    21,     0,    22,     0,    23,     0,     0,     0,
       3,     4,     5,     0,     0,    24,   190,     0,     6,     7,
      25,     8,     9,    10,    11,     0,     0,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,    20,
      21,     0,    22,     0,    23,     0,     0,     0,     3,     4,
       5,     0,     0,    24,   192,     0,     6,     7,    25,     8,
       9,    10,    11,     0,     0,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,    20,    21,     0,
      22,     0,    23,     0,     0,     0,     3,     4,     5,     0,
       0,    24,   221,     0,     6,     7,    25,     8,     9,    10,
      11,     0,     0,     0,     0,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,    20,    21,     0,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,    25
};

static const yytype_int16 yycheck[] =
{
       1,    32,    33,     9,    10,    11,   112,    35,     4,     4,
     136,    13,   138,     3,     4,    39,     4,    13,    24,     3,
      23,     0,    40,    13,    39,    13,     5,     6,     7,    13,
     136,     4,   138,    61,    13,    14,     4,    16,    17,    18,
      19,    65,    60,    58,    46,    24,    25,    26,    27,    28,
      29,    30,    31,     3,     4,    34,    35,    60,    37,     4,
      39,    63,    64,    51,    52,    61,    61,    32,    13,    48,
      32,     3,     4,     4,    53,    32,    82,    83,    84,    85,
      86,    13,    13,    32,   210,    33,     4,     4,     4,   120,
     121,   122,   123,   219,   125,    13,    13,    13,     4,     4,
       4,     4,    58,     4,   210,    33,    62,    13,    13,    13,
      13,   142,    13,   219,    54,    55,    60,    54,    55,     8,
       9,    10,    62,    60,   116,   117,   118,    56,    57,   170,
     171,   137,     4,   173,   174,    33,    33,    36,    38,    60,
      59,    15,    15,    39,    15,   146,    15,    22,    60,    60,
      20,    60,    60,    21,    21,   186,   187,   188,   189,   190,
       4,   192,     8,     4,    50,   166,    60,   168,   199,    60,
      60,     4,    60,    60,     4,    60,     4,    60,     4,    58,
      20,    61,    41,    60,    23,   191,   214,    23,    23,    23,
     221,    23,    13,    47,    60,    47,    60,     4,     4,     4,
       4,    21,    39,    12,     5,     6,     7,    62,    61,    51,
      11,    61,    13,    14,   215,    16,    17,    18,    19,   220,
      13,    13,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    62,    75,    34,    35,    62,    37,    -1,    39,   141,
      -1,    -1,     5,     6,     7,    -1,    -1,    48,    -1,    -1,
      13,    14,    53,    16,    17,    18,    19,    76,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34,    35,    -1,    37,    -1,    39,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    48,    49,    -1,    13,    14,
      53,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    -1,    37,    -1,    39,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    48,    49,    -1,    13,    14,    53,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    35,    -1,
      37,    -1,    39,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    48,    49,    -1,    13,    14,    53,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    -1,    37,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    67,     0,     5,     6,     7,    13,    14,    16,    17,
      18,    19,    24,    25,    26,    27,    28,    29,    30,    31,
      34,    35,    37,    39,    48,    53,    68,    69,    73,    80,
      90,     3,     4,     4,     4,    61,    77,    78,    79,     4,
       3,     4,    13,     4,    13,    85,    85,    85,     4,    85,
      32,    32,    32,    33,    33,    33,    33,    32,    60,    36,
      38,    51,    52,    85,     4,    39,    60,    84,    84,    84,
       8,     9,    10,    77,    39,    58,    59,    40,    60,    15,
      15,    15,    15,    20,    21,    21,    22,    60,    60,    60,
      60,    60,    60,    60,    60,     4,    13,     4,    13,    60,
      77,     4,    50,     8,     3,     4,    13,     4,    13,     4,
      13,    62,    74,    78,    79,    13,    46,    63,    64,    86,
       4,     4,     4,     4,    85,     4,    85,     4,    85,    85,
       4,    85,    60,     4,    60,     4,    82,    20,    81,     4,
      13,    61,    70,    71,    72,    68,    89,    90,    61,    87,
      87,    87,    87,    41,    88,    84,    84,    84,    84,    23,
      84,    23,    23,    23,    60,    60,    89,    85,    89,    70,
      54,    55,    84,    56,    57,    65,    91,    11,    75,    90,
      13,    47,    47,     3,    13,    60,     4,     4,     4,     4,
      49,    21,    49,    62,    71,    71,    72,    72,    39,    12,
      62,    61,    61,    84,    84,    84,    84,    84,    85,    84,
      76,    84,    13,    13,    51,    89,    62,    62,    77,    83,
      89,    49,    84
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    70,    70,
      70,    71,    71,    71,    72,    72,    72,    74,    73,    75,
      76,    75,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    81,    80,    82,    80,    83,    80,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    88,    89,    89,    89,    90,    90,
      91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     3,     5,     5,     5,
       5,     7,     5,     7,     4,     7,     4,     7,     4,     3,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     6,     1,     1,     1,     5,     3,     3,
       1,     3,     3,     1,     3,     1,     1,     0,     8,     0,
       0,     4,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     7,     0,     7,     0,    13,
       0,     1,     1,     1,     2,     6,     2,     2,     2,     6,
       0,     3,     0,     2,     2,     1,     2,     2,     2,     1,
       1
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
#line 102 "translator.y"
                                  {
        print_indent();
        printf("print(\"%s\")\n",(yyvsp[-1].str));
    }
#line 1376 "translator.tab.c"
    break;

  case 5: /* statement: DISPLAY IDENTIFIER optional_point  */
#line 106 "translator.y"
                                        {
        print_indent();
        printf("print(%s)\n",(yyvsp[-1].str));
    }
#line 1385 "translator.tab.c"
    break;

  case 6: /* statement: ACCEPT IDENTIFIER optional_point  */
#line 110 "translator.y"
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
#line 1409 "translator.tab.c"
    break;

  case 7: /* statement: MOVE STRING TO IDENTIFIER optional_point  */
#line 129 "translator.y"
                                               {
        print_indent();
        printf("%s = \"%s\"\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1418 "translator.tab.c"
    break;

  case 8: /* statement: MOVE NUMBER TO IDENTIFIER optional_point  */
#line 133 "translator.y"
                                               {
        print_indent();
        printf("%s = %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1427 "translator.tab.c"
    break;

  case 9: /* statement: MOVE IDENTIFIER TO IDENTIFIER optional_point  */
#line 137 "translator.y"
                                                   {
        print_indent();
        printf("%s = %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1436 "translator.tab.c"
    break;

  case 10: /* statement: ADD optional_number_identifier TO IDENTIFIER optional_point  */
#line 141 "translator.y"
                                                                  {
        print_indent();
        printf("%s += %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1445 "translator.tab.c"
    break;

  case 11: /* statement: ADD optional_number_identifier TO optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 145 "translator.y"
                                                                                                    {
        print_indent();
        printf("%s = %s + %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1454 "translator.tab.c"
    break;

  case 12: /* statement: SUBTRACT optional_number_identifier FROM IDENTIFIER optional_point  */
#line 149 "translator.y"
                                                                         {
        print_indent();
        printf("%s -= %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1463 "translator.tab.c"
    break;

  case 13: /* statement: SUBTRACT optional_number_identifier FROM optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 153 "translator.y"
                                                                                                           {
        print_indent();
        printf("%s = %s - %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1472 "translator.tab.c"
    break;

  case 14: /* statement: MULTIPLY optional_number_identifier BY IDENTIFIER  */
#line 157 "translator.y"
                                                        {
        print_indent();
        printf("%s *= %s\n",(yyvsp[0].str),(yyvsp[-2].str));
    }
#line 1481 "translator.tab.c"
    break;

  case 15: /* statement: MULTIPLY optional_number_identifier BY optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 161 "translator.y"
                                                                                                         {
        print_indent();
        printf("%s = %s * %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1490 "translator.tab.c"
    break;

  case 16: /* statement: DIVIDE optional_number_identifier INTO IDENTIFIER  */
#line 165 "translator.y"
                                                        {
        print_indent();
        printf("%s /= %s\n",(yyvsp[0].str),(yyvsp[-2].str));
    }
#line 1499 "translator.tab.c"
    break;

  case 17: /* statement: DIVIDE optional_number_identifier INTO optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 169 "translator.y"
                                                                                                         {
        print_indent();
        printf("%s = %s / %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1508 "translator.tab.c"
    break;

  case 18: /* statement: DIVIDE IDENTIFIER BY optional_number_identifier  */
#line 173 "translator.y"
                                                      {
        print_indent();
        printf("%s /= %s\n",(yyvsp[-2].str),(yyvsp[0].str));
    }
#line 1517 "translator.tab.c"
    break;

  case 19: /* statement: IDENTIFICATION DIVISION '.'  */
#line 177 "translator.y"
                                  {
        print_indent();
        printf("# IDENTIFICATION DIVISION\n");
    }
#line 1526 "translator.tab.c"
    break;

  case 20: /* statement: PROGRAMID '.' IDENTIFIER '.'  */
#line 181 "translator.y"
                                   {
        printf("# PROGRAM-ID: %s\n",(yyvsp[-1].str));
    }
#line 1534 "translator.tab.c"
    break;

  case 21: /* statement: PROGRAMID '.' NUMBER IDENTIFIER '.'  */
#line 184 "translator.y"
                                          {
        printf("# PROGRAM-ID: %s%s\n",(yyvsp[-2].str),(yyvsp[-1].str));
    }
#line 1542 "translator.tab.c"
    break;

  case 22: /* statement: END PROGRAM IDENTIFIER '.'  */
#line 187 "translator.y"
                                 {
        printf("# END PROGRAM %s", (yyvsp[-1].str));
    }
#line 1550 "translator.tab.c"
    break;

  case 23: /* statement: END PROGRAM NUMBER IDENTIFIER '.'  */
#line 190 "translator.y"
                                        {
        printf("# END PROGRAM %s%s", (yyvsp[-2].str),(yyvsp[-1].str));
    }
#line 1558 "translator.tab.c"
    break;

  case 24: /* statement: ENVIRONMENT DIVISION '.'  */
#line 193 "translator.y"
                               {
        printf("# ENVIRONMENT DIVISION\n");
    }
#line 1566 "translator.tab.c"
    break;

  case 25: /* statement: DATA DIVISION '.'  */
#line 196 "translator.y"
                        {
        printf("# DATA DIVISION\n");
    }
#line 1574 "translator.tab.c"
    break;

  case 26: /* statement: FIL SECTION '.'  */
#line 199 "translator.y"
                      {
        printf("# FILE SECTION\n");
    }
#line 1582 "translator.tab.c"
    break;

  case 27: /* statement: WORKINGSTORAGE SECTION '.'  */
#line 202 "translator.y"
                                 {
        printf("# WORKING-STORAGE SECTION\n");
    }
#line 1590 "translator.tab.c"
    break;

  case 28: /* statement: LOCALSTORAGE SECTION '.'  */
#line 205 "translator.y"
                               {
        printf("# LOCAL-STORAGE SECTION\n");
    }
#line 1598 "translator.tab.c"
    break;

  case 29: /* statement: LINKAGE SECTION '.'  */
#line 208 "translator.y"
                          {
        printf("# LINKAGE SECTION\n");
    }
#line 1606 "translator.tab.c"
    break;

  case 30: /* statement: PROCEDURE DIVISION '.'  */
#line 211 "translator.y"
                             {
        printf("# PROCEDURE DIVISION\n");
    }
#line 1614 "translator.tab.c"
    break;

  case 31: /* statement: STOP RUN '.'  */
#line 214 "translator.y"
                   {
        printf("# STOP RUN\n");
    }
#line 1622 "translator.tab.c"
    break;

  case 32: /* statement: NUMBER IDENTIFIER '.'  */
#line 217 "translator.y"
                            {
        printf("# NIVEL %s DE VARIABLES %s\n",(yyvsp[-2].str),(yyvsp[-1].str));
    }
#line 1630 "translator.tab.c"
    break;

  case 33: /* statement: NUMBER IDENTIFIER PIC pic_type maybe_value '.'  */
#line 220 "translator.y"
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
#line 1649 "translator.tab.c"
    break;

  case 37: /* compute_statement: COMPUTE IDENTIFIER EQUALS exp optional_point  */
#line 240 "translator.y"
                                                 {
        print_indent();
        printf("%s = %s\n",(yyvsp[-3].str),(yyvsp[-1].str)); 
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1660 "translator.tab.c"
    break;

  case 38: /* exp: exp '+' tet  */
#line 248 "translator.y"
                {
        asprintf(&(yyval.str),"(%s + %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1670 "translator.tab.c"
    break;

  case 39: /* exp: exp '-' tet  */
#line 253 "translator.y"
                  {
        asprintf(&(yyval.str), "(%s - %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1680 "translator.tab.c"
    break;

  case 40: /* exp: tet  */
#line 258 "translator.y"
          { (yyval.str)=(yyvsp[0].str); }
#line 1686 "translator.tab.c"
    break;

  case 41: /* tet: tet '*' fef  */
#line 261 "translator.y"
                {
        asprintf(&(yyval.str), "(%s * %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1696 "translator.tab.c"
    break;

  case 42: /* tet: tet '/' fef  */
#line 266 "translator.y"
                  {
        asprintf(&(yyval.str), "(%s / %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1706 "translator.tab.c"
    break;

  case 43: /* tet: fef  */
#line 271 "translator.y"
          { (yyval.str)=(yyvsp[0].str); }
#line 1712 "translator.tab.c"
    break;

  case 44: /* fef: '(' exp ')'  */
#line 274 "translator.y"
                {
        asprintf(&(yyval.str), "(%s)",(yyvsp[-1].str));
        free((yyvsp[-1].str));
    }
#line 1721 "translator.tab.c"
    break;

  case 45: /* fef: IDENTIFIER  */
#line 278 "translator.y"
                 {
        (yyval.str)=strdup((yyvsp[0].str));
        free((yyvsp[0].str));
    }
#line 1730 "translator.tab.c"
    break;

  case 46: /* fef: NUMBER  */
#line 282 "translator.y"
             {
        (yyval.str)=strdup((yyvsp[0].str));
        free((yyvsp[0].str));
    }
#line 1739 "translator.tab.c"
    break;

  case 47: /* $@1: %empty  */
#line 289 "translator.y"
                           {
        print_indent();
        printf("if %s:\n",(yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-1].str));  
    }
#line 1750 "translator.tab.c"
    break;

  case 48: /* if_statement: IF conditional NEWLINE $@1 statements optional_else ENDIF optional_point  */
#line 295 "translator.y"
                                                  {
        indent_level--;
    }
#line 1758 "translator.tab.c"
    break;

  case 50: /* $@2: %empty  */
#line 302 "translator.y"
                   {
        indent_level--; 
        print_indent();
        printf("else:\n");
        indent_level++; 
    }
#line 1769 "translator.tab.c"
    break;

  case 52: /* conditional: conditional OR conjunction  */
#line 312 "translator.y"
                               {
        asprintf(&(yyval.str), "(%s or %s)", (yyvsp[-2].str), (yyvsp[0].str));
        free((yyvsp[-2].str)); free((yyvsp[0].str));
    }
#line 1778 "translator.tab.c"
    break;

  case 53: /* conditional: conjunction  */
#line 316 "translator.y"
                  {
        (yyval.str) = (yyvsp[0].str);
    }
#line 1786 "translator.tab.c"
    break;

  case 54: /* conjunction: conjunction AND comparison  */
#line 322 "translator.y"
                               {
        asprintf(&(yyval.str), "(%s and %s)", (yyvsp[-2].str), (yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1796 "translator.tab.c"
    break;

  case 55: /* conjunction: comparison  */
#line 327 "translator.y"
                 { (yyval.str) = (yyvsp[0].str); }
#line 1802 "translator.tab.c"
    break;

  case 56: /* comparison: IDENTIFIER EQUALS IDENTIFIER  */
#line 331 "translator.y"
                                 { 
        asprintf(&(yyval.str), "%s == %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1810 "translator.tab.c"
    break;

  case 57: /* comparison: IDENTIFIER EQUALS NUMBER  */
#line 334 "translator.y"
                               { 
        asprintf(&(yyval.str), "%s == %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1818 "translator.tab.c"
    break;

  case 58: /* comparison: IDENTIFIER EQUALS STRING  */
#line 337 "translator.y"
                               { 
        asprintf(&(yyval.str), "%s == \"%s\"",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1826 "translator.tab.c"
    break;

  case 59: /* comparison: IDENTIFIER MINOR IDENTIFIER  */
#line 340 "translator.y"
                                  { 
        asprintf(&(yyval.str), "%s < %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1834 "translator.tab.c"
    break;

  case 60: /* comparison: IDENTIFIER MINOR NUMBER  */
#line 343 "translator.y"
                              { 
        asprintf(&(yyval.str), "%s < %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1842 "translator.tab.c"
    break;

  case 61: /* comparison: IDENTIFIER MAJOR IDENTIFIER  */
#line 346 "translator.y"
                                  { 
        asprintf(&(yyval.str), "%s > %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1850 "translator.tab.c"
    break;

  case 62: /* comparison: IDENTIFIER MAJOR NUMBER  */
#line 349 "translator.y"
                              { 
        asprintf(&(yyval.str), "%s > %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1858 "translator.tab.c"
    break;

  case 63: /* comparison: '(' conditional ')'  */
#line 352 "translator.y"
                          {
        asprintf(&(yyval.str), "(%s)", (yyvsp[-1].str));
        free((yyvsp[-1].str));
    }
#line 1867 "translator.tab.c"
    break;

  case 64: /* $@3: %empty  */
#line 359 "translator.y"
                                             {
        print_indent();
        printf("for _ in range(%s):\n",(yyvsp[-1].str));
        indent_level++;
    }
#line 1877 "translator.tab.c"
    break;

  case 65: /* perform_statement: PERFORM optional_number_identifier TIMES $@3 statements ENDPERFORM optional_point  */
#line 364 "translator.y"
                                         {
        indent_level--;
    }
#line 1885 "translator.tab.c"
    break;

  case 66: /* $@4: %empty  */
#line 367 "translator.y"
                                {
        print_indent();
        printf("while not %s:\n",(yyvsp[0].str));
        indent_level++;
        free((yyvsp[0].str));
    }
#line 1896 "translator.tab.c"
    break;

  case 67: /* perform_statement: PERFORM UNTIL conditional $@4 statements ENDPERFORM optional_point  */
#line 373 "translator.y"
                                         {
        indent_level--;
    }
#line 1904 "translator.tab.c"
    break;

  case 68: /* $@5: %empty  */
#line 376 "translator.y"
                                                                                                                 {
        print_indent();
        printf("%s = %s - 1\n",(yyvsp[-6].str),(yyvsp[-4].str));
        printf("while not %s:\n",(yyvsp[0].str));
        indent_level++;
        print_indent();
        printf("%s += %s\n",(yyvsp[-6].str),(yyvsp[-2].str));
        free((yyvsp[-6].str));
    }
#line 1918 "translator.tab.c"
    break;

  case 69: /* perform_statement: PERFORM VARYING IDENTIFIER FROM optional_number_identifier BY optional_number_identifier UNTIL conditional $@5 statements ENDPERFORM optional_point  */
#line 385 "translator.y"
                                         {
        indent_level--;
    }
#line 1926 "translator.tab.c"
    break;

  case 72: /* optional_number_identifier: NUMBER  */
#line 396 "translator.y"
           { (yyval.str)=(yyvsp[0].str); }
#line 1932 "translator.tab.c"
    break;

  case 73: /* optional_number_identifier: IDENTIFIER  */
#line 397 "translator.y"
                 { (yyval.str)=(yyvsp[0].str); }
#line 1938 "translator.tab.c"
    break;

  case 74: /* pic_type: NUMBER optional_long  */
#line 401 "translator.y"
                         {
        (yyval.picinfo).type=strdup("int");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1947 "translator.tab.c"
    break;

  case 75: /* pic_type: NUMBER optional_long DIGIT_V9 '(' NUMBER ')'  */
#line 405 "translator.y"
                                                   {
        (yyval.picinfo).type=strdup("float");
        (yyval.picinfo).length=strdup((yyvsp[-4].str));
    }
#line 1956 "translator.tab.c"
    break;

  case 76: /* pic_type: 'X' optional_long  */
#line 409 "translator.y"
                        {
        (yyval.picinfo).type=strdup("str");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1965 "translator.tab.c"
    break;

  case 77: /* pic_type: 'A' optional_long  */
#line 413 "translator.y"
                        {
        (yyval.picinfo).type=strdup("str");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1974 "translator.tab.c"
    break;

  case 78: /* pic_type: DIGIT_S9 optional_long  */
#line 417 "translator.y"
                             {
        (yyval.picinfo).type=strdup("int");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1983 "translator.tab.c"
    break;

  case 79: /* pic_type: DIGIT_S9 optional_long DIGIT_V9 '(' NUMBER ')'  */
#line 421 "translator.y"
                                                     {
        (yyval.picinfo).type=strdup("float");
        (yyval.picinfo).length=strdup((yyvsp[-4].str));
    }
#line 1992 "translator.tab.c"
    break;

  case 80: /* optional_long: %empty  */
#line 428 "translator.y"
          { (yyval.str)=NULL; }
#line 1998 "translator.tab.c"
    break;

  case 81: /* optional_long: '(' NUMBER ')'  */
#line 429 "translator.y"
                     { (yyval.str)=(yyvsp[-1].str); }
#line 2004 "translator.tab.c"
    break;

  case 82: /* maybe_value: %empty  */
#line 433 "translator.y"
          { (yyval.str)=NULL; }
#line 2010 "translator.tab.c"
    break;

  case 83: /* maybe_value: VALUE STRING  */
#line 434 "translator.y"
                   {
        char* buf=malloc(strlen((yyvsp[0].str))+10);
        sprintf(buf," = \"%s\"",(yyvsp[0].str));
        (yyval.str)=buf;
    }
#line 2020 "translator.tab.c"
    break;

  case 84: /* maybe_value: VALUE NUMBER  */
#line 439 "translator.y"
                   {
        char* buf=malloc(strlen((yyvsp[0].str))+10);
        sprintf(buf," = %s",(yyvsp[0].str));
        (yyval.str)=buf;
    }
#line 2030 "translator.tab.c"
    break;

  case 90: /* newline_only: '\n'  */
#line 458 "translator.y"
         {
        printf("\n");
    }
#line 2038 "translator.tab.c"
    break;


#line 2042 "translator.tab.c"

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

#line 462 "translator.y"


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
