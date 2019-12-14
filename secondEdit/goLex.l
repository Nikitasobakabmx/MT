%option noyywrap
%{
    #include "y.tab.h"
    #include "stdlib.h"
    #include "sheet.h"
    #include <string>
    extern void yyerror(const char* s);
    extern int str;
%}

%%
"package"   {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"package";
                yylval.table->type= PACKAGE;
                yylval.table->next = NULL;
                return PACKAGE;
            }
"func"      {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"func";
                yylval.table->type= FUNC;
                yylval.table->next = NULL;
                return FUNC;
            }
"return"    {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"return";
                yylval.table->type= RETURN;
                yylval.table->next = NULL;
                return RETURN;
            }
"var"       {         
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"var";
                yylval.table->type= VAR;
                yylval.table->next = NULL;
                return VAR;
            }

"int"       {     
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"int";
                yylval.table->type= TYPE_INT;
                yylval.table->next = NULL;
                return TYPE_INT;
            }
"float"     {   
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"float";
                yylval.table->type= TYPE_FLOAT;
                yylval.table->next = NULL;
                return TYPE_FLOAT;
            }
"string"    {  
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"string";
                yylval.table->type= TYPE_STR;
                yylval.table->next = NULL;
                return TYPE_STR;
            }
"bool"      {    
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"bool";
                yylval.table->type= TYPE_BOOL;
                yylval.table->next = NULL;
                return TYPE_BOOL;
            }

"true"      {    
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"true";
                yylval.table->type= TYPE_BOOL;
                yylval.table->next = NULL;
                return TRUE;
            }
"false"     {   
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"false";
                yylval.table->type= TYPE_BOOL;
                yylval.table->next = NULL;
                return FALSE;
            }

"&&"        {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"and";
                yylval.table->type= LOGIC_AND;
                yylval.table->next = NULL;
                return LOGIC_AND;
            }
"||"        {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"or";
                yylval.table->type= LOGIC_OR;
                yylval.table->next = NULL;
                return LOGIC_OR;
            }
"!"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"not";
                yylval.table->type= LOGIC_NOT;
                yylval.table->next = NULL;
                return LOGIC_NOT;}

"("         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"left";
                yylval.table->type= L_PAREN;
                yylval.table->next = NULL;
                return L_PAREN;
            }
")"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"right";
                yylval.table->type= R_PAREN;
                yylval.table->next = NULL;
                return R_PAREN;
            }
"{"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"left";
                yylval.table->type= L_CURLY;
                yylval.table->next = NULL;
                return L_CURLY;
            }
"}"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"right";
                yylval.table->type= R_CURLY;
                yylval.table->next = NULL;
                return R_CURLY;
            }

","         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"comma";
                yylval.table->type= COMMA;
                yylval.table->next = NULL;
                return COMMA;
            }
"."         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)".";
                yylval.table->type= DOT;
                yylval.table->next = NULL;
                return DOT;
            }

"="         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"assign";
                yylval.table->type= ASSIGN;
                yylval.table->next = NULL;
                return ASSIGN;
            }

"+"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"plus";
                yylval.table->type= PLUS;
                yylval.table->next = NULL;
                return PLUS;
            }
"-"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"minus";
                yylval.table->type= MINUS;
                yylval.table->next = NULL;
                return MINUS;
            }
"*"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"multy";
                yylval.table->type= MULTIPLY;
                yylval.table->next = NULL;
                return MULTIPLY;
            }
"/"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"div";
                yylval.table->type= DIV;
                yylval.table->next = NULL;
                return DIV;
            }


"\'"        {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"singl";
                yylval.table->type= QUOTES;
                yylval.table->next = NULL;
                return QUOTES;
            }
"\""        {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"double";
                yylval.table->type= D_QUOTES;
                yylval.table->next = NULL;
                return D_QUOTES;
            }

" "+        {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"space";
                yylval.table->type= SPACE;
                yylval.table->next = NULL;
                return SPACE;
            }
"\n"        {
                ++str;
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"newLine";
                yylval.table->type= NEW_LINE;
                yylval.table->next = NULL;
                return NEW_LINE;
            }
";"         {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"semi";
                yylval.table->type= SEMICOLON;
                yylval.table->next = NULL;
                return SEMICOLON;
            }
"\t"        {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)"tab";
                yylval.table->type= TAB;
                yylval.table->next = NULL;  
                return TAB;
            }

[a-zA-Z][a-zA-Z0-9]* {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)malloc(strlen(yytext) + 1);
                strcpy(yylval.table->line, yytext);
                yylval.table->type= LITER;
                yylval.table->next = NULL;                
                return LITER;
                }

[0-9]+      {
                yylval.table = (sheet*)malloc(sizeof(sheet));
                yylval.table->line = (char*)malloc(strlen(yytext) + 1);
                strcpy(yylval.table->line, yytext);
                yylval.table->type= UNSIGNED;
                yylval.table->next = NULL;
                return UNSIGNED;
            }

<<EOF>>   {
                return END_OF_FILE;
            }
. {yyerror("\nUnknown char");}
%%