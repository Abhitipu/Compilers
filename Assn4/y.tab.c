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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   865

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  341

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
       2,     2,     2,     2,     2,     2,     2,     2,    91,    93,
       2,    92,     2,    90,     2,     2,     2,     2,     2,     2,
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
  "RESTRICT", "VOLATILE", "EXTERN", "INLINE", "IDENTIFIER",
  "INTEGER_CONST", "CHAR_CONST", "FLOAT_CONST", "DOUBLE_CONST",
  "STRING_LITERAL", "PLUS", "MINUS", "MULT", "DIVIDE", "ARROW",
  "INCREMENT", "DECREMENT", "RSHIFT", "LSHIFT", "LT", "GT", "LEQ", "GEQ",
  "EQ", "NEQ", "BITWISE_OR", "LOGICAL_OR", "BITWISE_AND", "LOGICAL_AND",
  "XOR", "BITWISE_NOT", "LOGICAL_NOT", "ELLIPSIS", "MODULO", "ASGN",
  "ENUMERATION_CONST", "ADD_ASGN", "SUB_ASGN", "MULT_ASGN", "DIV_ASGN",
  "MOD_ASGN", "LSHIFT_ASGN", "RSHIFT_ASGN", "AND_ASGN", "OR_ASGN",
  "XOR_ASGN", "')'", "'('", "'['", "']'", "'.'", "'{'", "'}'", "','",
  "'?'", "':'", "'='", "';'", "$accept", "constant", "primary_expression",
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
     335,   336,    41,    40,    91,    93,    46,   123,   125,    44,
      63,    58,    61,    59
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
     803,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,    -6,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,   -38,   803,   803,  -213,   803,   803,   752,
    -213,  -213,   -65,   -50,   121,   -36,   -44,  -213,   673,   -27,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   -11,  -213,
      17,   121,  -213,    17,   348,  -213,   -38,   -14,   803,  -213,
      17,    56,  -213,   115,  -213,  -213,  -213,  -213,     9,   531,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   561,   561,
    -213,  -213,  -213,   502,    25,  -213,  -213,    -3,    70,   590,
    -213,   -28,   159,   158,   125,   154,    23,    24,    34,    41,
     -47,  -213,  -213,  -213,   255,  -213,  -213,    54,   777,    66,
      93,  -213,   -25,   502,  -213,   502,  -213,  -213,  -213,   -70,
     828,  -213,   828,   103,   590,   135,   128,   348,  -213,   -48,
    -213,   148,  -213,  -213,   590,   590,   150,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   590,  -213,
    -213,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     100,   590,   590,   117,   124,   169,   138,   145,   320,   151,
     127,   147,   152,  -213,  -213,  -213,  -213,   255,   155,  -213,
    -213,  -213,  -213,   143,  -213,  -213,  -213,   -31,   157,   160,
     156,  -213,   161,   121,   620,    98,   170,  -213,  -213,   162,
     164,  -213,   590,  -213,  -213,  -213,   376,  -213,   163,  -213,
    -213,     4,  -213,  -213,  -213,  -213,   165,   171,  -213,   -15,
    -213,  -213,  -213,  -213,  -213,   -28,   -28,   159,   159,   158,
     158,   158,   158,   125,   125,   154,    23,    24,    34,    41,
      78,  -213,   191,   166,   449,   590,   192,  -213,   590,   240,
     590,   320,   320,  -213,  -213,  -213,  -213,  -213,  -213,   698,
     211,   590,   167,  -213,   201,   590,   590,   168,   168,  -213,
      25,  -213,  -213,  -213,   348,   590,  -213,  -213,   590,  -213,
     320,   590,   206,   -66,  -213,   -23,   173,   -21,  -213,  -213,
    -213,  -213,  -213,   219,  -213,  -213,   220,  -213,   132,  -213,
    -213,  -213,  -213,   215,   590,   320,   320,   590,   320,  -213,
    -213,  -213,    86,   590,   216,  -213,   296,     2,  -213,  -213,
     229,   590,   320,   221,   320,   230,  -213,  -213,  -213,   320,
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
       5,     2,     4,     3,     7,    30,    31,    29,     0,     0,
      28,    32,    33,     0,   165,     6,     9,    22,    34,     0,
      36,    40,    43,    46,    51,    54,    56,    58,    60,    62,
      64,    66,   159,    94,   184,   205,   209,     0,   145,   141,
       0,   116,     0,     0,    26,     0,    23,    24,    79,     0,
     115,   158,   115,     0,     0,     0,     0,     0,   164,     0,
     167,     0,    14,    15,    21,     0,     0,    72,    73,    69,
      70,    71,    74,    75,    76,    78,    77,    68,     0,    34,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   196,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     5,   195,   185,   186,   171,   172,   183,     0,   181,
     173,   174,   175,     0,   176,   133,   156,   131,     0,     0,
     150,   152,   144,   141,   143,   140,     0,   117,   122,     0,
       0,     8,     0,   114,   112,   113,     0,    81,     0,   170,
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
    -213,  -213,  -213,  -213,  -213,  -213,   -39,  -213,   -75,    72,
      68,    37,    67,   149,   172,   153,   176,   177,  -213,  -120,
     -52,  -213,   -82,  -169,   -32,  -213,     0,   174,  -213,   262,
    -213,   -51,    39,   194,  -213,  -213,  -213,   205,  -213,   -16,
    -213,   -18,  -213,  -213,  -102,  -213,  -213,   270,   225,  -213,
    -213,    75,  -213,    71,  -119,    55,  -212,  -213,  -213,   207,
    -124,  -213,   282,  -213,  -213,   182,  -213,  -213,  -213,  -160,
    -213,  -213,   311,  -213,  -213,  -213
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
      34,   252,   211,    59,   150,   168,   315,    34,    49,   212,
     151,   152,  -119,   212,    41,    41,   106,    41,    41,    23,
     114,   119,   120,   119,    32,    66,   124,    48,   125,   116,
     117,   153,   107,   169,   223,    53,    62,   131,   132,   133,
     149,  -155,   217,   229,   259,   -84,    60,    52,  -155,   316,
      62,   318,   120,   207,   120,    34,   212,   122,   212,   120,
     287,   120,   183,   104,   212,   102,   232,   233,   234,    54,
     134,   135,   228,   136,   333,   149,   164,   250,   124,   165,
     125,   212,   283,    49,   292,   166,   231,   122,    15,   122,
     203,   271,    18,    19,   122,   167,   122,   307,   197,   124,
     284,   125,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
      15,   313,   275,   149,    18,    19,   195,   298,   299,   108,
     109,   281,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   273,    15,   324,   183,   217,    18,    19,   213,
     279,   213,   147,   330,   206,   309,   312,   212,   311,   288,
     124,   335,   125,   293,   329,   219,   295,   149,   297,   266,
     158,   159,   160,   161,   209,   216,   210,    49,   225,    66,
     230,   325,   326,   251,   328,   239,   240,   241,   242,    43,
     254,    44,    45,   111,   112,   154,   155,   255,   336,   256,
     338,   156,   157,   162,   163,   340,   220,   221,   261,   303,
     321,   322,   291,   306,   237,   238,   235,   236,   258,   243,
     244,   257,   102,   310,   260,   327,   265,   149,   262,   267,
     276,   212,   268,   264,   277,   269,   278,   296,   282,   149,
     270,   302,   304,   286,   285,   280,   317,   290,   170,   171,
     172,   173,   174,   175,    69,   176,   177,   178,   179,   197,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   289,   294,   305,    15,   180,    16,
      17,    18,    19,    20,    21,   181,    71,    72,    73,   314,
      74,    75,    76,    77,   319,   320,    78,    79,   323,   331,
     332,   334,   339,   245,   337,    67,   215,   208,    80,   247,
      65,    81,    82,   170,   171,   172,   173,   174,   175,    69,
     176,   177,   178,   179,   205,   308,   224,   246,    83,   105,
      47,     0,   104,   248,   301,   249,     0,     0,  -196,     0,
       0,     0,     0,   180,     0,     0,     0,    69,     0,     0,
     181,    71,    72,    73,     0,    74,    75,    76,    77,   263,
       0,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,    69,    81,    82,    70,    71,
      72,    73,     0,    74,    75,    76,    77,     0,     0,    78,
      79,     0,     0,    83,     0,     0,     0,   104,     0,     0,
       0,    80,     0,     0,    81,    82,    70,    71,    72,    73,
       0,    74,    75,    76,    77,     0,     0,    78,    79,     0,
       0,    83,     0,     0,     0,    84,     0,     0,     0,    80,
       0,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    83,
       0,     0,     0,   280,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    70,
      71,    72,    73,     0,    74,    75,    76,    77,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    80,     0,     0,    81,    82,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,     0,    13,
      14,     0,    83,     0,    15,     0,     0,     0,    18,    19,
      69,     0,    70,    71,    72,    73,     0,    74,    75,    76,
      77,     0,     0,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,    82,
      69,    70,    71,    72,    73,     0,    74,    75,    76,    77,
       0,     0,    78,    79,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,    82,    69,
       0,    70,    71,    72,    73,     0,    74,    75,    76,    77,
       0,     0,    78,    79,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,    82,    69,
      70,    71,    72,    73,     0,    74,    75,    76,    77,     0,
       0,    78,    79,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,    82,     0,     0,
      70,    71,    72,    73,     0,    74,    75,    76,   272,     0,
       0,    78,    79,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,    82,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,    83,     0,    15,     0,    16,    17,    18,
      19,    20,    21,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,     0,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
    -207,     0,     0,     0,     0,     0,   300,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,    16,    17,    18,    19,
      20,    21,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,    16,    17,    18,    19,    20,    21,   196,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    13,    14,     0,     0,     0,
      15,     0,     0,     0,    18,    19
};

static const yytype_int16 yycheck[] =
{
       0,    83,    54,   172,   124,    23,    38,   109,   127,   221,
      48,   171,    82,    40,    89,    62,    82,    48,    34,    89,
      48,    49,    87,    89,    24,    25,    58,    27,    28,    29,
      69,   113,    83,   115,    40,    51,    84,    87,    86,    78,
      79,    69,    60,    90,    92,    89,    71,    50,    51,    52,
      89,    82,   172,   135,   178,    93,    83,    93,    89,    82,
      71,    82,   113,    88,   115,    48,    89,    83,    89,   120,
      85,   122,   104,    87,    89,   127,   151,   152,   153,    70,
      83,    84,   134,    86,    82,   124,    63,   169,    84,    65,
      86,    89,    88,   109,   254,    61,   148,   113,    32,   115,
      34,   203,    36,    37,   120,    64,   122,   276,   108,    84,
     322,    86,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
      32,   291,    34,   172,    36,    37,    82,   261,   262,    83,
      84,   216,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,   204,    32,   314,   187,   276,    36,    37,   120,
     212,   122,    92,   323,    71,   284,   290,    89,   288,    91,
      84,   331,    86,   255,    88,    40,   258,   216,   260,   197,
      55,    56,    57,    58,   113,    82,   115,   203,    40,   205,
      40,   315,   316,    93,   318,   158,   159,   160,   161,    25,
      83,    27,    28,    88,    89,    46,    47,    83,   332,    40,
     334,    53,    54,    59,    60,   339,    88,    89,    91,   271,
      88,    89,   254,   275,   156,   157,   154,   155,    83,   162,
     163,    93,   284,   285,    83,   317,    93,   276,    91,    82,
      70,    89,    82,    88,    82,    89,    82,     7,    85,   288,
      89,    40,    85,    82,    89,    87,    83,    91,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   269,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    93,    93,    85,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    93,
      45,    46,    47,    48,    85,    85,    51,    52,    93,    93,
      14,    82,    82,   164,    93,    53,   122,   112,    63,   166,
      50,    66,    67,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   109,   280,   129,   165,    83,    57,
      29,    -1,    87,   167,   269,   168,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,     9,    -1,    -1,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,   187,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,     9,    66,    67,    40,    41,
      42,    43,    -1,    45,    46,    47,    48,    -1,    -1,    51,
      52,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    40,    41,    42,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    51,    52,    -1,
      -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    83,
      -1,    -1,    -1,    87,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    46,    47,    48,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    63,    -1,    -1,    66,    67,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    -1,    83,    -1,    32,    -1,    -1,    -1,    36,    37,
       9,    -1,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
       9,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    51,    52,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,     9,
      -1,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    51,    52,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,     9,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    -1,
      -1,    51,    52,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    -1,
      -1,    51,    52,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    83,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    68,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    32,    34,    35,    36,    37,
      38,    39,   118,   120,   124,   125,   128,   133,   134,   165,
     166,   167,    40,   129,    48,   119,   122,   123,   135,   136,
     141,   120,   121,   121,   121,   121,     0,   166,    87,   133,
     138,   142,    93,    89,    70,   118,   120,   168,   169,    40,
      83,   137,    71,   130,   131,   141,   133,   123,   135,     9,
      40,    41,    42,    43,    45,    46,    47,    48,    51,    52,
      63,    66,    67,    83,    87,    95,    96,    97,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   148,    87,   156,   118,   135,    83,    84,
     132,    88,    89,    83,   100,    83,   100,   100,   114,   116,
     125,   126,   133,   147,    84,    86,   149,   150,   151,   152,
     153,    50,    51,    52,    83,    84,    86,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    92,   115,   100,
     102,    48,    49,    69,    46,    47,    53,    54,    55,    56,
      57,    58,    59,    60,    63,    65,    61,    64,    62,    90,
       3,     4,     5,     6,     7,     8,    10,    11,    12,    13,
      33,    40,   116,   118,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    82,    40,   120,   140,   143,
     144,   145,   146,    34,   138,   142,    71,    88,   131,   147,
     147,    82,    89,   126,   127,   127,    82,   113,   117,    40,
      88,    89,   148,    92,   153,    40,    98,    99,   114,   116,
      40,   114,   102,   102,   102,   103,   103,   104,   104,   105,
     105,   105,   105,   106,   106,   107,   108,   109,   110,   111,
     116,    93,   163,   117,    83,    83,    40,    93,    83,   154,
      83,    91,    91,   159,    88,    93,   135,    82,    82,    89,
      89,   138,    48,   114,   139,    34,    70,    82,    82,   114,
      87,   102,    85,    88,   150,    89,    82,    85,    91,    93,
      91,   118,   163,   116,    93,   116,     7,   116,   154,   154,
      68,   145,    40,   114,    85,    85,   114,   117,   149,   148,
     114,   113,   154,   163,    93,    82,    82,    83,    82,    85,
      85,    88,    89,    93,   163,   154,   154,   116,   154,    88,
     163,    93,    14,    82,    82,   163,   154,    93,   154,    82,
     154
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   103,   103,
     104,   104,   104,   105,   105,   105,   106,   106,   106,   106,
     106,   107,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   118,   119,   119,   120,   120,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   129,
     129,   130,   130,   132,   131,   133,   133,   133,   134,   135,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   148,
     148,   148,   149,   149,   150,   150,   151,   152,   152,   153,
     153,   154,   154,   154,   154,   154,   154,   155,   155,   155,
     156,   157,   157,   158,   158,   159,   159,   160,   161,   161,
     161,   162,   162,   162,   162,   163,   163,   164,   164,   164,
     164,   165,   165,   166,   166,   167,   168,   168,   169,   169
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
  case 5:
#line 47 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> identifier\n"); }
#line 1864 "y.tab.c"
    break;

  case 6:
#line 49 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> constant\n"); }
#line 1870 "y.tab.c"
    break;

  case 7:
#line 51 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> string-literal\n"); }
#line 1876 "y.tab.c"
    break;

  case 8:
#line 53 "asgn4_19CS10069_19CS30007.y"
                    { printf("primary_expression -> ( expression )\n"); }
#line 1882 "y.tab.c"
    break;

  case 9:
#line 59 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> primary_expression\n"); }
#line 1888 "y.tab.c"
    break;

  case 10:
#line 61 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression [ expression ]\n"); }
#line 1894 "y.tab.c"
    break;

  case 11:
#line 63 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
#line 1900 "y.tab.c"
    break;

  case 12:
#line 65 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression . identifier\n"); }
#line 1906 "y.tab.c"
    break;

  case 13:
#line 67 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression -> identifier\n"); }
#line 1912 "y.tab.c"
    break;

  case 14:
#line 69 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression ++\n"); }
#line 1918 "y.tab.c"
    break;

  case 15:
#line 71 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> postfix_expression --\n"); }
#line 1924 "y.tab.c"
    break;

  case 16:
#line 73 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }
#line 1930 "y.tab.c"
    break;

  case 17:
#line 75 "asgn4_19CS10069_19CS30007.y"
                    { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
#line 1936 "y.tab.c"
    break;

  case 18:
#line 80 "asgn4_19CS10069_19CS30007.y"
                            { printf("argument_expression_list -> assignment_expression\n"); }
#line 1942 "y.tab.c"
    break;

  case 19:
#line 82 "asgn4_19CS10069_19CS30007.y"
                            { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
#line 1948 "y.tab.c"
    break;

  case 22:
#line 92 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> postfix_expression\n"); }
#line 1954 "y.tab.c"
    break;

  case 23:
#line 94 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> ++ unary_expression\n"); }
#line 1960 "y.tab.c"
    break;

  case 24:
#line 96 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> −− unary_expression\n"); }
#line 1966 "y.tab.c"
    break;

  case 25:
#line 98 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> unary_operator cast_expression\n"); }
#line 1972 "y.tab.c"
    break;

  case 26:
#line 100 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> sizeof unary_expression\n"); }
#line 1978 "y.tab.c"
    break;

  case 27:
#line 102 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_expression -> sizeof ( type_name ) \n"); }
#line 1984 "y.tab.c"
    break;

  case 28:
#line 108 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> &\n"); }
#line 1990 "y.tab.c"
    break;

  case 29:
#line 110 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> *\n"); }
#line 1996 "y.tab.c"
    break;

  case 30:
#line 112 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> +\n"); }
#line 2002 "y.tab.c"
    break;

  case 31:
#line 114 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> -\n"); }
#line 2008 "y.tab.c"
    break;

  case 32:
#line 116 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> ~\n"); }
#line 2014 "y.tab.c"
    break;

  case 33:
#line 118 "asgn4_19CS10069_19CS30007.y"
                    { printf("unary_operator -> !\n"); }
#line 2020 "y.tab.c"
    break;

  case 34:
#line 123 "asgn4_19CS10069_19CS30007.y"
                    { printf("cast_expression -> unary_expression\n"); }
#line 2026 "y.tab.c"
    break;

  case 35:
#line 125 "asgn4_19CS10069_19CS30007.y"
                    { printf("cast_expression -> ( type_name ) cast_expression\n"); }
#line 2032 "y.tab.c"
    break;

  case 36:
#line 130 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> cast_expression\n"); }
#line 2038 "y.tab.c"
    break;

  case 37:
#line 132 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
#line 2044 "y.tab.c"
    break;

  case 38:
#line 134 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
#line 2050 "y.tab.c"
    break;

  case 39:
#line 136 "asgn4_19CS10069_19CS30007.y"
                            { printf("multiplicative_expression -> multiplicative_expression modulo cast_expression\n"); }
#line 2056 "y.tab.c"
    break;

  case 40:
#line 142 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> multiplicative_expression\n"); }
#line 2062 "y.tab.c"
    break;

  case 41:
#line 144 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
#line 2068 "y.tab.c"
    break;

  case 42:
#line 146 "asgn4_19CS10069_19CS30007.y"
                            { printf("additive_expression -> additive_expression − multiplicative_expression\n"); }
#line 2074 "y.tab.c"
    break;

  case 43:
#line 151 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> additive_expression\n"); }
#line 2080 "y.tab.c"
    break;

  case 44:
#line 153 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> shift_expression << additive_expression\n"); }
#line 2086 "y.tab.c"
    break;

  case 45:
#line 155 "asgn4_19CS10069_19CS30007.y"
                            { printf("shift_expression -> shift_expression >> additive_expression\n"); }
#line 2092 "y.tab.c"
    break;

  case 46:
#line 160 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> shift_expression\n"); }
#line 2098 "y.tab.c"
    break;

  case 47:
#line 162 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression < shift_expression\n"); }
#line 2104 "y.tab.c"
    break;

  case 48:
#line 164 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression > shift_expression\n"); }
#line 2110 "y.tab.c"
    break;

  case 49:
#line 166 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression <= shift_expression\n"); }
#line 2116 "y.tab.c"
    break;

  case 50:
#line 168 "asgn4_19CS10069_19CS30007.y"
                        { printf("relational_expression -> relational_expression >= shift_expression\n"); }
#line 2122 "y.tab.c"
    break;

  case 51:
#line 173 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> relational_expression\n"); }
#line 2128 "y.tab.c"
    break;

  case 52:
#line 175 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> equality_expression == relational_expression\n"); }
#line 2134 "y.tab.c"
    break;

  case 53:
#line 177 "asgn4_19CS10069_19CS30007.y"
                        { printf("equality_expression -> equality_expression ! = relational_expression\n"); }
#line 2140 "y.tab.c"
    break;

  case 54:
#line 182 "asgn4_19CS10069_19CS30007.y"
                    { printf("AND_expression -> equality_expression\n"); }
#line 2146 "y.tab.c"
    break;

  case 55:
#line 184 "asgn4_19CS10069_19CS30007.y"
                    { printf("AND_expression -> AND_expression & equality_expression\n");}
#line 2152 "y.tab.c"
    break;

  case 56:
#line 189 "asgn4_19CS10069_19CS30007.y"
                            { printf("exclusive_OR_expression -> AND_expression\n"); }
#line 2158 "y.tab.c"
    break;

  case 57:
#line 191 "asgn4_19CS10069_19CS30007.y"
                            { printf("exclusive_OR_expression -> exclusive_OR_expression ˆ AND_expression\n"); }
#line 2164 "y.tab.c"
    break;

  case 58:
#line 196 "asgn4_19CS10069_19CS30007.y"
                            { printf("inclusive_OR_expression -> exclusive_OR_expression\n"); }
#line 2170 "y.tab.c"
    break;

  case 59:
#line 198 "asgn4_19CS10069_19CS30007.y"
                            { printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
#line 2176 "y.tab.c"
    break;

  case 60:
#line 203 "asgn4_19CS10069_19CS30007.y"
                            { printf("logical_AND_expression -> inclusive_OR_expression\n"); }
#line 2182 "y.tab.c"
    break;

  case 61:
#line 205 "asgn4_19CS10069_19CS30007.y"
                            { printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
#line 2188 "y.tab.c"
    break;

  case 62:
#line 210 "asgn4_19CS10069_19CS30007.y"
                        { printf("logical_OR_expression -> logical_AND_expression\n"); }
#line 2194 "y.tab.c"
    break;

  case 63:
#line 212 "asgn4_19CS10069_19CS30007.y"
                        { printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
#line 2200 "y.tab.c"
    break;

  case 64:
#line 217 "asgn4_19CS10069_19CS30007.y"
                        { printf("conditional_expression -> logical_OR_expression\n"); }
#line 2206 "y.tab.c"
    break;

  case 65:
#line 219 "asgn4_19CS10069_19CS30007.y"
                        { printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
#line 2212 "y.tab.c"
    break;

  case 66:
#line 224 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_expression -> conditional_expression\n"); }
#line 2218 "y.tab.c"
    break;

  case 67:
#line 226 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
#line 2224 "y.tab.c"
    break;

  case 68:
#line 232 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> =\n"); }
#line 2230 "y.tab.c"
    break;

  case 69:
#line 234 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> *=\n"); }
#line 2236 "y.tab.c"
    break;

  case 70:
#line 236 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> /=\n"); }
#line 2242 "y.tab.c"
    break;

  case 71:
#line 238 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> %%=\n"); }
#line 2248 "y.tab.c"
    break;

  case 72:
#line 240 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> +=\n"); }
#line 2254 "y.tab.c"
    break;

  case 73:
#line 242 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> -=\n"); }
#line 2260 "y.tab.c"
    break;

  case 74:
#line 244 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> <<=\n"); }
#line 2266 "y.tab.c"
    break;

  case 75:
#line 246 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> >>=\n"); }
#line 2272 "y.tab.c"
    break;

  case 76:
#line 248 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> &=\n"); }
#line 2278 "y.tab.c"
    break;

  case 77:
#line 250 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> ^=\n"); }
#line 2284 "y.tab.c"
    break;

  case 78:
#line 252 "asgn4_19CS10069_19CS30007.y"
                        { printf("assignment_operator -> |=\n"); }
#line 2290 "y.tab.c"
    break;

  case 79:
#line 257 "asgn4_19CS10069_19CS30007.y"
                { printf("expression -> assignment_expression\n"); }
#line 2296 "y.tab.c"
    break;

  case 80:
#line 259 "asgn4_19CS10069_19CS30007.y"
                { printf("expression -> expression , assignment_expression\n"); }
#line 2302 "y.tab.c"
    break;

  case 81:
#line 264 "asgn4_19CS10069_19CS30007.y"
                        { printf("constant_expression -> conditional_expression\n"); }
#line 2308 "y.tab.c"
    break;

  case 82:
#line 269 "asgn4_19CS10069_19CS30007.y"
                { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
#line 2314 "y.tab.c"
    break;

  case 85:
#line 279 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
#line 2320 "y.tab.c"
    break;

  case 86:
#line 281 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
#line 2326 "y.tab.c"
    break;

  case 87:
#line 283 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
#line 2332 "y.tab.c"
    break;

  case 88:
#line 285 "asgn4_19CS10069_19CS30007.y"
                        { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
#line 2338 "y.tab.c"
    break;

  case 91:
#line 295 "asgn4_19CS10069_19CS30007.y"
                        { printf("init_declarator_list -> init_declarator\n"); }
#line 2344 "y.tab.c"
    break;

  case 92:
#line 297 "asgn4_19CS10069_19CS30007.y"
                        { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
#line 2350 "y.tab.c"
    break;

  case 93:
#line 302 "asgn4_19CS10069_19CS30007.y"
                    { printf("init_declarator -> declarator\n"); }
#line 2356 "y.tab.c"
    break;

  case 94:
#line 304 "asgn4_19CS10069_19CS30007.y"
                    { printf("init_declarator -> declarator = initializer\n"); }
#line 2362 "y.tab.c"
    break;

  case 95:
#line 309 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> extern\n"); }
#line 2368 "y.tab.c"
    break;

  case 96:
#line 311 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> static\n"); }
#line 2374 "y.tab.c"
    break;

  case 97:
#line 313 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> auto\n"); }
#line 2380 "y.tab.c"
    break;

  case 98:
#line 315 "asgn4_19CS10069_19CS30007.y"
                            { printf("storage_class_specifier -> register\n"); }
#line 2386 "y.tab.c"
    break;

  case 99:
#line 320 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> void\n"); }
#line 2392 "y.tab.c"
    break;

  case 100:
#line 322 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> char\n"); }
#line 2398 "y.tab.c"
    break;

  case 101:
#line 324 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> short\n"); }
#line 2404 "y.tab.c"
    break;

  case 102:
#line 326 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> int\n"); }
#line 2410 "y.tab.c"
    break;

  case 103:
#line 328 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> long\n"); }
#line 2416 "y.tab.c"
    break;

  case 104:
#line 330 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> float\n"); }
#line 2422 "y.tab.c"
    break;

  case 105:
#line 332 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> double\n"); }
#line 2428 "y.tab.c"
    break;

  case 106:
#line 334 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> signed\n"); }
#line 2434 "y.tab.c"
    break;

  case 107:
#line 336 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> unsigned\n"); }
#line 2440 "y.tab.c"
    break;

  case 108:
#line 338 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _bool\n"); }
#line 2446 "y.tab.c"
    break;

  case 109:
#line 340 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _complex\n"); }
#line 2452 "y.tab.c"
    break;

  case 110:
#line 342 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> _imaginary\n"); }
#line 2458 "y.tab.c"
    break;

  case 111:
#line 344 "asgn4_19CS10069_19CS30007.y"
                { printf("type_specifier -> enum_specifier\n");}
#line 2464 "y.tab.c"
    break;

  case 112:
#line 349 "asgn4_19CS10069_19CS30007.y"
                            { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
#line 2470 "y.tab.c"
    break;

  case 113:
#line 351 "asgn4_19CS10069_19CS30007.y"
                            { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
#line 2476 "y.tab.c"
    break;

  case 116:
#line 361 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }
#line 2482 "y.tab.c"
    break;

  case 117:
#line 363 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); }
#line 2488 "y.tab.c"
    break;

  case 118:
#line 365 "asgn4_19CS10069_19CS30007.y"
                    { printf("enum_specifier -> enum identifier\n"); }
#line 2494 "y.tab.c"
    break;

  case 121:
#line 375 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator_list -> enumerator\n");}
#line 2500 "y.tab.c"
    break;

  case 122:
#line 377 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator_list -> enumerator_list, enumerator\n");}
#line 2506 "y.tab.c"
    break;

  case 123:
#line 382 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator -> enumerator_constant\n");}
#line 2512 "y.tab.c"
    break;

  case 124:
#line 384 "asgn4_19CS10069_19CS30007.y"
                    { printf("enumerator -> enumerator_constant = constant_expression\n");}
#line 2518 "y.tab.c"
    break;

  case 125:
#line 390 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> const\n"); }
#line 2524 "y.tab.c"
    break;

  case 126:
#line 392 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> restrict\n"); }
#line 2530 "y.tab.c"
    break;

  case 127:
#line 394 "asgn4_19CS10069_19CS30007.y"
                { printf("type_qualifier -> volatile\n"); }
#line 2536 "y.tab.c"
    break;

  case 128:
#line 399 "asgn4_19CS10069_19CS30007.y"
                    { printf("function_specifier -> inline\n"); }
#line 2542 "y.tab.c"
    break;

  case 129:
#line 404 "asgn4_19CS10069_19CS30007.y"
                { printf("declarator -> pointer_opt direct_declarator\n"); }
#line 2548 "y.tab.c"
    break;

  case 132:
#line 414 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> identifier\n"); }
#line 2554 "y.tab.c"
    break;

  case 133:
#line 416 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> ( declarator )\n"); }
#line 2560 "y.tab.c"
    break;

  case 134:
#line 418 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
#line 2566 "y.tab.c"
    break;

  case 135:
#line 420 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }
#line 2572 "y.tab.c"
    break;

  case 136:
#line 422 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expression ]\n"); }
#line 2578 "y.tab.c"
    break;

  case 137:
#line 424 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
#line 2584 "y.tab.c"
    break;

  case 138:
#line 426 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
#line 2590 "y.tab.c"
    break;

  case 139:
#line 428 "asgn4_19CS10069_19CS30007.y"
                    { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
#line 2596 "y.tab.c"
    break;

  case 146:
#line 448 "asgn4_19CS10069_19CS30007.y"
            { printf("pointer -> * type_qualifier_list_opt\n"); }
#line 2602 "y.tab.c"
    break;

  case 147:
#line 450 "asgn4_19CS10069_19CS30007.y"
            { printf("pointer -> * type_qualifier_list_opt pointer\n"); }
#line 2608 "y.tab.c"
    break;

  case 148:
#line 455 "asgn4_19CS10069_19CS30007.y"
                        { printf("type_qualifier_list -> type_qualifier\n"); }
#line 2614 "y.tab.c"
    break;

  case 149:
#line 457 "asgn4_19CS10069_19CS30007.y"
                        { printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
#line 2620 "y.tab.c"
    break;

  case 150:
#line 462 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_type_list -> parameter_list\n"); }
#line 2626 "y.tab.c"
    break;

  case 151:
#line 464 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_type_list -> parameter_list , ...\n"); }
#line 2632 "y.tab.c"
    break;

  case 152:
#line 469 "asgn4_19CS10069_19CS30007.y"
                    { printf("parameter_list -> parameter_declaration\n"); }
#line 2638 "y.tab.c"
    break;

  case 153:
#line 471 "asgn4_19CS10069_19CS30007.y"
                    { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
#line 2644 "y.tab.c"
    break;

  case 154:
#line 476 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_declaration -> declaration_specifiers declarator\n"); }
#line 2650 "y.tab.c"
    break;

  case 155:
#line 478 "asgn4_19CS10069_19CS30007.y"
                        { printf("parameter_declaration -> declaration_specifiers\n"); }
#line 2656 "y.tab.c"
    break;

  case 156:
#line 483 "asgn4_19CS10069_19CS30007.y"
                    { printf("identifier_list -> identifier\n"); }
#line 2662 "y.tab.c"
    break;

  case 157:
#line 485 "asgn4_19CS10069_19CS30007.y"
                    { printf("identifier_list -> identifier_list , identifier\n"); }
#line 2668 "y.tab.c"
    break;

  case 158:
#line 490 "asgn4_19CS10069_19CS30007.y"
            { printf("type_name -> specifier_qualifier_list\n"); }
#line 2674 "y.tab.c"
    break;

  case 159:
#line 495 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> assignment_expression\n"); }
#line 2680 "y.tab.c"
    break;

  case 160:
#line 497 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> { initializer_list }\n"); }
#line 2686 "y.tab.c"
    break;

  case 161:
#line 499 "asgn4_19CS10069_19CS30007.y"
                { printf("initializer -> { initializer_list , }\n"); }
#line 2692 "y.tab.c"
    break;

  case 162:
#line 504 "asgn4_19CS10069_19CS30007.y"
                    { printf("initializer_list -> designation_opt initializer\n"); }
#line 2698 "y.tab.c"
    break;

  case 163:
#line 506 "asgn4_19CS10069_19CS30007.y"
                    { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
#line 2704 "y.tab.c"
    break;

  case 166:
#line 516 "asgn4_19CS10069_19CS30007.y"
                { printf("designation -> designator_list =\n"); }
#line 2710 "y.tab.c"
    break;

  case 167:
#line 521 "asgn4_19CS10069_19CS30007.y"
                    { printf("designator_list -> designator\n"); }
#line 2716 "y.tab.c"
    break;

  case 168:
#line 523 "asgn4_19CS10069_19CS30007.y"
                    { printf("designator_list -> designator_list designator\n"); }
#line 2722 "y.tab.c"
    break;

  case 169:
#line 528 "asgn4_19CS10069_19CS30007.y"
                { printf("designator -> [ constant_expression ]\n"); }
#line 2728 "y.tab.c"
    break;

  case 170:
#line 530 "asgn4_19CS10069_19CS30007.y"
                { printf("designator -> . identifier\n"); }
#line 2734 "y.tab.c"
    break;

  case 171:
#line 535 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> labeled_statement\n"); }
#line 2740 "y.tab.c"
    break;

  case 172:
#line 537 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> compound_statement\n"); }
#line 2746 "y.tab.c"
    break;

  case 173:
#line 539 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> expression_statement\n"); }
#line 2752 "y.tab.c"
    break;

  case 174:
#line 541 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> selection_statement\n"); }
#line 2758 "y.tab.c"
    break;

  case 175:
#line 543 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> iteration_statement\n"); }
#line 2764 "y.tab.c"
    break;

  case 176:
#line 545 "asgn4_19CS10069_19CS30007.y"
            { printf("statement -> jump_statement\n"); }
#line 2770 "y.tab.c"
    break;

  case 177:
#line 550 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> identifier : statement\n"); }
#line 2776 "y.tab.c"
    break;

  case 178:
#line 552 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> case constant_expression : statement\n"); }
#line 2782 "y.tab.c"
    break;

  case 179:
#line 554 "asgn4_19CS10069_19CS30007.y"
                    { printf("labeled_statement -> default : statement\n"); }
#line 2788 "y.tab.c"
    break;

  case 180:
#line 559 "asgn4_19CS10069_19CS30007.y"
                        { printf("compound_statement -> { block_item_list_opt }\n"); }
#line 2794 "y.tab.c"
    break;

  case 181:
#line 564 "asgn4_19CS10069_19CS30007.y"
                    { printf("block_item_list -> block_item\n"); }
#line 2800 "y.tab.c"
    break;

  case 182:
#line 566 "asgn4_19CS10069_19CS30007.y"
                    { printf("block_item_list -> block_item_list block_item\n"); }
#line 2806 "y.tab.c"
    break;

  case 185:
#line 576 "asgn4_19CS10069_19CS30007.y"
            { printf("block_item -> declaration\n"); }
#line 2812 "y.tab.c"
    break;

  case 186:
#line 578 "asgn4_19CS10069_19CS30007.y"
            { printf("block_item -> statement\n"); }
#line 2818 "y.tab.c"
    break;

  case 187:
#line 583 "asgn4_19CS10069_19CS30007.y"
                        { printf("expression_statement-> expression_opt ;\n"); }
#line 2824 "y.tab.c"
    break;

  case 188:
#line 588 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> if ( expression ) statement\n"); }
#line 2830 "y.tab.c"
    break;

  case 189:
#line 590 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> if ( expression ) statement else statement\n"); }
#line 2836 "y.tab.c"
    break;

  case 190:
#line 592 "asgn4_19CS10069_19CS30007.y"
                    { printf("selection_statement -> switch ( expression ) statement\n"); }
#line 2842 "y.tab.c"
    break;

  case 191:
#line 597 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> while ( expression ) statement\n"); }
#line 2848 "y.tab.c"
    break;

  case 192:
#line 599 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> do statement while ( expression ) ;\n"); }
#line 2854 "y.tab.c"
    break;

  case 193:
#line 601 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
#line 2860 "y.tab.c"
    break;

  case 194:
#line 603 "asgn4_19CS10069_19CS30007.y"
                    { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
#line 2866 "y.tab.c"
    break;

  case 197:
#line 613 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> goto identifier ;\n"); }
#line 2872 "y.tab.c"
    break;

  case 198:
#line 615 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> continue ;\n"); }
#line 2878 "y.tab.c"
    break;

  case 199:
#line 617 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> break ;\n"); }
#line 2884 "y.tab.c"
    break;

  case 200:
#line 619 "asgn4_19CS10069_19CS30007.y"
                { printf("jump_statement -> return expression_opt ;\n"); }
#line 2890 "y.tab.c"
    break;

  case 201:
#line 624 "asgn4_19CS10069_19CS30007.y"
                    { printf("translation_unit -> external_declaration\n"); }
#line 2896 "y.tab.c"
    break;

  case 202:
#line 626 "asgn4_19CS10069_19CS30007.y"
                    { printf("translation_unit -> external_declaration\n"); }
#line 2902 "y.tab.c"
    break;

  case 203:
#line 631 "asgn4_19CS10069_19CS30007.y"
                        { printf("external_declaration -> function_definition\n"); }
#line 2908 "y.tab.c"
    break;

  case 204:
#line 633 "asgn4_19CS10069_19CS30007.y"
                        { printf("external_declaration -> declaration\n"); }
#line 2914 "y.tab.c"
    break;

  case 205:
#line 638 "asgn4_19CS10069_19CS30007.y"
                    { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
#line 2920 "y.tab.c"
    break;

  case 208:
#line 648 "asgn4_19CS10069_19CS30007.y"
                    { printf("declaration_list -> declaration\n"); }
#line 2926 "y.tab.c"
    break;

  case 209:
#line 650 "asgn4_19CS10069_19CS30007.y"
                    { printf("declaration_list -> declaration_list declaration\n"); }
#line 2932 "y.tab.c"
    break;


#line 2936 "y.tab.c"

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
