#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "translator.tab.h" 

int yylex() {
    int c;

    while((c=getchar())==' ' || c=='\t');

    if(c==EOF) return 0;

    if(isalnum(c)){
        char buffer[64];
        int i=0;
        buffer[i++]=c;
        while(isalnum(c=getchar()) || c=='-' || c=='_'){
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
        else if(strcmp(buffer,"ADD")==0)
            return ADD;
        else if(strcmp(buffer,"SUBTRACT")==0)
            return SUBTRACT;
        else if(strcmp(buffer,"MULTIPLY")==0)
            return MULTIPLY;
        else if(strcmp(buffer,"DIVIDE")==0)
            return DIVIDE;
        else if(strcmp(buffer,"TO")==0)
            return TO;
        else if(strcmp(buffer,"FROM")==0)
            return FROM;
        else if(strcmp(buffer,"BY")==0)
            return BY;
        else if(strcmp(buffer,"INTO")==0)
            return INTO;
        else if(strcmp(buffer,"GIVING")==0)
            return GIVING;

        else if(strcmp(buffer,"DIVISION")==0)
            return DIVISION;
        else if(strcmp(buffer,"SECTION")==0)
            return SECTION;
        else if(strcmp(buffer,"STOP")==0)
            return STOP;
        else if(strcmp(buffer,"RUN")==0)
            return RUN;

        else if(strcmp(buffer,"IDENTIFICATION")==0)
            return IDENTIFICATION;
        else if(strcmp(buffer,"PROGRAM-ID")==0)
            return PROGRAMID;
        else if(strcmp(buffer,"ENVIRONMENT")==0)
            return ENVIRONMENT;
        else if(strcmp(buffer,"DATA")==0)
            return DATA;
        else if(strcmp(buffer,"FILE")==0)
            return FIL;
        else if(strcmp(buffer,"WORKING-STORAGE")==0)
            return WORKINGSTORAGE;
        else if(strcmp(buffer,"LOCAL-STORAGE")==0)
            return LOCALSTORAGE;
        else if(strcmp(buffer,"LINKAGE")==0)
            return LINKAGE;
        else if(strcmp(buffer,"PROCEDURE")==0)
            return PROCEDURE;
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

    if(c=='\n') return NEWLINE;
    if(c=='.') return '.';
    if(c=='=') return EQUALS;
    if(c=='<') return MINOR;
    if(c=='>') return MAJOR;

    

    return c;
}


/*

bison -d translator.y         
gcc -o translator translator.tab.c scanner.c

*/