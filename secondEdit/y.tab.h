/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VAR = 258,
    SPACE = 259,
    PACKAGE = 260,
    LITER = 261,
    TRUE = 262,
    FALSE = 263,
    NEW_LINE = 264,
    FUNC = 265,
    RETURN = 266,
    TYPE_INT = 267,
    LOGIC_AND = 268,
    LOGIC_OR = 269,
    LOGIC_NOT = 270,
    L_PAREN = 271,
    R_PAREN = 272,
    L_CURLY = 273,
    R_CURLY = 274,
    COMMA = 275,
    DOT = 276,
    ASSIGN = 277,
    ASSIGN_ADD = 278,
    PLUS = 279,
    MINUS = 280,
    MULTIPLY = 281,
    DIV = 282,
    TYPE_FLOAT = 283,
    TYPE_STR = 284,
    UNSIGNED = 285,
    SEMICOLON = 286,
    TAB = 287,
    QUOTES = 288,
    D_QUOTES = 289,
    TYPE_BOOL = 290,
    END_OF_FILE = 291
  };
#endif
/* Tokens.  */
#define VAR 258
#define SPACE 259
#define PACKAGE 260
#define LITER 261
#define TRUE 262
#define FALSE 263
#define NEW_LINE 264
#define FUNC 265
#define RETURN 266
#define TYPE_INT 267
#define LOGIC_AND 268
#define LOGIC_OR 269
#define LOGIC_NOT 270
#define L_PAREN 271
#define R_PAREN 272
#define L_CURLY 273
#define R_CURLY 274
#define COMMA 275
#define DOT 276
#define ASSIGN 277
#define ASSIGN_ADD 278
#define PLUS 279
#define MINUS 280
#define MULTIPLY 281
#define DIV 282
#define TYPE_FLOAT 283
#define TYPE_STR 284
#define UNSIGNED 285
#define SEMICOLON 286
#define TAB 287
#define QUOTES 288
#define D_QUOTES 289
#define TYPE_BOOL 290
#define END_OF_FILE 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "goParse.y" /* yacc.c:1921  */

   struct sheet *table;

#line 134 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
