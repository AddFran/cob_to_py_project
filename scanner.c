#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "translator.tab.h" // Asegúrate de que coincide con el nombre generado

int yylex() {
    int c;

    // Ignorar espacios
    while ((c = getchar()) == ' ' || c == '\t');

    if (c == EOF) return 0;

    // Palabra clave DISPLAY
    if (isalpha(c)) {
        char buffer[64];
        int i = 0;
        buffer[i++] = c;
        while (isalpha(c = getchar()) || c=='-') {
            buffer[i++] = c;
        }
        buffer[i] = '\0';
        ungetc(c, stdin);
        
        if (strcmp(buffer, "DISPLAY") == 0)
            return DISPLAY;
        else if (strcmp(buffer, "ACCEPT") == 0)
            return ACCEPT;
        else if (strcmp(buffer, "IF") == 0)
            return IF;
        else if (strcmp(buffer, "ELSE") == 0)
            return ELSE;
        else if (strcmp(buffer, "END-IF") == 0)
            return ENDIF;
        else {
            yylval.str = strdup(buffer);  // tratar como IDENTIFIER
            return IDENTIFIER;
        }
    }

    // Cadena entre comillas
    if (c == '"') {
        char buffer[256];
        int i = 0;
        while ((c = getchar()) != '"' && c != EOF) {
            buffer[i++] = c;
        }
        buffer[i] = '\0';
        yylval.str = strdup(buffer);  // Asignar al campo correcto del %union
        return STRING;
    }

    if (c == '\n') return '\n';

    if (c == '=') return EQUALS;

    

    return c;
}


/*

bison -d translator.y         
gcc -o translator translator.tab.c scanner.c

*/