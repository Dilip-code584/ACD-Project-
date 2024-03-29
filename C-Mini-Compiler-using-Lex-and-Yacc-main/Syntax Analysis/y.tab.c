/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	int yylineno;
	char data_type[200];

#line 76 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    NO_ELSE = 258,                 /* NO_ELSE  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    CONSTANT = 260,                /* CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    SIZEOF = 262,                  /* SIZEOF  */
    PTR_OP = 263,                  /* PTR_OP  */
    INC_OP = 264,                  /* INC_OP  */
    DEC_OP = 265,                  /* DEC_OP  */
    LEFT_OP = 266,                 /* LEFT_OP  */
    RIGHT_OP = 267,                /* RIGHT_OP  */
    LE_OP = 268,                   /* LE_OP  */
    GE_OP = 269,                   /* GE_OP  */
    EQ_OP = 270,                   /* EQ_OP  */
    NE_OP = 271,                   /* NE_OP  */
    AND_OP = 272,                  /* AND_OP  */
    OR_OP = 273,                   /* OR_OP  */
    MUL_ASSIGN = 274,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 275,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 276,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 277,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 278,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 279,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 280,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 281,              /* AND_ASSIGN  */
    XOR_ASSIGN = 282,              /* XOR_ASSIGN  */
    OR_ASSIGN = 283,               /* OR_ASSIGN  */
    DEFINE = 284,                  /* DEFINE  */
    TYPEDEF = 285,                 /* TYPEDEF  */
    EXTERN = 286,                  /* EXTERN  */
    STATIC = 287,                  /* STATIC  */
    AUTO = 288,                    /* AUTO  */
    REGISTER = 289,                /* REGISTER  */
    CHAR = 290,                    /* CHAR  */
    SHORT = 291,                   /* SHORT  */
    INT = 292,                     /* INT  */
    LONG = 293,                    /* LONG  */
    SIGNED = 294,                  /* SIGNED  */
    UNSIGNED = 295,                /* UNSIGNED  */
    FLOAT = 296,                   /* FLOAT  */
    DOUBLE = 297,                  /* DOUBLE  */
    CONST = 298,                   /* CONST  */
    VOLATILE = 299,                /* VOLATILE  */
    VOID = 300,                    /* VOID  */
    STRUCT = 301,                  /* STRUCT  */
    UNION = 302,                   /* UNION  */
    ENUM = 303,                    /* ENUM  */
    CASE = 304,                    /* CASE  */
    DEFAULT = 305,                 /* DEFAULT  */
    IF = 306,                      /* IF  */
    ELSE = 307,                    /* ELSE  */
    SWITCH = 308,                  /* SWITCH  */
    WHILE = 309,                   /* WHILE  */
    DO = 310,                      /* DO  */
    FOR = 311,                     /* FOR  */
    GOTO = 312,                    /* GOTO  */
    CONTINUE = 313,                /* CONTINUE  */
    BREAK = 314,                   /* BREAK  */
    RETURN = 315                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NO_ELSE 258
#define IDENTIFIER 259
#define CONSTANT 260
#define STRING_LITERAL 261
#define SIZEOF 262
#define PTR_OP 263
#define INC_OP 264
#define DEC_OP 265
#define LEFT_OP 266
#define RIGHT_OP 267
#define LE_OP 268
#define GE_OP 269
#define EQ_OP 270
#define NE_OP 271
#define AND_OP 272
#define OR_OP 273
#define MUL_ASSIGN 274
#define DIV_ASSIGN 275
#define MOD_ASSIGN 276
#define ADD_ASSIGN 277
#define SUB_ASSIGN 278
#define LEFT_ASSIGN 279
#define RIGHT_ASSIGN 280
#define AND_ASSIGN 281
#define XOR_ASSIGN 282
#define OR_ASSIGN 283
#define DEFINE 284
#define TYPEDEF 285
#define EXTERN 286
#define STATIC 287
#define AUTO 288
#define REGISTER 289
#define CHAR 290
#define SHORT 291
#define INT 292
#define LONG 293
#define SIGNED 294
#define UNSIGNED 295
#define FLOAT 296
#define DOUBLE 297
#define CONST 298
#define VOLATILE 299
#define VOID 300
#define STRUCT 301
#define UNION 302
#define ENUM 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

	char str[1000];

#line 253 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NO_ELSE = 3,                    /* NO_ELSE  */
  YYSYMBOL_4_ = 4,                         /* '<'  */
  YYSYMBOL_5_ = 5,                         /* '>'  */
  YYSYMBOL_6_ = 6,                         /* '='  */
  YYSYMBOL_7_ = 7,                         /* '+'  */
  YYSYMBOL_8_ = 8,                         /* '-'  */
  YYSYMBOL_9_ = 9,                         /* '*'  */
  YYSYMBOL_10_ = 10,                       /* '/'  */
  YYSYMBOL_11_ = 11,                       /* '%'  */
  YYSYMBOL_12_ = 12,                       /* '|'  */
  YYSYMBOL_13_ = 13,                       /* '&'  */
  YYSYMBOL_IDENTIFIER = 14,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 15,                  /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 16,            /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 17,                    /* SIZEOF  */
  YYSYMBOL_PTR_OP = 18,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 19,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 20,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 21,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 22,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 23,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 24,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 25,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 26,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 27,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 28,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 29,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 30,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 31,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 32,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 33,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 34,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 35,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 36,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 37,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 38,                 /* OR_ASSIGN  */
  YYSYMBOL_DEFINE = 39,                    /* DEFINE  */
  YYSYMBOL_TYPEDEF = 40,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 41,                    /* EXTERN  */
  YYSYMBOL_STATIC = 42,                    /* STATIC  */
  YYSYMBOL_AUTO = 43,                      /* AUTO  */
  YYSYMBOL_REGISTER = 44,                  /* REGISTER  */
  YYSYMBOL_CHAR = 45,                      /* CHAR  */
  YYSYMBOL_SHORT = 46,                     /* SHORT  */
  YYSYMBOL_INT = 47,                       /* INT  */
  YYSYMBOL_LONG = 48,                      /* LONG  */
  YYSYMBOL_SIGNED = 49,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 50,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 51,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 52,                    /* DOUBLE  */
  YYSYMBOL_CONST = 53,                     /* CONST  */
  YYSYMBOL_VOLATILE = 54,                  /* VOLATILE  */
  YYSYMBOL_VOID = 55,                      /* VOID  */
  YYSYMBOL_STRUCT = 56,                    /* STRUCT  */
  YYSYMBOL_UNION = 57,                     /* UNION  */
  YYSYMBOL_ENUM = 58,                      /* ENUM  */
  YYSYMBOL_CASE = 59,                      /* CASE  */
  YYSYMBOL_DEFAULT = 60,                   /* DEFAULT  */
  YYSYMBOL_IF = 61,                        /* IF  */
  YYSYMBOL_ELSE = 62,                      /* ELSE  */
  YYSYMBOL_SWITCH = 63,                    /* SWITCH  */
  YYSYMBOL_WHILE = 64,                     /* WHILE  */
  YYSYMBOL_DO = 65,                        /* DO  */
  YYSYMBOL_FOR = 66,                       /* FOR  */
  YYSYMBOL_GOTO = 67,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 68,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 69,                     /* BREAK  */
  YYSYMBOL_RETURN = 70,                    /* RETURN  */
  YYSYMBOL_71_ = 71,                       /* '('  */
  YYSYMBOL_72_ = 72,                       /* ')'  */
  YYSYMBOL_73_ = 73,                       /* '['  */
  YYSYMBOL_74_ = 74,                       /* ']'  */
  YYSYMBOL_75_ = 75,                       /* '.'  */
  YYSYMBOL_76_ = 76,                       /* ','  */
  YYSYMBOL_77_ = 77,                       /* '~'  */
  YYSYMBOL_78_ = 78,                       /* '!'  */
  YYSYMBOL_79_ = 79,                       /* '^'  */
  YYSYMBOL_80_ = 80,                       /* '?'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* ';'  */
  YYSYMBOL_83_ = 83,                       /* '{'  */
  YYSYMBOL_84_ = 84,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_begin = 86,                     /* begin  */
  YYSYMBOL_primary_expression = 87,        /* primary_expression  */
  YYSYMBOL_Define = 88,                    /* Define  */
  YYSYMBOL_postfix_expression = 89,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 90,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 91,          /* unary_expression  */
  YYSYMBOL_unary_operator = 92,            /* unary_operator  */
  YYSYMBOL_cast_expression = 93,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 94, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 95,       /* additive_expression  */
  YYSYMBOL_shift_expression = 96,          /* shift_expression  */
  YYSYMBOL_relational_expression = 97,     /* relational_expression  */
  YYSYMBOL_equality_expression = 98,       /* equality_expression  */
  YYSYMBOL_and_expression = 99,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 100,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 101,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 102,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 103,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 104,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 105,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 106,      /* assignment_operator  */
  YYSYMBOL_expression = 107,               /* expression  */
  YYSYMBOL_constant_expression = 108,      /* constant_expression  */
  YYSYMBOL_declaration = 109,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 110,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 111,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 112,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 113,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 114,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 115, /* specifier_qualifier_list  */
  YYSYMBOL_struct_or_union_specifier = 116, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 117,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 118,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 119,       /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 120,   /* struct_declarator_list  */
  YYSYMBOL_declarator = 121,               /* declarator  */
  YYSYMBOL_direct_declarator = 122,        /* direct_declarator  */
  YYSYMBOL_pointer = 123,                  /* pointer  */
  YYSYMBOL_parameter_list = 124,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 125,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 126,          /* identifier_list  */
  YYSYMBOL_type_name = 127,                /* type_name  */
  YYSYMBOL_initializer = 128,              /* initializer  */
  YYSYMBOL_initializer_list = 129,         /* initializer_list  */
  YYSYMBOL_statement = 130,                /* statement  */
  YYSYMBOL_compound_statement = 131,       /* compound_statement  */
  YYSYMBOL_declaration_list = 132,         /* declaration_list  */
  YYSYMBOL_statement_list = 133,           /* statement_list  */
  YYSYMBOL_expression_statement = 134,     /* expression_statement  */
  YYSYMBOL_selection_statement = 135,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 136,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 137,           /* jump_statement  */
  YYSYMBOL_external_declaration = 138,     /* external_declaration  */
  YYSYMBOL_function_definition = 139       /* function_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   878

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  282

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    11,    13,     2,
      71,    72,     9,     7,    76,     8,    75,    10,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    82,
       4,     6,     5,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    12,    84,    77,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    33,    34,    38,    39,    40,    41,    45,
      49,    50,    51,    52,    53,    54,    55,    56,    60,    61,
      65,    66,    67,    68,    69,    70,    74,    75,    76,    77,
      78,    79,    83,    84,    88,    89,    90,    91,    95,    96,
      97,   101,   102,   103,   107,   108,   109,   110,   111,   115,
     116,   117,   121,   122,   126,   127,   131,   132,   136,   137,
     141,   142,   146,   147,   151,   152,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   170,   171,   175,
     179,   180,   184,   185,   186,   187,   191,   192,   196,   197,
     201,   202,   203,   204,   205,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   222,   223,   224,   225,   229,
     230,   231,   235,   236,   240,   241,   245,   250,   251,   255,
     256,   260,   261,   262,   263,   264,   265,   266,   270,   271,
     275,   276,   280,   281,   285,   286,   290,   291,   295,   296,
     297,   301,   302,   306,   307,   308,   309,   310,   314,   315,
     316,   317,   321,   322,   326,   327,   331,   332,   336,   337,
     341,   342,   343,   344,   348,   349,   350,   351,   355,   356,
     360,   361,   362,   363
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NO_ELSE", "'<'",
  "'>'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'|'", "'&'",
  "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP",
  "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "DEFINE", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR",
  "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'",
  "','", "'~'", "'!'", "'^'", "'?'", "':'", "';'", "'{'", "'}'", "$accept",
  "begin", "primary_expression", "Define", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "declarator", "direct_declarator", "pointer",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "external_declaration", "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     715,    10,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
       3,   583,   715,  -140,    32,   821,   821,  -140,    -8,   751,
     -20,    -3,  -140,  -140,  -140,   -51,  -140,  -140,   733,  -140,
     -34,  -140,   139,  -140,  -140,    11,   670,   217,  -140,    32,
    -140,   751,   773,   140,   -20,  -140,     3,  -140,   308,  -140,
     751,  -140,   670,   670,   670,     3,   653,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,   636,   661,   661,   -36,    -2,
     457,     2,   -19,    64,   404,   529,  -140,  -140,  -140,  -140,
    -140,    98,   820,   675,  -140,   218,   114,   153,    85,   167,
      68,    23,    72,   125,   -13,  -140,  -140,   -32,  -140,  -140,
     289,   361,  -140,  -140,  -140,  -140,   107,  -140,  -140,  -140,
    -140,     3,    19,  -140,    24,  -140,  -140,  -140,    90,  -140,
     308,  -140,  -140,  -140,   791,  -140,  -140,   -24,  -140,   115,
    -140,   529,  -140,   675,  -140,  -140,   675,   675,   146,   476,
    -140,  -140,  -140,   -16,    43,     3,   143,   205,  -140,  -140,
     490,   675,   207,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,   675,  -140,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,  -140,  -140,   385,  -140,
    -140,  -140,  -140,   821,  -140,   221,  -140,  -140,   -37,   158,
       3,  -140,  -140,   174,    86,    89,   176,   476,  -140,  -140,
    -140,   675,  -140,  -140,    91,  -140,    31,  -140,  -140,  -140,
    -140,  -140,   218,   218,   114,   114,   153,   153,   153,   153,
      85,    85,   167,    68,    23,    72,   125,    -4,  -140,  -140,
    -140,  -140,   236,  -140,  -140,  -140,  -140,   457,   457,   675,
     595,  -140,  -140,   675,  -140,   675,  -140,  -140,   186,  -140,
      94,   457,   100,  -140,  -140,   457,   172,  -140,   457,  -140,
    -140,  -140
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   128,   121,     9,    90,    91,    92,    93,    94,    96,
      97,    98,    99,   102,   103,   100,   101,    95,   112,   113,
       0,     0,     0,   169,     0,    82,    84,   104,     0,     0,
     120,     0,     2,   168,   129,     0,     1,     3,     4,    80,
       0,    86,    88,    83,    85,     0,     0,     0,   152,     0,
     173,     0,     0,     0,   119,   122,     0,    81,     0,   171,
       0,   111,     0,   108,   106,     0,     0,   114,    28,    29,
      27,    26,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,   156,   148,
      10,    20,    32,     0,    34,    38,    41,    44,    49,    52,
      54,    56,    58,    60,    62,    64,    77,     0,   154,   143,
       0,     0,   144,   145,   146,   147,    88,   153,   172,   134,
     127,   133,     0,   130,     0,   124,    32,    79,     0,    87,
       0,   138,    89,   170,     0,   107,   105,     0,   117,     0,
     115,     0,    24,     0,    21,    22,     0,     0,     0,     0,
     164,   165,   166,     0,     0,   136,     0,     0,    16,    17,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   150,     0,   149,
     155,   132,   125,     0,   126,     0,   123,   141,     0,     0,
       0,   116,   110,     0,     0,     0,     0,     0,   167,     8,
     137,     0,    15,    12,     0,    18,     0,    14,    65,    35,
      36,    37,    39,    40,    42,    43,    45,    46,    47,    48,
      50,    51,    53,    55,    57,    59,    61,     0,    78,   151,
     131,   135,     0,   139,   109,   118,    25,     0,     0,     0,
       0,    33,    13,     0,    11,     0,   140,   142,   158,   160,
       0,     0,     0,    19,    63,     0,     0,   162,     0,   159,
     161,   163
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,   248,  -140,  -140,  -140,  -140,   -53,  -140,   -79,    59,
      60,    21,    13,    82,    87,    84,    88,    83,  -140,   -52,
     -54,  -140,   -82,  -140,    41,     5,  -140,   223,  -140,   -30,
     -56,  -140,  -140,   222,   -48,  -140,   -11,   258,   290,  -140,
     108,  -140,   149,  -102,  -140,   -55,    20,    40,   182,  -139,
    -140,  -140,  -140,    -1,  -140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    21,    90,    22,    91,   224,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   174,   107,   128,    23,    49,    40,    41,    25,    26,
      65,    27,    28,    66,    67,   137,    29,    30,    31,   122,
     123,   124,   156,   132,   208,   108,   109,    51,   111,   112,
     113,   114,   115,    32,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     126,   127,   153,   154,   131,    24,    45,   135,   136,    35,
     217,     2,     1,    42,   175,   193,    64,     2,   140,     1,
      37,    55,   142,   144,   145,   148,    24,    24,   207,   155,
      43,    44,    64,    64,    64,   146,    64,    37,   116,   252,
     126,     1,    56,    24,   195,   116,     2,   253,    57,    50,
     196,    52,   210,    53,   138,    64,   200,   121,   211,   154,
     195,   154,    59,   150,   214,   215,   218,   194,    20,   147,
      48,   118,   195,   149,    20,    46,   131,   265,   260,   226,
     133,   189,    60,    48,   191,   155,   140,   110,    48,   183,
     184,   202,   117,    61,    62,   203,   204,   229,   230,   231,
     205,   117,   190,    20,    64,   264,   225,   195,   185,   186,
     201,    64,   247,    58,    39,   219,   157,   158,   159,   195,
     228,   179,   180,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   248,   261,   200,   220,    58,   151,    68,    69,    70,
     267,   117,   192,    71,    72,    73,    74,    75,   257,    76,
      77,   258,   195,   262,   206,   195,   276,   263,   126,   160,
     195,   161,   278,   162,   181,   182,   195,   270,   272,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   187,   188,    17,    18,    19,   212,   131,   255,
     240,   241,   268,   269,   236,   237,   238,   239,   121,   273,
     216,    85,   126,   274,   125,   221,   277,    86,    87,   222,
     279,   227,    47,   281,    68,    69,    70,   176,   177,   178,
      71,    72,    73,    74,    75,   251,    76,    77,   232,   233,
     254,   234,   235,    68,    69,    70,   256,   259,   275,    71,
      72,    73,    74,    75,   280,    76,    77,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      38,   242,    17,    18,    19,   244,   246,   243,    78,   129,
     245,    79,    80,    81,   134,    82,    83,    84,    85,    54,
     213,    34,   198,     0,    86,    87,    68,    69,    70,    88,
      47,    89,    71,    72,    73,    74,    75,    85,    76,    77,
       0,   250,     0,    86,    87,    68,    69,    70,     0,   130,
     266,    71,    72,    73,    74,    75,     0,    76,    77,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,     0,    17,    18,    19,     0,     0,     0,
      78,     0,     0,    79,    80,    81,     0,    82,    83,    84,
      85,     0,     0,     0,     0,     0,    86,    87,    68,    69,
      70,    88,    47,   197,    71,    72,    73,    74,    75,    85,
      76,    77,     0,     0,     0,    86,    87,     0,     0,     0,
       0,   130,    68,    69,    70,     0,     0,     0,    71,    72,
      73,    74,    75,     0,    76,    77,     0,     0,     0,     0,
       0,    68,    69,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    78,    76,    77,    79,    80,    81,     0,    82,
      83,    84,    85,     0,     0,     0,     0,     0,    86,    87,
       0,     0,     0,    88,    47,   199,    78,     0,     0,    79,
      80,    81,     0,    82,    83,    84,    85,     0,     0,     0,
       0,     0,    86,    87,    68,    69,    70,    88,    47,   249,
      71,    72,    73,    74,    75,    85,    76,    77,     0,     0,
       0,    86,    87,    68,    69,    70,   152,     0,     0,    71,
      72,    73,    74,    75,     0,    76,    77,    68,    69,    70,
       0,     0,     0,    71,    72,    73,    74,    75,     0,    76,
      77,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,    79,    80,    81,     0,    82,    83,    84,    85,     0,
       0,     0,     0,     0,    86,    87,    68,    69,    70,    88,
      47,     0,    71,    72,    73,    74,    75,    85,    76,    77,
       0,     0,     0,    86,    87,     0,     0,     0,    88,     0,
       0,    85,   223,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    63,    36,    17,    18,    19,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     2,     0,     0,
      85,     0,    68,    69,    70,     0,    86,    87,    71,    72,
      73,    74,    75,     0,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,     0,    17,    18,
      19,     0,     0,    68,    69,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    20,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,   271,    68,    69,
      70,     0,    86,    87,    71,    72,    73,    74,    75,     0,
      76,    77,    68,    69,    70,     0,     0,     0,    71,    72,
      73,    74,    75,     0,    76,    77,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    63,   141,    17,    18,
      19,     0,     0,    86,    87,     9,    10,    11,    12,    13,
      14,    15,    16,    63,     1,    17,    18,    19,     0,     2,
       0,     0,   143,     0,     0,     0,     0,   139,    86,    87,
       0,     0,     1,     0,     0,     0,    85,     2,     0,     0,
       0,     0,    86,    87,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,     0,
      17,    18,    19,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    20,   119,    17,    18,
      19,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    20,     0,    17,    18,    19,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   163,     0,    17,    18,
      19,     0,     0,     0,    47,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    63,   120,    17,    18,    19,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,   209,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
      53,    53,    84,    85,    58,     0,    14,    63,    64,    20,
     149,    14,     9,    24,    93,    28,    46,    14,    66,     9,
      21,    72,    75,    76,    77,    80,    21,    22,   130,    85,
      25,    26,    62,    63,    64,    71,    66,    38,    49,    76,
      93,     9,    76,    38,    76,    56,    14,    84,    82,    29,
      82,    71,    76,    73,    65,    85,   111,    52,    82,   141,
      76,   143,    42,    82,   146,   147,    82,    80,    71,    71,
      29,    51,    76,    71,    71,    83,   130,    81,   217,   161,
      60,    13,    42,    42,    12,   141,   134,    47,    47,     4,
       5,    72,    51,    82,    83,    76,    72,   176,   177,   178,
      76,    60,    79,    71,   134,    74,   160,    76,    23,    24,
     121,   141,   194,     6,    82,    72,    18,    19,    20,    76,
     174,     7,     8,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   195,   221,   198,   155,     6,    82,     7,     8,     9,
     252,   110,    27,    13,    14,    15,    16,    17,    72,    19,
      20,    72,    76,    72,    74,    76,    72,    76,   221,    71,
      76,    73,    72,    75,    21,    22,    76,   259,   260,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    25,    26,    55,    56,    57,    82,   252,   210,
     187,   188,   257,   258,   183,   184,   185,   186,   203,   263,
      64,    71,   265,   265,    74,    72,   271,    77,    78,    14,
     275,    14,    83,   278,     7,     8,     9,     9,    10,    11,
      13,    14,    15,    16,    17,    14,    19,    20,   179,   180,
      82,   181,   182,     7,     8,     9,    72,    71,    62,    13,
      14,    15,    16,    17,    82,    19,    20,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      22,   189,    55,    56,    57,   191,   193,   190,    61,    56,
     192,    64,    65,    66,    62,    68,    69,    70,    71,    31,
     141,     1,   110,    -1,    77,    78,     7,     8,     9,    82,
      83,    84,    13,    14,    15,    16,    17,    71,    19,    20,
      -1,   203,    -1,    77,    78,     7,     8,     9,    -1,    83,
      84,    13,    14,    15,    16,    17,    -1,    19,    20,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    -1,    64,    65,    66,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    77,    78,     7,     8,
       9,    82,    83,    84,    13,    14,    15,    16,    17,    71,
      19,    20,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    83,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    61,    19,    20,    64,    65,    66,    -1,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    61,    -1,    -1,    64,
      65,    66,    -1,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    77,    78,     7,     8,     9,    82,    83,    84,
      13,    14,    15,    16,    17,    71,    19,    20,    -1,    -1,
      -1,    77,    78,     7,     8,     9,    82,    -1,    -1,    13,
      14,    15,    16,    17,    -1,    19,    20,     7,     8,     9,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    77,    78,     7,     8,     9,    82,
      83,    -1,    13,    14,    15,    16,    17,    71,    19,    20,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      71,    -1,     7,     8,     9,    -1,    77,    78,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,     7,     8,     9,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    71,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,     7,     8,
       9,    -1,    77,    78,    13,    14,    15,    16,    17,    -1,
      19,    20,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    71,    55,    56,
      57,    -1,    -1,    77,    78,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     9,    55,    56,    57,    -1,    14,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    84,    77,    78,
      -1,    -1,     9,    -1,    -1,    -1,    71,    14,    -1,    -1,
      -1,    -1,    77,    78,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      55,    56,    57,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    71,    14,    55,    56,
      57,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    71,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     6,    -1,    55,    56,
      57,    -1,    -1,    -1,    83,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    72,    55,    56,    57,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    84,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    14,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    55,    56,    57,
      71,    86,    88,   109,   110,   113,   114,   116,   117,   121,
     122,   123,   138,   139,   123,   121,     0,   138,    86,    82,
     111,   112,   121,   110,   110,    14,    83,    83,   109,   110,
     131,   132,    71,    73,   122,    72,    76,    82,     6,   131,
     132,    82,    83,    53,   114,   115,   118,   119,     7,     8,
       9,    13,    14,    15,    16,    17,    19,    20,    61,    64,
      65,    66,    68,    69,    70,    71,    77,    78,    82,    84,
      87,    89,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   107,   130,   131,
     132,   133,   134,   135,   136,   137,   121,   109,   131,    14,
      72,   110,   124,   125,   126,    74,    91,   104,   108,   112,
      83,   105,   128,   131,   118,   115,   115,   120,   121,    84,
     119,    71,    91,    71,    91,    91,    71,    71,   130,    71,
      82,    82,    82,   107,   107,   115,   127,    18,    19,    20,
      71,    73,    75,     6,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   106,    93,     9,    10,    11,     7,
       8,    21,    22,     4,     5,    23,    24,    25,    26,    13,
      79,    12,    27,    28,    80,    76,    82,    84,   133,    84,
     130,   121,    72,    76,    72,    76,    74,   128,   129,    84,
      76,    82,    82,   127,   107,   107,    64,   134,    82,    72,
     121,    72,    14,    72,    90,   105,   107,    14,   105,    93,
      93,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    99,   100,   101,   102,   107,   105,    84,
     125,    14,    76,    84,    82,   121,    72,    72,    72,    71,
     134,    93,    72,    76,    74,    81,    84,   128,   130,   130,
     107,    72,   107,   105,   104,    62,    72,   130,    72,   130,
      82,   130
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    87,    87,    87,    87,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   107,   108,
     109,   109,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   119,   120,   120,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   129,   129,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   136,   137,   137,   137,   137,   138,   138,
     139,   139,   139,   139
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     3,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     6,
       5,     3,     1,     1,     1,     2,     3,     1,     3,     2,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     2,
       1,     3,     2,     1,     1,     3,     1,     2,     1,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     2,     3,
       3,     4,     1,     2,     1,     2,     1,     2,     5,     7,
       5,     7,     6,     7,     2,     2,     2,     3,     1,     1,
       4,     3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* primary_expression: IDENTIFIER  */
#line 38 "parser.y"
                     { insertToHash((yyvsp[0].str), data_type , yylineno); }
#line 1710 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: type_specifier  */
#line 186 "parser.y"
                                { strcpy(data_type, (yyvsp[0].str)); }
#line 1716 "y.tab.c"
    break;


#line 1720 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 365 "parser.y"


#include "lex.yy.c"
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	if(!yyparse())
		printf("\nParsing complete\n");
	else
		printf("\nParsing failed\n");

	fclose(yyin);
	display();
	disp();
	return 0;
}
//extern int lineno;
extern char *yytext;
yyerror(char *s) {
	printf("\nLine %d : %s\n", (yylineno), s);
}         
