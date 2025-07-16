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
  YYSYMBOL_THEN = 9,                       /* THEN  */
  YYSYMBOL_MAJOR = 10,                     /* MAJOR  */
  YYSYMBOL_MINOR = 11,                     /* MINOR  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ENDIF = 13,                     /* ENDIF  */
  YYSYMBOL_NUMBER = 14,                    /* NUMBER  */
  YYSYMBOL_MOVE = 15,                      /* MOVE  */
  YYSYMBOL_TO = 16,                        /* TO  */
  YYSYMBOL_ADD = 17,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 18,                  /* SUBTRACT  */
  YYSYMBOL_MULTIPLY = 19,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 20,                    /* DIVIDE  */
  YYSYMBOL_FROM = 21,                      /* FROM  */
  YYSYMBOL_BY = 22,                        /* BY  */
  YYSYMBOL_INTO = 23,                      /* INTO  */
  YYSYMBOL_GIVING = 24,                    /* GIVING  */
  YYSYMBOL_IDENTIFICATION = 25,            /* IDENTIFICATION  */
  YYSYMBOL_ENVIRONMENT = 26,               /* ENVIRONMENT  */
  YYSYMBOL_DATA = 27,                      /* DATA  */
  YYSYMBOL_FIL = 28,                       /* FIL  */
  YYSYMBOL_WORKINGSTORAGE = 29,            /* WORKINGSTORAGE  */
  YYSYMBOL_LOCALSTORAGE = 30,              /* LOCALSTORAGE  */
  YYSYMBOL_LINKAGE = 31,                   /* LINKAGE  */
  YYSYMBOL_PROCEDURE = 32,                 /* PROCEDURE  */
  YYSYMBOL_DIVISION = 33,                  /* DIVISION  */
  YYSYMBOL_SECTION = 34,                   /* SECTION  */
  YYSYMBOL_PROGRAMID = 35,                 /* PROGRAMID  */
  YYSYMBOL_END = 36,                       /* END  */
  YYSYMBOL_PROGRAM = 37,                   /* PROGRAM  */
  YYSYMBOL_STOP = 38,                      /* STOP  */
  YYSYMBOL_RUN = 39,                       /* RUN  */
  YYSYMBOL_NEWLINE = 40,                   /* NEWLINE  */
  YYSYMBOL_PIC = 41,                       /* PIC  */
  YYSYMBOL_VALUE = 42,                     /* VALUE  */
  YYSYMBOL_DIGIT_X = 43,                   /* DIGIT_X  */
  YYSYMBOL_DIGIT_9 = 44,                   /* DIGIT_9  */
  YYSYMBOL_DIGIT_A = 45,                   /* DIGIT_A  */
  YYSYMBOL_DIGIT_S = 46,                   /* DIGIT_S  */
  YYSYMBOL_DIGIT_S9 = 47,                  /* DIGIT_S9  */
  YYSYMBOL_DIGIT_V9 = 48,                  /* DIGIT_V9  */
  YYSYMBOL_PERFORM = 49,                   /* PERFORM  */
  YYSYMBOL_ENDPERFORM = 50,                /* ENDPERFORM  */
  YYSYMBOL_TIMES = 51,                     /* TIMES  */
  YYSYMBOL_UNTIL = 52,                     /* UNTIL  */
  YYSYMBOL_VARYING = 53,                   /* VARYING  */
  YYSYMBOL_COMPUTE = 54,                   /* COMPUTE  */
  YYSYMBOL_55_ = 55,                       /* '+'  */
  YYSYMBOL_56_ = 56,                       /* '-'  */
  YYSYMBOL_57_ = 57,                       /* '*'  */
  YYSYMBOL_58_ = 58,                       /* '/'  */
  YYSYMBOL_OR = 59,                        /* OR  */
  YYSYMBOL_AND = 60,                       /* AND  */
  YYSYMBOL_61_ = 61,                       /* '.'  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_X_ = 64,                     /* 'X'  */
  YYSYMBOL_65_A_ = 65,                     /* 'A'  */
  YYSYMBOL_66_n_ = 66,                     /* '\n'  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_program = 68,                   /* program  */
  YYSYMBOL_statement = 69,                 /* statement  */
  YYSYMBOL_compute_statement = 70,         /* compute_statement  */
  YYSYMBOL_exp = 71,                       /* exp  */
  YYSYMBOL_tet = 72,                       /* tet  */
  YYSYMBOL_fef = 73,                       /* fef  */
  YYSYMBOL_if_statement = 74,              /* if_statement  */
  YYSYMBOL_75_1 = 75,                      /* $@1  */
  YYSYMBOL_optional_then = 76,             /* optional_then  */
  YYSYMBOL_elif_statement = 77,            /* elif_statement  */
  YYSYMBOL_78_2 = 78,                      /* $@2  */
  YYSYMBOL_else_statement = 79,            /* else_statement  */
  YYSYMBOL_80_3 = 80,                      /* $@3  */
  YYSYMBOL_conditional = 81,               /* conditional  */
  YYSYMBOL_conjunction = 82,               /* conjunction  */
  YYSYMBOL_comparison = 83,                /* comparison  */
  YYSYMBOL_perform_statement = 84,         /* perform_statement  */
  YYSYMBOL_85_4 = 85,                      /* $@4  */
  YYSYMBOL_86_5 = 86,                      /* $@5  */
  YYSYMBOL_87_6 = 87,                      /* $@6  */
  YYSYMBOL_optional_point = 88,            /* optional_point  */
  YYSYMBOL_optional_number_identifier = 89, /* optional_number_identifier  */
  YYSYMBOL_pic_type = 90,                  /* pic_type  */
  YYSYMBOL_optional_long = 91,             /* optional_long  */
  YYSYMBOL_maybe_value = 92,               /* maybe_value  */
  YYSYMBOL_statements = 93,                /* statements  */
  YYSYMBOL_statement_with_newline = 94,    /* statement_with_newline  */
  YYSYMBOL_newline_only = 95               /* newline_only  */
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
#define YYLAST   356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      66,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      62,    63,    57,    55,     2,    56,    61,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    65,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      59,    60
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
     302,   305,   307,   307,   316,   318,   318,   327,   331,   337,
     342,   346,   349,   352,   355,   358,   361,   364,   367,   374,
     374,   382,   382,   391,   391,   405,   407,   411,   412,   416,
     420,   424,   428,   432,   436,   443,   444,   448,   449,   454,
     462,   463,   464,   468,   469,   473
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
  "DISPLAY", "ACCEPT", "IF", "EQUALS", "THEN", "MAJOR", "MINOR", "ELSE",
  "ENDIF", "NUMBER", "MOVE", "TO", "ADD", "SUBTRACT", "MULTIPLY", "DIVIDE",
  "FROM", "BY", "INTO", "GIVING", "IDENTIFICATION", "ENVIRONMENT", "DATA",
  "FIL", "WORKINGSTORAGE", "LOCALSTORAGE", "LINKAGE", "PROCEDURE",
  "DIVISION", "SECTION", "PROGRAMID", "END", "PROGRAM", "STOP", "RUN",
  "NEWLINE", "PIC", "VALUE", "DIGIT_X", "DIGIT_9", "DIGIT_A", "DIGIT_S",
  "DIGIT_S9", "DIGIT_V9", "PERFORM", "ENDPERFORM", "TIMES", "UNTIL",
  "VARYING", "COMPUTE", "'+'", "'-'", "'*'", "'/'", "OR", "AND", "'.'",
  "'('", "')'", "'X'", "'A'", "'\\n'", "$accept", "program", "statement",
  "compute_statement", "exp", "tet", "fef", "if_statement", "$@1",
  "optional_then", "elif_statement", "$@2", "else_statement", "$@3",
  "conditional", "conjunction", "comparison", "perform_statement", "$@4",
  "$@5", "$@6", "optional_point", "optional_number_identifier", "pic_type",
  "optional_long", "maybe_value", "statements", "statement_with_newline",
  "newline_only", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-158)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-79)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -158,   111,  -158,    27,    58,     8,    64,    20,    28,    28,
      28,    29,    51,    69,    77,    43,    81,    85,    86,    88,
      61,    87,    84,  -158,    21,   128,    94,  -158,  -158,  -158,
    -158,    74,    74,    74,    93,     8,     4,    90,  -158,   -21,
     129,   132,   140,  -158,  -158,   141,   123,   136,   137,   138,
     101,   102,   103,   105,   106,   107,   108,   109,    41,    42,
     110,     8,   168,   122,   170,  -158,  -158,  -158,  -158,  -158,
      23,    44,    46,    24,  -158,     8,   139,     8,     0,  -158,
     172,   176,   177,    47,    53,    71,    28,    72,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,   124,   189,   133,   191,
    -158,     4,   175,   180,     7,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,    90,  -158,  -158,   135,   135,   135,   135,
     156,    74,    74,    74,    -9,   182,    -9,   183,   184,   194,
    -158,   184,   195,  -158,   148,  -158,   161,  -158,    28,  -158,
    -158,  -158,     7,    -2,    40,  -158,   302,   210,   179,   188,
    -158,  -158,    25,   167,  -158,  -158,  -158,  -158,   233,  -158,
     234,   238,   243,  -158,  -158,   302,   227,   302,    33,     7,
       7,  -158,     7,     7,   -22,   302,  -158,   187,   186,   197,
    -158,  -158,  -158,    74,    74,    74,    74,   185,    28,   226,
    -158,    40,    40,  -158,  -158,  -158,  -158,   248,  -158,  -158,
     249,   251,  -158,  -158,  -158,  -158,    74,   215,    74,     9,
     255,   209,   211,  -158,     8,  -158,     8,  -158,    74,  -158,
    -158,     4,   -18,   302,  -158,  -158,  -158,   302,   302,   302,
     264,   302,    74,  -158
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,     0,    36,    34,    35,
       3,    75,    75,    75,     0,     0,    49,    58,    60,     0,
       0,     0,     0,    78,    77,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    76,     4,     5,     6,
       0,     0,     0,     0,    50,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,     0,
      31,    49,     0,    49,     0,    63,    61,    62,    66,    67,
      64,    65,    68,    57,    47,    59,    85,    85,    85,    85,
      87,    75,    75,    75,    75,     0,    75,     0,    14,     0,
      18,    16,     0,    20,     0,    22,     0,    71,     0,    69,
      45,    46,     0,    75,    40,    43,     0,     0,    79,    83,
      81,    82,     0,     0,     7,     9,     8,    10,     0,    12,
       0,     0,     0,    21,    23,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    51,    90,     0,     0,     0,
      88,    89,    33,    75,    75,    75,    75,     0,     0,     0,
      44,    38,    39,    41,    42,    95,    92,    54,    91,    86,
       0,     0,    11,    13,    15,    17,    75,     0,    75,     0,
       0,     0,     0,    72,     0,    70,     0,    55,    75,    80,
      84,    49,     0,     0,    48,    73,    52,    56,     0,     0,
       0,    53,    75,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -129,  -158,   131,   -61,   -59,  -158,  -158,   -94,
    -158,  -158,  -158,  -158,   -32,   202,   208,  -158,  -158,  -158,
    -158,   -31,    -5,  -158,   -12,  -158,  -157,    -1,  -158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    26,    27,   143,   144,   145,    28,   146,    76,
     197,   229,   210,   223,    36,    37,    38,    29,   167,   165,
     228,    67,    45,   120,   148,   153,   175,   176,   196
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    68,    69,    73,    46,    47,    49,   137,   187,   139,
     189,   140,    34,    74,   116,   -78,   216,   174,    65,    63,
      78,   141,   226,    40,    41,    43,   105,   106,   180,   101,
      31,    32,    43,    48,    42,    44,   174,   107,   174,   181,
      79,    75,    44,    44,   195,    96,    98,   117,   108,   217,
     110,   124,    66,   169,   170,    97,    99,   126,   109,    66,
     111,    44,    33,    75,   118,   119,   227,    44,    39,   142,
      35,   230,   231,    61,    62,   128,   131,    53,   125,   127,
     129,   130,   132,    75,    50,    44,    44,   112,   169,   170,
     154,   155,   156,   157,   174,   159,   190,   172,   173,   174,
     174,    70,    51,    71,    72,   149,   150,   151,   191,   192,
      52,     2,   171,   193,   194,    54,     3,     4,     5,    55,
      56,    57,    58,    60,    59,     6,     7,   225,     8,     9,
      10,    11,    64,   166,    65,    66,    12,    13,    14,    15,
      16,    17,    18,    19,    84,    80,    20,    21,    81,    22,
      77,    23,   202,   203,   204,   205,    82,    83,    85,    86,
      24,    87,    88,    89,    90,    25,    91,    92,    93,    94,
      95,   100,   102,   103,   198,   213,   121,   215,   104,   114,
     122,   123,   221,   207,   222,   133,   198,   224,   198,    74,
       3,     4,     5,   134,   135,   136,   138,   147,   152,     6,
       7,   233,     8,     9,    10,    11,   158,   160,   -78,   163,
      12,    13,    14,    15,    16,    17,    18,    19,   161,   162,
      20,    21,   164,    22,   177,    23,   198,   178,   182,   198,
     198,     3,     4,     5,    24,   206,   179,   183,   184,    25,
       6,     7,   185,     8,     9,    10,    11,   186,   200,   188,
     199,    12,    13,    14,    15,    16,    17,    18,    19,   201,
     209,    20,    21,   211,    22,   212,    23,   214,   218,     3,
       4,     5,   219,   168,   220,    24,   208,   113,     6,     7,
      25,     8,     9,    10,    11,   115,     0,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,    20,
      21,     0,    22,     0,    23,     0,     0,     3,     4,     5,
       0,     0,     0,    24,   232,     0,     6,     7,    25,     8,
       9,    10,    11,     0,     0,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,    20,    21,     0,
      22,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,    25
};

static const yytype_int16 yycheck[] =
{
       1,    32,    33,    35,     9,    10,    11,   101,   165,   103,
     167,     4,     4,     9,    14,    24,     7,   146,    40,    24,
      41,    14,    40,     3,     4,     4,     3,     4,     3,    61,
       3,     4,     4,     4,    14,    14,   165,    14,   167,    14,
      61,    59,    14,    14,    66,     4,     4,    47,     4,    40,
       4,     4,    61,    55,    56,    14,    14,     4,    14,    61,
      14,    14,     4,    59,    64,    65,   223,    14,     4,    62,
      62,   228,   229,    52,    53,     4,     4,    34,    83,    84,
      85,    86,    87,    59,    33,    14,    14,    63,    55,    56,
     121,   122,   123,   124,   223,   126,    63,    57,    58,   228,
     229,     8,    33,    10,    11,   117,   118,   119,   169,   170,
      33,     0,   143,   172,   173,    34,     5,     6,     7,    34,
      34,    33,    61,    39,    37,    14,    15,   221,    17,    18,
      19,    20,     4,   138,    40,    61,    25,    26,    27,    28,
      29,    30,    31,    32,    21,    16,    35,    36,    16,    38,
      60,    40,   183,   184,   185,   186,    16,    16,    22,    22,
      49,    23,    61,    61,    61,    54,    61,    61,    61,    61,
      61,    61,     4,    51,   175,   206,     4,   208,     8,    40,
       4,     4,   214,   188,   216,    61,   187,   218,   189,     9,
       5,     6,     7,     4,    61,     4,    21,    62,    42,    14,
      15,   232,    17,    18,    19,    20,    24,    24,    24,    61,
      25,    26,    27,    28,    29,    30,    31,    32,    24,    24,
      35,    36,    61,    38,    14,    40,   227,    48,    61,   230,
     231,     5,     6,     7,    49,    50,    48,     4,     4,    54,
      14,    15,     4,    17,    18,    19,    20,     4,    62,    22,
      63,    25,    26,    27,    28,    29,    30,    31,    32,    62,
      12,    35,    36,    14,    38,    14,    40,    52,    13,     5,
       6,     7,    63,   142,    63,    49,    50,    75,    14,    15,
      54,    17,    18,    19,    20,    77,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    -1,    38,    -1,    40,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    49,    50,    -1,    14,    15,    54,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    68,     0,     5,     6,     7,    14,    15,    17,    18,
      19,    20,    25,    26,    27,    28,    29,    30,    31,    32,
      35,    36,    38,    40,    49,    54,    69,    70,    74,    84,
      94,     3,     4,     4,     4,    62,    81,    82,    83,     4,
       3,     4,    14,     4,    14,    89,    89,    89,     4,    89,
      33,    33,    33,    34,    34,    34,    34,    33,    61,    37,
      39,    52,    53,    89,     4,    40,    61,    88,    88,    88,
       8,    10,    11,    81,     9,    59,    76,    60,    41,    61,
      16,    16,    16,    16,    21,    22,    22,    23,    61,    61,
      61,    61,    61,    61,    61,    61,     4,    14,     4,    14,
      61,    81,     4,    51,     8,     3,     4,    14,     4,    14,
       4,    14,    63,    82,    40,    83,    14,    47,    64,    65,
      90,     4,     4,     4,     4,    89,     4,    89,     4,    89,
      89,     4,    89,    61,     4,    61,     4,    76,    21,    76,
       4,    14,    62,    71,    72,    73,    75,    62,    91,    91,
      91,    91,    42,    92,    88,    88,    88,    88,    24,    88,
      24,    24,    24,    61,    61,    86,    89,    85,    71,    55,
      56,    88,    57,    58,    69,    93,    94,    14,    48,    48,
       3,    14,    61,     4,     4,     4,     4,    93,    22,    93,
      63,    72,    72,    73,    73,    66,    95,    77,    94,    63,
      62,    62,    88,    88,    88,    88,    50,    89,    50,    12,
      79,    14,    14,    88,    52,    88,     7,    40,    13,    63,
      63,    81,    81,    80,    88,    76,    40,    93,    87,    78,
      93,    93,    50,    88
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    71,    71,
      71,    72,    72,    72,    73,    73,    73,    75,    74,    76,
      76,    77,    78,    77,    79,    80,    79,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    85,
      84,    86,    84,    87,    84,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    92,    92,
      93,    93,    93,    94,    94,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     3,     5,     5,     5,
       5,     7,     5,     7,     4,     7,     4,     7,     4,     3,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     6,     1,     1,     1,     5,     3,     3,
       1,     3,     3,     1,     3,     1,     1,     0,    10,     0,
       1,     0,     0,     7,     0,     0,     4,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     0,
       8,     0,     8,     0,    14,     0,     1,     1,     1,     2,
       6,     2,     2,     2,     6,     0,     3,     0,     2,     2,
       1,     2,     2,     2,     1,     1
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
#line 1374 "translator.tab.c"
    break;

  case 5: /* statement: DISPLAY IDENTIFIER optional_point  */
#line 106 "translator.y"
                                        {
        print_indent();
        printf("print(%s)\n",(yyvsp[-1].str));
    }
#line 1383 "translator.tab.c"
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
#line 1407 "translator.tab.c"
    break;

  case 7: /* statement: MOVE STRING TO IDENTIFIER optional_point  */
#line 129 "translator.y"
                                               {
        print_indent();
        printf("%s = \"%s\"\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1416 "translator.tab.c"
    break;

  case 8: /* statement: MOVE NUMBER TO IDENTIFIER optional_point  */
#line 133 "translator.y"
                                               {
        print_indent();
        printf("%s = %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1425 "translator.tab.c"
    break;

  case 9: /* statement: MOVE IDENTIFIER TO IDENTIFIER optional_point  */
#line 137 "translator.y"
                                                   {
        print_indent();
        printf("%s = %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1434 "translator.tab.c"
    break;

  case 10: /* statement: ADD optional_number_identifier TO IDENTIFIER optional_point  */
#line 141 "translator.y"
                                                                  {
        print_indent();
        printf("%s += %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1443 "translator.tab.c"
    break;

  case 11: /* statement: ADD optional_number_identifier TO optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 145 "translator.y"
                                                                                                    {
        print_indent();
        printf("%s = %s + %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1452 "translator.tab.c"
    break;

  case 12: /* statement: SUBTRACT optional_number_identifier FROM IDENTIFIER optional_point  */
#line 149 "translator.y"
                                                                         {
        print_indent();
        printf("%s -= %s\n",(yyvsp[-1].str),(yyvsp[-3].str));
    }
#line 1461 "translator.tab.c"
    break;

  case 13: /* statement: SUBTRACT optional_number_identifier FROM optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 153 "translator.y"
                                                                                                           {
        print_indent();
        printf("%s = %s - %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1470 "translator.tab.c"
    break;

  case 14: /* statement: MULTIPLY optional_number_identifier BY IDENTIFIER  */
#line 157 "translator.y"
                                                        {
        print_indent();
        printf("%s *= %s\n",(yyvsp[0].str),(yyvsp[-2].str));
    }
#line 1479 "translator.tab.c"
    break;

  case 15: /* statement: MULTIPLY optional_number_identifier BY optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 161 "translator.y"
                                                                                                         {
        print_indent();
        printf("%s = %s * %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1488 "translator.tab.c"
    break;

  case 16: /* statement: DIVIDE optional_number_identifier INTO IDENTIFIER  */
#line 165 "translator.y"
                                                        {
        print_indent();
        printf("%s /= %s\n",(yyvsp[0].str),(yyvsp[-2].str));
    }
#line 1497 "translator.tab.c"
    break;

  case 17: /* statement: DIVIDE optional_number_identifier INTO optional_number_identifier GIVING IDENTIFIER optional_point  */
#line 169 "translator.y"
                                                                                                         {
        print_indent();
        printf("%s = %s / %s\n",(yyvsp[-1].str),(yyvsp[-3].str),(yyvsp[-5].str));
    }
#line 1506 "translator.tab.c"
    break;

  case 18: /* statement: DIVIDE IDENTIFIER BY optional_number_identifier  */
#line 173 "translator.y"
                                                      {
        print_indent();
        printf("%s /= %s\n",(yyvsp[-2].str),(yyvsp[0].str));
    }
#line 1515 "translator.tab.c"
    break;

  case 19: /* statement: IDENTIFICATION DIVISION '.'  */
#line 177 "translator.y"
                                  {
        print_indent();
        printf("# IDENTIFICATION DIVISION\n");
    }
#line 1524 "translator.tab.c"
    break;

  case 20: /* statement: PROGRAMID '.' IDENTIFIER '.'  */
#line 181 "translator.y"
                                   {
        printf("# PROGRAM-ID: %s\n",(yyvsp[-1].str));
    }
#line 1532 "translator.tab.c"
    break;

  case 21: /* statement: PROGRAMID '.' NUMBER IDENTIFIER '.'  */
#line 184 "translator.y"
                                          {
        printf("# PROGRAM-ID: %s%s\n",(yyvsp[-2].str),(yyvsp[-1].str));
    }
#line 1540 "translator.tab.c"
    break;

  case 22: /* statement: END PROGRAM IDENTIFIER '.'  */
#line 187 "translator.y"
                                 {
        printf("# END PROGRAM %s", (yyvsp[-1].str));
    }
#line 1548 "translator.tab.c"
    break;

  case 23: /* statement: END PROGRAM NUMBER IDENTIFIER '.'  */
#line 190 "translator.y"
                                        {
        printf("# END PROGRAM %s%s", (yyvsp[-2].str),(yyvsp[-1].str));
    }
#line 1556 "translator.tab.c"
    break;

  case 24: /* statement: ENVIRONMENT DIVISION '.'  */
#line 193 "translator.y"
                               {
        printf("# ENVIRONMENT DIVISION\n");
    }
#line 1564 "translator.tab.c"
    break;

  case 25: /* statement: DATA DIVISION '.'  */
#line 196 "translator.y"
                        {
        printf("# DATA DIVISION\n");
    }
#line 1572 "translator.tab.c"
    break;

  case 26: /* statement: FIL SECTION '.'  */
#line 199 "translator.y"
                      {
        printf("# FILE SECTION\n");
    }
#line 1580 "translator.tab.c"
    break;

  case 27: /* statement: WORKINGSTORAGE SECTION '.'  */
#line 202 "translator.y"
                                 {
        printf("# WORKING-STORAGE SECTION\n");
    }
#line 1588 "translator.tab.c"
    break;

  case 28: /* statement: LOCALSTORAGE SECTION '.'  */
#line 205 "translator.y"
                               {
        printf("# LOCAL-STORAGE SECTION\n");
    }
#line 1596 "translator.tab.c"
    break;

  case 29: /* statement: LINKAGE SECTION '.'  */
#line 208 "translator.y"
                          {
        printf("# LINKAGE SECTION\n");
    }
#line 1604 "translator.tab.c"
    break;

  case 30: /* statement: PROCEDURE DIVISION '.'  */
#line 211 "translator.y"
                             {
        printf("# PROCEDURE DIVISION\n");
    }
#line 1612 "translator.tab.c"
    break;

  case 31: /* statement: STOP RUN '.'  */
#line 214 "translator.y"
                   {
        printf("# STOP RUN\n");
    }
#line 1620 "translator.tab.c"
    break;

  case 32: /* statement: NUMBER IDENTIFIER '.'  */
#line 217 "translator.y"
                            {
        printf("# NIVEL %s DE VARIABLES %s\n",(yyvsp[-2].str),(yyvsp[-1].str));
    }
#line 1628 "translator.tab.c"
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
#line 1647 "translator.tab.c"
    break;

  case 37: /* compute_statement: COMPUTE IDENTIFIER EQUALS exp optional_point  */
#line 240 "translator.y"
                                                 {
        print_indent();
        printf("%s = %s\n",(yyvsp[-3].str),(yyvsp[-1].str)); 
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1658 "translator.tab.c"
    break;

  case 38: /* exp: exp '+' tet  */
#line 248 "translator.y"
                {
        asprintf(&(yyval.str),"(%s + %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1668 "translator.tab.c"
    break;

  case 39: /* exp: exp '-' tet  */
#line 253 "translator.y"
                  {
        asprintf(&(yyval.str), "(%s - %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1678 "translator.tab.c"
    break;

  case 40: /* exp: tet  */
#line 258 "translator.y"
          { (yyval.str)=(yyvsp[0].str); }
#line 1684 "translator.tab.c"
    break;

  case 41: /* tet: tet '*' fef  */
#line 261 "translator.y"
                {
        asprintf(&(yyval.str), "(%s * %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1694 "translator.tab.c"
    break;

  case 42: /* tet: tet '/' fef  */
#line 266 "translator.y"
                  {
        asprintf(&(yyval.str), "(%s / %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1704 "translator.tab.c"
    break;

  case 43: /* tet: fef  */
#line 271 "translator.y"
          { (yyval.str)=(yyvsp[0].str); }
#line 1710 "translator.tab.c"
    break;

  case 44: /* fef: '(' exp ')'  */
#line 274 "translator.y"
                {
        asprintf(&(yyval.str), "(%s)",(yyvsp[-1].str));
        free((yyvsp[-1].str));
    }
#line 1719 "translator.tab.c"
    break;

  case 45: /* fef: IDENTIFIER  */
#line 278 "translator.y"
                 {
        (yyval.str)=strdup((yyvsp[0].str));
        free((yyvsp[0].str));
    }
#line 1728 "translator.tab.c"
    break;

  case 46: /* fef: NUMBER  */
#line 282 "translator.y"
             {
        (yyval.str)=strdup((yyvsp[0].str));
        free((yyvsp[0].str));
    }
#line 1737 "translator.tab.c"
    break;

  case 47: /* $@1: %empty  */
#line 289 "translator.y"
                                         {
        print_indent();
        printf("if %s:\n",(yyvsp[-2].str));
        indent_level++;
        free((yyvsp[-2].str));  
    }
#line 1748 "translator.tab.c"
    break;

  case 48: /* if_statement: IF conditional optional_then NEWLINE $@1 statements elif_statement else_statement ENDIF optional_point  */
#line 295 "translator.y"
                                                                  {
        indent_level--;
    }
#line 1756 "translator.tab.c"
    break;

  case 52: /* $@2: %empty  */
#line 307 "translator.y"
                                                 {
        indent_level--;
        print_indent();
        printf("elif %s:\n",(yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-1].str));
    }
#line 1768 "translator.tab.c"
    break;

  case 55: /* $@3: %empty  */
#line 318 "translator.y"
                   {
        indent_level--;
        print_indent();
        printf("else:\n");
        indent_level++;
    }
#line 1779 "translator.tab.c"
    break;

  case 57: /* conditional: conditional OR conjunction  */
#line 327 "translator.y"
                               {
        asprintf(&(yyval.str), "(%s or %s)",(yyvsp[-2].str),(yyvsp[0].str));
        free((yyvsp[-2].str)); free((yyvsp[0].str));
    }
#line 1788 "translator.tab.c"
    break;

  case 58: /* conditional: conjunction  */
#line 331 "translator.y"
                  {
        (yyval.str) = (yyvsp[0].str);
    }
#line 1796 "translator.tab.c"
    break;

  case 59: /* conjunction: conjunction AND comparison  */
#line 337 "translator.y"
                               {
        asprintf(&(yyval.str), "(%s and %s)", (yyvsp[-2].str), (yyvsp[0].str));
        free((yyvsp[-2].str)); 
        free((yyvsp[0].str));
    }
#line 1806 "translator.tab.c"
    break;

  case 60: /* conjunction: comparison  */
#line 342 "translator.y"
                 { (yyval.str) = (yyvsp[0].str); }
#line 1812 "translator.tab.c"
    break;

  case 61: /* comparison: IDENTIFIER EQUALS IDENTIFIER  */
#line 346 "translator.y"
                                 { 
        asprintf(&(yyval.str), "%s == %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1820 "translator.tab.c"
    break;

  case 62: /* comparison: IDENTIFIER EQUALS NUMBER  */
#line 349 "translator.y"
                               { 
        asprintf(&(yyval.str), "%s == %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1828 "translator.tab.c"
    break;

  case 63: /* comparison: IDENTIFIER EQUALS STRING  */
#line 352 "translator.y"
                               { 
        asprintf(&(yyval.str), "%s == \"%s\"",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1836 "translator.tab.c"
    break;

  case 64: /* comparison: IDENTIFIER MINOR IDENTIFIER  */
#line 355 "translator.y"
                                  { 
        asprintf(&(yyval.str), "%s < %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1844 "translator.tab.c"
    break;

  case 65: /* comparison: IDENTIFIER MINOR NUMBER  */
#line 358 "translator.y"
                              { 
        asprintf(&(yyval.str), "%s < %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1852 "translator.tab.c"
    break;

  case 66: /* comparison: IDENTIFIER MAJOR IDENTIFIER  */
#line 361 "translator.y"
                                  { 
        asprintf(&(yyval.str), "%s > %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1860 "translator.tab.c"
    break;

  case 67: /* comparison: IDENTIFIER MAJOR NUMBER  */
#line 364 "translator.y"
                              { 
        asprintf(&(yyval.str), "%s > %s",(yyvsp[-2].str),(yyvsp[0].str)); 
    }
#line 1868 "translator.tab.c"
    break;

  case 68: /* comparison: '(' conditional ')'  */
#line 367 "translator.y"
                          {
        asprintf(&(yyval.str), "(%s)", (yyvsp[-1].str));
        free((yyvsp[-1].str));
    }
#line 1877 "translator.tab.c"
    break;

  case 69: /* $@4: %empty  */
#line 374 "translator.y"
                                                           {
        print_indent();
        printf("for _ in range(%s):\n",(yyvsp[-2].str));
        indent_level++;
    }
#line 1887 "translator.tab.c"
    break;

  case 70: /* perform_statement: PERFORM optional_number_identifier TIMES optional_then $@4 statements ENDPERFORM optional_point  */
#line 379 "translator.y"
                                         {
        indent_level--;
    }
#line 1895 "translator.tab.c"
    break;

  case 71: /* $@5: %empty  */
#line 382 "translator.y"
                                              {
        print_indent();
        printf("while not %s:\n",(yyvsp[-1].str));
        indent_level++;
        free((yyvsp[-1].str));
    }
#line 1906 "translator.tab.c"
    break;

  case 72: /* perform_statement: PERFORM UNTIL conditional optional_then $@5 statements ENDPERFORM optional_point  */
#line 388 "translator.y"
                                         {
        indent_level--;
    }
#line 1914 "translator.tab.c"
    break;

  case 73: /* $@6: %empty  */
#line 391 "translator.y"
                                                                                                                               {
        print_indent();
        printf("%s = %s - 1\n",(yyvsp[-7].str),(yyvsp[-5].str));
        printf("while not %s:\n",(yyvsp[-1].str));
        indent_level++;
        print_indent();
        printf("%s += %s\n",(yyvsp[-7].str),(yyvsp[-3].str));
        free((yyvsp[-7].str));
    }
#line 1928 "translator.tab.c"
    break;

  case 74: /* perform_statement: PERFORM VARYING IDENTIFIER FROM optional_number_identifier BY optional_number_identifier UNTIL conditional optional_then $@6 statements ENDPERFORM optional_point  */
#line 400 "translator.y"
                                         {
        indent_level--;
    }
#line 1936 "translator.tab.c"
    break;

  case 77: /* optional_number_identifier: NUMBER  */
#line 411 "translator.y"
           { (yyval.str)=(yyvsp[0].str); }
#line 1942 "translator.tab.c"
    break;

  case 78: /* optional_number_identifier: IDENTIFIER  */
#line 412 "translator.y"
                 { (yyval.str)=(yyvsp[0].str); }
#line 1948 "translator.tab.c"
    break;

  case 79: /* pic_type: NUMBER optional_long  */
#line 416 "translator.y"
                         {
        (yyval.picinfo).type=strdup("int");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1957 "translator.tab.c"
    break;

  case 80: /* pic_type: NUMBER optional_long DIGIT_V9 '(' NUMBER ')'  */
#line 420 "translator.y"
                                                   {
        (yyval.picinfo).type=strdup("float");
        (yyval.picinfo).length=strdup((yyvsp[-4].str));
    }
#line 1966 "translator.tab.c"
    break;

  case 81: /* pic_type: 'X' optional_long  */
#line 424 "translator.y"
                        {
        (yyval.picinfo).type=strdup("str");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1975 "translator.tab.c"
    break;

  case 82: /* pic_type: 'A' optional_long  */
#line 428 "translator.y"
                        {
        (yyval.picinfo).type=strdup("str");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1984 "translator.tab.c"
    break;

  case 83: /* pic_type: DIGIT_S9 optional_long  */
#line 432 "translator.y"
                             {
        (yyval.picinfo).type=strdup("int");
        (yyval.picinfo).length=strdup((yyvsp[0].str));
    }
#line 1993 "translator.tab.c"
    break;

  case 84: /* pic_type: DIGIT_S9 optional_long DIGIT_V9 '(' NUMBER ')'  */
#line 436 "translator.y"
                                                     {
        (yyval.picinfo).type=strdup("float");
        (yyval.picinfo).length=strdup((yyvsp[-4].str));
    }
#line 2002 "translator.tab.c"
    break;

  case 85: /* optional_long: %empty  */
#line 443 "translator.y"
          { (yyval.str)=NULL; }
#line 2008 "translator.tab.c"
    break;

  case 86: /* optional_long: '(' NUMBER ')'  */
#line 444 "translator.y"
                     { (yyval.str)=(yyvsp[-1].str); }
#line 2014 "translator.tab.c"
    break;

  case 87: /* maybe_value: %empty  */
#line 448 "translator.y"
          { (yyval.str)=NULL; }
#line 2020 "translator.tab.c"
    break;

  case 88: /* maybe_value: VALUE STRING  */
#line 449 "translator.y"
                   {
        char* buf=malloc(strlen((yyvsp[0].str))+10);
        sprintf(buf," = \"%s\"",(yyvsp[0].str));
        (yyval.str)=buf;
    }
#line 2030 "translator.tab.c"
    break;

  case 89: /* maybe_value: VALUE NUMBER  */
#line 454 "translator.y"
                   {
        char* buf=malloc(strlen((yyvsp[0].str))+10);
        sprintf(buf," = %s",(yyvsp[0].str));
        (yyval.str)=buf;
    }
#line 2040 "translator.tab.c"
    break;

  case 95: /* newline_only: '\n'  */
#line 473 "translator.y"
         {
        printf("\n");
    }
#line 2048 "translator.tab.c"
    break;


#line 2052 "translator.tab.c"

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

#line 477 "translator.y"


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
