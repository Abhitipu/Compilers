/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

#ifndef YY_YY_ASS5_19CS10069_19CS30007_TAB_H_INCLUDED
# define YY_YY_ASS5_19CS10069_19CS30007_TAB_H_INCLUDED
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
    BREAK = 258,
    RETURN = 259,
    CASE = 260,
    FOR = 261,
    WHILE = 262,
    GOTO = 263,
    SIZEOF = 264,
    CONTINUE = 265,
    IF = 266,
    DO = 267,
    SWITCH = 268,
    ELSE = 269,
    FLOAT = 270,
    SHORT = 271,
    CHAR = 272,
    _BOOL = 273,
    _IMAGINARY = 274,
    _COMPLEX = 275,
    INT = 276,
    DOUBLE = 277,
    LONG = 278,
    VOID = 279,
    SIGNED = 280,
    AUTO = 281,
    UNSIGNED = 282,
    ENUM = 283,
    UNION = 284,
    STRUCT = 285,
    TYPEDEF = 286,
    CONST = 287,
    DEFAULT = 288,
    STATIC = 289,
    REGISTER = 290,
    RESTRICT = 291,
    VOLATILE = 292,
    EXTERN = 293,
    INLINE = 294,
    IDENTIFIER = 295,
    INTEGER_CONST = 296,
    CHAR_CONST = 297,
    FLOAT_CONST = 298,
    STRING_LITERAL = 299,
    PLUS = 300,
    MINUS = 301,
    MULT = 302,
    DIVIDE = 303,
    ARROW = 304,
    INCREMENT = 305,
    DECREMENT = 306,
    RSHIFT = 307,
    LSHIFT = 308,
    LT = 309,
    GT = 310,
    LEQ = 311,
    GEQ = 312,
    EQ = 313,
    NEQ = 314,
    BITWISE_OR = 315,
    LOGICAL_OR = 316,
    BITWISE_AND = 317,
    LOGICAL_AND = 318,
    XOR = 319,
    BITWISE_NOT = 320,
    LOGICAL_NOT = 321,
    ELLIPSIS = 322,
    MODULO = 323,
    ASGN = 324,
    ENUMERATION_CONST = 325,
    ADD_ASGN = 326,
    SUB_ASGN = 327,
    MULT_ASGN = 328,
    DIV_ASGN = 329,
    MOD_ASGN = 330,
    LSHIFT_ASGN = 331,
    RSHIFT_ASGN = 332,
    AND_ASGN = 333,
    OR_ASGN = 334,
    XOR_ASGN = 335
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "ass5_19CS10069_19CS30007.y"

    char unaryOp;       // unary operator
    int int_val;        // integer value
    char* char_val;     // char value
    float float_val;    // float value
    int num_params;     // number of parameters
    int instr_number;   // instruction number: for backpatching
    Expression* expr;   // Expression
    Statement* stat;    // Statement
    symboltype* sym_type;   // symbol type
    sym* symp;          // symp
    Array* A;           // Array type

#line 152 "ass5_19CS10069_19CS30007.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS5_19CS10069_19CS30007_TAB_H_INCLUDED  */
