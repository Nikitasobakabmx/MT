%{ 
#include "stdlib.h" 
#include "stdio.h" 
#include "sheet.h"
#include "suport.h"
#include <string.h>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <iostream>


extern int yylex(); 
extern int yyparse(); 
extern FILE* yyin;
void yyerror(const char* s);

class params
{
public:
    std::string name;
    int type;
};

class contain
{
public:
    int reType;
    std::vector<params> *values = NULL;
};


std::string *app;

int curentLine = 0;

std::list<std::string> *Errors = NULL;

std::map<std::string, contain> *funcions = NULL;
std::map<std::string, int> *vars = NULL;


%}
%union{
   struct sheet *table;
}



%token <table> VAR 
%token <table> SPACE 
%token <table> PACKAGE
%token <table> LITER 
%token <table> TRUE 
%token <table> FALSE 
%token <table> NEW_LINE
%token <table> FUNC
%token <table> RETURN
%token <table> TYPE_INT
%token <table> LOGIC_AND
%token <table> LOGIC_OR
%token <table> LOGIC_NOT
%token <table> L_PAREN
%token <table> R_PAREN
%token <table> L_CURLY
%token <table> R_CURLY
%token <table> COMMA
%token <table> DOT
%token <table> ASSIGN
%token <table> ASSIGN_ADD
%token <table> PLUS
%token <table> MINUS
%token <table> MULTIPLY
%token <table> DIV
%token <table> TYPE_FLOAT
%token <table> TYPE_STR
%token <table> UNSIGNED
%token <table> SEMICOLON
%token <table> TAB
%token <table> QUOTES
%token <table> D_QUOTES
%token <table> TYPE_BOOL
%token END_OF_FILE

%start program

%%
program
    : define
    | block
    | SPACE program
    | NEW_LINE program
    | TAB program
    | END_OF_FILE
    ;

define  
    : funcDef
    | packageDef
    ;

funcDef
    : FUNC SPACE LITER parametres continiue
    ;

packageDef
    : PACKAGE SPACE LITER
    ;

continiue
    : SPACE continiue
    | type continiue
    | block
    ;


parametres
    : SPACE parametres
    | L_PAREN typed_identifyList
    ;

typed_identifyList
    : typed_identyfy typed_identifyList
    | COMMA typed_identyfy typed_identifyList
    | R_PAREN
    ;

typed_identyfy
    : LITER SPACE type
    | SPACE typed_identyfy
    ;

type
    : TYPE_FLOAT 
    | TYPE_INT 
    | TYPE_STR 
    | TYPE_BOOL
    ;

block
    : L_CURLY statementList
    ;


statementList
    : SPACE statementList
    | R_CURLY NEW_LINE program
    ;

%%

void yyerror(const char* s)
{ 
    fprintf(stderr,"\nParsing error: %s \n",s); 
}


int main(int argc, char **argv)
{
    app = new std::string(argv[0]);
    vars = new std::map<std::string, int>();
    funcions = new std::map<std::string, contain>();
    Errors = new std::list<std::string>();
    for(;;)
        yyparse();
    return 0;
}
