%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char *s);

int indent_level = 0;

void print_indent() {
    for (int i = 0; i < indent_level; i++)
        printf("    ");
}
%}

%union {
    char* str;
}

%token <str> STRING IDENTIFIER
%token DISPLAY ACCEPT
%token IF EQUALS
%token MAJOR MINOR
%token ELSE ENDIF
%token <str> NUMBER
%token MOVE TO
%token ADD SUBTRACT MULTIPLY DIVIDE
%token FROM BY INTO GIVING
%token IDENTIFICATION ENVIRONMENT DATA FIL WORKINGSTORAGE LOCALSTORAGE LINKAGE PROCEDURE
%token DIVISION SECTION
%token PROGRAMID
%token STOP RUN
%token NEWLINE

%type statement
%type <str> optional_number_identifier
%start program

%%

program:
    /* vacío */
  | program statement_with_newline
;   

statement:
    DISPLAY STRING optional_point {
        print_indent();
        printf("print(\"%s\")\n", $2);
    }
    | DISPLAY IDENTIFIER optional_point {
        print_indent();
        printf("print(%s)\n", $2);
      }
    | ACCEPT IDENTIFIER optional_point {
        print_indent();
        printf("%s = input()\n", $2);
      }
    | MOVE STRING TO IDENTIFIER optional_point {
        print_indent();
        printf("%s = \"%s\"\n", $4, $2);
    }
    | MOVE NUMBER TO IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s\n", $4, $2);
    }
    | MOVE IDENTIFIER TO IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s\n", $4, $2);
    }
    | ADD optional_number_identifier TO IDENTIFIER optional_point {
        print_indent();
        printf("%s += %s\n", $4, $2);
    }
    | ADD optional_number_identifier TO optional_number_identifier GIVING IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s + %s\n", $6, $4, $2);
    }
    | SUBTRACT optional_number_identifier FROM IDENTIFIER optional_point {
        print_indent();
        printf("%s -= %s\n", $4, $2);
    }
    | SUBTRACT optional_number_identifier FROM optional_number_identifier GIVING IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s - %s\n", $6, $4, $2);
    }
    | MULTIPLY optional_number_identifier BY IDENTIFIER {
        print_indent();
        printf("%s *= %s\n", $4, $2);
    }
    | MULTIPLY optional_number_identifier BY optional_number_identifier GIVING IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s * %s\n", $6, $4, $2);
    }
    | DIVIDE optional_number_identifier INTO IDENTIFIER {
        print_indent();
        printf("%s /= %s\n", $4, $2);
    }
    | DIVIDE optional_number_identifier INTO optional_number_identifier GIVING IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s / %s\n", $6, $4, $2);
    }
    | DIVIDE IDENTIFIER BY optional_number_identifier {
        print_indent();
        printf("%s /= %s\n", $2, $4);
    }
    | IDENTIFICATION DIVISION '.' {
        print_indent();
        printf("# IDENTIFICATION DIVISION\n");
    }
    | PROGRAMID '.' IDENTIFIER '.' {
        printf("# PROGRAM-ID: %s\n", $3);
    }
    | ENVIRONMENT DIVISION '.' {
        printf("# ENVIRONMENT DIVISION\n");
    }
    | DATA DIVISION '.' {
        printf("# DATA DIVISION\n");
    }
    | FIL SECTION '.' {
        printf("# FILE SECTION\n");
    }
    | WORKINGSTORAGE SECTION '.' {
        printf("# WORKING-STORAGE SECTION\n");
    }
    | LOCALSTORAGE SECTION '.' {
        printf("# LOCAL-STORAGE SECTION\n");
    }
    | LINKAGE SECTION '.' {
        printf("# LINKAGE SECTION\n");
    }
    | PROCEDURE DIVISION '.' {
        printf("# PROCEDURE DIVISION\n");
    }
    | STOP RUN '.' {
        printf("# STOP RUN\n");
    }
    | if_statement
;

if_statement:
    IF IDENTIFIER EQUALS STRING NEWLINE {
        print_indent();
        printf("if (%s == \"%s\"):\n", $2, $4);
        indent_level++;
    }
    statements optional_else ENDIF {
        indent_level--;
    }

    | IF IDENTIFIER EQUALS IDENTIFIER NEWLINE {
        print_indent();
        printf("if (%s == %s):\n", $2, $4);
        indent_level++;
    }
    statements optional_else ENDIF {
        indent_level--;
    }

    | IF IDENTIFIER EQUALS NUMBER NEWLINE {
        print_indent();
        printf("if (%s == %s):\n", $2, $4);
        indent_level++;
    }
    statements optional_else ENDIF {
        indent_level--;
    }
    | IF IDENTIFIER MINOR IDENTIFIER NEWLINE {
        print_indent();
        printf("if (%s < %s):\n", $2, $4);
        indent_level++;
    }
    statements optional_else ENDIF {
        indent_level--;
    }
    | IF IDENTIFIER MINOR NUMBER NEWLINE {
        print_indent();
        printf("if (%s < %s):\n", $2, $4);
        indent_level++;
    }
    statements optional_else ENDIF {
        indent_level--;
    }
    | IF IDENTIFIER MAJOR IDENTIFIER NEWLINE {
        print_indent();
        printf("if (%s > %s):\n", $2, $4);
        indent_level++;
    }
    statements optional_else ENDIF {
        indent_level--;
    }
    | IF IDENTIFIER MAJOR NUMBER NEWLINE {
        print_indent();
        printf("if (%s > %s):\n", $2, $4);
        indent_level++;
    }
    statements optional_else ENDIF {
        indent_level--;
    }
;

optional_else:
      /* vacío */
    | ELSE NEWLINE {
        indent_level--; 
        print_indent();
        printf("else:\n");
        indent_level++; 
    }
    statements
;

optional_point:
    /* vacio */
    | '.';

optional_number_identifier:
    NUMBER { $$ = $1; }
    | IDENTIFIER { $$ = $1; };

statements:
    statement_with_newline
    | statements statement_with_newline
    | statement newline_only
;

statement_with_newline:
    statement NEWLINE
    | NEWLINE
;

newline_only:
    '\n' {
        printf("\n");
    }

%%

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