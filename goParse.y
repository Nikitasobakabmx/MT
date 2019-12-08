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


std::string *program;

int curentLine = 0;

std::list<std::string> *Errors = NULL;

std::map<std::string, contain> *funcions = NULL;
std::map<std::string, int> *vars = NULL;


%}
%union{
   struct sheet *table;
}

%type <table> file code packageClause functionDecl 
            parameters identifierList block statementList 
            varDecl varList assigned  expressionList expression 
            return  logicOperation  mathOperation  unoOperation 
            operandName type dataType logic number negative positive 
            string mb_space eos

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

%start file

%%

file
    : packageClause code 
    ;  

code
    : functionDecl code   {std::cout << "One" << std::endl;}
    | packageClause code   {std::cout << "two" << std::endl;}
    | eos code                {std::cout << "thre" << std::endl;}
    | varDecl code            {std::cout << "FORE" << std::endl;}
    |                     {std::cout << "five" << std::endl;}
    ;           


packageClause
    : PACKAGE SPACE LITER eos {}
    ;

functionDecl
    : FUNC SPACE LITER parameters mb_space type mb_space block
    {
        std::cout << "func declared" << std::endl;
    }
    | FUNC SPACE LITER parameters mb_space block code
    ;

parameters
    : L_PAREN identifierList R_PAREN 
    ;

identifierList 
    : SPACE type identifierList
    | COMMA SPACE identifierList 
    | dataType identifierList
    | LITER identifierList
    |
    ;

block
    : L_CURLY statementList R_CURLY { std::cout << "tut vse" << std::endl;}
    ;

statementList
    : return code
    | varDecl statementList 
    | assigned statementList     
    | eos statementList 
    |  
    ;

varDecl
    : VAR SPACE varList SPACE type SPACE assigned
    | VAR SPACE assigned
    ;

varList
    : COMMA SPACE operandName varList
    | operandName varList
    |
    ;


assigned
    : varList mb_space assigned
    | ASSIGN assigned
    | SPACE expressionList statementList
    | unoOperation statementList
    ;

expressionList
    : expression expressionList
    | COMMA SPACE expression expressionList
    |
    ;

expression
    : operands mb_space expression
    | mathOperation mb_space expression
    | expressionList
    ;

return
    : RETURN SPACE operands {std::cout << "RETURN" <<std::endl;}
    ;

operands
    : dataType
    | operandName
    ;

logicOperation
    : LOGIC_AND
    | LOGIC_NOT
    | LOGIC_OR
    ;

mathOperation
    : MINUS
    | PLUS
    | DIV
    | MULTIPLY
    | logicOperation
    ;

unoOperation
    : PLUS PLUS
    | MINUS MINUS
    ;

operandName
    : LITER operandName         {
        std::cout << "hehe" << std::endl;
        if($2 == NULL)
            $$ = $1;
        else
        {
            char* result = (char*)malloc(strlen($1->line) + strlen($2->line) + 1);
            strcpy(result, $1->line);
            strcat(result, $2->line);
            $$ = (sheet*)malloc(sizeof(sheet));
            $$->line = result;
            $$->next = $2->next;
        }
        if($$->next != NULL)
        {
            contain container;
            try{
                container = funcions->at($$->line);
            }catch(std::out_of_range &ex){
                std::string* error = makeErrorMsg(
                    program,
                    curentLine, 
                    "was not declared in this scope", 
                    new std::string($$->line));
                Errors->push_back(*error);
            }

            int count = 0;	
            for(auto tmp : *container.values)
            {
                $$ = $$->next;
                if($$ == NULL)
                    break;
                if(tmp.type != $$->type)
                    Errors->push_back(*makeErrorMsg(program,
							curentLine,
							"was not declared in this scope",
							new std::string($$->line)));
            }
            if(container.values->size() != count)
		    Errors->push_back(*makeErrorMsg(program,
				curentLine,
				std::to_string(container.values->size() - count) + "missing args in func ",
				new std::string($$->line)));
        }
        else{
            $$->type = TYPE_INT;
            if((*vars)[$$->line] == 0)
            {
                std::string* error = makeErrorMsg(
                    program,
                    curentLine, 
                    "was not declared in this scope", 
                    new std::string($$->line));
                Errors->push_back(*error);
            }
        }
        for(auto it : *Errors)
            std::cout << it << std::endl;
    }
    | DOT LITER operandName     {
        $$ = (sheet*)malloc(sizeof(sheet));
        char* result;
        if($3 == NULL)
            result = (char*)malloc(strlen($1->line) + strlen($2->line) + 1);
        else
        if($3->line != NULL)
            result = (char*)malloc(strlen($1->line) + strlen($2->line) + strlen($3->line) + 1);
        strcpy(result, $1->line);
        strcat(result, $2->line);
        if($3 != NULL && $3->line != NULL)
            strcat(result, $3->line);
        if($3 != NULL)
            $$->next = $3->next;
        
        $$->line = result;
    }
    | parameters operandName    {
        std::cout << "tut gg" << std::endl;
        $$ = $1;
    }
    |                           {$$ = NULL;}
    ;

type
    : TYPE_FLOAT 
    | TYPE_INT 
    | TYPE_STR 
    | TYPE_BOOL
    ;

dataType
    : number
    | string
    | logic
    ;

logic
    : TRUE
    | FALSE
    ;

number
    : positive
    | negative
    ;

negative
    : MINUS UNSIGNED positive
    ;

positive
    : UNSIGNED positive
    | DOT UNSIGNED
    |
    ;

string
    : QUOTES LITER QUOTES
    | D_QUOTES LITER D_QUOTES
    ;

mb_space
    : SPACE
    |
    ;
 
eos
    : NEW_LINE      {curentLine++; $$ = NULL;}
    | SEMICOLON     {$$ = NULL;}
    | TAB           {$$ = NULL;}
    | END_OF_FILE   {$$ = NULL;}
    ;
%%

void yyerror(const char* s)
{ 
    fprintf(stderr,"\nParsing error: %s \n",s); 
}

// int yyparse (char const *file)
// {
//   yyin = fopen (file, "r");
//   if (!yyin)
//     {
//       perror ("fopen");
//       exit (EXIT_FAILURE);
//     }
//   /* One token only. */
//   yylex ();
//   if (fclose (yyin) != 0)
//     {
//       perror ("fclose");
//       exit (EXIT_FAILURE);
//     }
//   return 0;
// }

int main(int argc, char **argv)
{
    program = new std::string(argv[0]);
    vars = new std::map<std::string, int>();
    funcions = new std::map<std::string, contain>();
    Errors = new std::list<std::string>();
    yyparse();
    return 0;
}
