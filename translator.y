%{
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

%}

%union{
    char* str;
    struct{
        char* type;
        char* length;
    } picinfo;
}

%token <str> STRING IDENTIFIER
%token DISPLAY ACCEPT
%token IF EQUALS THEN
%token MAJOR MINOR
%token ELSE ENDIF
%token <str> NUMBER
%token MOVE TO
%token ADD SUBTRACT MULTIPLY DIVIDE
%token FROM BY INTO GIVING
%token IDENTIFICATION ENVIRONMENT DATA FIL WORKINGSTORAGE LOCALSTORAGE LINKAGE PROCEDURE
%token DIVISION SECTION
%token PROGRAMID
%token END
%token PROGRAM
%token STOP RUN
%token NEWLINE
%token PIC VALUE
%token DIGIT_X DIGIT_9 DIGIT_A DIGIT_S DIGIT_S9 DIGIT_V9
%token PERFORM ENDPERFORM
%token TIMES UNTIL VARYING
%token COMPUTE

%left '+' '-'
%left '*' '/'
%left OR
%left AND


%type statement
%type <str> optional_number_identifier
%type <picinfo> pic_type
%type <str> maybe_value
%type <str> conditional
%type <str> optional_long
%type <str> conjunction
%type <str> comparison

%type <str> exp 
%type <str> tet 
%type <str> fef 

%start program

%%

program:
    /* */
  | program statement_with_newline
;   

statement:
    DISPLAY STRING optional_point {
        print_indent();
        printf("print(\"%s\")\n",$2);
    }
    | DISPLAY IDENTIFIER optional_point {
        print_indent();
        printf("print(%s)\n",$2);
    }
    | ACCEPT IDENTIFIER optional_point {
        const char* tipo=get_variable_type($2);
        print_indent();
        if(tipo==NULL) {
            printf("%s = input()  # tipo desconocido\n",$2);
        } 
        else if(strcmp(tipo,"int")==0) {
            printf("%s = int(input())\n",$2);
        } 
        else if(strcmp(tipo,"float")==0) {
            printf("%s = float(input())\n",$2);
        } 
        else if(strcmp(tipo, "str")==0) {
            printf("%s = str(input())\n",$2); 
        } 
        else{
            printf("%s=input()  # tipo de dato no manejado: %s\n",$2,tipo);
        }
    }
    | MOVE STRING TO IDENTIFIER optional_point {
        print_indent();
        printf("%s = \"%s\"\n",$4,$2);
    }
    | MOVE NUMBER TO IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s\n",$4,$2);
    }
    | MOVE IDENTIFIER TO IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s\n",$4,$2);
    }
    | ADD optional_number_identifier TO IDENTIFIER optional_point {
        print_indent();
        printf("%s += %s\n",$4,$2);
    }
    | ADD optional_number_identifier TO optional_number_identifier GIVING IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s + %s\n",$6,$4,$2);
    }
    | SUBTRACT optional_number_identifier FROM IDENTIFIER optional_point {
        print_indent();
        printf("%s -= %s\n",$4,$2);
    }
    | SUBTRACT optional_number_identifier FROM optional_number_identifier GIVING IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s - %s\n",$6,$4,$2);
    }
    | MULTIPLY optional_number_identifier BY IDENTIFIER {
        print_indent();
        printf("%s *= %s\n",$4,$2);
    }
    | MULTIPLY optional_number_identifier BY optional_number_identifier GIVING IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s * %s\n",$6,$4,$2);
    }
    | DIVIDE optional_number_identifier INTO IDENTIFIER {
        print_indent();
        printf("%s /= %s\n",$4,$2);
    }
    | DIVIDE optional_number_identifier INTO optional_number_identifier GIVING IDENTIFIER optional_point {
        print_indent();
        printf("%s = %s / %s\n",$6,$4,$2);
    }
    | DIVIDE IDENTIFIER BY optional_number_identifier {
        print_indent();
        printf("%s /= %s\n",$2,$4);
    }
    | IDENTIFICATION DIVISION '.' {
        print_indent();
        printf("# IDENTIFICATION DIVISION\n");
    }
    | PROGRAMID '.' IDENTIFIER '.' {
        printf("# PROGRAM-ID: %s\n",$3);
    }
    | PROGRAMID '.' NUMBER IDENTIFIER '.' {
        printf("# PROGRAM-ID: %s%s\n",$3,$4);
    }
    | END PROGRAM IDENTIFIER '.' {
        printf("# END PROGRAM %s", $3);
    }
    | END PROGRAM NUMBER IDENTIFIER '.' {
        printf("# END PROGRAM %s%s", $3,$4);
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
    | NUMBER IDENTIFIER '.' {
        printf("# NIVEL %s DE VARIABLES %s\n",$1,$2);
    }
    | NUMBER IDENTIFIER PIC pic_type maybe_value '.' {
        add_variable($2,$4.type);
        if($5==NULL){
            printf("# var %s: %s%s%s\n", 
            $2,                 
            $4.type,            
            $4.length != NULL ? $4.length : "", 
            $5 != NULL ? $5 : ""
            );
        }
        else{
            printf("%s%s\n",$2,$5 != NULL ? $5 : "");
        }
    }
    | if_statement
    | perform_statement
    | compute_statement
;

compute_statement:
    COMPUTE IDENTIFIER EQUALS exp optional_point {
        print_indent();
        printf("%s = %s\n",$2,$4); 
        free($2);
        free($4);
    }
;
exp:
    exp '+' tet {
        asprintf(&$$,"(%s + %s)",$1,$3);
        free($1); 
        free($3);
    }
    | exp '-' tet {
        asprintf(&$$, "(%s - %s)",$1,$3);
        free($1); 
        free($3);
    }
    | tet { $$=$1; }
;
tet:
    tet '*' fef {
        asprintf(&$$, "(%s * %s)",$1,$3);
        free($1); 
        free($3);
    }
    | tet '/' fef {
        asprintf(&$$, "(%s / %s)",$1,$3);
        free($1); 
        free($3);
    }
    | fef { $$=$1; }
;
fef:
    '(' exp ')' {
        asprintf(&$$, "(%s)",$2);
        free($2);
    }
    | IDENTIFIER {
        $$=strdup($1);
        free($1);
    }
    | NUMBER {
        $$=strdup($1);
        free($1);
    }
;

if_statement:
    IF conditional optional_then NEWLINE {
        print_indent();
        printf("if %s:\n",$2);
        indent_level++;
        free($2);  
    }
    statements elif_statement else_statement ENDIF optional_point {
        indent_level--;
    }
;

optional_then:
    /* */
    | THEN
;

elif_statement:
    /* */
    | elif_statement ELSE IF conditional NEWLINE {
        indent_level--;
        print_indent();
        printf("elif %s:\n",$4);
        indent_level++;
        free($4);
    } statements
;

else_statement:
    /* */
    | ELSE NEWLINE {
        indent_level--;
        print_indent();
        printf("else:\n");
        indent_level++;
    } statements
;

conditional:
    conditional OR conjunction {
        asprintf(&$$, "(%s or %s)",$1,$3);
        free($1); free($3);
    }
    | conjunction {
        $$ = $1;
    }
;

conjunction:
    conjunction AND comparison {
        asprintf(&$$, "(%s and %s)", $1, $3);
        free($1); 
        free($3);
    }
    | comparison { $$ = $1; }
;

comparison:
    IDENTIFIER EQUALS IDENTIFIER { 
        asprintf(&$$, "%s == %s",$1,$3); 
    }
    | IDENTIFIER EQUALS NUMBER { 
        asprintf(&$$, "%s == %s",$1,$3); 
    }
    | IDENTIFIER EQUALS STRING { 
        asprintf(&$$, "%s == \"%s\"",$1,$3); 
    }
    | IDENTIFIER MINOR IDENTIFIER { 
        asprintf(&$$, "%s < %s",$1,$3); 
    }
    | IDENTIFIER MINOR NUMBER { 
        asprintf(&$$, "%s < %s",$1,$3); 
    }
    | IDENTIFIER MAJOR IDENTIFIER { 
        asprintf(&$$, "%s > %s",$1,$3); 
    }
    | IDENTIFIER MAJOR NUMBER { 
        asprintf(&$$, "%s > %s",$1,$3); 
    }
    | '(' conditional ')' {
        asprintf(&$$, "(%s)", $2);
        free($2);
    }
;

perform_statement:
    PERFORM optional_number_identifier TIMES optional_then {
        print_indent();
        printf("for _ in range(%s):\n",$2);
        indent_level++;
    }
    statements ENDPERFORM optional_point {
        indent_level--;
    }
    | PERFORM UNTIL conditional optional_then {
        print_indent();
        printf("while not %s:\n",$3);
        indent_level++;
        free($3);
    }
    statements ENDPERFORM optional_point {
        indent_level--;
    }
    | PERFORM VARYING IDENTIFIER FROM optional_number_identifier BY optional_number_identifier UNTIL conditional optional_then {
        print_indent();
        printf("%s = %s - 1\n",$3,$5);
        printf("while not %s:\n",$9);
        indent_level++;
        print_indent();
        printf("%s += %s\n",$3,$7);
        free($3);
    }
    statements ENDPERFORM optional_point {
        indent_level--;
    }
;

optional_point:
    /* */
    | '.'
;

optional_number_identifier:
    NUMBER { $$=$1; }
    | IDENTIFIER { $$=$1; }
;

pic_type:
    NUMBER optional_long {
        $$.type=strdup("int");
        $$.length=strdup($2);
    }
    | NUMBER optional_long DIGIT_V9 '(' NUMBER ')' {
        $$.type=strdup("float");
        $$.length=strdup($2);
    }
    | 'X' optional_long {
        $$.type=strdup("str");
        $$.length=strdup($2);
    }
    | 'A' optional_long {
        $$.type=strdup("str");
        $$.length=strdup($2);
    }
    | DIGIT_S9 optional_long {
        $$.type=strdup("int");
        $$.length=strdup($2);
    }
    | DIGIT_S9 optional_long DIGIT_V9 '(' NUMBER ')' {
        $$.type=strdup("float");
        $$.length=strdup($2);
    }
;

optional_long:
    /* */ { $$=NULL; }
    | '(' NUMBER ')' { $$=$2; }
;

maybe_value:
    /* */ { $$=NULL; }
    | VALUE STRING {
        char* buf=malloc(strlen($2)+10);
        sprintf(buf," = \"%s\"",$2);
        $$=buf;
    }
    | VALUE NUMBER {
        char* buf=malloc(strlen($2)+10);
        sprintf(buf," = %s",$2);
        $$=buf;
    }
;

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