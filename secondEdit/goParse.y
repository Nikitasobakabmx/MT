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
    : define program
    | block program
    | call program
    | var_and_func_ASSIGN program
    | SPACE program
    | NEW_LINE program
    | TAB program
    | END_OF_FILE
    ;

define  
    : funcDef {std::cout <<"funcDef endl" <<std::endl;}
    | packageDef {std::cout << "packageDef endl" <<std::endl;}
    | varDef
    ;

funcDef
    : FUNC SPACE LITER continiue
    ;

packageDef
    : PACKAGE SPACE LITER 
    ;

varDef 
    : VAR varCallList
    ;

call
    : LITER var_and_func_CALL
    ;

var_and_func_ASSIGN
    : var_and_func_CALL continiue_assign;
    
continiue_assign
    : SPACE continiue_assign
    | ASSIGN varAsign
    | ASSIGN_ADD varAsign
    | MINUS ASSIGN varAsign
    | MULTIPLY ASSIGN varAsign
    | DIV ASSIGN varAsign
    ;

var_and_func_CALL
    : LITER call_continiue
    | DOT LITER call_continiue
    | SPACE ASSIGN varAsign
    | input_param
    | ASSIGN varAsign
    ;

call_continiue
    : SPACE
    | SEMICOLON
    | NEW_LINE
    | var_and_func_CALL
    ;

typeDef
    : TYPE_BOOL
    | TYPE_FLOAT
    | TYPE_INT
    | TYPE_STR
    ;

continiueVarDef
    : ASSIGN varAsign
    | typeDef continiueVarDef
    | SEMICOLON
    | NEW_LINE
    | SPACE varCallList
    ;

varCallList
    : LITER varCallList
    | COMMA varCallList
    | continiueVarDef
    ;


varAsign
    : SPACE varAsign
    | LITER varAsign
    | dataType varAsign
    | COMMA varAsign
    | NEW_LINE {std::cout << "tut vse" << std::endl;}
    | SEMICOLON
    ;

dataType
    : QUOTES LITER QUOTES
    | D_QUOTES LITER D_QUOTES
    | TRUE
    | FALSE
    | UNSIGNED
    ;


continiue
    : SPACE continiue
    | parametres continiue
    | type continiue
    | block
    ;

input_param
    : L_PAREN untyped_identifyList
    ;

untyped_identifyList
    : dataType untyped_identifyList
    | COMMA untyped_identifyList
    | SPACE untyped_identifyList
    | call untyped_identifyList
    | R_PAREN
    ;

parametres
    : L_PAREN typed_identifyList
    ;

typed_identifyList
    : typed_identyfy typed_identifyList
    | COMMA typed_identyfy typed_identifyList
    | R_PAREN {std::cout << "params input" << std::endl;}
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
    | NEW_LINE statementList
    | varDef statementList
    | var_and_func_ASSIGN statementList
    | RETURN SPACE LITER statementList
    | R_CURLY 
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
