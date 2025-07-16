/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TRANSLATOR_TAB_H_INCLUDED
# define YY_YY_TRANSLATOR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    STRING = 258,                  /* STRING  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    DISPLAY = 260,                 /* DISPLAY  */
    ACCEPT = 261,                  /* ACCEPT  */
    IF = 262,                      /* IF  */
    EQUALS = 263,                  /* EQUALS  */
    THEN = 264,                    /* THEN  */
    MAJOR = 265,                   /* MAJOR  */
    MINOR = 266,                   /* MINOR  */
    ELSE = 267,                    /* ELSE  */
    ENDIF = 268,                   /* ENDIF  */
    NUMBER = 269,                  /* NUMBER  */
    MOVE = 270,                    /* MOVE  */
    TO = 271,                      /* TO  */
    ADD = 272,                     /* ADD  */
    SUBTRACT = 273,                /* SUBTRACT  */
    MULTIPLY = 274,                /* MULTIPLY  */
    DIVIDE = 275,                  /* DIVIDE  */
    FROM = 276,                    /* FROM  */
    BY = 277,                      /* BY  */
    INTO = 278,                    /* INTO  */
    GIVING = 279,                  /* GIVING  */
    IDENTIFICATION = 280,          /* IDENTIFICATION  */
    ENVIRONMENT = 281,             /* ENVIRONMENT  */
    DATA = 282,                    /* DATA  */
    FIL = 283,                     /* FIL  */
    WORKINGSTORAGE = 284,          /* WORKINGSTORAGE  */
    LOCALSTORAGE = 285,            /* LOCALSTORAGE  */
    LINKAGE = 286,                 /* LINKAGE  */
    PROCEDURE = 287,               /* PROCEDURE  */
    DIVISION = 288,                /* DIVISION  */
    SECTION = 289,                 /* SECTION  */
    PROGRAMID = 290,               /* PROGRAMID  */
    END = 291,                     /* END  */
    PROGRAM = 292,                 /* PROGRAM  */
    STOP = 293,                    /* STOP  */
    RUN = 294,                     /* RUN  */
    NEWLINE = 295,                 /* NEWLINE  */
    PIC = 296,                     /* PIC  */
    VALUE = 297,                   /* VALUE  */
    DIGIT_X = 298,                 /* DIGIT_X  */
    DIGIT_9 = 299,                 /* DIGIT_9  */
    DIGIT_A = 300,                 /* DIGIT_A  */
    DIGIT_S = 301,                 /* DIGIT_S  */
    DIGIT_S9 = 302,                /* DIGIT_S9  */
    DIGIT_V9 = 303,                /* DIGIT_V9  */
    PERFORM = 304,                 /* PERFORM  */
    ENDPERFORM = 305,              /* ENDPERFORM  */
    TIMES = 306,                   /* TIMES  */
    UNTIL = 307,                   /* UNTIL  */
    VARYING = 308,                 /* VARYING  */
    COMPUTE = 309,                 /* COMPUTE  */
    OR = 310,                      /* OR  */
    AND = 311                      /* AND  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "translator.y"

    char* str;
    struct{
        char* type;
        char* length;
    } picinfo;

#line 128 "translator.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TRANSLATOR_TAB_H_INCLUDED  */
