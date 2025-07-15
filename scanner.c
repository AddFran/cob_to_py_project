#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "translator.tab.h" 

int yylex() {
    int c;

    while((c=getchar())==' ' || c=='\t');

    if(c==EOF) return 0;

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

    if(isalnum(c) || c=='_'){
        char buffer[64];
        int i=0;
        buffer[i++]=toupper(c);
        while(isalnum(c=getchar()) || c=='-' || c=='_'){
            if(c=='-')
                buffer[i++]='_';
            else
                buffer[i++]=toupper(c);
        }
        buffer[i]='\0';
        ungetc(c,stdin);
        
        if(strcmp(buffer,"DISPLAY")==0)
            return DISPLAY;
        else if(strcmp(buffer,"PIC")==0)
            return PIC;
        else if(strcmp(buffer,"VALUE")==0)
            return VALUE;
        else if(strcmp(buffer,"9")==0)
            return '9';
        else if(strcmp(buffer,"X")==0)
            return 'X';
        else if(strcmp(buffer,"A")==0)
            return 'A';
        else if(strcmp(buffer,"S")==0)
            return 'S';
        else if(strcmp(buffer,"S9")==0)
            return DIGIT_S9;
        else if(strcmp(buffer,"V9")==0)
            return DIGIT_V9;
        else if(strcmp(buffer,"ACCEPT")==0)
            return ACCEPT;
        else if(strcmp(buffer,"IF")==0)
            return IF;
        else if(strcmp(buffer,"ELSE")==0)
            return ELSE;
        else if(strcmp(buffer,"END_IF")==0)
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
        else if(strcmp(buffer,"PROGRAM_ID")==0)
            return PROGRAMID;
        else if(strcmp(buffer,"PROGRAM")==0)
            return PROGRAM;
        else if(strcmp(buffer,"END")==0)
            return END;
        else if(strcmp(buffer,"ENVIRONMENT")==0)
            return ENVIRONMENT;
        else if(strcmp(buffer,"DATA")==0)
            return DATA;
        else if(strcmp(buffer,"FILE")==0)
            return FIL;
        else if(strcmp(buffer,"WORKING_STORAGE")==0)
            return WORKINGSTORAGE;
        else if(strcmp(buffer,"LOCAL_STORAGE")==0)
            return LOCALSTORAGE;
        else if(strcmp(buffer,"LINKAGE")==0)
            return LINKAGE;
        else if(strcmp(buffer,"PROCEDURE")==0)
            return PROCEDURE;

        else if(strcmp(buffer,"PERFORM")==0)
            return PERFORM;
        else if(strcmp(buffer,"END_PERFORM")==0)
            return ENDPERFORM;
        else if(strcmp(buffer,"TIMES")==0)
            return TIMES;
        else if(strcmp(buffer,"UNTIL")==0)
            return UNTIL;
        else if(strcmp(buffer,"VARYING")==0)
            return VARYING;
        
        else if(strcmp(buffer,"COMPUTE")==0)
            return COMPUTE;
        
        else if(strcmp(buffer,"AND")==0)
            return AND;
        else if(strcmp(buffer,"OR")==0)
            return OR;

        else{
            yylval.str = strdup(buffer); 
            return IDENTIFIER;
        }
    }

    else if(c=='"' || c=='\''){
        char type=c;  
        char buffer[256];
        int i=0;
        while((c=getchar())!=type && c!=EOF){
            buffer[i++]=c;
        }
        buffer[i]='\0';
        yylval.str=strdup(buffer); 
        return STRING;
    }

    else if(c=='\n') return NEWLINE;
    else if(c=='.') return '.';
    else if(c=='=') return EQUALS;
    else if(c=='<') return MINOR;
    else if(c=='>') return MAJOR;
    else if(c=='(') return '(';
    else if(c==')') return ')';

    else if(c=='+') return '+';
    else if(c=='-') return '-';
    else if(c=='*') return '*';
    else if(c=='/') return '/';


    return c;
}


/*

bison -d translator.y         
gcc -o translator translator.tab.c scanner.c

*/