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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    BEGIN_SINGLE_COMMENT = 295,
    END_SINGLE_COMMENT = 296,
    SINGLE_COMMENT = 297,
    BEGIN_MULTI_COMMENT = 298,
    END_MULTI_COMMENT = 299,
    MULTI_COMMENT = 300,
    WHITE_SPACE = 301,
    IDENTIFIER = 302,
    INTEGER_CONST = 303,
    CHAR_CONST = 304,
    FLOAT_CONST = 305,
    DOUBLE_CONST = 306,
    STRING_LITERAL = 307,
    PLUS = 308,
    MINUS = 309,
    MULT = 310,
    DIVIDE = 311,
    ARROW = 312,
    INCREMENT = 313,
    DECREMENT = 314,
    RSHIFT = 315,
    LSHIFT = 316,
    LT = 317,
    GT = 318,
    LEQ = 319,
    GEQ = 320,
    EQ = 321,
    NEQ = 322,
    BITWISE_OR = 323,
    LOGICAL_OR = 324,
    BITWISE_AND = 325,
    LOGICAL_AND = 326,
    XOR = 327,
    BITWISE_NOT = 328,
    LOGICAL_NOT = 329,
    ELLIPSIS = 330,
    MODULO = 331,
    ASGN = 332,
    ENUMERATION_CONST = 333,
    ADD_ASGN = 334,
    SUB_ASGN = 335,
    MULT_ASGN = 336,
    DIV_ASGN = 337,
    MOD_ASGN = 338,
    LSHIFT_ASGN = 339,
    RSHIFT_ASGN = 340,
    AND_ASGN = 341,
    OR_ASGN = 342,
    XOR_ASGN = 343
  };
#endif
/* Tokens.  */
#define BREAK 258
#define RETURN 259
#define CASE 260
#define FOR 261
#define WHILE 262
#define GOTO 263
#define SIZEOF 264
#define CONTINUE 265
#define IF 266
#define DO 267
#define SWITCH 268
#define ELSE 269
#define FLOAT 270
#define SHORT 271
#define CHAR 272
#define _BOOL 273
#define _IMAGINARY 274
#define _COMPLEX 275
#define INT 276
#define DOUBLE 277
#define LONG 278
#define VOID 279
#define SIGNED 280
#define AUTO 281
#define UNSIGNED 282
#define ENUM 283
#define UNION 284
#define STRUCT 285
#define TYPEDEF 286
#define CONST 287
#define DEFAULT 288
#define STATIC 289
#define REGISTER 290
#define RESTRICT 291
#define VOLATILE 292
#define EXTERN 293
#define INLINE 294
#define BEGIN_SINGLE_COMMENT 295
#define END_SINGLE_COMMENT 296
#define SINGLE_COMMENT 297
#define BEGIN_MULTI_COMMENT 298
#define END_MULTI_COMMENT 299
#define MULTI_COMMENT 300
#define WHITE_SPACE 301
#define IDENTIFIER 302
#define INTEGER_CONST 303
#define CHAR_CONST 304
#define FLOAT_CONST 305
#define DOUBLE_CONST 306
#define STRING_LITERAL 307
#define PLUS 308
#define MINUS 309
#define MULT 310
#define DIVIDE 311
#define ARROW 312
#define INCREMENT 313
#define DECREMENT 314
#define RSHIFT 315
#define LSHIFT 316
#define LT 317
#define GT 318
#define LEQ 319
#define GEQ 320
#define EQ 321
#define NEQ 322
#define BITWISE_OR 323
#define LOGICAL_OR 324
#define BITWISE_AND 325
#define LOGICAL_AND 326
#define XOR 327
#define BITWISE_NOT 328
#define LOGICAL_NOT 329
#define ELLIPSIS 330
#define MODULO 331
#define ASGN 332
#define ENUMERATION_CONST 333
#define ADD_ASGN 334
#define SUB_ASGN 335
#define MULT_ASGN 336
#define DIV_ASGN 337
#define MOD_ASGN 338
#define LSHIFT_ASGN 339
#define RSHIFT_ASGN 340
#define AND_ASGN 341
#define OR_ASGN 342
#define XOR_ASGN 343

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "asgn4_19CS10069_19CS30007.y"

    int myIntVal;
    char myCharVal;
    float myFloatVal;
    double myDoubleVal;
    char myCharArray[60];
    char* myStringVal;

#line 242 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
