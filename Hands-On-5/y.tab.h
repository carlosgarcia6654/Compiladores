/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INCLUDE = 258,                 /* INCLUDE  */
    DEFINE = 259,                  /* DEFINE  */
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    CHAR = 262,                    /* CHAR  */
    VOID = 263,                    /* VOID  */
    RETURN = 264,                  /* RETURN  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    WHILE = 267,                   /* WHILE  */
    FOR = 268,                     /* FOR  */
    LBRACE = 269,                  /* LBRACE  */
    RBRACE = 270,                  /* RBRACE  */
    LPAREN = 271,                  /* LPAREN  */
    RPAREN = 272,                  /* RPAREN  */
    LBRACKET = 273,                /* LBRACKET  */
    RBRACKET = 274,                /* RBRACKET  */
    ASSIGN = 275,                  /* ASSIGN  */
    EQ = 276,                      /* EQ  */
    NEQ = 277,                     /* NEQ  */
    LT = 278,                      /* LT  */
    GT = 279,                      /* GT  */
    LEQ = 280,                     /* LEQ  */
    GEQ = 281,                     /* GEQ  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    MULTIPLY = 284,                /* MULTIPLY  */
    DIVIDE = 285,                  /* DIVIDE  */
    MOD = 286,                     /* MOD  */
    SEMICOLON = 287,               /* SEMICOLON  */
    COMMA = 288,                   /* COMMA  */
    NUMBER = 289,                  /* NUMBER  */
    IDENTIFIER = 290,              /* IDENTIFIER  */
    STRING = 291,                  /* STRING  */
    REAL = 292,                    /* REAL  */
    CHAR_LITERAL = 293             /* CHAR_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INCLUDE 258
#define DEFINE 259
#define INT 260
#define FLOAT 261
#define CHAR 262
#define VOID 263
#define RETURN 264
#define IF 265
#define ELSE 266
#define WHILE 267
#define FOR 268
#define LBRACE 269
#define RBRACE 270
#define LPAREN 271
#define RPAREN 272
#define LBRACKET 273
#define RBRACKET 274
#define ASSIGN 275
#define EQ 276
#define NEQ 277
#define LT 278
#define GT 279
#define LEQ 280
#define GEQ 281
#define PLUS 282
#define MINUS 283
#define MULTIPLY 284
#define DIVIDE 285
#define MOD 286
#define SEMICOLON 287
#define COMMA 288
#define NUMBER 289
#define IDENTIFIER 290
#define STRING 291
#define REAL 292
#define CHAR_LITERAL 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 47 "parser.y"

    int number;
    char *string;

#line 148 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
