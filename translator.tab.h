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
    MAJOR = 264,                   /* MAJOR  */
    MINOR = 265,                   /* MINOR  */
    ELSE = 266,                    /* ELSE  */
    ENDIF = 267,                   /* ENDIF  */
    NUMBER = 268,                  /* NUMBER  */
    MOVE = 269,                    /* MOVE  */
    TO = 270,                      /* TO  */
    ADD = 271,                     /* ADD  */
    SUBTRACT = 272,                /* SUBTRACT  */
    MULTIPLY = 273,                /* MULTIPLY  */
    DIVIDE = 274,                  /* DIVIDE  */
    FROM = 275,                    /* FROM  */
    BY = 276,                      /* BY  */
    INTO = 277,                    /* INTO  */
    GIVING = 278,                  /* GIVING  */
    IDENTIFICATION = 279,          /* IDENTIFICATION  */
    ENVIRONMENT = 280,             /* ENVIRONMENT  */
    DATA = 281,                    /* DATA  */
    FIL = 282,                     /* FIL  */
    WORKINGSTORAGE = 283,          /* WORKINGSTORAGE  */
    LOCALSTORAGE = 284,            /* LOCALSTORAGE  */
    LINKAGE = 285,                 /* LINKAGE  */
    PROCEDURE = 286,               /* PROCEDURE  */
    DIVISION = 287,                /* DIVISION  */
    SECTION = 288,                 /* SECTION  */
    PROGRAMID = 289,               /* PROGRAMID  */
    STOP = 290,                    /* STOP  */
    RUN = 291,                     /* RUN  */
    NEWLINE = 292,                 /* NEWLINE  */
    PIC = 293,                     /* PIC  */
    VALUE = 294,                   /* VALUE  */
    DIGIT_X = 295,                 /* DIGIT_X  */
    DIGIT_9 = 296,                 /* DIGIT_9  */
    DIGIT_A = 297,                 /* DIGIT_A  */
    DIGIT_S = 298,                 /* DIGIT_S  */
    DIGIT_S9 = 299,                /* DIGIT_S9  */
    DIGIT_V9 = 300                 /* DIGIT_V9  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "translator.y"

    char* str;
    struct {
        char* type;
        char* length;
    } picinfo;

#line 117 "translator.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TRANSLATOR_TAB_H_INCLUDED  */
