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

#line 299 "y.tab.c"

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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   985

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  224
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

#define YYUNDEFTOK  2
#define YYMAXUTOK   336


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
      83,    82,     2,     2,    89,     2,    86,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    92,
       2,     2,     2,    90,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,    88,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    41,    42,    46,    48,    50,    52,    58,
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
     341,   343,   345,   350,   352,   357,   358,   362,   363,   364,
     368,   369,   373,   374,   378,   379,   383,   384,   387,   388,
     389,   393,   395,   397,   402,   403,   407,   409,   415,   417,
     423,   425,   427,   432,   437,   442,   443,   447,   449,   451,
     453,   455,   457,   459,   461,   466,   467,   471,   472,   476,
     477,   481,   483,   488,   490,   495,   497,   502,   504,   509,
     511,   516,   518,   523,   528,   530,   532,   537,   539,   544,
     545,   549,   554,   556,   561,   563,   568,   570,   572,   574,
     576,   578,   583,   585,   587,   592,   597,   599,   604,   605,
     609,   611,   616,   621,   623,   625,   630,   632,   634,   636,
     641,   642,   646,   648,   650,   652,   657,   659,   664,   666,
     671,   676,   677,   681,   683
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
  "RESTRICT", "VOLATILE", "EXTERN", "INLINE", "IDENTIFIER",
  "INTEGER_CONST", "CHAR_CONST", "FLOAT_CONST", "DOUBLE_CONST",
  "STRING_LITERAL", "PLUS", "MINUS", "MULT", "DIVIDE", "ARROW",
  "INCREMENT", "DECREMENT", "RSHIFT", "LSHIFT", "LT", "GT", "LEQ", "GEQ",
  "EQ", "NEQ", "BITWISE_OR", "LOGICAL_OR", "BITWISE_AND", "LOGICAL_AND",
  "XOR", "BITWISE_NOT", "LOGICAL_NOT", "ELLIPSIS", "MODULO", "ASGN",
  "ENUMERATION_CONST", "ADD_ASGN", "SUB_ASGN", "MULT_ASGN", "DIV_ASGN",
  "MOD_ASGN", "LSHIFT_ASGN", "RSHIFT_ASGN", "AND_ASGN", "OR_ASGN",
  "XOR_ASGN", "')'", "'('", "'['", "']'", "'.'", "'{'", "'}'", "','",
  "'?'", "':'", "';'", "$accept", "constant", "primary_expression",
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
  "specifier_qualifier_list_opt", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "identifier_opt", "enumerator_list", "enumerator", "type_qualifier",
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
     335,   336,    41,    40,    91,    93,    46,   123,   125,    44,
      63,    58,    59
};
# endif

#define YYPACT_NINF (-237)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-223)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     946,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,    30,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,   -11,   946,   946,  -237,   -25,
    -237,   946,   946,   895,  -237,  -237,   -43,   -38,   135,     8,
      67,  -237,   785,   -27,  -237,  -237,  -237,  -237,    31,   815,
    -237,  -237,  -237,  -237,   124,  -237,   111,   135,  -237,   111,
     374,  -237,   -11,    81,   946,  -237,   111,   -49,   815,   815,
     -26,   739,  -237,   815,   112,   -34,  -237,  -237,  -237,  -237,
     123,   593,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
     623,   623,  -237,  -237,  -237,   564,    29,  -237,  -237,    33,
     150,   652,  -237,   -28,    57,   133,   119,   153,   132,   136,
     142,   141,   -44,  -237,  -237,  -237,   261,  -237,  -237,   137,
     920,   117,   762,  -237,  -237,   652,  -237,   -75,  -237,   143,
    -237,  -237,  -237,   652,  -237,   -29,   564,  -237,   564,  -237,
    -237,  -237,   -53,  -237,   158,   652,   175,   129,   374,  -237,
     -17,  -237,   204,  -237,  -237,   652,   652,   206,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,   652,
    -237,  -237,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   156,   652,   652,   170,   171,   215,   164,   174,   361,
     176,   167,   169,   173,  -237,  -237,  -237,  -237,   261,   187,
    -237,  -237,  -237,  -237,   213,  -237,  -237,  -237,     4,   181,
     228,   225,  -237,   226,   135,   682,   126,  -237,  -237,  -237,
     -20,  -237,   652,  -237,  -237,  -237,   234,   235,  -237,   652,
     422,   233,  -237,  -237,   108,  -237,  -237,  -237,  -237,   230,
     238,  -237,   -66,  -237,  -237,  -237,  -237,  -237,   -28,   -28,
      57,    57,   133,   133,   133,   133,   119,   119,   153,   132,
     136,   142,   141,   -16,  -237,   229,   231,   495,   652,   237,
    -237,   652,   316,   652,   361,   361,  -237,  -237,  -237,  -237,
    -237,  -237,   841,   285,   652,   241,  -237,   247,   652,  -237,
    -237,   249,   249,  -237,    29,  -237,  -237,  -237,   374,   652,
    -237,  -237,   652,  -237,   361,   652,   242,     9,  -237,    13,
     254,    17,  -237,  -237,  -237,  -237,  -237,   253,  -237,  -237,
     255,   144,  -237,  -237,  -237,  -237,   250,   652,   361,   361,
     652,   361,  -237,  -237,  -237,   118,   652,   251,  -237,   325,
      63,  -237,  -237,   259,   652,   361,   257,   361,   263,  -237,
    -237,  -237,   361,  -237
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   104,   101,   100,   108,   110,   109,   102,   105,   103,
      99,   106,    97,   107,   135,   121,   120,   140,    96,    98,
     141,   142,    95,   143,   219,   146,    90,    90,   112,     0,
     111,    90,    90,     0,   216,   218,   133,     0,   156,     0,
      83,    91,    93,     0,   145,    89,    85,    86,   119,     0,
      87,    88,     1,   217,     0,   163,   161,   155,    82,   146,
       0,   223,   146,     0,   221,   147,   146,   144,     0,   116,
     146,     0,   122,   116,   138,     0,   136,   162,   164,    92,
      93,     0,     5,     2,     4,     3,     7,    30,    31,    29,
       0,     0,    28,    32,    33,     0,   180,     6,     9,    22,
      34,     0,    36,    40,    43,    46,    51,    54,    56,    58,
      60,    62,    64,    66,   174,    94,   199,   220,   224,     0,
     160,   156,     0,   115,   113,     0,   124,     0,   126,   130,
     117,   123,   114,     0,   131,     0,     0,    26,     0,    23,
      24,    79,     0,   173,     0,     0,     0,     0,     0,   179,
       0,   182,     0,    14,    15,    21,     0,     0,    68,    72,
      73,    69,    70,    71,    74,    75,    76,    78,    77,     0,
      34,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,     0,     0,     0,     0,     0,     0,   211,
       0,     0,     5,   210,   200,   201,   186,   187,   198,     0,
     196,   188,   189,   190,     0,   191,   148,   171,   146,     0,
       0,   165,   167,   159,   156,   158,   155,   118,    81,   128,
     146,   125,     0,   139,   132,   137,     0,     0,     8,     0,
       0,     0,   185,   175,   180,   177,   181,   183,    13,    20,
       0,    18,     0,    12,    67,    37,    38,    39,    41,    42,
      45,    44,    47,    48,    49,    50,    52,    53,    55,    57,
      59,    61,    63,     0,   214,     0,     0,   211,     0,     0,
     213,     0,     0,     0,   211,   211,   197,   195,   202,   169,
     154,   153,     0,     0,     0,    29,   157,     0,     0,   127,
     129,    27,     0,    80,   180,    35,   184,   176,     0,     0,
      11,    10,     0,   215,   211,   211,     0,     0,   212,     0,
       0,     0,   194,   192,   166,   168,   172,     0,   152,   149,
       0,     0,   178,    19,    65,   193,     0,   211,   211,   211,
       0,   211,   150,   151,    16,   180,   211,     0,   206,   203,
       0,   205,    17,     0,   211,   211,     0,   211,     0,   204,
     207,   209,   211,   208
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,  -237,  -237,  -237,  -237,  -237,   -51,  -237,   -94,    61,
      64,    28,    68,   161,   165,   160,   162,   163,  -237,  -121,
     -59,  -237,   -93,   -85,   -39,  -237,     0,   152,  -237,   295,
    -237,   262,   -31,   282,  -237,  -237,   288,   -61,  -237,   128,
    -237,  -237,  -237,   224,    19,  -237,   -19,  -237,  -237,  -112,
    -237,  -237,   304,   240,  -237,  -237,    70,  -237,    12,  -143,
      59,  -236,  -237,  -237,   227,  -141,  -237,   312,  -237,  -237,
     168,  -237,  -237,  -237,  -176,  -237,  -237,   345,  -237,  -237,
    -237
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    97,    98,    99,   249,   250,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     141,   169,   203,   229,    24,    39,    62,    46,    40,    41,
      26,    27,    70,   124,    28,    29,    71,    72,   127,   128,
      30,    37,    75,    76,    31,    32,    80,    43,    67,    56,
     297,   219,    44,    57,   220,   221,   222,   223,   144,   115,
     147,   148,   149,   150,   151,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,    33,    34,    35,    63,
      64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   114,   142,    61,   228,   245,    42,   171,   308,   225,
     131,    74,   228,    65,   230,    48,   275,   231,   189,   311,
     172,   173,    38,   239,   228,   118,    45,    45,    38,   238,
     137,    45,    45,    25,   120,   121,   239,    38,   123,   139,
     140,   174,   123,   142,  -134,   142,   190,   119,   233,    54,
     170,   129,    38,   246,   134,   135,    66,    55,   282,   234,
     241,   131,    49,   252,   143,   125,   126,   145,    73,   146,
      36,   125,   228,   239,   170,   312,    78,   204,   255,   256,
     257,   -84,   170,   152,   153,   154,  -170,    73,    73,   114,
      73,   338,    73,  -170,   170,   339,   251,   273,   239,   341,
      58,   316,   239,   175,   176,   143,   239,   143,   276,   308,
     254,   228,   294,   145,    73,   146,   155,   156,    68,   157,
     218,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   336,
      55,    73,   170,   322,   323,   356,   305,   300,   236,    17,
     237,   224,   239,    20,    21,    73,    59,    73,    17,    38,
     298,   347,    20,    21,    74,   332,   296,    17,   116,   204,
     353,    20,    21,   335,   179,   180,   181,   182,   358,    47,
     303,   170,   133,    50,    51,   317,   177,   178,   319,   170,
     321,   334,   145,    60,   146,   185,   307,   348,   349,   289,
     351,   186,   145,   187,   146,   188,   352,   262,   263,   264,
     265,   129,   183,   184,   359,   242,   361,   243,   244,   216,
     158,   363,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   344,   345,   232,   327,   258,   259,   315,   330,
     240,   260,   261,    55,   248,    78,   253,   350,   274,   114,
     333,   266,   267,   277,   278,   279,   280,   281,   284,   283,
     285,   170,   239,   290,   191,   192,   193,   194,   195,   196,
      81,   197,   198,   199,   200,   287,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   218,    17,   201,    18,    19,    20,    21,    22,
      23,   202,    83,    84,    85,   288,    86,    87,    88,    89,
     291,    69,    90,    91,   292,   293,   301,   302,   306,   309,
     310,   313,   314,   320,    92,   326,   328,    93,    94,   318,
      69,    69,   329,    69,   337,    69,   304,   340,   342,   355,
     343,   357,   346,   354,    95,   362,   268,   270,   116,   360,
     271,   269,   272,  -211,    79,   132,   122,    69,   299,   235,
      77,   226,   325,   331,   191,   192,   193,   194,   195,   196,
      81,   197,   198,   199,   200,   117,   286,   247,    53,     0,
       0,     0,     0,    81,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,     0,     0,     0,    69,     0,
      69,   202,    83,    84,    85,     0,    86,    87,    88,    89,
       0,     0,    90,    91,    82,    83,    84,    85,     0,    86,
      87,    88,    89,     0,    92,    90,    91,    93,    94,     0,
       0,    81,     0,     0,     0,     0,     0,    92,     0,     0,
      93,    94,     0,     0,    95,     0,     0,     0,   116,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
       0,    96,    82,    83,    84,    85,     0,    86,    87,    88,
      89,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,    95,     0,     0,     0,   304,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    82,    83,    84,    85,     0,
      86,    87,    88,    89,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,    95,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       0,    13,    14,    15,    16,     0,    17,     0,     0,     0,
      20,    21,    81,     0,    82,    83,    84,    85,     0,    86,
      87,    88,    89,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
      93,    94,    81,    82,    83,    84,    85,     0,    86,    87,
      88,    89,     0,     0,    90,    91,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,    93,
      94,    81,     0,    82,    83,    84,    85,     0,    86,    87,
      88,    89,     0,     0,    90,    91,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,    93,
      94,    81,    82,    83,    84,    85,     0,    86,    87,    88,
      89,     0,     0,    90,    91,     0,   138,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,    93,    94,
       0,     0,    82,    83,    84,    85,     0,    86,    87,    88,
     295,     0,     0,    90,    91,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,    93,    94,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    95,    13,    14,    15,    16,
       0,    17,     0,     0,     0,    20,    21,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,     0,    13,
      14,    15,    16,     0,    17,     0,     0,     0,    20,    21,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,     0,     0,   130,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    13,    14,    15,    16,     0,    17,     0,     0,
     227,    20,    21,     0,     0,    60,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,  -222,    17,     0,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   324,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
     217,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    60,    95,    42,   125,   148,    25,   101,   244,   121,
      71,    40,   133,    40,    89,    40,   192,    92,    62,    85,
      48,    49,    48,    89,   145,    64,    26,    27,    48,    82,
      81,    31,    32,    33,    83,    84,    89,    48,    69,    90,
      91,    69,    73,   136,    87,   138,    90,    66,   133,    87,
     101,    70,    48,    70,    88,    89,    83,    38,   199,    88,
     145,   122,    87,   156,    95,    91,    92,    84,    49,    86,
      40,    91,   193,    89,   125,    91,    57,   116,   172,   173,
     174,    92,   133,    50,    51,    52,    82,    68,    69,   148,
      71,    82,    73,    89,   145,    82,   155,   190,    89,    82,
      92,   277,    89,    46,    47,   136,    89,   138,   193,   345,
     169,   232,   224,    84,    95,    86,    83,    84,    87,    86,
     120,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   315,
     121,   122,   193,   284,   285,    82,   240,   232,   136,    32,
     138,    34,    89,    36,    37,   136,    89,   138,    32,    48,
      34,   337,    36,    37,    40,   308,   225,    32,    87,   208,
     346,    36,    37,   314,    55,    56,    57,    58,   354,    27,
     239,   232,    70,    31,    32,   278,    53,    54,   281,   240,
     283,   312,    84,    70,    86,    63,    88,   338,   339,   218,
     341,    65,    84,    61,    86,    64,    88,   179,   180,   181,
     182,   230,    59,    60,   355,    40,   357,    88,    89,    82,
      70,   362,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    88,    89,    91,   294,   175,   176,   277,   298,
      82,   177,   178,   224,    40,   226,    40,   340,    92,   308,
     309,   183,   184,    83,    83,    40,    92,    83,    91,    83,
      91,   312,    89,    82,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    88,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   292,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    92,    45,    46,    47,    48,
      82,    49,    51,    52,    89,    89,    82,    82,    85,    89,
      82,    92,    91,     7,    63,    40,    85,    66,    67,    92,
      68,    69,    85,    71,    92,    73,    87,    83,    85,    14,
      85,    82,    92,    92,    83,    82,   185,   187,    87,    92,
     188,   186,   189,    92,    59,    73,    68,    95,   230,   135,
      56,   121,   292,   304,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    63,   208,   150,    33,    -1,
      -1,    -1,    -1,     9,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,   136,    -1,
     138,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    51,    52,    40,    41,    42,    43,    -1,    45,
      46,    47,    48,    -1,    63,    51,    52,    66,    67,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    83,    -1,    -1,    -1,    87,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    46,    47,    48,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    83,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      36,    37,     9,    -1,    40,    41,    42,    43,    -1,    45,
      46,    47,    48,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,     9,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    -1,    -1,    51,    52,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      67,     9,    -1,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    -1,    -1,    51,    52,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      67,     9,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    51,    52,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    51,    52,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    83,    27,    28,    29,    30,
      -1,    32,    -1,    -1,    -1,    36,    37,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    36,    37,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    88,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      88,    36,    37,    -1,    -1,    70,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    87,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    34,    35,
      36,    37,    38,    39,   117,   119,   123,   124,   127,   128,
     133,   137,   138,   169,   170,   171,    40,   134,    48,   118,
     121,   122,   139,   140,   145,   119,   120,   120,    40,    87,
     120,   120,     0,   170,    87,   137,   142,   146,    92,    89,
      70,   117,   119,   172,   173,    40,    83,   141,    87,   124,
     125,   129,   130,   137,    40,   135,   136,   145,   137,   122,
     139,     9,    40,    41,    42,    43,    45,    46,    47,    48,
      51,    52,    63,    66,    67,    83,    87,    94,    95,    96,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   152,    87,   160,   117,   139,
      83,    84,   129,   125,   126,    91,    92,   131,   132,   139,
      88,   130,   126,    70,    88,    89,    83,    99,    83,    99,
      99,   113,   115,   125,   151,    84,    86,   153,   154,   155,
     156,   157,    50,    51,    52,    83,    84,    86,    70,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,   114,
      99,   101,    48,    49,    69,    46,    47,    53,    54,    55,
      56,    57,    58,    59,    60,    63,    65,    61,    64,    62,
      90,     3,     4,     5,     6,     7,     8,    10,    11,    12,
      13,    33,    40,   115,   117,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,    82,    40,   119,   144,
     147,   148,   149,   150,    34,   142,   146,    88,   112,   116,
      89,    92,    91,   116,    88,   136,   151,   151,    82,    89,
      82,   116,    40,    88,    89,   152,    70,   157,    40,    97,
      98,   113,   115,    40,   113,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   105,   105,   106,   107,
     108,   109,   110,   115,    92,   167,   116,    83,    83,    40,
      92,    83,   158,    83,    91,    91,   163,    88,    92,   139,
      82,    82,    89,    89,   142,    48,   113,   143,    34,   132,
     116,    82,    82,   113,    87,   101,    85,    88,   154,    89,
      82,    85,    91,    92,    91,   117,   167,   115,    92,   115,
       7,   115,   158,   158,    68,   149,    40,   113,    85,    85,
     113,   153,   152,   113,   112,   158,   167,    92,    82,    82,
      83,    82,    85,    85,    88,    89,    92,   167,   158,   158,
     115,   158,    88,   167,    92,    14,    82,    82,   167,   158,
      92,   158,    82,   158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   117,   118,   118,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   137,   138,   139,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   152,   152,   152,   153,   153,   154,
     154,   155,   156,   156,   157,   157,   158,   158,   158,   158,
     158,   158,   159,   159,   159,   160,   161,   161,   162,   162,
     163,   163,   164,   165,   165,   165,   166,   166,   166,   166,
     167,   167,   168,   168,   168,   168,   169,   169,   170,   170,
     171,   172,   172,   173,   173
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
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
       1,     1,     1,     2,     2,     1,     0,     4,     5,     2,
       1,     1,     1,     2,     2,     3,     1,     3,     2,     3,
       1,     5,     6,     2,     1,     0,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     1,     0,     1,     3,     5,
       6,     6,     5,     4,     4,     1,     0,     1,     0,     1,
       0,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       1,     1,     3,     1,     1,     3,     4,     2,     4,     1,
       0,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     3,     1,     2,     1,     0,
       1,     1,     2,     5,     7,     5,     5,     7,     9,     8,
       1,     0,     3,     2,     2,     3,     1,     2,     1,     1,
       4,     1,     0,     1,     2
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
  case 5:
#line 47 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> identifier\n"); }
#line 1904 "y.tab.c"
    break;

  case 6:
#line 49 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> constant\n"); }
#line 1910 "y.tab.c"
    break;

  case 7:
#line 51 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> string-literal\n"); }
#line 1916 "y.tab.c"
    break;

  case 8:
#line 53 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> ( expression )\n"); }
#line 1922 "y.tab.c"
    break;

  case 9:
#line 59 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> primary_expression\n"); }
#line 1928 "y.tab.c"
    break;

  case 10:
#line 61 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression [ expression ]\n"); }
#line 1934 "y.tab.c"
    break;

  case 11:
#line 63 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
#line 1940 "y.tab.c"
    break;

  case 12:
#line 65 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression . identifier\n"); }
#line 1946 "y.tab.c"
    break;

  case 13:
#line 67 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression -> identifier\n"); }
#line 1952 "y.tab.c"
    break;

  case 14:
#line 69 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression ++\n"); }
#line 1958 "y.tab.c"
    break;

  case 15:
#line 71 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression --\n"); }
#line 1964 "y.tab.c"
    break;

  case 16:
#line 73 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }
#line 1970 "y.tab.c"
    break;

  case 17:
#line 75 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
#line 1976 "y.tab.c"
    break;

  case 18:
#line 80 "asgn4_19CS10069_19CS30007.y"
                            { printf("argument_expression_list -> assignment_expression\n"); }
#line 1982 "y.tab.c"
    break;

  case 19:
#line 82 "asgn4_19CS10069_19CS30007.y"
                            { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
#line 1988 "y.tab.c"
    break;

  case 22:
#line 92 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> postfix_expression\n"); }
#line 1994 "y.tab.c"
    break;

  case 23:
#line 94 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> ++ unary_expression\n"); }
#line 2000 "y.tab.c"
    break;

  case 24:
#line 96 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> −− unary_expression\n"); }
#line 2006 "y.tab.c"
    break;

  case 25:
#line 98 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> unary_operator cast_expression\n"); }
#line 2012 "y.tab.c"
    break;

  case 26:
#line 100 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> sizeof unary_expression\n"); }
#line 2018 "y.tab.c"
    break;

  case 27:
#line 102 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> sizeof ( type_name ) \n"); }
#line 2024 "y.tab.c"
    break;

  case 28:
#line 108 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> &\n"); }
#line 2030 "y.tab.c"
    break;

  case 29:
#line 110 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> *\n"); }
#line 2036 "y.tab.c"
    break;

  case 30:
#line 112 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> +\n"); }
#line 2042 "y.tab.c"
    break;

  case 31:
#line 114 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> -\n"); }
#line 2048 "y.tab.c"
    break;

  case 32:
#line 116 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> ~\n"); }
#line 2054 "y.tab.c"
    break;

  case 33:
#line 118 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> !\n"); }
#line 2060 "y.tab.c"
    break;

  case 34:
#line 123 "asgn4_19CS10069_19CS30007.y"
                    { printf("cast_expression -> unary_expression\n"); }
#line 2066 "y.tab.c"
    break;

  case 35:
#line 125 "asgn4_19CS10069_19CS30007.y"
                    { printf("cast_expression -> ( type_name ) cast_expression\n"); }
#line 2072 "y.tab.c"
    break;

  case 36:
#line 130 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> cast_expression\n"); }
#line 2078 "y.tab.c"
    break;

  case 37:
#line 132 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
#line 2084 "y.tab.c"
    break;

  case 38:
#line 134 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
#line 2090 "y.tab.c"
    break;

  case 39:
#line 136 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression modulo cast_expression\n"); }
#line 2096 "y.tab.c"
    break;

  case 40:
#line 142 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> multiplicative_expression\n"); }
#line 2102 "y.tab.c"
    break;

  case 41:
#line 144 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
#line 2108 "y.tab.c"
    break;

  case 42:
#line 146 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> additive_expression − multiplicative_expression\n"); }
#line 2114 "y.tab.c"
    break;

  case 43:
#line 151 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> additive_expression\n"); }
#line 2120 "y.tab.c"
    break;

  case 44:
#line 153 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> shift_expression << additive_expression\n"); }
#line 2126 "y.tab.c"
    break;

  case 45:
#line 155 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> shift_expression >> additive_expression\n"); }
#line 2132 "y.tab.c"
    break;

  case 46:
#line 160 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> shift_expression\n"); }
#line 2138 "y.tab.c"
    break;

  case 47:
#line 162 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression < shift_expression\n"); }
#line 2144 "y.tab.c"
    break;

  case 48:
#line 164 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression > shift_expression\n"); }
#line 2150 "y.tab.c"
    break;

  case 49:
#line 166 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression <= shift_expression\n"); }
#line 2156 "y.tab.c"
    break;

  case 50:
#line 168 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression >= shift_expression\n"); }
#line 2162 "y.tab.c"
    break;

  case 51:
#line 173 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> relational_expression\n"); }
#line 2168 "y.tab.c"
    break;

  case 52:
#line 175 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> equality_expression == relational_expression\n"); }
#line 2174 "y.tab.c"
    break;

  case 53:
#line 177 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> equality_expression ! = relational_expression\n"); }
#line 2180 "y.tab.c"
    break;

  case 54:
#line 182 "asgn4_19CS10069_19CS30007.y"
                    { printf("AND_expression -> equality_expression\n"); }
#line 2186 "y.tab.c"
    break;

  case 55:
#line 184 "asgn4_19CS10069_19CS30007.y"
                    { printf("AND_expression -> AND_expression & equality_expression\n");}
#line 2192 "y.tab.c"
    break;

  case 56:
#line 189 "asgn4_19CS10069_19CS30007.y"
                            { printf("exclusive_OR_expression -> AND_expression\n"); }
#line 2198 "y.tab.c"
    break;

  case 57:
#line 191 "asgn4_19CS10069_19CS30007.y"
                            { printf("exclusive_OR_expression -> exclusive_OR_expression ˆ AND_expression\n"); }
#line 2204 "y.tab.c"
    break;

  case 58:
#line 196 "asgn4_19CS10069_19CS30007.y"
                            { printf("inclusive_OR_expression -> exclusive_OR_expression\n"); }
#line 2210 "y.tab.c"
    break;

  case 59:
#line 198 "asgn4_19CS10069_19CS30007.y"
                            { printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
#line 2216 "y.tab.c"
    break;

  case 60:
#line 203 "asgn4_19CS10069_19CS30007.y"
                            { printf("logical_AND_expression -> inclusive_OR_expression\n"); }
#line 2222 "y.tab.c"
    break;

  case 61:
#line 205 "asgn4_19CS10069_19CS30007.y"
                            { printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
#line 2228 "y.tab.c"
    break;

  case 62:
#line 210 "asgn4_19CS10069_19CS30007.y"
                        { printf("logical_OR_expression -> logical_AND_expression\n"); }
#line 2234 "y.tab.c"
    break;

  case 63:
#line 212 "asgn4_19CS10069_19CS30007.y"
                        { printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
#line 2240 "y.tab.c"
    break;

  case 64:
#line 217 "asgn4_19CS10069_19CS30007.y"
                        { printf("conditional_expression -> logical_OR_expression\n"); }
#line 2246 "y.tab.c"
    break;

  case 65:
#line 219 "asgn4_19CS10069_19CS30007.y"
                        { printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
#line 2252 "y.tab.c"
    break;

  case 66:
#line 224 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_expression -> conditional_expression\n"); }
#line 2258 "y.tab.c"
    break;

  case 67:
#line 226 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
#line 2264 "y.tab.c"
    break;

  case 68:
#line 232 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> =\n"); }
#line 2270 "y.tab.c"
    break;

  case 69:
#line 234 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> *=\n"); }
#line 2276 "y.tab.c"
    break;

  case 70:
#line 236 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> /=\n"); }
#line 2282 "y.tab.c"
    break;

  case 71:
#line 238 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> %%=\n"); }
#line 2288 "y.tab.c"
    break;

  case 72:
#line 240 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> +=\n"); }
#line 2294 "y.tab.c"
    break;

  case 73:
#line 242 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> -=\n"); }
#line 2300 "y.tab.c"
    break;

  case 74:
#line 244 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> <<=\n"); }
#line 2306 "y.tab.c"
    break;

  case 75:
#line 246 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> >>=\n"); }
#line 2312 "y.tab.c"
    break;

  case 76:
#line 248 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> &=\n"); }
#line 2318 "y.tab.c"
    break;

  case 77:
#line 250 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> ^=\n"); }
#line 2324 "y.tab.c"
    break;

  case 78:
#line 252 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> |=\n"); }
#line 2330 "y.tab.c"
    break;

  case 79:
#line 257 "asgn4_19CS10069_19CS30007.y"
                { printf("expression -> assignment_expression\n"); }
#line 2336 "y.tab.c"
    break;

  case 80:
#line 259 "asgn4_19CS10069_19CS30007.y"
                { printf("expression -> expression , assignment_expression\n"); }
#line 2342 "y.tab.c"
    break;

  case 81:
#line 264 "asgn4_19CS10069_19CS30007.y"
                        { printf("constant_expression -> conditional_expression\n"); }
#line 2348 "y.tab.c"
    break;

  case 82:
#line 269 "asgn4_19CS10069_19CS30007.y"
                { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
#line 2354 "y.tab.c"
    break;

  case 85:
#line 279 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
#line 2360 "y.tab.c"
    break;

  case 86:
#line 281 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
#line 2366 "y.tab.c"
    break;

  case 87:
#line 283 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
#line 2372 "y.tab.c"
    break;

  case 88:
#line 285 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
#line 2378 "y.tab.c"
    break;

  case 91:
#line 295 "asgn4_19CS10069_19CS30007.y"
                        { printf("init_declarator_list -> init_declarator\n"); }
#line 2384 "y.tab.c"
    break;

  case 92:
#line 297 "asgn4_19CS10069_19CS30007.y"
                        { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
#line 2390 "y.tab.c"
    break;

  case 93:
#line 302 "asgn4_19CS10069_19CS30007.y"
                    { printf("init_declarator -> declarator\n"); }
#line 2396 "y.tab.c"
    break;

  case 94:
#line 304 "asgn4_19CS10069_19CS30007.y"
                    { printf("init_declarator -> declarator = initializer\n"); }
#line 2402 "y.tab.c"
    break;

  case 95:
#line 309 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> extern\n"); }
#line 2408 "y.tab.c"
    break;

  case 96:
#line 311 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> static\n"); }
#line 2414 "y.tab.c"
    break;

  case 97:
#line 313 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> auto\n"); }
#line 2420 "y.tab.c"
    break;

  case 98:
#line 315 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> register\n"); }
#line 2426 "y.tab.c"
    break;

  case 99:
#line 320 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> void\n"); }
#line 2432 "y.tab.c"
    break;

  case 100:
#line 322 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> char\n"); }
#line 2438 "y.tab.c"
    break;

  case 101:
#line 324 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> short\n"); }
#line 2444 "y.tab.c"
    break;

  case 102:
#line 326 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> int\n"); }
#line 2450 "y.tab.c"
    break;

  case 103:
#line 328 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> long\n"); }
#line 2456 "y.tab.c"
    break;

  case 104:
#line 330 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> float\n"); }
#line 2462 "y.tab.c"
    break;

  case 105:
#line 332 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> double\n"); }
#line 2468 "y.tab.c"
    break;

  case 106:
#line 334 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> signed\n"); }
#line 2474 "y.tab.c"
    break;

  case 107:
#line 336 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> unsigned\n"); }
#line 2480 "y.tab.c"
    break;

  case 108:
#line 338 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _bool\n"); }
#line 2486 "y.tab.c"
    break;

  case 109:
#line 340 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _complex\n"); }
#line 2492 "y.tab.c"
    break;

  case 110:
#line 342 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _imaginary\n"); }
#line 2498 "y.tab.c"
    break;

  case 111:
#line 344 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> enum_specifier\n");}
#line 2504 "y.tab.c"
    break;

  case 112:
#line 346 "asgn4_19CS10069_19CS30007.y"
                { printf("Works\n"); }
#line 2510 "y.tab.c"
    break;

  case 113:
#line 351 "asgn4_19CS10069_19CS30007.y"
                            { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
#line 2516 "y.tab.c"
    break;

  case 114:
#line 353 "asgn4_19CS10069_19CS30007.y"
                            { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
#line 2522 "y.tab.c"
    break;

  case 131:
#line 394 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }
#line 2528 "y.tab.c"
    break;

  case 132:
#line 396 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); }
#line 2534 "y.tab.c"
    break;

  case 133:
#line 398 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier\n"); }
#line 2540 "y.tab.c"
    break;

  case 136:
#line 408 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator_list -> enumerator\n");}
#line 2546 "y.tab.c"
    break;

  case 137:
#line 410 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator_list -> enumerator_list, enumerator\n");}
#line 2552 "y.tab.c"
    break;

  case 138:
#line 416 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator -> enumerator_constant\n");}
#line 2558 "y.tab.c"
    break;

  case 139:
#line 418 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator -> enumerator_constant = constant_expression\n");}
#line 2564 "y.tab.c"
    break;

  case 140:
#line 424 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> const\n"); }
#line 2570 "y.tab.c"
    break;

  case 141:
#line 426 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> restrict\n"); }
#line 2576 "y.tab.c"
    break;

  case 142:
#line 428 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> volatile\n"); }
#line 2582 "y.tab.c"
    break;

  case 143:
#line 433 "asgn4_19CS10069_19CS30007.y"
                    { printf("function_specifier -> inline\n"); }
#line 2588 "y.tab.c"
    break;

  case 144:
#line 438 "asgn4_19CS10069_19CS30007.y"
                { printf("declarator -> pointer_opt direct_declarator\n"); }
#line 2594 "y.tab.c"
    break;

  case 147:
#line 448 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> identifier\n"); }
#line 2600 "y.tab.c"
    break;

  case 148:
#line 450 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> ( declarator )\n"); }
#line 2606 "y.tab.c"
    break;

  case 149:
#line 452 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
#line 2612 "y.tab.c"
    break;

  case 150:
#line 454 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }
#line 2618 "y.tab.c"
    break;

  case 151:
#line 456 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expression ]\n"); }
#line 2624 "y.tab.c"
    break;

  case 152:
#line 458 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
#line 2630 "y.tab.c"
    break;

  case 153:
#line 460 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
#line 2636 "y.tab.c"
    break;

  case 154:
#line 462 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
#line 2642 "y.tab.c"
    break;

  case 161:
#line 482 "asgn4_19CS10069_19CS30007.y"
            { printf("pointer -> * type_qualifier_list_opt\n"); }
#line 2648 "y.tab.c"
    break;

  case 162:
#line 484 "asgn4_19CS10069_19CS30007.y"
            { printf("pointer -> * type_qualifier_list_opt pointer\n"); }
#line 2654 "y.tab.c"
    break;

  case 163:
#line 489 "asgn4_19CS10069_19CS30007.y"
                        { printf("type_qualifier_list -> type_qualifier\n"); }
#line 2660 "y.tab.c"
    break;

  case 164:
#line 491 "asgn4_19CS10069_19CS30007.y"
                        { printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
#line 2666 "y.tab.c"
    break;

  case 165:
#line 496 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_type_list -> parameter_list\n"); }
#line 2672 "y.tab.c"
    break;

  case 166:
#line 498 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_type_list -> parameter_list , ...\n"); }
#line 2678 "y.tab.c"
    break;

  case 167:
#line 503 "asgn4_19CS10069_19CS30007.y"
                    { printf("parameter_list -> parameter_declaration\n"); }
#line 2684 "y.tab.c"
    break;

  case 168:
#line 505 "asgn4_19CS10069_19CS30007.y"
                    { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
#line 2690 "y.tab.c"
    break;

  case 169:
#line 510 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_declaration -> declaration_specifiers declarator\n"); }
#line 2696 "y.tab.c"
    break;

  case 170:
#line 512 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_declaration -> declaration_specifiers\n"); }
#line 2702 "y.tab.c"
    break;

  case 171:
#line 517 "asgn4_19CS10069_19CS30007.y"
                    { printf("identifier_list -> identifier\n"); }
#line 2708 "y.tab.c"
    break;

  case 172:
#line 519 "asgn4_19CS10069_19CS30007.y"
                    { printf("identifier_list -> identifier_list , identifier\n"); }
#line 2714 "y.tab.c"
    break;

  case 173:
#line 524 "asgn4_19CS10069_19CS30007.y"
            { printf("type_name -> specifier_qualifier_list\n"); }
#line 2720 "y.tab.c"
    break;

  case 174:
#line 529 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> assignment_expression\n"); }
#line 2726 "y.tab.c"
    break;

  case 175:
#line 531 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> { initializer_list }\n"); }
#line 2732 "y.tab.c"
    break;

  case 176:
#line 533 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> { initializer_list , }\n"); }
#line 2738 "y.tab.c"
    break;

  case 177:
#line 538 "asgn4_19CS10069_19CS30007.y"
                    { printf("initializer_list -> designation_opt initializer\n"); }
#line 2744 "y.tab.c"
    break;

  case 178:
#line 540 "asgn4_19CS10069_19CS30007.y"
                    { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
#line 2750 "y.tab.c"
    break;

  case 181:
#line 550 "asgn4_19CS10069_19CS30007.y"
                { printf("designation -> designator_list =\n"); }
#line 2756 "y.tab.c"
    break;

  case 182:
#line 555 "asgn4_19CS10069_19CS30007.y"
                    { printf("designator_list -> designator\n"); }
#line 2762 "y.tab.c"
    break;

  case 183:
#line 557 "asgn4_19CS10069_19CS30007.y"
                    { printf("designator_list -> designator_list designator\n"); }
#line 2768 "y.tab.c"
    break;

  case 184:
#line 562 "asgn4_19CS10069_19CS30007.y"
                { printf("designator -> [ constant_expression ]\n"); }
#line 2774 "y.tab.c"
    break;

  case 185:
#line 564 "asgn4_19CS10069_19CS30007.y"
                { printf("designator -> . identifier\n"); }
#line 2780 "y.tab.c"
    break;

  case 186:
#line 569 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> labeled_statement\n"); }
#line 2786 "y.tab.c"
    break;

  case 187:
#line 571 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> compound_statement\n"); }
#line 2792 "y.tab.c"
    break;

  case 188:
#line 573 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> expression_statement\n"); }
#line 2798 "y.tab.c"
    break;

  case 189:
#line 575 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> selection_statement\n"); }
#line 2804 "y.tab.c"
    break;

  case 190:
#line 577 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> iteration_statement\n"); }
#line 2810 "y.tab.c"
    break;

  case 191:
#line 579 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> jump_statement\n"); }
#line 2816 "y.tab.c"
    break;

  case 192:
#line 584 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> identifier : statement\n"); }
#line 2822 "y.tab.c"
    break;

  case 193:
#line 586 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> case constant_expression : statement\n"); }
#line 2828 "y.tab.c"
    break;

  case 194:
#line 588 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> default : statement\n"); }
#line 2834 "y.tab.c"
    break;

  case 195:
#line 593 "asgn4_19CS10069_19CS30007.y"
                        { printf("compound_statement -> { block_item_list_opt }\n"); }
#line 2840 "y.tab.c"
    break;

  case 196:
#line 598 "asgn4_19CS10069_19CS30007.y"
                    { printf("block_item_list -> block_item\n"); }
#line 2846 "y.tab.c"
    break;

  case 197:
#line 600 "asgn4_19CS10069_19CS30007.y"
                    { printf("block_item_list -> block_item_list block_item\n"); }
#line 2852 "y.tab.c"
    break;

  case 200:
#line 610 "asgn4_19CS10069_19CS30007.y"
            { printf("block_item -> declaration\n"); }
#line 2858 "y.tab.c"
    break;

  case 201:
#line 612 "asgn4_19CS10069_19CS30007.y"
            { printf("block_item -> statement\n"); }
#line 2864 "y.tab.c"
    break;

  case 202:
#line 617 "asgn4_19CS10069_19CS30007.y"
                        { printf("expression_statement-> expression_opt ;\n"); }
#line 2870 "y.tab.c"
    break;

  case 203:
#line 622 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> if ( expression ) statement\n"); }
#line 2876 "y.tab.c"
    break;

  case 204:
#line 624 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> if ( expression ) statement else statement\n"); }
#line 2882 "y.tab.c"
    break;

  case 205:
#line 626 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> switch ( expression ) statement\n"); }
#line 2888 "y.tab.c"
    break;

  case 206:
#line 631 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> while ( expression ) statement\n"); }
#line 2894 "y.tab.c"
    break;

  case 207:
#line 633 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> do statement while ( expression ) ;\n"); }
#line 2900 "y.tab.c"
    break;

  case 208:
#line 635 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
#line 2906 "y.tab.c"
    break;

  case 209:
#line 637 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
#line 2912 "y.tab.c"
    break;

  case 212:
#line 647 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> goto identifier ;\n"); }
#line 2918 "y.tab.c"
    break;

  case 213:
#line 649 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> continue ;\n"); }
#line 2924 "y.tab.c"
    break;

  case 214:
#line 651 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> break ;\n"); }
#line 2930 "y.tab.c"
    break;

  case 215:
#line 653 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> return expression_opt ;\n"); }
#line 2936 "y.tab.c"
    break;

  case 216:
#line 658 "asgn4_19CS10069_19CS30007.y"
                    { printf("translation_unit -> external_declaration\n"); }
#line 2942 "y.tab.c"
    break;

  case 217:
#line 660 "asgn4_19CS10069_19CS30007.y"
                    { printf("translation_unit -> external_declaration\n"); }
#line 2948 "y.tab.c"
    break;

  case 218:
#line 665 "asgn4_19CS10069_19CS30007.y"
                        { printf("external_declaration -> function_definition\n"); }
#line 2954 "y.tab.c"
    break;

  case 219:
#line 667 "asgn4_19CS10069_19CS30007.y"
                        { printf("external_declaration -> declaration\n"); }
#line 2960 "y.tab.c"
    break;

  case 220:
#line 672 "asgn4_19CS10069_19CS30007.y"
                    { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
#line 2966 "y.tab.c"
    break;

  case 223:
#line 682 "asgn4_19CS10069_19CS30007.y"
                    { printf("declaration_list -> declaration\n"); }
#line 2972 "y.tab.c"
    break;

  case 224:
#line 684 "asgn4_19CS10069_19CS30007.y"
                    { printf("declaration_list -> declaration_list declaration\n"); }
#line 2978 "y.tab.c"
    break;


#line 2982 "y.tab.c"

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
#line 687 "asgn4_19CS10069_19CS30007.y"

/*Auxiliaries*/
void yyerror(char* s)
{
    printf("Found error %s\n", s);
}
