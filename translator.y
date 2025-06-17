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
%token ELSE ENDIF

%type <str> statement
%start program

%%

program:
    /* vacío */
  | program statement_with_newline
;   

statement:
      DISPLAY STRING {
          print_indent();
          printf("print(\"%s\")\n", $2);
      }
    | DISPLAY IDENTIFIER {
          print_indent();
          printf("print(%s)\n", $2);
      }
    | ACCEPT IDENTIFIER {
          print_indent();
          printf("%s = input()\n", $2);
      }
    | IF IDENTIFIER EQUALS STRING '\n' {
          print_indent();
          printf("if (%s == \"%s\"):\n", $2, $4);
          indent_level++;
      }
      statements optional_else ENDIF {
          indent_level--; // Cierra el bloque completo
      }
;

optional_else:
      /* vacío */
    | ELSE '\n' {
          indent_level--; // Sal del bloque IF
          print_indent();
          printf("else:\n");
          indent_level++; // Entra al bloque ELSE
      }
      statements
;

statements:
    statement_with_newline
  | statements statement_with_newline
;

statement_with_newline:
    statement '\n'
;

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
