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

int str = 0;

std::string *app;

std::list<std::string> *Errors = NULL;
std::map<std::string, contain> *funcions = NULL;
std::map<std::string, int> *vars = NULL;


%}
%union{
   struct sheet *table;
}

%type <table> program  define funcDef packageDef varDef continiueVarDef
        varCallList var redefenition func_var_call call_parametres listParam
        varAsign operations operands dataType continiue parametres typed_identifyList
        typed_identyfy type block statementList return_statement integer
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
%token <table> L_PAREN /* param */
%token <table> R_PAREN
%token <table> L_CURLY /* block */
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
    | SPACE program
    | NEW_LINE program
    | MULTIPLY ASSIGN varAsign
    ;

define  
    : funcDef {}
    | packageDef {}
    | varDef {}
    ;

funcDef
    : FUNC SPACE LITER continiue {
            contain tmp;
            if($3->retype != NULL)
            {
                tmp.reType = *($3->retype);
                $3 = $3->next;
            }
            tmp.values = to_vector($3);
            funcions-> insert(std::pair<std::string,contain>(*(new std::string($3->line)),tmp));
            }
    ;

continiue
    : SPACE continiue {$$ = deepCopy($2);}
    | parametres continiue {$$ = (struct sheet *)malloc(sizeof(struct sheet));
                            $$->next = deepCopy($1);
                            }
    | type continiue{
        $$ = deepCopy($1);
        $$->retype = new int($$->type);
        $$->next = deepCopy($2);}
    | block {$$ = deepCopy($1);}
    ;

packageDef
    : PACKAGE SPACE LITER 
    ;

varDef 
    : VAR varCallList {$$ = deepCopy($2);
            
            auto xTmp = $$;
            std::list<std::string>* tmp = new std::list<std::string>();
            while(xTmp != NULL)
            {
                if(xTmp->type != LITER)
                    break;
                tmp->push_back(*(new std::string(xTmp->line)));
                xTmp = xTmp->next;
            }
            auto type = xTmp->type;
            for(auto it: *tmp)
                try{
                    vars->at(it);
                    Errors->push_back(makeErrorMsg(*app, str,
                                "redefinition",
                                it));
                }catch(std::out_of_range &ex)
                {
                    vars->insert(std::pair<std::string, int>(it, type));
                }
                
            }
    ;

continiueVarDef
    : ASSIGN varAsign {$$ = deepCopy($2);}
    | type continiueVarDef {
        $$ = deepCopy($1);
        if($2 != NULL)
        {
            if($$->type != $2->type)
                Errors->push_back(makeErrorMsg(*app, str,"incompatible type in initialization",*(new std::string($1->line))));
        }
    }
    | SEMICOLON {$$ = NULL;}
    | NEW_LINE {$$ = NULL;}
    | SPACE varCallList {$$ = deepCopy($2);}
    ;

varCallList
    : LITER varCallList {  
        $1->next = $2;
        $$ = deepCopy($1);
    }
    | COMMA varCallList {$$ = deepCopy($2);}
    | continiueVarDef {$$ = $1;}
    ;


var
    : LITER
    {
        bool tmp = false;
        std::string sTmp($1->line);
        try{
            vars->at(sTmp);
        }catch(std::out_of_range &ex){
            tmp = true;
        }
        if(tmp)
            try{
                funcions->at(sTmp);
                tmp = false;
            }catch(std::out_of_range &ex){
                tmp = true;
            }

        if(tmp)
            Errors->push_back(makeErrorMsg(*app, str+1,
                                "Undefined var",
                                sTmp));
    }
    | DOT
    ;

redefenition
    : ASSIGN varAsign
    | ASSIGN_ADD varAsign
    | MINUS ASSIGN varAsign
    | MULTIPLY ASSIGN varAsign
    | DIV ASSIGN varAsign
    ;

func_var_call
    : var 
    | call_parametres {}
    | redefenition 
    ;

call_parametres
    : L_PAREN listParam {$$ = deepCopy($2);}
    ;

listParam
    : R_PAREN {$$ = NULL;}
    | SPACE listParam {$$ = deepCopy($2);}
    | func_var_call listParam {$$ = deepCopy($1);
                                $$->next = deepCopy($2);}
    | COMMA listParam {$$ = deepCopy($2);}
    ;

varAsign
    : SPACE varAsign {if($2 != NULL)$$ = deepCopy($2);}
    | operands varAsign {if($2 == NULL)$$ = $1;}
    | operations
    | COMMA varAsign
    | NEW_LINE {$$ = NULL;}
    | SEMICOLON {$$ = NULL;}
    ;

operations
    : PLUS SPACE operands 
    | MINUS SPACE operands
    | DIV SPACE operands
    | MULTIPLY SPACE operands
    | LOGIC_AND SPACE operands
    | LOGIC_OR SPACE operands
    ;

operands
    : func_var_call {$$ = deepCopy($1);}
    | dataType {$$ = deepCopy($1);}
    ;

dataType
    : QUOTES LITER QUOTES { $$ = deepCopy($1);
                            $$->type= TYPE_STR;}
    | D_QUOTES LITER D_QUOTES{ $$ = deepCopy($1);
                            $$->type= TYPE_STR;}
    | TRUE                  { $$ = deepCopy($1);
                            $$->type= TYPE_BOOL;}
    | FALSE                 { $$ = deepCopy($1);
                            $$->type= TYPE_BOOL;}
    | integer               { $$ = deepCopy($1);
                            $$->type= TYPE_INT;}
    ;

integer
    : UNSIGNED {$$ = deepCopy($1);}
    ;




parametres
    : L_PAREN typed_identifyList {$$ = deepCopy($2);}
    ;

typed_identifyList
    : typed_identyfy typed_identifyList {$$ = deepCopy($1);
                                        $$->next = deepCopy($2);
                                        }
    | COMMA typed_identyfy typed_identifyList {$$ = deepCopy($2);
                                        $$->next = deepCopy($3);
                                        }
    | R_PAREN {$$ = NULL;}
    ;

typed_identyfy
    : LITER SPACE type      {
        vars->insert(std::pair<std::string,int>(*(new std::string($1->line)), $3->type));
    }
    | SPACE typed_identyfy
    ;

type
    : TYPE_FLOAT    {$$ = deepCopy($1);}
    | TYPE_INT      {$$ = deepCopy($1);}
    | TYPE_STR      {$$ = deepCopy($1);}
    | TYPE_BOOL     {$$ = deepCopy($1);}
    ;

block
    : L_CURLY statementList {}
    ;

statementList
    : SPACE statementList {$$ = deepCopy($2);}
    | NEW_LINE statementList {$$ = deepCopy($2);}
    | SEMICOLON statementList {$$ = deepCopy($2);}
    | TAB statementList {$$ = deepCopy($2);}
    | func_var_call statementList 
    | varDef statementList
    | return_statement statementList
    | R_CURLY {}
    ;

return_statement
    : RETURN SPACE LITER {$$ = deepCopy($3);}
    ;

%%

void yyerror(const char* s)
{ 
}


int main(int argc, char **argv)
{
    app = new std::string(argv[0]);
    vars = new std::map<std::string, int>();
    funcions = new std::map<std::string, contain>();
    Errors = new std::list<std::string>();
    if(argc >= 2)   
        yyin = fopen(argv[1], "r");
    else
        yyin = fopen("tmp.go", "r");
    yylex();
    yyparse();
    fclose(yyin);
    std::cout << str << std:: endl;
    for(auto it: *Errors)
        std::cout << it << std::endl;
    return 0;
}
