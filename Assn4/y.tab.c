/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "asgn4_19CS10069_19CS30007.y"

    #include<stdio.h>
    extern int yylex();
    void yyerror(char*);

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 313 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   848

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  341

#define YYUNDEFTOK  2
#define YYMAXUTOK   343


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      90,    89,     2,     2,    96,     2,    93,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    98,   100,
       2,    99,     2,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,     2,    95,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    41,    41,    43,    45,    47,    52,    53,    54,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    79,    81,
      86,    87,    91,    93,    95,    97,    99,   101,   107,   109,
     111,   113,   115,   117,   122,   124,   129,   131,   133,   135,
     141,   143,   145,   150,   152,   154,   159,   161,   163,   165,
     167,   172,   174,   176,   181,   183,   188,   190,   195,   197,
     202,   204,   209,   211,   216,   218,   223,   225,   231,   233,
     235,   237,   239,   241,   243,   245,   247,   249,   251,   256,
     258,   263,   268,   273,   274,   278,   280,   282,   284,   289,
     290,   294,   296,   301,   303,   308,   310,   312,   314,   319,
     321,   323,   325,   327,   329,   331,   333,   335,   337,   339,
     341,   343,   348,   350,   355,   356,   360,   362,   364,   369,
     370,   374,   376,   382,   381,   389,   391,   393,   398,   403,
     408,   409,   413,   415,   417,   419,   421,   423,   425,   427,
     432,   433,   437,   438,   442,   443,   447,   449,   454,   456,
     461,   463,   468,   470,   475,   477,   482,   484,   489,   494,
     496,   498,   503,   505,   510,   511,   515,   520,   522,   527,
     529,   534,   536,   538,   540,   542,   544,   549,   551,   553,
     558,   563,   565,   570,   571,   575,   577,   582,   587,   589,
     591,   596,   598,   600,   602,   607,   608,   612,   614,   616,
     618,   623,   625,   630,   632,   637,   642,   643,   647,   649
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "RETURN", "CASE", "FOR",
  "WHILE", "GOTO", "SIZEOF", "CONTINUE", "IF", "DO", "SWITCH", "ELSE",
  "FLOAT", "SHORT", "CHAR", "_BOOL", "_IMAGINARY", "_COMPLEX", "INT",
  "DOUBLE", "LONG", "VOID", "SIGNED", "AUTO", "UNSIGNED", "ENUM", "UNION",
  "STRUCT", "TYPEDEF", "CONST", "DEFAULT", "STATIC", "REGISTER",
  "RESTRICT", "VOLATILE", "EXTERN", "INLINE", "BEGIN_SINGLE_COMMENT",
  "END_SINGLE_COMMENT", "SINGLE_COMMENT", "BEGIN_MULTI_COMMENT",
  "END_MULTI_COMMENT", "MULTI_COMMENT", "WHITE_SPACE", "IDENTIFIER",
  "INTEGER_CONST", "CHAR_CONST", "FLOAT_CONST", "DOUBLE_CONST",
  "STRING_LITERAL", "PLUS", "MINUS", "MULT", "DIVIDE", "ARROW",
  "INCREMENT", "DECREMENT", "RSHIFT", "LSHIFT", "LT", "GT", "LEQ", "GEQ",
  "EQ", "NEQ", "BITWISE_OR", "LOGICAL_OR", "BITWISE_AND", "LOGICAL_AND",
  "XOR", "BITWISE_NOT", "LOGICAL_NOT", "ELLIPSIS", "MODULO", "ASGN",
  "ENUMERATION_CONST", "ADD_ASGN", "SUB_ASGN", "MULT_ASGN", "DIV_ASGN",
  "MOD_ASGN", "LSHIFT_ASGN", "RSHIFT_ASGN", "AND_ASGN", "OR_ASGN",
  "XOR_ASGN", "')'", "'('", "'['", "']'", "'.'", "'{'", "'}'", "','",
  "'?'", "':'", "'='", "';'", "$accept", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "$@1", "type_qualifier",
  "function_specifier", "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item_list_opt", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression_opt", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    41,
      40,    91,    93,    46,   123,   125,    44,    63,    58,    61,
      59
};
# endif

#define YYPACT_NINF (-213)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     809,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,   -13,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,   -45,   809,   809,  -213,   809,   809,   751,
    -213,  -213,   -57,   -48,    98,   -88,    -7,  -213,   665,   -34,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   -17,  -213,
      15,    98,  -213,    15,   314,  -213,   -45,    42,   809,  -213,
      15,   -68,  -213,   111,  -213,  -213,  -213,  -213,    26,    10,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   549,   549,
    -213,  -213,  -213,   520,   -46,  -213,  -213,   -42,   117,   577,
    -213,   -35,   164,   160,   149,   162,    88,    77,    85,    93,
     -26,  -213,  -213,  -213,   255,  -213,  -213,    91,   776,   108,
      97,  -213,    -4,   520,  -213,   520,  -213,  -213,  -213,   -10,
     716,  -213,   716,   104,   577,   139,   135,   314,  -213,   -55,
    -213,   148,  -213,  -213,   577,   577,   187,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   577,  -213,
    -213,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     109,   577,   577,   146,   152,   200,   150,   158,   327,   161,
     154,   155,   159,  -213,  -213,  -213,  -213,   255,   189,  -213,
    -213,  -213,  -213,   156,  -213,  -213,  -213,   -23,   165,   168,
     190,  -213,   199,    98,   605,   125,   208,  -213,  -213,   207,
     209,  -213,   577,  -213,  -213,  -213,   380,  -213,   205,  -213,
    -213,    55,  -213,  -213,  -213,  -213,   203,   211,  -213,    51,
    -213,  -213,  -213,  -213,  -213,   -35,   -35,   164,   164,   160,
     160,   160,   160,   149,   149,   162,    88,    77,    85,    93,
      -6,  -213,   201,   213,   460,   577,   206,  -213,   577,   305,
     577,   327,   327,  -213,  -213,  -213,  -213,  -213,  -213,   690,
     268,   577,   224,  -213,   225,   577,   577,   226,   226,  -213,
     -46,  -213,  -213,  -213,   314,   577,  -213,  -213,   577,  -213,
     327,   577,   218,    -8,  -213,     6,   229,     9,  -213,  -213,
    -213,  -213,  -213,   230,  -213,  -213,   232,  -213,   143,  -213,
    -213,  -213,  -213,   221,   577,   327,   327,   577,   327,  -213,
    -213,  -213,    79,   577,   227,  -213,   312,    43,  -213,  -213,
     252,   577,   327,   242,   327,   254,  -213,  -213,  -213,   327,
    -213
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   104,   101,   100,   108,   110,   109,   102,   105,   103,
      99,   106,    97,   107,   120,   125,    96,    98,   126,   127,
      95,   128,   204,   131,    90,    90,   111,    90,    90,     0,
     201,   203,   118,     0,   141,     0,    83,    91,    93,     0,
     130,    89,    85,    86,    87,    88,     1,   202,     0,   148,
     146,   140,    82,   131,     0,   208,   131,     0,   206,   132,
     131,   129,   123,     0,   121,   147,   149,    92,    93,     0,
       2,     6,     8,     7,     4,    30,    31,    29,     0,     0,
      28,    32,    33,     0,   165,     9,     3,    22,    34,     0,
      36,    40,    43,    46,    51,    54,    56,    58,    60,    62,
      64,    66,   159,    94,   184,   205,   209,     0,   145,   141,
       0,   116,     0,     0,    26,     0,    23,    24,    79,     0,
     115,   158,   115,     0,     0,     0,     0,     0,   164,     0,
     167,     0,    14,    15,    21,     0,     0,    72,    73,    69,
      70,    71,    74,    75,    76,    78,    77,    68,     0,    34,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   196,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     2,   195,   185,   186,   171,   172,   183,     0,   181,
     173,   174,   175,     0,   176,   133,   156,   131,     0,     0,
     150,   152,   144,   141,   143,   140,     0,   117,   122,     0,
       0,     5,     0,   114,   112,   113,     0,    81,     0,   170,
     160,   165,   162,   166,   168,    13,    20,     0,    18,     0,
      12,    67,    37,    38,    39,    41,    42,    45,    44,    47,
      48,    49,    50,    52,    53,    55,    57,    59,    61,    63,
       0,   199,     0,     0,   196,     0,     0,   198,     0,     0,
       0,   196,   196,   182,   180,   187,   154,   139,   138,     0,
       0,     0,    29,   142,     0,     0,     0,    27,     0,    80,
     165,    35,   169,   161,     0,     0,    11,    10,     0,   200,
     196,   196,     0,     0,   197,     0,     0,     0,   179,   177,
     151,   153,   157,     0,   137,   134,     0,   124,     0,   163,
      19,    65,   178,     0,   196,   196,   196,     0,   196,   135,
     136,    16,   165,   196,     0,   191,   188,     0,   190,    17,
       0,   196,   196,     0,   196,     0,   189,   192,   194,   196,
     193
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,  -213,  -213,  -213,   -39,  -213,   -75,    86,
      87,    66,    83,   180,   181,   182,   183,   179,  -213,  -120,
     -52,  -213,   -82,  -169,   -32,  -213,     0,   157,  -213,   298,
    -213,    68,   -11,   231,  -213,  -213,  -213,   240,  -213,   -16,
    -213,   -18,  -213,  -213,  -102,  -213,  -213,   304,   247,  -213,
    -213,    89,  -213,    54,  -119,    90,  -212,  -213,  -213,   228,
    -124,  -213,   302,  -213,  -213,   178,  -213,  -213,  -213,  -160,
    -213,  -213,   342,  -213,  -213,  -213
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    85,    86,    87,   226,   227,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     118,   148,   182,   218,    22,    35,    56,    42,    36,    37,
      24,    25,   121,   214,    26,    33,    63,    64,   110,    27,
      28,    68,    39,    61,    50,   274,   198,    40,    51,   199,
     200,   201,   202,   123,   103,   126,   127,   128,   129,   130,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    29,    30,    31,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   119,   102,   253,   217,    38,    55,   204,   222,   284,
      34,   252,    52,    59,   150,   131,   132,   133,    49,    69,
     151,   152,   108,   109,    41,    41,   106,    41,    41,    23,
     114,   119,    34,   119,    32,    66,   124,  -119,   125,   116,
     117,   153,   107,   168,   223,   124,    48,   125,   134,   135,
     149,   136,   217,   229,   259,   -84,    60,    70,    71,    72,
      73,    62,    74,    75,    76,    77,  -155,   122,    78,    79,
      34,   169,   183,  -155,    62,   102,   232,   233,   234,   211,
      80,   315,   228,    81,    82,   149,   212,   250,   212,    53,
     212,   207,   288,    49,   292,   316,   231,   122,   318,   122,
     113,   271,   212,    54,   122,   212,   122,   307,   197,   213,
     284,   213,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
      15,   313,   333,   149,    18,    19,   104,   298,   299,   212,
      15,   281,   203,   287,    18,    19,   124,   212,   125,   165,
     283,   120,   273,   166,   324,   183,   217,    15,   164,   275,
     279,    18,    19,   330,   167,   309,   312,   209,   311,   210,
     124,   335,   125,   293,   329,   206,   295,   149,   297,   266,
     195,   120,    43,   120,    44,    45,   219,    49,   120,    66,
     120,   325,   326,   216,   328,   225,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   111,   112,   336,   251,
     338,   158,   159,   160,   161,   340,   147,   154,   155,   303,
     156,   157,   291,   306,   239,   240,   241,   242,   162,   163,
     220,   221,   102,   310,   230,   327,   254,   149,   321,   322,
     235,   236,   255,   237,   238,   243,   244,   256,   258,   149,
     257,   260,   261,   262,   267,   212,   265,   268,   170,   171,
     172,   173,   174,   175,    69,   176,   177,   178,   179,   197,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   264,   276,   269,    15,   180,    16,
      17,    18,    19,    20,    21,   270,   277,   282,   278,   285,
     286,   289,   181,    71,    72,    73,   294,    74,    75,    76,
      77,   290,   296,    78,    79,   302,   304,   305,   314,   317,
     280,   323,   319,    69,   320,    80,   332,   331,    81,    82,
     170,   171,   172,   173,   174,   175,    69,   176,   177,   178,
     179,   334,   337,   339,   245,    83,   246,   249,   247,   104,
     248,    67,   208,   215,    65,  -196,   205,   224,   301,   105,
     180,    70,    71,    72,    73,   263,    74,    75,    76,    77,
     308,    47,    78,    79,   181,    71,    72,    73,     0,    74,
      75,    76,    77,     0,    80,    78,    79,    81,    82,    69,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,    82,     0,     0,    83,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,   104,     0,     0,     0,     0,     0,    70,    71,    72,
      73,     0,    74,    75,    76,    77,     0,     0,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      83,     0,     0,     0,   280,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,     0,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,     0,    74,    75,    76,    77,     0,     0,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      80,     0,     0,    81,    82,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    13,    14,     0,
      83,     0,    15,     0,     0,     0,    18,    19,    69,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,     0,    74,    75,    76,    77,     0,     0,    78,    79,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
      80,     0,     0,    81,    82,     0,    70,    71,    72,    73,
       0,    74,    75,    76,    77,     0,     0,    78,    79,     0,
      83,     0,     0,     0,    69,     0,     0,     0,     0,    80,
       0,     0,    81,    82,    70,    71,    72,    73,     0,    74,
      75,    76,    77,     0,     0,    78,    79,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,    82,    70,    71,    72,    73,     0,    74,    75,    76,
     272,     0,     0,    78,    79,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,    82,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     0,    83,     0,    15,     0,    16,
      17,    18,    19,    20,    21,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,     0,    16,    17,    18,    19,    20,    21,
       0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    54,    13,    14,     0,     0,     0,    15,     0,
       0,    46,    18,    19,     0,     0,     0,     0,     0,  -207,
       0,     0,     0,     0,     0,   300,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    15,     0,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,   196,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,     0,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    83,    54,   172,   124,    23,    38,   109,   127,   221,
      55,   171,   100,    47,    89,    57,    58,    59,    34,     9,
      55,    56,    90,    91,    24,    25,    58,    27,    28,    29,
      69,   113,    55,   115,    47,    51,    91,    94,    93,    78,
      79,    76,    60,    69,    99,    91,    94,    93,    90,    91,
      89,    93,   172,   135,   178,   100,    90,    47,    48,    49,
      50,    78,    52,    53,    54,    55,    89,    83,    58,    59,
      55,    97,   104,    96,    78,   127,   151,   152,   153,    89,
      70,    89,   134,    73,    74,   124,    96,   169,    96,    96,
      96,    95,    98,   109,   254,    89,   148,   113,    89,   115,
      90,   203,    96,    77,   120,    96,   122,   276,   108,   120,
     322,   122,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
      32,   291,    89,   172,    36,    37,    94,   261,   262,    96,
      32,   216,    34,    92,    36,    37,    91,    96,    93,    72,
      95,    83,   204,    68,   314,   187,   276,    32,    70,    34,
     212,    36,    37,   323,    71,   284,   290,   113,   288,   115,
      91,   331,    93,   255,    95,    78,   258,   216,   260,   197,
      89,   113,    25,   115,    27,    28,    47,   203,   120,   205,
     122,   315,   316,    89,   318,    47,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    95,    96,   332,   100,
     334,    62,    63,    64,    65,   339,    99,    53,    54,   271,
      60,    61,   254,   275,   158,   159,   160,   161,    66,    67,
      95,    96,   284,   285,    47,   317,    90,   276,    95,    96,
     154,   155,    90,   156,   157,   162,   163,    47,    90,   288,
     100,    90,    98,    98,    89,    96,   100,    89,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   269,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    95,    77,    96,    32,    33,    34,
      35,    36,    37,    38,    39,    96,    89,    92,    89,    96,
      89,   100,    47,    48,    49,    50,   100,    52,    53,    54,
      55,    98,     7,    58,    59,    47,    92,    92,   100,    90,
      94,   100,    92,     9,    92,    70,    14,   100,    73,    74,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    89,   100,    89,   164,    90,   165,   168,   166,    94,
     167,    53,   112,   122,    50,   100,   109,   129,   269,    57,
      33,    47,    48,    49,    50,   187,    52,    53,    54,    55,
     280,    29,    58,    59,    47,    48,    49,    50,    -1,    52,
      53,    54,    55,    -1,    70,    58,    59,    73,    74,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    -1,    -1,    90,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      90,    -1,    -1,    -1,    94,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      70,    -1,    -1,    73,    74,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      90,    -1,    32,    -1,    -1,    -1,    36,    37,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      70,    -1,    -1,    73,    74,    -1,    47,    48,    49,    50,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    59,    -1,
      90,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    74,    47,    48,    49,    50,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    59,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    47,    48,    49,    50,    -1,    52,    53,    54,
      55,    -1,    -1,    58,    59,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    90,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    77,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,     0,    36,    37,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    75,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    32,    34,    35,    36,    37,
      38,    39,   125,   127,   131,   132,   135,   140,   141,   172,
     173,   174,    47,   136,    55,   126,   129,   130,   142,   143,
     148,   127,   128,   128,   128,   128,     0,   173,    94,   140,
     145,   149,   100,    96,    77,   125,   127,   175,   176,    47,
      90,   144,    78,   137,   138,   148,   140,   130,   142,     9,
      47,    48,    49,    50,    52,    53,    54,    55,    58,    59,
      70,    73,    74,    90,    94,   102,   103,   104,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   155,    94,   163,   125,   142,    90,    91,
     139,    95,    96,    90,   107,    90,   107,   107,   121,   123,
     132,   133,   140,   154,    91,    93,   156,   157,   158,   159,
     160,    57,    58,    59,    90,    91,    93,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    99,   122,   107,
     109,    55,    56,    76,    53,    54,    60,    61,    62,    63,
      64,    65,    66,    67,    70,    72,    68,    71,    69,    97,
       3,     4,     5,     6,     7,     8,    10,    11,    12,    13,
      33,    47,   123,   125,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,    89,    47,   127,   147,   150,
     151,   152,   153,    34,   145,   149,    78,    95,   138,   154,
     154,    89,    96,   133,   134,   134,    89,   120,   124,    47,
      95,    96,   155,    99,   160,    47,   105,   106,   121,   123,
      47,   121,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   113,   113,   114,   115,   116,   117,   118,
     123,   100,   170,   124,    90,    90,    47,   100,    90,   161,
      90,    98,    98,   166,    95,   100,   142,    89,    89,    96,
      96,   145,    55,   121,   146,    34,    77,    89,    89,   121,
      94,   109,    92,    95,   157,    96,    89,    92,    98,   100,
      98,   125,   170,   123,   100,   123,     7,   123,   161,   161,
      75,   152,    47,   121,    92,    92,   121,   124,   156,   155,
     121,   120,   161,   170,   100,    89,    89,    90,    89,    92,
      92,    95,    96,   100,   170,   161,   161,   123,   161,    95,
     170,   100,    14,    89,    89,   170,   161,   100,   161,    89,
     161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   102,   102,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   110,   110,
     111,   111,   111,   112,   112,   112,   113,   113,   113,   113,
     113,   114,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   123,
     123,   124,   125,   126,   126,   127,   127,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   135,   136,
     136,   137,   137,   139,   138,   140,   140,   140,   141,   142,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   155,
     155,   155,   156,   156,   157,   157,   158,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   161,   162,   162,   162,
     163,   164,   164,   165,   165,   166,   166,   167,   168,   168,
     168,   169,   169,   169,   169,   170,   170,   171,   171,   171,
     171,   172,   172,   173,   173,   174,   175,   175,   176,   176
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     0,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     0,     2,     2,     2,     2,     1,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     0,     5,     6,     2,     1,
       0,     1,     3,     0,     5,     1,     1,     1,     1,     2,
       1,     0,     1,     3,     5,     6,     6,     5,     4,     4,
       1,     0,     1,     0,     1,     0,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     2,     4,     1,     0,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     1,     2,     1,     0,     1,     1,     2,     5,     7,
       5,     5,     7,     9,     8,     1,     0,     3,     2,     2,
       3,     1,     2,     1,     1,     4,     1,     0,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 42 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> identifier\n"); }
#line 1878 "y.tab.c"
    break;

  case 3:
#line 44 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> constant\n"); }
#line 1884 "y.tab.c"
    break;

  case 4:
#line 46 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> string-literal\n"); }
#line 1890 "y.tab.c"
    break;

  case 5:
#line 48 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> ( expression )\n"); }
#line 1896 "y.tab.c"
    break;

  case 9:
#line 59 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> primary_expression\n"); }
#line 1902 "y.tab.c"
    break;

  case 10:
#line 61 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression [ expression ]\n"); }
#line 1908 "y.tab.c"
    break;

  case 11:
#line 63 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
#line 1914 "y.tab.c"
    break;

  case 12:
#line 65 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression . identifier\n"); }
#line 1920 "y.tab.c"
    break;

  case 13:
#line 67 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression -> identifier\n"); }
#line 1926 "y.tab.c"
    break;

  case 14:
#line 69 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression ++\n"); }
#line 1932 "y.tab.c"
    break;

  case 15:
#line 71 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression --\n"); }
#line 1938 "y.tab.c"
    break;

  case 16:
#line 73 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }
#line 1944 "y.tab.c"
    break;

  case 17:
#line 75 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
#line 1950 "y.tab.c"
    break;

  case 18:
#line 80 "asgn4_19CS10069_19CS30007.y"
                            { printf("argument_expression_list -> assignment_expression\n"); }
#line 1956 "y.tab.c"
    break;

  case 19:
#line 82 "asgn4_19CS10069_19CS30007.y"
                            { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
#line 1962 "y.tab.c"
    break;

  case 22:
#line 92 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> postfix_expression\n"); }
#line 1968 "y.tab.c"
    break;

  case 23:
#line 94 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> ++ unary_expression\n"); }
#line 1974 "y.tab.c"
    break;

  case 24:
#line 96 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> −− unary_expression\n"); }
#line 1980 "y.tab.c"
    break;

  case 25:
#line 98 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> unary_operator cast_expression\n"); }
#line 1986 "y.tab.c"
    break;

  case 26:
#line 100 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> sizeof unary_expression\n"); }
#line 1992 "y.tab.c"
    break;

  case 27:
#line 102 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> sizeof ( type_name ) \n"); }
#line 1998 "y.tab.c"
    break;

  case 28:
#line 108 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> &\n"); }
#line 2004 "y.tab.c"
    break;

  case 29:
#line 110 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> *\n"); }
#line 2010 "y.tab.c"
    break;

  case 30:
#line 112 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> +\n"); }
#line 2016 "y.tab.c"
    break;

  case 31:
#line 114 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> -\n"); }
#line 2022 "y.tab.c"
    break;

  case 32:
#line 116 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> ~\n"); }
#line 2028 "y.tab.c"
    break;

  case 33:
#line 118 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> !\n"); }
#line 2034 "y.tab.c"
    break;

  case 34:
#line 123 "asgn4_19CS10069_19CS30007.y"
                    { printf("cast_expression -> unary_expression\n"); }
#line 2040 "y.tab.c"
    break;

  case 35:
#line 125 "asgn4_19CS10069_19CS30007.y"
                    { printf("cast_expression -> ( type_name ) cast_expression\n"); }
#line 2046 "y.tab.c"
    break;

  case 36:
#line 130 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> cast_expression\n"); }
#line 2052 "y.tab.c"
    break;

  case 37:
#line 132 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
#line 2058 "y.tab.c"
    break;

  case 38:
#line 134 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
#line 2064 "y.tab.c"
    break;

  case 39:
#line 136 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression modulo cast_expression\n"); }
#line 2070 "y.tab.c"
    break;

  case 40:
#line 142 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> multiplicative_expression\n"); }
#line 2076 "y.tab.c"
    break;

  case 41:
#line 144 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
#line 2082 "y.tab.c"
    break;

  case 42:
#line 146 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> additive_expression − multiplicative_expression\n"); }
#line 2088 "y.tab.c"
    break;

  case 43:
#line 151 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> additive_expression\n"); }
#line 2094 "y.tab.c"
    break;

  case 44:
#line 153 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> shift_expression << additive_expression\n"); }
#line 2100 "y.tab.c"
    break;

  case 45:
#line 155 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> shift_expression >> additive_expression\n"); }
#line 2106 "y.tab.c"
    break;

  case 46:
#line 160 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> shift_expression\n"); }
#line 2112 "y.tab.c"
    break;

  case 47:
#line 162 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression < shift_expression\n"); }
#line 2118 "y.tab.c"
    break;

  case 48:
#line 164 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression > shift_expression\n"); }
#line 2124 "y.tab.c"
    break;

  case 49:
#line 166 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression <= shift_expression\n"); }
#line 2130 "y.tab.c"
    break;

  case 50:
#line 168 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression >= shift_expression\n"); }
#line 2136 "y.tab.c"
    break;

  case 51:
#line 173 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> relational_expression\n"); }
#line 2142 "y.tab.c"
    break;

  case 52:
#line 175 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> equality_expression == relational_expression\n"); }
#line 2148 "y.tab.c"
    break;

  case 53:
#line 177 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> equality_expression ! = relational_expression\n"); }
#line 2154 "y.tab.c"
    break;

  case 54:
#line 182 "asgn4_19CS10069_19CS30007.y"
                    { printf("AND_expression -> equality_expression\n"); }
#line 2160 "y.tab.c"
    break;

  case 55:
#line 184 "asgn4_19CS10069_19CS30007.y"
                    { printf("AND_expression -> AND_expression & equality_expression\n");}
#line 2166 "y.tab.c"
    break;

  case 56:
#line 189 "asgn4_19CS10069_19CS30007.y"
                            { printf("exclusive_OR_expression -> AND_expression\n"); }
#line 2172 "y.tab.c"
    break;

  case 57:
#line 191 "asgn4_19CS10069_19CS30007.y"
                            { printf("exclusive_OR_expression -> exclusive_OR_expression ˆ AND_expression\n"); }
#line 2178 "y.tab.c"
    break;

  case 58:
#line 196 "asgn4_19CS10069_19CS30007.y"
                            { printf("inclusive_OR_expression -> exclusive_OR_expression\n"); }
#line 2184 "y.tab.c"
    break;

  case 59:
#line 198 "asgn4_19CS10069_19CS30007.y"
                            { printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
#line 2190 "y.tab.c"
    break;

  case 60:
#line 203 "asgn4_19CS10069_19CS30007.y"
                            { printf("logical_AND_expression -> inclusive_OR_expression\n"); }
#line 2196 "y.tab.c"
    break;

  case 61:
#line 205 "asgn4_19CS10069_19CS30007.y"
                            { printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
#line 2202 "y.tab.c"
    break;

  case 62:
#line 210 "asgn4_19CS10069_19CS30007.y"
                        { printf("logical_OR_expression -> logical_AND_expression\n"); }
#line 2208 "y.tab.c"
    break;

  case 63:
#line 212 "asgn4_19CS10069_19CS30007.y"
                        { printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
#line 2214 "y.tab.c"
    break;

  case 64:
#line 217 "asgn4_19CS10069_19CS30007.y"
                        { printf("conditional_expression -> logical_OR_expression\n"); }
#line 2220 "y.tab.c"
    break;

  case 65:
#line 219 "asgn4_19CS10069_19CS30007.y"
                        { printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
#line 2226 "y.tab.c"
    break;

  case 66:
#line 224 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_expression -> conditional_expression\n"); }
#line 2232 "y.tab.c"
    break;

  case 67:
#line 226 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
#line 2238 "y.tab.c"
    break;

  case 68:
#line 232 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> =\n"); }
#line 2244 "y.tab.c"
    break;

  case 69:
#line 234 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> *=\n"); }
#line 2250 "y.tab.c"
    break;

  case 70:
#line 236 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> /=\n"); }
#line 2256 "y.tab.c"
    break;

  case 71:
#line 238 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> %%=\n"); }
#line 2262 "y.tab.c"
    break;

  case 72:
#line 240 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> +=\n"); }
#line 2268 "y.tab.c"
    break;

  case 73:
#line 242 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> -=\n"); }
#line 2274 "y.tab.c"
    break;

  case 74:
#line 244 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> <<=\n"); }
#line 2280 "y.tab.c"
    break;

  case 75:
#line 246 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> >>=\n"); }
#line 2286 "y.tab.c"
    break;

  case 76:
#line 248 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> &=\n"); }
#line 2292 "y.tab.c"
    break;

  case 77:
#line 250 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> ^=\n"); }
#line 2298 "y.tab.c"
    break;

  case 78:
#line 252 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> |=\n"); }
#line 2304 "y.tab.c"
    break;

  case 79:
#line 257 "asgn4_19CS10069_19CS30007.y"
                { printf("expression -> assignment_expression\n"); }
#line 2310 "y.tab.c"
    break;

  case 80:
#line 259 "asgn4_19CS10069_19CS30007.y"
                { printf("expression -> expression , assignment_expression\n"); }
#line 2316 "y.tab.c"
    break;

  case 81:
#line 264 "asgn4_19CS10069_19CS30007.y"
                        { printf("constant_expression -> conditional_expression\n"); }
#line 2322 "y.tab.c"
    break;

  case 82:
#line 269 "asgn4_19CS10069_19CS30007.y"
                { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
#line 2328 "y.tab.c"
    break;

  case 85:
#line 279 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
#line 2334 "y.tab.c"
    break;

  case 86:
#line 281 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
#line 2340 "y.tab.c"
    break;

  case 87:
#line 283 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
#line 2346 "y.tab.c"
    break;

  case 88:
#line 285 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
#line 2352 "y.tab.c"
    break;

  case 91:
#line 295 "asgn4_19CS10069_19CS30007.y"
                        { printf("init_declarator_list -> init_declarator\n"); }
#line 2358 "y.tab.c"
    break;

  case 92:
#line 297 "asgn4_19CS10069_19CS30007.y"
                        { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
#line 2364 "y.tab.c"
    break;

  case 93:
#line 302 "asgn4_19CS10069_19CS30007.y"
                    { printf("init_declarator -> declarator\n"); }
#line 2370 "y.tab.c"
    break;

  case 94:
#line 304 "asgn4_19CS10069_19CS30007.y"
                    { printf("init_declarator -> declarator = initializer\n"); }
#line 2376 "y.tab.c"
    break;

  case 95:
#line 309 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> extern\n"); }
#line 2382 "y.tab.c"
    break;

  case 96:
#line 311 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> static\n"); }
#line 2388 "y.tab.c"
    break;

  case 97:
#line 313 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> auto\n"); }
#line 2394 "y.tab.c"
    break;

  case 98:
#line 315 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> register\n"); }
#line 2400 "y.tab.c"
    break;

  case 99:
#line 320 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> void\n"); }
#line 2406 "y.tab.c"
    break;

  case 100:
#line 322 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> char\n"); }
#line 2412 "y.tab.c"
    break;

  case 101:
#line 324 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> short\n"); }
#line 2418 "y.tab.c"
    break;

  case 102:
#line 326 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> int\n"); }
#line 2424 "y.tab.c"
    break;

  case 103:
#line 328 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> long\n"); }
#line 2430 "y.tab.c"
    break;

  case 104:
#line 330 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> float\n"); }
#line 2436 "y.tab.c"
    break;

  case 105:
#line 332 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> double\n"); }
#line 2442 "y.tab.c"
    break;

  case 106:
#line 334 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> signed\n"); }
#line 2448 "y.tab.c"
    break;

  case 107:
#line 336 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> unsigned\n"); }
#line 2454 "y.tab.c"
    break;

  case 108:
#line 338 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _bool\n"); }
#line 2460 "y.tab.c"
    break;

  case 109:
#line 340 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _complex\n"); }
#line 2466 "y.tab.c"
    break;

  case 110:
#line 342 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _imaginary\n"); }
#line 2472 "y.tab.c"
    break;

  case 111:
#line 344 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> enum_specifier\n");}
#line 2478 "y.tab.c"
    break;

  case 112:
#line 349 "asgn4_19CS10069_19CS30007.y"
                            { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
#line 2484 "y.tab.c"
    break;

  case 113:
#line 351 "asgn4_19CS10069_19CS30007.y"
                            { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
#line 2490 "y.tab.c"
    break;

  case 116:
#line 361 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }
#line 2496 "y.tab.c"
    break;

  case 117:
#line 363 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); }
#line 2502 "y.tab.c"
    break;

  case 118:
#line 365 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier\n"); }
#line 2508 "y.tab.c"
    break;

  case 121:
#line 375 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator_list -> enumerator\n");}
#line 2514 "y.tab.c"
    break;

  case 122:
#line 377 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator_list -> enumerator_list, enumerator\n");}
#line 2520 "y.tab.c"
    break;

  case 123:
#line 382 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator -> enumerator_constant\n");}
#line 2526 "y.tab.c"
    break;

  case 124:
#line 384 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator -> enumerator_constant = constant_expression\n");}
#line 2532 "y.tab.c"
    break;

  case 125:
#line 390 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> const\n"); }
#line 2538 "y.tab.c"
    break;

  case 126:
#line 392 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> restrict\n"); }
#line 2544 "y.tab.c"
    break;

  case 127:
#line 394 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> volatile\n"); }
#line 2550 "y.tab.c"
    break;

  case 128:
#line 399 "asgn4_19CS10069_19CS30007.y"
                    { printf("function_specifier -> inline\n"); }
#line 2556 "y.tab.c"
    break;

  case 129:
#line 404 "asgn4_19CS10069_19CS30007.y"
                { printf("declarator -> pointer_opt direct_declarator\n"); }
#line 2562 "y.tab.c"
    break;

  case 132:
#line 414 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> identifier\n"); }
#line 2568 "y.tab.c"
    break;

  case 133:
#line 416 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> ( declarator )\n"); }
#line 2574 "y.tab.c"
    break;

  case 134:
#line 418 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
#line 2580 "y.tab.c"
    break;

  case 135:
#line 420 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }
#line 2586 "y.tab.c"
    break;

  case 136:
#line 422 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expression ]\n"); }
#line 2592 "y.tab.c"
    break;

  case 137:
#line 424 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
#line 2598 "y.tab.c"
    break;

  case 138:
#line 426 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
#line 2604 "y.tab.c"
    break;

  case 139:
#line 428 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
#line 2610 "y.tab.c"
    break;

  case 146:
#line 448 "asgn4_19CS10069_19CS30007.y"
            { printf("pointer -> * type_qualifier_list_opt\n"); }
#line 2616 "y.tab.c"
    break;

  case 147:
#line 450 "asgn4_19CS10069_19CS30007.y"
            { printf("pointer -> * type_qualifier_list_opt pointer\n"); }
#line 2622 "y.tab.c"
    break;

  case 148:
#line 455 "asgn4_19CS10069_19CS30007.y"
                        { printf("type_qualifier_list -> type_qualifier\n"); }
#line 2628 "y.tab.c"
    break;

  case 149:
#line 457 "asgn4_19CS10069_19CS30007.y"
                        { printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
#line 2634 "y.tab.c"
    break;

  case 150:
#line 462 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_type_list -> parameter_list\n"); }
#line 2640 "y.tab.c"
    break;

  case 151:
#line 464 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_type_list -> parameter_list , ...\n"); }
#line 2646 "y.tab.c"
    break;

  case 152:
#line 469 "asgn4_19CS10069_19CS30007.y"
                    { printf("parameter_list -> parameter_declaration\n"); }
#line 2652 "y.tab.c"
    break;

  case 153:
#line 471 "asgn4_19CS10069_19CS30007.y"
                    { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
#line 2658 "y.tab.c"
    break;

  case 154:
#line 476 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_declaration -> declaration_specifiers declarator\n"); }
#line 2664 "y.tab.c"
    break;

  case 155:
#line 478 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_declaration -> declaration_specifiers\n"); }
#line 2670 "y.tab.c"
    break;

  case 156:
#line 483 "asgn4_19CS10069_19CS30007.y"
                    { printf("identifier_list -> identifier\n"); }
#line 2676 "y.tab.c"
    break;

  case 157:
#line 485 "asgn4_19CS10069_19CS30007.y"
                    { printf("identifier_list -> identifier_list , identifier\n"); }
#line 2682 "y.tab.c"
    break;

  case 158:
#line 490 "asgn4_19CS10069_19CS30007.y"
            { printf("type_name -> specifier_qualifier_list\n"); }
#line 2688 "y.tab.c"
    break;

  case 159:
#line 495 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> assignment_expression\n"); }
#line 2694 "y.tab.c"
    break;

  case 160:
#line 497 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> { initializer_list }\n"); }
#line 2700 "y.tab.c"
    break;

  case 161:
#line 499 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> { initializer_list , }\n"); }
#line 2706 "y.tab.c"
    break;

  case 162:
#line 504 "asgn4_19CS10069_19CS30007.y"
                    { printf("initializer_list -> designation_opt initializer\n"); }
#line 2712 "y.tab.c"
    break;

  case 163:
#line 506 "asgn4_19CS10069_19CS30007.y"
                    { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
#line 2718 "y.tab.c"
    break;

  case 166:
#line 516 "asgn4_19CS10069_19CS30007.y"
                { printf("designation -> designator_list =\n"); }
#line 2724 "y.tab.c"
    break;

  case 167:
#line 521 "asgn4_19CS10069_19CS30007.y"
                    { printf("designator_list -> designator\n"); }
#line 2730 "y.tab.c"
    break;

  case 168:
#line 523 "asgn4_19CS10069_19CS30007.y"
                    { printf("designator_list -> designator_list designator\n"); }
#line 2736 "y.tab.c"
    break;

  case 169:
#line 528 "asgn4_19CS10069_19CS30007.y"
                { printf("designator -> [ constant_expression ]\n"); }
#line 2742 "y.tab.c"
    break;

  case 170:
#line 530 "asgn4_19CS10069_19CS30007.y"
                { printf("designator -> . identifier\n"); }
#line 2748 "y.tab.c"
    break;

  case 171:
#line 535 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> labeled_statement\n"); }
#line 2754 "y.tab.c"
    break;

  case 172:
#line 537 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> compound_statement\n"); }
#line 2760 "y.tab.c"
    break;

  case 173:
#line 539 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> expression_statement\n"); }
#line 2766 "y.tab.c"
    break;

  case 174:
#line 541 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> selection_statement\n"); }
#line 2772 "y.tab.c"
    break;

  case 175:
#line 543 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> iteration_statement\n"); }
#line 2778 "y.tab.c"
    break;

  case 176:
#line 545 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> jump_statement\n"); }
#line 2784 "y.tab.c"
    break;

  case 177:
#line 550 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> identifier : statement\n"); }
#line 2790 "y.tab.c"
    break;

  case 178:
#line 552 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> case constant_expression : statement\n"); }
#line 2796 "y.tab.c"
    break;

  case 179:
#line 554 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> default : statement\n"); }
#line 2802 "y.tab.c"
    break;

  case 180:
#line 559 "asgn4_19CS10069_19CS30007.y"
                        { printf("compound_statement -> { block_item_list_opt }\n"); }
#line 2808 "y.tab.c"
    break;

  case 181:
#line 564 "asgn4_19CS10069_19CS30007.y"
                    { printf("block_item_list -> block_item\n"); }
#line 2814 "y.tab.c"
    break;

  case 182:
#line 566 "asgn4_19CS10069_19CS30007.y"
                    { printf("block_item_list -> block_item_list block_item\n"); }
#line 2820 "y.tab.c"
    break;

  case 185:
#line 576 "asgn4_19CS10069_19CS30007.y"
            { printf("block_item -> declaration\n"); }
#line 2826 "y.tab.c"
    break;

  case 186:
#line 578 "asgn4_19CS10069_19CS30007.y"
            { printf("block_item -> statement\n"); }
#line 2832 "y.tab.c"
    break;

  case 187:
#line 583 "asgn4_19CS10069_19CS30007.y"
                        { printf("expression_statement-> expression_opt ;\n"); }
#line 2838 "y.tab.c"
    break;

  case 188:
#line 588 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> if ( expression ) statement\n"); }
#line 2844 "y.tab.c"
    break;

  case 189:
#line 590 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> if ( expression ) statement else statement\n"); }
#line 2850 "y.tab.c"
    break;

  case 190:
#line 592 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> switch ( expression ) statement\n"); }
#line 2856 "y.tab.c"
    break;

  case 191:
#line 597 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> while ( expression ) statement\n"); }
#line 2862 "y.tab.c"
    break;

  case 192:
#line 599 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> do statement while ( expression ) ;\n"); }
#line 2868 "y.tab.c"
    break;

  case 193:
#line 601 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
#line 2874 "y.tab.c"
    break;

  case 194:
#line 603 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
#line 2880 "y.tab.c"
    break;

  case 197:
#line 613 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> goto identifier ;\n"); }
#line 2886 "y.tab.c"
    break;

  case 198:
#line 615 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> continue ;\n"); }
#line 2892 "y.tab.c"
    break;

  case 199:
#line 617 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> break ;\n"); }
#line 2898 "y.tab.c"
    break;

  case 200:
#line 619 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> return expression_opt ;\n"); }
#line 2904 "y.tab.c"
    break;

  case 201:
#line 624 "asgn4_19CS10069_19CS30007.y"
                    { printf("translation_unit -> external_declaration\n"); }
#line 2910 "y.tab.c"
    break;

  case 202:
#line 626 "asgn4_19CS10069_19CS30007.y"
                    { printf("translation_unit -> external_declaration\n"); }
#line 2916 "y.tab.c"
    break;

  case 203:
#line 631 "asgn4_19CS10069_19CS30007.y"
                        { printf("external_declaration -> function_definition\n"); }
#line 2922 "y.tab.c"
    break;

  case 204:
#line 633 "asgn4_19CS10069_19CS30007.y"
                        { printf("external_declaration -> declaration\n"); }
#line 2928 "y.tab.c"
    break;

  case 205:
#line 638 "asgn4_19CS10069_19CS30007.y"
                    { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
#line 2934 "y.tab.c"
    break;

  case 208:
#line 648 "asgn4_19CS10069_19CS30007.y"
                    { printf("declaration_list -> declaration\n"); }
#line 2940 "y.tab.c"
    break;

  case 209:
#line 650 "asgn4_19CS10069_19CS30007.y"
                    { printf("declaration_list -> declaration_list declaration\n"); }
#line 2946 "y.tab.c"
    break;


#line 2950 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 653 "asgn4_19CS10069_19CS30007.y"

/*Auxiliaries*/
void yyerror(char* s)
{
    printf("Found error %s\n", s);
}
