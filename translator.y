%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaraciones necesarias
int yylex(void);                // Declaración del lexer (scanner.c)
void yyerror(const char *s);    // Manejo de errores sintácticos

int indent_level = 0;
void print_indent() {
    for(int i = 0; i < indent_level; i++) printf("    ");
}

%}

%union {
    char* str;
}

%token <str> STRING IDENTIFIER
%token DISPLAY ACCEPT
%token IF EQUALS
%token ENDIF
%type <str> statement

%start program

%%

program:
    /* vacío */
  | program statement '\n'
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
    | IF IDENTIFIER EQUALS STRING {
        print_indent();
        printf("if (%s == \"%s\"):\n", $2, $4);
        indent_level++;
    }
    | ENDIF {
        indent_level--;
    }
;

%%

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s archivo_entrada.cob archivo_salida.py\n", argv[0]);
        return 1;
    }

    // Redirigir entrada estándar
    if (freopen(argv[1], "r", stdin) == NULL) {
        perror("No se pudo abrir el archivo de entrada");
        return 1;
    }

    // Redirigir salida estándar
    if (freopen(argv[2], "w", stdout) == NULL) {
        perror("No se pudo abrir el archivo de salida");
        return 1;
    }

    yyparse();  // ahora lee de archivo y escribe a archivo

    return 0;
}


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
