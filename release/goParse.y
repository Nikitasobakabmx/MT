%{ 
#include "stdlib.h" 
#include "stdio.h" 
#include "my_type.h"
#include <string.h>
#include <string>
#include <map>
#include <list>


extern int yylex(); 
extern int yyparse(); 
extern FILE* yyin;
void yyerror(const char* s);

class contain
{
public:
    int reType;
    std::map<std::string, int> *values = NULL;
};

int curentLine = 0;

std::list<std::string> *Errors = NULL;

std::map<std::string, contain> *funcions = NULL;
std::map<std::string, int> *vars = NULL;


%}
%union{
   struct my_type *table;
}

%type <table> program code packageClause functionDecl 
            parameters identifierList block statementList 
            varDecl varList assigned  expressionList expression 
            return  logicOperation  mathOperation  unoOperation 
            operandName type dataType logic number negative positive 
            string mb_space  

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
    : packageClause code 
    ;  

code
    : functionDecl code
    | packageClause code
    | eos code
    | varDecl code
    |
    ;


packageClause
    : PACKAGE SPACE LITER eos {}
    ;

functionDecl
    : FUNC SPACE LITER parameters mb_space type mb_space block eos
 /*   {
        std::string name = 
        if(funcions == NULL)
            funcions = new std::map<std::string, contain>();
        funcions->
    }*/
    | FUNC SPACE LITER parameters mb_space block eos
    ;

parameters
    : L_PAREN identifierList R_PAREN 
    ;

identifierList 
    : SPACE type identifierList
    | COMMA SPACE identifierList 
    | operandName identifierList
    | dataType identifierList
    |
    ;


block
    : L_CURLY statementList R_CURLY
    ;

statementList
    : eos statementList
    | varDecl statementList
    | assigned statementList
    | return statementList
    |
    ;

varDecl
    : VAR SPACE varList SPACE type SPACE assigned
    | VAR SPACE assigned
    ;

varList
    : operandName varList
    | COMMA SPACE operandName varList
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
    : RETURN SPACE operands statementList
    ;

operands
    : operandName
    | dataType
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
        if($2 == NULL)
            $$ = $1;
        else
        {
            char* result = (char*)malloc(strlen($1->line) + strlen($2->line) + 1);
            strcpy(result, $1->line);
            strcat(result, $2->line);
            if($$ != NULL)
                free($$);
            $$ = (my_type*)malloc(sizeof(my_type));
            $$->line = result;
        }
    }
    | DOT LITER operandName     {
        if($3 == NULL)
            char* result = (char*)malloc(strlen($1->line) + strlen($2->line) + 1);
        else
            char* result = (char*)malloc(strlen($1->line) + strlen($2->line) + strlen($3->line) + 1);
        strcpy(result, $1->line);
        strcat(result, $2->line);
        if($3 != NULL)
            strcpy(result, $3->line);
        if($$ != NULL)
            free($$);
        $$ = (my_type*)malloc(sizeof(my_type));
        $$->line = result;
    }
    | parameters operandName    {
        $$ = $1;
    }
    | eos                       {if($$ != NULL)free($$);$$ = NULL;}
    |                           {if($$ != NULL)free($$);$$ = NULL;}
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
    : NEW_LINE
    | SEMICOLON 
    | TAB
    | END_OF_FILE
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
    yyparse();
    return 0;
}