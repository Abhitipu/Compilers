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
    DOUBLE_CONST = 299,
    STRING_LITERAL = 300,
    PLUS = 301,
    MINUS = 302,
    MULT = 303,
    DIVIDE = 304,
    ARROW = 305,
    INCREMENT = 306,
    DECREMENT = 307,
    RSHIFT = 308,
    LSHIFT = 309,
    LT = 310,
    GT = 311,
    LEQ = 312,
    GEQ = 313,
    EQ = 314,
    NEQ = 315,
    BITWISE_OR = 316,
    LOGICAL_OR = 317,
    BITWISE_AND = 318,
    LOGICAL_AND = 319,
    XOR = 320,
    BITWISE_NOT = 321,
    LOGICAL_NOT = 322,
    ELLIPSIS = 323,
    MODULO = 324,
    ASGN = 325,
    ENUMERATION_CONST = 326,
    ADD_ASGN = 327,
    SUB_ASGN = 328,
    MULT_ASGN = 329,
    DIV_ASGN = 330,
    MOD_ASGN = 331,
    LSHIFT_ASGN = 332,
    RSHIFT_ASGN = 333,
    AND_ASGN = 334,
    OR_ASGN = 335,
    XOR_ASGN = 336
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
#define IDENTIFIER 295
#define INTEGER_CONST 296
#define CHAR_CONST 297
#define FLOAT_CONST 298
#define DOUBLE_CONST 299
#define STRING_LITERAL 300
#define PLUS 301
#define MINUS 302
#define MULT 303
#define DIVIDE 304
#define ARROW 305
#define INCREMENT 306
#define DECREMENT 307
#define RSHIFT 308
#define LSHIFT 309
#define LT 310
#define GT 311
#define LEQ 312
#define GEQ 313
#define EQ 314
#define NEQ 315
#define BITWISE_OR 316
#define LOGICAL_OR 317
#define BITWISE_AND 318
#define LOGICAL_AND 319
#define XOR 320
#define BITWISE_NOT 321
#define LOGICAL_NOT 322
#define ELLIPSIS 323
#define MODULO 324
#define ASGN 325
#define ENUMERATION_CONST 326
#define ADD_ASGN 327
#define SUB_ASGN 328
#define MULT_ASGN 329
#define DIV_ASGN 330
#define MOD_ASGN 331
#define LSHIFT_ASGN 332
#define RSHIFT_ASGN 333
#define AND_ASGN 334
#define OR_ASGN 335
#define XOR_ASGN 336

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

#line 228 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
