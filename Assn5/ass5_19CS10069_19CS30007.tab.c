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
#line 2 "ass5_19CS10069_19CS30007.y"

    #include <bits/stdc++.h>
    #include <sstream>
    #include "ass5_19CS10069_19CS30007_translator.h"
    extern int yylex();
    void yyerror(string s);
    extern string var_type;
    extern vector<label> label_table;
    using namespace std;

#line 81 "ass5_19CS10069_19CS30007.tab.c"

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
#ifndef YY_YY_ASS5_19CS10069_19CS30007_TAB_H_INCLUDED
# define YY_YY_ASS5_19CS10069_19CS30007_TAB_H_INCLUDED
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
#line 13 "ass5_19CS10069_19CS30007.y"

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

#line 228 "ass5_19CS10069_19CS30007.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS5_19CS10069_19CS30007_TAB_H_INCLUDED  */



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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1357

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

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
      82,    83,     2,     2,    89,     2,    86,     2,     2,     2,
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
       0,   103,   103,   113,   120,   127,   134,   151,   166,   184,
     191,   198,   207,   213,   217,   225,   232,   255,   263,   265,
     267,   275,   283,   285,   290,   295,   303,   307,   314,   316,
     322,   328,   361,   363,   369,   371,   373,   375,   377,   379,
     384,   386,   394,   411,   423,   437,   452,   454,   465,   480,
     482,   493,   509,   511,   527,   544,   560,   579,   581,   599,
     621,   623,   642,   644,   663,   665,   682,   684,   697,   699,
     712,   714,   736,   738,   761,   763,   765,   767,   769,   771,
     773,   775,   777,   779,   781,   786,   788,   793,   798,   803,
     804,   808,   810,   812,   814,   819,   820,   824,   826,   831,
     833,   841,   843,   845,   847,   852,   854,   856,   858,   860,
     862,   864,   866,   868,   870,   872,   874,   876,   878,   883,
     885,   890,   891,   895,   897,   899,   904,   906,   911,   913,
     918,   920,   925,   927,   931,   933,   935,   940,   942,   944,
     949,   950,   954,   956,   962,   964,   970,   972,   974,   979,
     984,   991,   997,  1003,  1004,  1005,  1006,  1027,  1047,  1048,
    1049,  1050,  1051,  1064,  1065,  1081,  1082,  1087,  1091,  1098,
    1100,  1105,  1107,  1112,  1114,  1119,  1121,  1126,  1128,  1133,
    1138,  1140,  1142,  1147,  1149,  1154,  1155,  1159,  1164,  1166,
    1171,  1173,  1178,  1180,  1182,  1187,  1189,  1191,  1196,  1197,
    1202,  1203,  1204,  1207,  1221,  1223,  1228,  1236,  1238,  1246,
    1248,  1252,  1254,  1259,  1261,  1266,  1276,  1287,  1292,  1306,
    1320,  1330,  1340,  1354,  1368,  1382,  1398,  1415,  1417,  1419,
    1424,  1432,  1434,  1439,  1441,  1446,  1458,  1459,  1463,  1465
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
  "INTEGER_CONST", "CHAR_CONST", "FLOAT_CONST", "STRING_LITERAL", "PLUS",
  "MINUS", "MULT", "DIVIDE", "ARROW", "INCREMENT", "DECREMENT", "RSHIFT",
  "LSHIFT", "LT", "GT", "LEQ", "GEQ", "EQ", "NEQ", "BITWISE_OR",
  "LOGICAL_OR", "BITWISE_AND", "LOGICAL_AND", "XOR", "BITWISE_NOT",
  "LOGICAL_NOT", "ELLIPSIS", "MODULO", "ASGN", "ENUMERATION_CONST",
  "ADD_ASGN", "SUB_ASGN", "MULT_ASGN", "DIV_ASGN", "MOD_ASGN",
  "LSHIFT_ASGN", "RSHIFT_ASGN", "AND_ASGN", "OR_ASGN", "XOR_ASGN",
  "\"then\"", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','",
  "'?'", "':'", "';'", "$accept", "M", "F", "W", "D", "X", "N",
  "changetable", "constant", "primary_expression", "postfix_expression",
  "argument_expression_list", "argument_expression_list_opt",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "identifier_opt", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "loop_statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item_list_opt", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
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
     335,   336,    40,    41,    91,    93,    46,   123,   125,    44,
      63,    58,    59
};
# endif

#define YYPACT_NINF (-329)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-238)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1295,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,   -17,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,    -2,  1295,  1295,  -329,   -12,
    -329,  1295,  1295,  1270,  -329,  -329,   -55,   -45,  -329,    41,
      -2,   -41,   -42,  -329,  1161,   122,    -3,  -329,  -329,  -329,
     -32,  1320,  -329,  -329,  -329,  -329,    51,  -329,    69,    41,
      37,  -329,    -2,   753,  -329,    -2,  -329,  1295,    88,   807,
     122,  1320,  1320,   152,   981,  -329,  1320,    81,    -7,  -329,
    -329,  -329,  -329,  -329,   120,  1035,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  1064,  1064,  -329,  -329,  -329,   925,    92,
    -329,  -329,   274,   269,  1093,  -329,    65,   203,   215,   200,
     211,    83,    99,   133,   156,   -49,  -329,  -329,  -329,   142,
    -329,  -329,  1186,   -65,  1006,   155,  -329,   179,   854,  1004,
    -329,  -329,  1093,  -329,   105,  -329,   180,  -329,  -329,  -329,
    1093,  -329,   -18,   925,  -329,   925,  -329,  -329,  -329,   -31,
    -329,   195,  1093,   243,   185,   753,  -329,    45,  -329,   255,
    -329,  -329,  1093,  1093,   260,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  1093,  -329,  -329,  1093,
    1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,
    1093,  1093,  1093,  1093,  1093,  -329,  -329,   145,   376,  -329,
      -2,   220,   217,  -329,  -329,   268,   230,  1006,  -329,  -329,
     242,  -329,   247,  -329,  -329,  -329,   126,  -329,  1093,  -329,
    -329,  -329,   251,   252,  -329,  1093,   780,   254,  -329,  -329,
     121,  -329,  -329,  -329,  -329,   261,   272,  -329,   -46,  -329,
    -329,  -329,  -329,  -329,    65,    65,   203,   203,   215,   215,
     215,   215,   200,   200,   211,    83,    99,  1093,  1093,  -329,
     259,   106,  1093,  -329,  -329,   312,   262,   277,  -329,   282,
     276,   278,  -329,  -329,   144,  -329,  -329,  -329,  -329,   280,
     283,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  1217,  -329,
    -329,   285,  -329,  -329,  -329,  -329,   286,   286,  -329,    92,
    -329,  -329,  -329,   753,  1093,  -329,  -329,   133,   156,  1093,
    -329,  -329,   150,   281,   292,   293,   273,  -329,  1093,   290,
    1093,   440,  -329,  -329,  -329,   376,  -329,  -329,  -329,  -329,
     193,  -329,  -329,   301,  -329,   440,  -329,  -329,  -329,   301,
    -329,   632,   -27,  -329,   440,   376,  -329,  -329,   136,   316,
    -329,  -329,  -329,   337,   376,  -329,  -329,  -329,  -329,  -329,
    -329,   440,  -329,   336,  -329,  -329,   710,  -329,  -329,   340,
     418,  -329,  -329,  1093,  -329,  -329,  1093,   440,  -329,   347,
    -329,   271,   271,    71,  -329,   423,  1093,  -329,  -329,   344,
     419,   350,    76,  1093,  1093,  -329,   632,  -329,  1093,   342,
     301,   301,   376,  -329,   440,    94,  -329,   352,   353,   349,
    -329,   362,  -329,  -329,  -329,  -329,   504,   568,   376,  -329,
     376,  -329,   351,   367,  -329,  -329
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   110,   107,   106,   114,   116,   115,   108,   111,   109,
     105,   112,   103,   113,   141,   127,   126,   146,   102,   104,
     147,   148,   101,   149,   234,    90,    96,    96,   118,     0,
     117,    96,    96,     0,   231,   233,   139,     0,   152,   166,
       0,     0,    89,    97,    99,   151,     0,    95,    91,    92,
     125,     0,    93,    94,     1,   232,     0,   169,   167,   165,
       0,    88,     0,     0,   238,    90,     8,   236,     8,     0,
     150,     0,   122,     0,     0,   128,   122,   144,     0,   142,
     168,   170,   153,    98,    99,     0,    12,     9,    11,    10,
      36,    37,    35,     0,     0,    34,    38,    39,     0,   186,
      13,    15,    28,    40,     0,    42,    46,    49,    52,    57,
      60,    62,    64,    66,    68,    70,    72,   180,   100,     0,
     239,   177,     0,     0,     0,    35,   157,     0,     0,     0,
     121,   119,     0,   130,     0,   132,   136,   123,   129,   120,
       0,   137,     0,     0,    32,     0,    29,    30,    85,     0,
     179,     0,     0,     0,     0,     0,   185,     0,   188,     0,
      20,    21,    27,     0,     0,    74,    78,    79,    75,    76,
      77,    80,    81,    82,    84,    83,     0,    40,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     2,     0,   210,   164,
     176,     0,   171,   173,   163,     0,     0,     0,   161,   156,
      35,   155,     0,   124,    87,   134,     0,   131,     0,   145,
     138,   143,     0,     0,    14,     0,     0,     0,   191,   181,
     186,   183,   187,   189,    19,    26,     0,    24,     0,    18,
      73,    43,    44,    45,    47,    48,    51,    50,    53,    54,
      55,    56,    58,    59,    61,    63,    65,     0,     0,     2,
       0,     0,     0,     3,     4,     0,     0,     0,     5,     0,
       0,    12,     6,   213,     0,   211,   212,   192,   193,     2,
       0,   207,   194,   195,   196,   197,   175,   162,     0,   178,
     159,     0,   160,   154,   133,   135,    33,     0,    86,   186,
      41,   190,   182,     0,     0,    17,    16,    67,    69,     0,
     228,   230,     0,     0,     0,     0,     0,   227,     0,     2,
       0,     0,     2,     8,   214,     0,   235,   172,   174,   158,
       0,   184,    25,     7,   229,     0,     6,     6,   226,     7,
       2,     0,     0,   205,     0,   210,   208,    22,   186,     0,
     204,     8,     8,     0,   210,     2,   198,   199,   200,   201,
     202,     0,   203,     0,    23,     2,     0,     2,     2,     0,
       0,   217,   206,     0,     2,     2,     0,     0,     2,     0,
      71,     0,     0,     0,     7,     0,     0,     2,     2,     2,
     215,     0,     0,     0,     0,     2,     0,     2,     0,     0,
       7,     7,   210,   218,     0,     0,   220,     0,     0,     0,
     216,     0,     2,     2,   219,   221,     0,     0,   210,   222,
     210,   223,     0,     0,   224,   225
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -329,  -137,  -329,  -329,  -329,   -51,  -107,   -64,  -329,  -329,
    -329,  -329,  -329,   -83,  -329,   -96,   116,   135,    27,   139,
     264,   266,   263,   204,   202,  -329,  -126,   -38,  -329,   -97,
    -125,     0,  -329,     3,   159,  -329,   400,  -329,   -11,   -22,
     388,  -329,  -329,   394,   -58,  -329,   250,  -329,  -329,  -329,
     325,   233,  -329,   -20,   424,  -329,   411,   -52,  -329,  -329,
     183,  -329,   118,  -148,   173,  -221,  -329,  -329,   317,  -177,
    -255,  -328,  -329,  -329,   -92,   151,  -171,  -322,  -277,  -215,
    -329,   442,  -329,  -329,  -329
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   257,   314,   315,   319,   323,   197,   119,   100,   101,
     102,   235,   236,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   148,   176,   274,
     215,   275,    41,    65,    48,    42,    43,    26,    27,    73,
     131,    28,    29,    74,    75,   134,   135,    30,    37,    78,
      79,    31,    32,    84,    45,    58,    46,    59,   201,   202,
     203,   123,   151,   118,   154,   155,   156,   157,   158,   276,
     355,   277,   278,   279,   280,   281,   282,   283,   284,   285,
      33,    34,    35,    66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   149,   144,    25,   122,    44,   214,   231,   178,   303,
     146,   147,   196,   356,   214,   219,   138,   128,   204,   358,
      60,   177,    77,    36,   205,   117,   214,   227,    50,    47,
      47,   127,  -140,    24,    47,    47,    25,    38,    38,   306,
      72,    -7,    56,   225,    64,    39,   149,    62,   149,   177,
     130,    61,   224,   136,   130,    71,   361,   177,   225,   258,
      72,    72,   225,    72,   359,    72,   238,   120,   356,   177,
     220,   138,   207,    17,   358,    51,   150,    20,    21,    40,
      40,   141,   142,   241,   242,   243,   206,    72,   356,   356,
     212,    77,   214,   295,   358,   358,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   179,   180,   232,    85,    39,   117,    72,   359,
      82,   150,   309,   150,   237,   200,   360,   303,   121,   152,
     300,   153,    72,   181,    72,   177,   214,   313,   240,   359,
     359,   403,   325,   177,   343,   192,    86,    87,    88,    89,
     140,    90,    91,    92,   389,   331,    93,    94,   350,   399,
     225,   419,   421,   193,   312,   225,    38,   362,    95,   291,
     357,    96,    97,    39,   177,   177,   152,   411,   153,   177,
     286,   360,   341,   225,   371,   344,    49,   298,    98,    63,
      52,    53,    38,   194,   216,   375,   136,   217,   311,    39,
     384,   360,   360,   354,    68,   152,    69,   153,    40,   302,
     387,   388,   333,   248,   249,   250,   251,   132,   370,   195,
     152,   339,   153,   342,   364,   357,   349,   410,   373,   198,
     376,   377,   353,   225,    40,   259,   324,   381,   382,   225,
     208,   385,   334,   132,   133,   357,   357,   380,   182,   183,
     393,   394,   396,   363,   186,   187,   188,   189,   402,   345,
     404,   222,   369,   223,   209,   117,   332,   184,   185,   190,
     191,   218,    57,   229,   230,   416,   417,   390,   226,   383,
      85,   347,   348,   228,    76,   351,   352,   366,   367,   392,
     177,   200,    81,   407,   408,   234,   400,   401,   244,   245,
     239,   405,    57,   287,    76,    76,   288,    76,   289,    76,
     409,    86,    87,    88,    89,   290,    90,    91,    92,   246,
     247,    93,    94,   159,   160,   161,   422,   292,   423,   252,
     253,    76,   293,    95,   296,   297,    96,    97,   165,   301,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     304,   310,   316,    98,   317,   305,   162,    57,   163,   318,
     164,    81,    76,   273,   320,   338,   374,   321,  -209,   322,
     329,   326,   335,   299,   336,   337,    76,   340,    76,   260,
     261,   262,   263,   264,   265,    85,   266,   267,   268,   269,
     225,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   365,    17,   270,
      18,    19,    20,    21,    22,    23,   271,    87,    88,    89,
     368,    90,    91,    92,   372,   379,    93,    94,   378,   386,
     391,   395,   398,   397,   406,   412,   413,   414,    95,   424,
      81,    96,    97,   260,   261,   262,   263,   264,   265,    85,
     266,   267,   268,   269,   415,   425,   254,   256,    98,   255,
     308,   307,    83,   272,   139,   129,   294,   221,   273,    80,
      70,   328,   330,   270,   233,    55,   346,     0,     0,     0,
     271,    87,    88,    89,     0,    90,    91,    92,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,    96,    97,   260,   261,   262,
     263,   264,   265,    85,   266,   267,   268,   269,     0,     0,
       0,     0,    98,     0,     0,     0,     0,   272,     0,     0,
       0,     0,   273,     0,     0,     0,     0,   270,     0,     0,
       0,     0,     0,     0,   271,    87,    88,    89,     0,    90,
      91,    92,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,    96,
      97,   260,   261,   262,   263,   264,   265,    85,   266,   267,
     268,   269,     0,     0,     0,     0,    98,     0,     0,     0,
       0,   418,     0,     0,     0,     0,   273,     0,     0,     0,
       0,   270,     0,     0,     0,     0,     0,     0,   271,    87,
      88,    89,     0,    90,    91,    92,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,    96,    97,   260,   261,   262,   263,   264,
     265,    85,   266,   267,   268,   269,     0,     0,     0,     0,
      98,     0,     0,     0,     0,   420,     0,     0,     0,     0,
     273,     0,     0,     0,     0,   270,     0,     0,     0,     0,
       0,     0,   271,    87,    88,    89,     0,    90,    91,    92,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,     0,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,    85,
       0,     0,     0,     0,   273,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      86,    87,    88,    89,     0,    90,    91,    92,     0,     0,
      93,    94,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    98,    86,    87,    88,    89,     0,    90,    91,
      92,     0,   273,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    85,     0,    96,    97,
      86,    87,    88,    89,     0,    90,    91,    92,     0,     0,
      93,    94,     0,     0,     0,    98,     0,     0,     0,    17,
      99,   124,    95,    20,    21,    96,    97,    86,    87,    88,
      89,     0,    90,    91,   125,     0,     0,    93,    94,     0,
       0,     0,    98,    85,     0,     0,     0,   299,     0,    95,
       0,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,    98,
      20,    21,   126,     0,    86,    87,    88,    89,     0,    90,
      91,   210,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,    98,     0,     0,   211,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    13,    14,    15,    16,     0,    17,     0,     0,
       0,    20,    21,     0,     0,    86,    87,    88,    89,     0,
      90,    91,    92,     0,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
      96,    97,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    98,    13,    14,
      15,    16,     0,    17,     0,    85,     0,    20,    21,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       0,    13,    14,    15,    16,     0,    17,     0,    17,     0,
      20,    21,    20,    21,    85,     0,    86,    87,    88,    89,
       0,    90,    91,    92,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,   137,
       0,    96,    97,    85,     0,    86,    87,    88,    89,     0,
      90,    91,    92,     0,     0,    93,    94,     0,    98,     0,
       0,     0,   213,     0,     0,     0,     0,    95,     0,     0,
      96,    97,    85,     0,    86,    87,    88,    89,     0,    90,
      91,    92,     0,     0,    93,    94,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,    96,
      97,     0,     0,    86,    87,    88,    89,     0,    90,    91,
      92,     0,     0,    93,    94,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
      63,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,  -237,    17,
       0,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   327,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    13,    14,    15,
      16,     0,    17,     0,     0,     0,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    98,    85,     0,    68,    25,   132,   155,   104,   230,
      93,    94,    61,   341,   140,   140,    74,    69,    83,   341,
      40,   104,    40,    40,    89,    63,   152,   152,    40,    26,
      27,    69,    87,    33,    31,    32,    33,    40,    40,    85,
      51,    90,    87,    89,    44,    47,   143,    89,   145,   132,
      72,    92,    83,    73,    76,    87,    83,   140,    89,   196,
      71,    72,    89,    74,   341,    76,   163,    67,   396,   152,
      88,   129,   124,    32,   396,    87,    98,    36,    37,    82,
      82,    88,    89,   179,   180,   181,   124,    98,   416,   417,
     128,    40,   218,   218,   416,   417,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    47,    48,    69,     9,    47,   155,   129,   396,
      83,   143,   259,   145,   162,   122,   341,   348,    40,    84,
     226,    86,   143,    68,   145,   218,   262,   262,   176,   416,
     417,   396,   279,   226,   321,    62,    40,    41,    42,    43,
      69,    45,    46,    47,    83,   303,    50,    51,   335,    83,
      89,   416,   417,    64,   261,    89,    40,   344,    62,   207,
     341,    65,    66,    47,   257,   258,    84,    83,    86,   262,
     200,   396,   319,    89,   361,   322,    27,   225,    82,    69,
      31,    32,    40,    60,    89,   366,   216,    92,    92,    47,
     377,   416,   417,   340,    82,    84,    84,    86,    82,    88,
     381,   382,   309,   186,   187,   188,   189,    91,   355,    63,
      84,   318,    86,   320,    88,   396,   333,   404,   365,    87,
     367,   368,   339,    89,    82,    90,    92,   374,   375,    89,
      85,   378,    92,    91,    92,   416,   417,   373,    45,    46,
     387,   388,   389,   345,    54,    55,    56,    57,   395,   323,
     397,   143,   354,   145,    85,   303,   304,    52,    53,    58,
      59,    91,    39,    88,    89,   412,   413,   384,    83,   376,
       9,    88,    89,    40,    51,   336,   337,   351,   352,   386,
     373,   288,    59,   400,   401,    40,   393,   394,   182,   183,
      40,   398,    69,    83,    71,    72,    89,    74,    40,    76,
     402,    40,    41,    42,    43,    85,    45,    46,    47,   184,
     185,    50,    51,    49,    50,    51,   418,    85,   420,   190,
     191,    98,    85,    62,    83,    83,    65,    66,    69,    85,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      89,    92,    40,    82,    92,    83,    82,   124,    84,    82,
      86,   128,   129,    92,    82,    92,   366,    91,    88,    91,
      85,    88,    91,    87,    82,    82,   143,    87,   145,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      89,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    91,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      83,    45,    46,    47,    88,     7,    50,    51,    88,    82,
       7,    87,    82,    14,    92,    83,    83,    88,    62,    88,
     207,    65,    66,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    92,    88,   192,   194,    82,   193,
     258,   257,    62,    87,    76,    71,   216,   142,    92,    58,
      46,   288,   299,    33,   157,    33,   325,    -1,    -1,    -1,
      40,    41,    42,    43,    -1,    45,    46,    47,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    -1,    45,
      46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    -1,    45,    46,    47,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    -1,    45,    46,    47,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    92,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    -1,    -1,
      50,    51,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    82,    40,    41,    42,    43,    -1,    45,    46,
      47,    -1,    92,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,     9,    -1,    65,    66,
      40,    41,    42,    43,    -1,    45,    46,    47,    -1,    -1,
      50,    51,    -1,    -1,    -1,    82,    -1,    -1,    -1,    32,
      87,    34,    62,    36,    37,    65,    66,    40,    41,    42,
      43,    -1,    45,    46,    47,    -1,    -1,    50,    51,    -1,
      -1,    -1,    82,     9,    -1,    -1,    -1,    87,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    82,
      36,    37,    85,    -1,    40,    41,    42,    43,    -1,    45,
      46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    82,    -1,    -1,    85,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    36,    37,    -1,    -1,    40,    41,    42,    43,    -1,
      45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    82,    27,    28,
      29,    30,    -1,    32,    -1,     9,    -1,    36,    37,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    30,    -1,    32,    -1,    32,    -1,
      36,    37,    36,    37,     9,    -1,    40,    41,    42,    43,
      -1,    45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    88,
      -1,    65,    66,     9,    -1,    40,    41,    42,    43,    -1,
      45,    46,    47,    -1,    -1,    50,    51,    -1,    82,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,     9,    -1,    40,    41,    42,    43,    -1,    45,
      46,    47,    -1,    -1,    50,    51,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    -1,    -1,    40,    41,    42,    43,    -1,    45,    46,
      47,    -1,    -1,    50,    51,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      69,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    87,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
       0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    34,    35,
      36,    37,    38,    39,   124,   126,   130,   131,   134,   135,
     140,   144,   145,   173,   174,   175,    40,   141,    40,    47,
      82,   125,   128,   129,   146,   147,   149,   126,   127,   127,
      40,    87,   127,   127,     0,   174,    87,   144,   148,   150,
     146,    92,    89,    69,   124,   126,   176,   177,    82,    84,
     147,    87,   131,   132,   136,   137,   144,    40,   142,   143,
     149,   144,    83,   129,   146,     9,    40,    41,    42,    43,
      45,    46,    47,    50,    51,    62,    65,    66,    82,    87,
     101,   102,   103,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   156,   100,
     124,    40,   100,   154,    34,    47,    85,   120,   150,   136,
     132,   133,    91,    92,   138,   139,   146,    88,   137,   133,
      69,    88,    89,    82,   106,    82,   106,   106,   120,   122,
     132,   155,    84,    86,   157,   158,   159,   160,   161,    49,
      50,    51,    82,    84,    86,    69,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   121,   106,   108,    47,
      48,    68,    45,    46,    52,    53,    54,    55,    56,    57,
      58,    59,    62,    64,    60,    63,    61,    99,    87,    83,
     126,   151,   152,   153,    83,    89,   120,   150,    85,    85,
      47,    85,   120,    88,   119,   123,    89,    92,    91,   123,
      88,   143,   155,   155,    83,    89,    83,   123,    40,    88,
      89,   156,    69,   161,    40,   104,   105,   120,   122,    40,
     120,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   112,   112,   113,   114,   115,    94,    94,    90,
       3,     4,     5,     6,     7,     8,    10,    11,    12,    13,
      33,    40,    87,    92,   122,   124,   162,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   146,    83,    89,    40,
      85,   120,    85,    85,   139,   123,    83,    83,   120,    87,
     108,    85,    88,   158,    89,    83,    85,   116,   117,    94,
      92,    92,   122,   123,    95,    96,    40,    92,    82,    97,
      82,    91,    91,    98,    92,    94,    88,    67,   153,    85,
     157,   156,   120,   122,    92,    91,    82,    82,    92,   122,
      87,    94,   122,   162,    94,   100,   168,    88,    89,    99,
     162,    98,    98,    99,    94,   163,   164,   169,   170,   171,
     172,    83,   162,   167,    88,    91,   100,   100,    83,   167,
      94,   162,    88,    94,   124,   169,    94,    94,    88,     7,
     119,    94,    94,   122,   162,    94,    82,   169,   169,    83,
      99,     7,   122,    94,    94,    87,    94,    14,    82,    83,
     122,   122,    94,   163,    94,   122,    92,    99,    99,   167,
     162,    83,    83,    83,    88,    92,    94,    94,    87,   163,
      87,   163,   167,   167,    88,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     101,   101,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   109,   109,   110,   110,   110,   111,
     111,   111,   112,   112,   112,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   124,   125,
     125,   126,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   133,   133,   134,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   140,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   145,
     146,   146,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     156,   156,   156,   157,   157,   158,   158,   159,   160,   160,
     161,   161,   162,   162,   162,   162,   162,   162,   163,   163,
     163,   163,   163,   164,   164,   164,   165,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   170,   171,   171,
     171,   171,   171,   171,   171,   171,   172,   172,   172,   172,
     172,   173,   173,   174,   174,   175,   176,   176,   177,   177
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,     0,     0,     1,
       1,     1,     1,     1,     3,     1,     4,     4,     3,     3,
       2,     2,     6,     7,     1,     3,     1,     0,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     4,
       1,     9,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       0,     2,     2,     2,     2,     1,     0,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     0,     4,     5,     2,     1,     1,     1,     2,
       2,     3,     1,     3,     2,     3,     1,     5,     6,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     3,     5,     4,     4,     3,     6,     5,
       5,     4,     5,     4,     4,     1,     0,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     2,     4,     1,     0,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     5,     1,     3,     1,
       0,     1,     1,     1,     2,     8,    11,     5,    10,    12,
      10,    12,    14,    14,    16,    16,     3,     2,     2,     3,
       2,     1,     2,     1,     1,     7,     1,     0,     1,     2
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
#line 104 "ass5_19CS10069_19CS30007.y"
        {
		/**
		  * backpatching,stores the index of the next quad to be generated
		  * Used in various control statements
		  */
		(yyval.instr_number) = nextinstr();
	}
#line 1933 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 3:
#line 114 "ass5_19CS10069_19CS30007.y"
        {
		// rule for identifying the start of the for statement
		loop_name = "FOR";
	}
#line 1942 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 4:
#line 121 "ass5_19CS10069_19CS30007.y"
        {
		// rule for identifying the start of a while loop
		loop_name = "WHILE";
	}
#line 1951 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 5:
#line 128 "ass5_19CS10069_19CS30007.y"
        {
		// rule for identifyiong the start of the do while statement
		loop_name = "DO_WHILE";
	}
#line 1960 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 6:
#line 135 "ass5_19CS10069_19CS30007.y"
        {
		/**
		  * change the current symbol pointer
		  * This will be used for nested block statements
		  */
		string name = ST->name+"."+loop_name+"$"+to_string(table_count); // give name for nested table
		table_count++; // increment the table count
		sym* s = ST->lookup(name); // lookup the table for new entry
		s->nested = new symtable(name);
		s->nested->parent = ST;
		s->name = name;
		s->type = new symboltype("block");
		currSymbolPtr = s;
	}
#line 1979 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 7:
#line 152 "ass5_19CS10069_19CS30007.y"
        {
		/** 
		  * For backpatching, which inserts a goto 
		  * and stores the index of the next goto 
		  * statement to guard against fallthrough
		  * N->nextlist = makelist(nextinstr) we have defined nextlist for Statements
		  */
		(yyval.stat) = new Statement();
		(yyval.stat)->nextlist=makelist(nextinstr());
		emit("goto","");
	}
#line 1995 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 8:
#line 167 "ass5_19CS10069_19CS30007.y"
        {    
		parST = ST;                                                               // Used for changing to symbol table for a function
		if(currSymbolPtr->nested==NULL) 
		{
			changeTable(new symtable(""));	                                           // Function symbol table doesn't already exist	
		}
		else 
		{
			changeTable(currSymbolPtr ->nested);						               // Function symbol table already exists	
			emit("label", ST->name);
		}
	}
#line 2012 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 9:
#line 185 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=new Expression();	
                        string p=convertIntToString((yyvsp[0].int_val));
                        (yyval.expr)->loc=gentemp(new symboltype("int"),p);
                        emit("=",(yyval.expr)->loc->name,p);
                    }
#line 2023 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 10:
#line 192 "ass5_19CS10069_19CS30007.y"
                    {                                                                         // create new expression and store the value of the constant in a temporary
                        (yyval.expr)=new Expression();
                        string p=convertFloatToString((yyvsp[0].float_val));
                        (yyval.expr)->loc=gentemp(new symboltype("float"),p);
                        emit("=",(yyval.expr)->loc->name,p);
                    }
#line 2034 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 11:
#line 199 "ass5_19CS10069_19CS30007.y"
                    {                                                                         // create new expression and store the value of the constant in a temporary
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_val));
                        emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 2044 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 12:
#line 208 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.expr)=new Expression();                                                  // create new expression and store pointer to ST entry in the location			
                        (yyval.expr)->loc=(yyvsp[0].symp);
                        (yyval.expr)->type="not-boolean";
                    }
#line 2054 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 13:
#line 214 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr) = (yyvsp[0].expr); 
                    }
#line 2062 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 14:
#line 218 "ass5_19CS10069_19CS30007.y"
                    {                                                                          // simply equal to expression
                        (yyval.expr)=(yyvsp[-1].expr);
                    }
#line 2070 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 15:
#line 226 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=(yyvsp[0].expr)->loc;	
                        (yyval.A)->type=(yyvsp[0].expr)->loc->type;	
                        (yyval.A)->loc=(yyval.A)->Array;
                    }
#line 2081 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 16:
#line 233 "ass5_19CS10069_19CS30007.y"
                    { 	
		
                        (yyval.A)=new Array();
                        (yyval.A)->type=(yyvsp[-3].A)->type->arrtype;                 // type=type of element	
                        (yyval.A)->Array=(yyvsp[-3].A)->Array;                        // copy the base
                        (yyval.A)->loc=gentemp(new symboltype("int"));     // store computed address
                        (yyval.A)->atype="arr";                            //atype is arr.
                        if((yyvsp[-3].A)->atype=="arr") 
                        {			                               // if already arr, multiply the size of the sub-type of Array with the expression value and add
                            sym* t=gentemp(new symboltype("int"));
                            int p=computeSize((yyval.A)->type);
                            string str=convertIntToString(p);
                            emit("*",t->name,(yyvsp[-1].expr)->loc->name,str);
                            emit("+",(yyval.A)->loc->name,(yyvsp[-3].A)->loc->name,t->name);
                        }
                        else 
                        {                        //if a 1D Array, simply calculate size
                            int p=computeSize((yyval.A)->type);	
                            string str=convertIntToString(p);
                            emit("*",(yyval.A)->loc->name,(yyvsp[-1].expr)->loc->name,str);
                        }
                    }
#line 2108 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 17:
#line 256 "ass5_19CS10069_19CS30007.y"
                    {
                        //call the function with number of parameters from argument_expression_list_opt
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-3].A)->type);
                        string str=convertIntToString((yyvsp[-1].num_params));
                        emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
                    }
#line 2120 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 18:
#line 264 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2126 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 19:
#line 266 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2132 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 20:
#line 268 "ass5_19CS10069_19CS30007.y"
                    { 
                        //generate new temporary, equate it to old one and then add 1
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
                        emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
                    }
#line 2144 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 21:
#line 276 "ass5_19CS10069_19CS30007.y"
                    {
                        //generate new temporary, equate it to old one and then subtract 1
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
                        emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");	
                    }
#line 2156 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 22:
#line 284 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2162 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 23:
#line 286 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2168 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 24:
#line 291 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=1;                                      //one argument and emit param
                        emit("param",(yyvsp[0].expr)->loc->name);	
                    }
#line 2177 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 25:
#line 296 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //one more argument and emit param		 
                        emit("param",(yyvsp[0].expr)->loc->name);
                    }
#line 2186 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 26:
#line 304 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=(yyvsp[0].num_params); // assign $$ =  $1
                    }
#line 2194 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 27:
#line 308 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.num_params) = 0; // no arguements
                    }
#line 2202 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 28:
#line 315 "ass5_19CS10069_19CS30007.y"
                    { (yyval.A)=(yyvsp[0].A); /* assign $$ =  $1*/}
#line 2208 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 29:
#line 317 "ass5_19CS10069_19CS30007.y"
                    {  	
                        //simply add 1
                        emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");		
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2218 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 30:
#line 323 "ass5_19CS10069_19CS30007.y"
                    {
                        //simply subtract 1
                        emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2228 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 31:
#line 329 "ass5_19CS10069_19CS30007.y"
                    {   //if it is of this type, where unary operator is involved
                        (yyval.A)=new Array();
                        switch((yyvsp[-1].unaryOp))
                        {	  
                            case '&':                                                  //address of something, then generate a pointer temporary and emit the quad
                                (yyval.A)->Array=gentemp(new symboltype("ptr"));
                                (yyval.A)->Array->type->arrtype=(yyvsp[0].A)->Array->type; 
                                emit("=&",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;
                            case '*':                                                   // value of something, then generate a temporary of the corresponding type and emit the quad	
                                (yyval.A)->atype="ptr";
                                (yyval.A)->loc=gentemp((yyvsp[0].A)->Array->type->arrtype);
                                (yyval.A)->Array=(yyvsp[0].A)->Array;
                                emit("=*",(yyval.A)->loc->name,(yyvsp[0].A)->Array->name);
                                break;
                            case '+':  
                                (yyval.A)=(yyvsp[0].A);
                                break;                 //unary plus, do nothing
                            case '-':				   //unary minus, generate new temporary of the same base type and make it negative of current one
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                emit("uminus",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;
                            case '~':                   //bitwise not, generate new temporary of the same base type and make it negative of current one
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                emit("~",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;
                            case '!':				//logical not, generate new temporary of the same base type and make it negative of current one
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                emit("!",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;
                        }
                    }
#line 2265 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 32:
#line 362 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2271 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 33:
#line 364 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2277 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 34:
#line 370 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '&'; }
#line 2283 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 35:
#line 372 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '*'; }
#line 2289 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 36:
#line 374 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '+'; }
#line 2295 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 37:
#line 376 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '-'; }
#line 2301 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 38:
#line 378 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '~'; }
#line 2307 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 39:
#line 380 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '!'; }
#line 2313 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 40:
#line 385 "ass5_19CS10069_19CS30007.y"
                    { (yyval.A) = (yyvsp[0].A); /* simply assign*/ }
#line 2319 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 41:
#line 387 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             //generate a new symbol of the given type	
                    }
#line 2328 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 42:
#line 395 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.expr) = new Expression();             //generate new expression							    
                        if((yyvsp[0].A)->atype=="arr") 			   //if it is of type arr
                        {
                            (yyval.expr)->loc = gentemp((yyvsp[0].A)->loc->type);	
                            emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].A)->Array->name, (yyvsp[0].A)->loc->name);     //emit with Array right
                        }
                        else if((yyvsp[0].A)->atype=="ptr")         //if it is of type ptr
                        { 
                            (yyval.expr)->loc = (yyvsp[0].A)->loc;        //equate the locs
                        }
                        else
                        {
                            (yyval.expr)->loc = (yyvsp[0].A)->Array;
                        }
                    }
#line 2349 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 43:
#line 412 "ass5_19CS10069_19CS30007.y"
                    { 
                        //if we have multiplication
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))         
                            cout<<"Type Error in Program"<< endl;	// error
                        else 								 //if types are compatible, generate new temporary and equate to the product
                        {
                            (yyval.expr) = new Expression();	
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
                        }
                    }
#line 2365 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 44:
#line 424 "ass5_19CS10069_19CS30007.y"
                    {
                        //if we have division
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)){ 
                            cout << "Type Error in Program"<< endl;
                        }
                        else   
                        {
                            //if types are compatible, generate new temporary and equate to the quotient
                            (yyval.expr) = new Expression();
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
                        }
                    }
#line 2383 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 45:
#line 438 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)) cout << "Type Error in Program"<< endl;		
                        else 		 
                        {
                            //if types are compatible, generate new temporary and equate to the quotient
                            (yyval.expr) = new Expression();
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);	
                        }
                    }
#line 2398 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 46:
#line 453 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2404 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 47:
#line 455 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
                            cout << "Type Error in Program"<< endl;
                        else    	//if types are compatible, generate new temporary and equate to the sum
                        {
                            (yyval.expr) = new Expression();	
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2419 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 48:
#line 466 "ass5_19CS10069_19CS30007.y"
                    {
                        
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
                            cout << "Type Error in Program"<< endl;		
                        else        //if types are compatible, generate new temporary and equate to the difference
                        {	
                            (yyval.expr) = new Expression();	
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2435 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 49:
#line 481 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2441 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 50:
#line 483 "ass5_19CS10069_19CS30007.y"
                    { 
                        if(!((yyvsp[0].expr)->loc->type->type == "int"))
                            cout << "Type Error in Program"<< endl; 		
                        else            //if base type is int, generate new temporary and equate to the shifted value
                        {		
                            (yyval.expr) = new Expression();		
                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);		
                        }
                    }
#line 2456 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 51:
#line 494 "ass5_19CS10069_19CS30007.y"
                    { 	
                        if(!((yyvsp[0].expr)->loc->type->type == "int"))
                        {
                            cout << "Type Error in Program"<< endl; 		
                        }
                        else  		//if base type is int, generate new temporary and equate to the shifted value
                        {			
                            (yyval.expr) = new Expression();	
                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);			
                        }
                    }
#line 2473 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 52:
#line 510 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2479 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 53:
#line 512 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
                        {
                            yyerror("Type Error in Program");
                        }
                        else 
                        {      //check compatible types									
                            (yyval.expr) = new Expression();
                            (yyval.expr)->type = "bool";                         //new type is boolean
                            (yyval.expr)->truelist = makelist(nextinstr());     //makelist for truelist and falselist
                            (yyval.expr)->falselist = makelist(nextinstr()+1);
                            emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     //emit statement if a<b goto .. 
                            emit("goto", "");	//emit statement goto ..
                        }
                    }
#line 2499 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 54:
#line 528 "ass5_19CS10069_19CS30007.y"
                    {
                        // similar to above, check compatible types,make new lists and emit
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
                        {
                            yyerror("Type Error in Program");
                        }
                        else 
                        {	
                            (yyval.expr) = new Expression();		
                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);
                            emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            emit("goto", "");
                        }	
                    }
#line 2520 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 55:
#line 545 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
                        {
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {			
                            (yyval.expr) = new Expression();		
                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);
                            emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            emit("goto", "");
                        }		
                    }
#line 2540 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 56:
#line 561 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
                        {
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {	
                            (yyval.expr) = new Expression();	
                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);
                            emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            emit("goto", "");
                        }
                    }
#line 2560 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 57:
#line 580 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2566 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 58:
#line 582 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))                //check compatible types
                        {
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {
                            convertBoolToInt((yyvsp[-2].expr));                  //convert bool to int		
                            convertBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new Expression();
                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());            //make lists for new expression
                            (yyval.expr)->falselist = makelist(nextinstr()+1); 
                            emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);      //emit if a==b goto ..
                            emit("goto", "");				//emit goto ..
                        }
                    }
#line 2588 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 59:
#line 600 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
                        {
                            
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {			
                            convertBoolToInt((yyvsp[-2].expr));
                            convertBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new Expression();                 //result is boolean
                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);
                            emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            emit("goto", "");
                        }
                    }
#line 2611 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 60:
#line 622 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2617 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 61:
#line 624 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))         //check compatible types 
                        {		
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {              
                            convertBoolToInt((yyvsp[-2].expr));                             //convert bool to int	
                            convertBoolToInt((yyvsp[0].expr));			
                            (yyval.expr) = new Expression();
                            (yyval.expr)->type = "not-boolean";                   //result is not boolean
                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);               //emit the quad
                        }
                    }
#line 2637 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 62:
#line 643 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2643 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 63:
#line 645 "ass5_19CS10069_19CS30007.y"
                    {
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))    //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
                        {
                            cout << "Type Error in Program"<< endl;
                        }
                        else 
                        {
                            convertBoolToInt((yyvsp[-2].expr));
                            convertBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new Expression();
                            (yyval.expr)->type = "not-boolean";
                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2663 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 64:
#line 664 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2669 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 65:
#line 666 "ass5_19CS10069_19CS30007.y"
                    { 
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))   //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
                        { yyerror("Type Error in Program"); }
                        else 
                        {
                            convertBoolToInt((yyvsp[-2].expr));		
                            convertBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new Expression();
                            (yyval.expr)->type = "not-boolean";
                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        } 
                    }
#line 2687 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 66:
#line 683 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2693 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 67:
#line 685 "ass5_19CS10069_19CS30007.y"
                    { 
                        convertIntToBool((yyvsp[0].expr));                                  //convert inclusive_or_expression int to bool	
                        convertIntToBool((yyvsp[-3].expr));                                  //convert logical_and_expression to bool
                        (yyval.expr) = new Expression();                                 //make new boolean expression 
                        (yyval.expr)->type = "bool";
                        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));                           //if $1 is true, we move to $5
                        (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                           //if $5 is also true, we get truelist for $$
                        (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);   //merge their falselists
                    }
#line 2707 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 68:
#line 698 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2713 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 69:
#line 700 "ass5_19CS10069_19CS30007.y"
                    { 
                        convertIntToBool((yyvsp[0].expr));			 //convert logical_and_expression int to bool	
                        convertIntToBool((yyvsp[-3].expr));			 //convert logical_or_expression to bool
                        (yyval.expr) = new Expression();			 //make new boolean expression
                        (yyval.expr)->type = "bool";
                        backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr_number));		//if $1 is true, we move to $5
                        (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);		//merge their truelists
                        (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	//if $5 is also false, we get falselist for $$
                    }
#line 2727 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 70:
#line 713 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2733 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 71:
#line 715 "ass5_19CS10069_19CS30007.y"
                    {
                        //normal conversion method to get conditional expressions
                        (yyval.expr)->loc = gentemp((yyvsp[-4].expr)->loc->type);       //generate temporary for expression
                        (yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
                        emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);      //make it equal to sconditional_expression
                        list<int> l = makelist(nextinstr());        //makelist next instruction
                        emit("goto", "");              //prevent fallthrough
                        backpatch((yyvsp[-3].stat)->nextlist, nextinstr());        //after N, go to next instruction
                        emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);
                        list<int> m = makelist(nextinstr());         //makelist next instruction
                        l = merge(l, m);						//merge the two lists
                        emit("goto", "");						//prevent fallthrough
                        backpatch((yyvsp[-7].stat)->nextlist, nextinstr());   //backpatching
                        convertIntToBool((yyvsp[-8].expr));                   //convert expression to boolean
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));           //$1 true goes to expression
                        backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));          //$1 false goes to conditional_expression
                        backpatch(l, nextinstr());
                    }
#line 2756 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 72:
#line 737 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2762 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 73:
#line 739 "ass5_19CS10069_19CS30007.y"
                    {
                        if((yyvsp[-2].A)->atype=="arr")          // if type is arr, simply check if we need to convert and emit
                        {
                            (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->type->type);
                            emit("[]=", (yyvsp[-2].A)->Array->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].expr)->loc->name);		
                        }
                        else if((yyvsp[-2].A)->atype=="ptr")     // if type is ptr, simply emit
                        {
                            emit("*=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);	
                        }
                        else                              //otherwise assignment
                        {
                            (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->Array->type->type);
                            emit("=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);
                        }
                        
                        (yyval.expr) = (yyvsp[0].expr);
                    }
#line 2785 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 74:
#line 762 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2791 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 75:
#line 764 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2797 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 76:
#line 766 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2803 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 77:
#line 768 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2809 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 78:
#line 770 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2815 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 79:
#line 772 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2821 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 80:
#line 774 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2827 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 81:
#line 776 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2833 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 82:
#line 778 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2839 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 83:
#line 780 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2845 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 84:
#line 782 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2851 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 85:
#line 787 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2857 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 86:
#line 789 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2863 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 87:
#line 794 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2869 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 88:
#line 799 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2875 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 89:
#line 803 "ass5_19CS10069_19CS30007.y"
                                         {  }
#line 2881 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 90:
#line 804 "ass5_19CS10069_19CS30007.y"
                            {  }
#line 2887 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 91:
#line 809 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2893 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 92:
#line 811 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2899 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 93:
#line 813 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2905 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 94:
#line 815 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2911 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 95:
#line 819 "ass5_19CS10069_19CS30007.y"
                                           { }
#line 2917 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 96:
#line 820 "ass5_19CS10069_19CS30007.y"
                             {  }
#line 2923 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 97:
#line 825 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2929 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 98:
#line 827 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2935 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 99:
#line 832 "ass5_19CS10069_19CS30007.y"
                    { (yyval.symp) = (yyvsp[0].symp); }
#line 2941 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 100:
#line 834 "ass5_19CS10069_19CS30007.y"
                    {
                        if((yyvsp[0].symp)->val!="") (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;        //get the initial value and  emit it
                        emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);	
                    }
#line 2950 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 101:
#line 842 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2956 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 102:
#line 844 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2962 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 103:
#line 846 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2968 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 104:
#line 848 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2974 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 105:
#line 853 "ass5_19CS10069_19CS30007.y"
                    { var_type="void"; /* Store the latest var type */ }
#line 2980 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 106:
#line 855 "ass5_19CS10069_19CS30007.y"
                    { var_type="char"; }
#line 2986 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 107:
#line 857 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2992 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 108:
#line 859 "ass5_19CS10069_19CS30007.y"
                    { var_type="int"; }
#line 2998 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 109:
#line 861 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3004 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 110:
#line 863 "ass5_19CS10069_19CS30007.y"
                    { var_type="float"; }
#line 3010 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 111:
#line 865 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3016 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 112:
#line 867 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3022 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 113:
#line 869 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3028 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 114:
#line 871 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3034 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 115:
#line 873 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3040 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 116:
#line 875 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3046 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 117:
#line 877 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3052 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 118:
#line 879 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3058 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 119:
#line 884 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3064 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 120:
#line 886 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3070 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 121:
#line 890 "ass5_19CS10069_19CS30007.y"
                                             {  }
#line 3076 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 122:
#line 891 "ass5_19CS10069_19CS30007.y"
                             {  }
#line 3082 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 123:
#line 896 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3088 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 124:
#line 898 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3094 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 125:
#line 900 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3100 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 126:
#line 905 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3106 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 127:
#line 907 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3112 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 128:
#line 912 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3118 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 129:
#line 914 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3124 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 130:
#line 919 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3130 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 131:
#line 921 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3136 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 132:
#line 926 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3142 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 133:
#line 928 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3148 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 134:
#line 932 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3154 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 135:
#line 934 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3160 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 136:
#line 936 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3166 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 137:
#line 941 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3172 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 138:
#line 943 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3178 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 139:
#line 945 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3184 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 140:
#line 949 "ass5_19CS10069_19CS30007.y"
                               {  }
#line 3190 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 141:
#line 950 "ass5_19CS10069_19CS30007.y"
                             {  }
#line 3196 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 142:
#line 955 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3202 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 143:
#line 957 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3208 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 144:
#line 963 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3214 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 145:
#line 965 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3220 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 146:
#line 971 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3226 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 147:
#line 973 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3232 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 148:
#line 975 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3238 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 149:
#line 980 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3244 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 150:
#line 985 "ass5_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-1].sym_type);
                        while(t->arrtype!=NULL) t = t->arrtype;           //for multidimensional arr1s, move in depth till you get the base type
                        t->arrtype = (yyvsp[0].symp)->type;                //add the base type 
                        (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                  //update
                    }
#line 3255 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 151:
#line 991 "ass5_19CS10069_19CS30007.y"
                                        {   }
#line 3261 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 152:
#line 998 "ass5_19CS10069_19CS30007.y"
                    {
                        //if ID, simply add a new variable of var_type
                        (yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));
                        currSymbolPtr = (yyval.symp);	
                    }
#line 3271 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 153:
#line 1003 "ass5_19CS10069_19CS30007.y"
                                         {(yyval.symp)=(yyvsp[-1].symp);}
#line 3277 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 154:
#line 1004 "ass5_19CS10069_19CS30007.y"
                                                                                          {	}
#line 3283 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 155:
#line 1005 "ass5_19CS10069_19CS30007.y"
                                                                    {	}
#line 3289 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 156:
#line 1007 "ass5_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-3].symp) -> type;
                        symboltype *prev = NULL;
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;      //keep moving recursively to get basetype
                        }
                        if(prev==NULL) 
                        {
                            int temp = atoi((yyvsp[-1].expr)->loc->val.c_str());      //get initial value
                            symboltype* s = new symboltype("arr", (yyvsp[-3].symp)->type, temp);        //create new symbol with that initial value
                            (yyval.symp) = (yyvsp[-3].symp)->update(s);   //update the symbol table
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, atoi((yyvsp[-1].expr)->loc->val.c_str()));     //similar arguments as above		
                            (yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
                        }
                    }
#line 3314 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 157:
#line 1028 "ass5_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-2].symp) -> type;
                        symboltype *prev = NULL;
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;         //keep moving recursively to base type
                        }
                        if(prev==NULL) 
                        {
                            symboltype* s = new symboltype("arr", (yyvsp[-2].symp)->type, 0);    //no initial values, simply keep 0
                            (yyval.symp) = (yyvsp[-2].symp)->update(s);
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, 0);
                            (yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
                        }
                    }
#line 3338 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 158:
#line 1047 "ass5_19CS10069_19CS30007.y"
                                                                                                 {	}
#line 3344 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 159:
#line 1048 "ass5_19CS10069_19CS30007.y"
                                                                             {	}
#line 3350 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 160:
#line 1049 "ass5_19CS10069_19CS30007.y"
                                                                         {	}
#line 3356 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 161:
#line 1050 "ass5_19CS10069_19CS30007.y"
                                                     {	}
#line 3362 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 162:
#line 1052 "ass5_19CS10069_19CS30007.y"
                    {
                        ST->name = (yyvsp[-4].symp)->name;	
                        if((yyvsp[-4].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");         //lookup for return value	
                            s->update((yyvsp[-4].symp)->type);		
                        }
                        (yyvsp[-4].symp)->nested=ST;       
                        ST->parent = globalST;
                        changeTable(globalST);				// Come back to globalsymbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3379 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 163:
#line 1064 "ass5_19CS10069_19CS30007.y"
                                                                {	}
#line 3385 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 164:
#line 1066 "ass5_19CS10069_19CS30007.y"
                    {        //similar as above
                        ST->name = (yyvsp[-3].symp)->name;
                        if((yyvsp[-3].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");
                            s->update((yyvsp[-3].symp)->type);
                        }
                        (yyvsp[-3].symp)->nested=ST;
                        ST->parent = globalST;
                        changeTable(globalST);				// Come back to globalsymbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3402 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 165:
#line 1081 "ass5_19CS10069_19CS30007.y"
                                        { }
#line 3408 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 166:
#line 1082 "ass5_19CS10069_19CS30007.y"
                             {  }
#line 3414 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 167:
#line 1088 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr");   //create new pointer
                    }
#line 3422 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 168:
#line 1092 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type));
                    }
#line 3430 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 169:
#line 1099 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3436 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 170:
#line 1101 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3442 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 171:
#line 1106 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3448 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 172:
#line 1108 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3454 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 173:
#line 1113 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3460 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 174:
#line 1115 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3466 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 175:
#line 1120 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3472 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 176:
#line 1122 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3478 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 177:
#line 1127 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3484 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 178:
#line 1129 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3490 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 179:
#line 1134 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3496 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 180:
#line 1139 "ass5_19CS10069_19CS30007.y"
                    { (yyval.symp)=(yyvsp[0].expr)->loc; /* assignment */  }
#line 3502 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 181:
#line 1141 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3508 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 182:
#line 1143 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3514 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 183:
#line 1148 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3520 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 184:
#line 1150 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3526 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 185:
#line 1154 "ass5_19CS10069_19CS30007.y"
                                { }
#line 3532 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 186:
#line 1155 "ass5_19CS10069_19CS30007.y"
                             { }
#line 3538 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 187:
#line 1160 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3544 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 188:
#line 1165 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3550 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 189:
#line 1167 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3556 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 190:
#line 1172 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3562 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 191:
#line 1174 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3568 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 192:
#line 1179 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3574 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 193:
#line 1181 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3580 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 194:
#line 1183 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=new Statement();              //create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
                    }
#line 3589 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 195:
#line 1188 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3595 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 196:
#line 1190 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3601 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 197:
#line 1192 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3607 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 198:
#line 1196 "ass5_19CS10069_19CS30007.y"
                                        {  }
#line 3613 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 199:
#line 1198 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=new Statement();              //create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
                    }
#line 3622 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 200:
#line 1202 "ass5_19CS10069_19CS30007.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3628 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 201:
#line 1203 "ass5_19CS10069_19CS30007.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3634 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 202:
#line 1204 "ass5_19CS10069_19CS30007.y"
                                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3640 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 203:
#line 1208 "ass5_19CS10069_19CS30007.y"
                    {  
                        (yyval.stat) = (yyvsp[0].stat);
                        label *s = find_label((yyvsp[-3].symp)->name);
                        if(s!=nullptr){
                            s->addr = (yyvsp[-1].instr_number);
                            backpatch(s->nextlist,s->addr);
                        }else{
                            s = new label((yyvsp[-3].symp)->name);
                            s->addr = nextinstr();
                            s->nextlist = makelist((yyvsp[-1].instr_number));
                            label_table.push_back(*s);
                        }
                    }
#line 3658 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 204:
#line 1222 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3664 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 205:
#line 1224 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3670 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 206:
#line 1229 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=(yyvsp[-1].stat);
                        changeTable(ST->parent); 
                    }
#line 3679 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 207:
#line 1237 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3685 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 208:
#line 1239 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=(yyvsp[0].stat);
                        backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
                    }
#line 3694 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 209:
#line 1247 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat) ;/* simple assign */}
#line 3700 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 210:
#line 1248 "ass5_19CS10069_19CS30007.y"
                             { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3706 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 211:
#line 1253 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3712 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 212:
#line 1255 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3718 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 213:
#line 1260 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr) = new Expression(); /* new Expression */ }
#line 3724 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 214:
#line 1262 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[-1].expr); /* Simple assign */}
#line 3730 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 215:
#line 1267 "ass5_19CS10069_19CS30007.y"
                    {
                        // if statement without else
                        backpatch((yyvsp[-4].stat)->nextlist, nextinstr());        //nextlist of N goes to nextinstr
                        convertIntToBool((yyvsp[-5].expr));         //convert expression to bool
                        (yyval.stat) = new Statement();        //make new statement
                        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));        //is expression is true, go to M i.e just before statement body
                        list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);   //merge falselist of expression, nextlist of statement and second N
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
                    }
#line 3744 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 216:
#line 1277 "ass5_19CS10069_19CS30007.y"
                    {
                        //if statement with else
                        backpatch((yyvsp[-7].stat)->nextlist, nextinstr());		//nextlist of N goes to nextinstr
                        convertIntToBool((yyvsp[-8].expr));        //convert expression to bool
                        (yyval.stat) = new Statement();       //make new statement
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));    //when expression is true, go to M1 else go to M2
                        backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));
                        list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       //merge the nextlists of the statements and second N
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);	
                    }
#line 3759 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 217:
#line 1288 "ass5_19CS10069_19CS30007.y"
                    { /* Not to be modelled */ }
#line 3765 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 218:
#line 1293 "ass5_19CS10069_19CS30007.y"
                    {	
                        //while statement
                        (yyval.stat) = new Statement();    //create statement
                        convertIntToBool((yyvsp[-3].expr));     //convert expression to bool
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-4].instr_number));	// M1 to go back to expression again
                        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));	// M2 to go to statement if the expression is true
                        (yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;   //when expression is false, move out of loop
                        // Emit to prevent fallthrough
                        string str=convertIntToString((yyvsp[-4].instr_number));		
                        emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3783 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 219:
#line 1307 "ass5_19CS10069_19CS30007.y"
                    {	
                        //while statement
                        (yyval.stat) = new Statement();    //create statement
                        convertIntToBool((yyvsp[-5].expr));     //convert expression to bool
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-6].instr_number));	// M1 to go back to expression again
                        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));	// M2 to go to statement if the expression is true
                        (yyval.stat)->nextlist = (yyvsp[-5].expr)->falselist;   //when expression is false, move out of loop
                        // Emit to prevent fallthrough
                        string str=convertIntToString((yyvsp[-6].instr_number));		
                        emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3801 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 220:
#line 1321 "ass5_19CS10069_19CS30007.y"
                    {
                        //do statement
                        (yyval.stat) = new Statement();     //create statement	
                        convertIntToBool((yyvsp[-2].expr));      //convert to bool
                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));						// M1 to go back to statement if expression is true
                        backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
                        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
                        loop_name = "";
                    }
#line 3815 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 221:
#line 1331 "ass5_19CS10069_19CS30007.y"
                        {
                        //do statement
		                (yyval.stat) = new Statement();     //create statement	
		                convertIntToBool((yyvsp[-2].expr));      //convert to bool
		                backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr_number));						// M1 to go back to statement if expression is true
		                backpatch((yyvsp[-7].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		                (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
		                loop_name = "";
	                }
#line 3829 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 222:
#line 1341 "ass5_19CS10069_19CS30007.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		 //create new statement
                        convertIntToBool((yyvsp[-6].expr));  //convert check expression to boolean
                        backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	//if expression is true, go to M2
                        backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	//after N, go back to M1
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	//statement go back to expression
                        string str=convertIntToString((yyvsp[-5].instr_number));
                        emit("goto", str);				//prevent fallthrough
                        (yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	//move out if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3847 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 223:
#line 1355 "ass5_19CS10069_19CS30007.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		 //create new statement
                        convertIntToBool((yyvsp[-6].expr));  //convert check expression to boolean
                        backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	//if expression is true, go to M2
                        backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	//after N, go back to M1
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	//statement go back to expression
                        string str=convertIntToString((yyvsp[-5].instr_number));
                        emit("goto", str);				//prevent fallthrough
                        (yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	//move out if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3865 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 224:
#line 1369 "ass5_19CS10069_19CS30007.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		 //create new statement
                        convertIntToBool((yyvsp[-8].expr));  //convert check expression to boolean
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));	//if expression is true, go to M2
                        backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));	//after N, go back to M1
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));	//statement go back to expression
                        string str=convertIntToString((yyvsp[-7].instr_number));
                        emit("goto", str);				//prevent fallthrough
                        (yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;	//move out if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3883 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 225:
#line 1383 "ass5_19CS10069_19CS30007.y"
                    {	
                        (yyval.stat) = new Statement();		 //create new statement
                        convertIntToBool((yyvsp[-8].expr));  //convert check expression to boolean
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));	//if expression is true, go to M2
                        backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));	//after N, go back to M1
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));	//statement go back to expression
                        string str=convertIntToString((yyvsp[-7].instr_number));
                        emit("goto", str);				//prevent fallthrough
                        (yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;	//move out if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3900 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 226:
#line 1399 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat) = new Statement();
                        label *l = find_label((yyvsp[-1].symp)->name);
                        if(l){
                            emit("goto","");
                            list<int>lst = makelist(nextinstr());
                            l->nextlist = merge(l->nextlist,lst);
                            if(l->addr!=-1)
                                backpatch(l->nextlist,l->addr);
                        } else {
                            l = new label((yyvsp[-1].symp)->name);
                            l->nextlist = makelist(nextinstr());
                            emit("goto","");
                            label_table.push_back(*l);
                        }
                    }
#line 3921 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 227:
#line 1416 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat) = new Statement(); }
#line 3927 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 228:
#line 1418 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat) = new Statement(); }
#line 3933 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 229:
#line 1420 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.stat) = new Statement();	
                        emit("return",(yyvsp[-1].expr)->loc->name);               //emit return with the name of the return value
                    }
#line 3942 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 230:
#line 1425 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.stat) = new Statement();	
                        emit("return","");                         //simply emit return
                    }
#line 3951 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 231:
#line 1433 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3957 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 232:
#line 1435 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3963 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 233:
#line 1440 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3969 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 234:
#line 1442 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3975 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 235:
#line 1447 "ass5_19CS10069_19CS30007.y"
                    {
                        int next_instr=0;	 	
                        ST->parent=globalST;
                        (yyvsp[-5].symp)->update(new symboltype("func"));
                        table_count = 0;
                        label_table.clear();
                        changeTable(globalST);                     //once we come back to this at the end, change the table to global Symbol table
                    }
#line 3988 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 236:
#line 1458 "ass5_19CS10069_19CS30007.y"
                                     { }
#line 3994 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 237:
#line 1459 "ass5_19CS10069_19CS30007.y"
                             { }
#line 4000 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 238:
#line 1464 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 4006 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 239:
#line 1466 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 4012 "ass5_19CS10069_19CS30007.tab.c"
    break;


#line 4016 "ass5_19CS10069_19CS30007.tab.c"

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
#line 1469 "ass5_19CS10069_19CS30007.y"

/*Auxiliaries*/
void yyerror(string s)
{
    // printf("Found error %s\n", s);
    cout<<s<<endl;
}
