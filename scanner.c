#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "translator.tab.h" 

int yylex() {
    int c;

    while((c=getchar())==' ' || c=='\t');

    if(c==EOF) return 0;

    if(isalpha(c)){
        char buffer[64];
        int i=0;
        buffer[i++]=c;
        while(isalpha(c=getchar()) || c=='-'){
            buffer[i++]=c;
        }
        buffer[i]='\0';
        ungetc(c,stdin);
        
        if(strcmp(buffer,"DISPLAY")==0)
            return DISPLAY;
        else if(strcmp(buffer,"ACCEPT")==0)
            return ACCEPT;
        else if(strcmp(buffer,"IF")==0)
            return IF;
        else if(strcmp(buffer,"ELSE")==0)
            return ELSE;
        else if(strcmp(buffer,"END-IF")==0)
            return ENDIF;
        else if(strcmp(buffer,"MOVE")==0)
            return MOVE;
        else if(strcmp(buffer,"TO")==0)
            return TO;
        else{
            yylval.str = strdup(buffer); 
            return IDENTIFIER;
        }
    }

    if(isdigit(c)){
        char buffer[64];
        int i=0;
        buffer[i++]=c;
        while (isdigit(c=getchar())){
            buffer[i++]=c;
        }
        buffer[i]='\0';
        ungetc(c,stdin);
        yylval.str=strdup(buffer);
        return NUMBER;
    }

    if(c=='"'){
        char buffer[256];
        int i=0;
        while((c=getchar())!='"' && c!=EOF){
            buffer[i++] = c;
        }
        buffer[i]='\0';
        yylval.str=strdup(buffer); 
        return STRING;
    }

    if(c=='\n') return '\n';
    if(c=='=') return EQUALS;

    

    return c;
}


/*

bison -d translator.y         
gcc -o translator translator.tab.c scanner.c

*/