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
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    VOID = 260,                    /* VOID  */
    ID = 261,                      /* ID  */
    NUM = 262,                     /* NUM  */
    REAL = 263,                    /* REAL  */
    WHILE = 264,                   /* WHILE  */
    IF = 265,                      /* IF  */
    RETURN = 266,                  /* RETURN  */
    PREPROC = 267,                 /* PREPROC  */
    LE = 268,                      /* LE  */
    STRING = 269,                  /* STRING  */
    PRINT = 270,                   /* PRINT  */
    FUNCTION = 271,                /* FUNCTION  */
    DO = 272,                      /* DO  */
    ARRAY = 273,                   /* ARRAY  */
    ELSE = 274,                    /* ELSE  */
    STRUCT = 275,                  /* STRUCT  */
    STRUCT_VAR = 276,              /* STRUCT_VAR  */
    FOR = 277,                     /* FOR  */
    GE = 278,                      /* GE  */
    EQ = 279,                      /* EQ  */
    NE = 280,                      /* NE  */
    INC = 281,                     /* INC  */
    DEC = 282,                     /* DEC  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    NEQ = 285,                     /* NEQ  */
    UMINUS = 286                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define FLOAT 259
#define VOID 260
#define ID 261
#define NUM 262
#define REAL 263
#define WHILE 264
#define IF 265
#define RETURN 266
#define PREPROC 267
#define LE 268
#define STRING 269
#define PRINT 270
#define FUNCTION 271
#define DO 272
#define ARRAY 273
#define ELSE 274
#define STRUCT 275
#define STRUCT_VAR 276
#define FOR 277
#define GE 278
#define EQ 279
#define NE 280
#define INC 281
#define DEC 282
#define AND 283
#define OR 284
#define NEQ 285
#define UMINUS 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 171 "parser.y"

		int ival;
		char *str;
	

#line 135 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
