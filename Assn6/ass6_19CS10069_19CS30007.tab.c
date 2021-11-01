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
#line 2 "ass6_19CS10069_19CS30007.y"

    #include <bits/stdc++.h>
    #include <sstream>
    #include "ass6_19CS10069_19CS30007_translator.h"
    extern int yylex();
    void yyerror(string s);
    extern string var_type;
    extern vector<label> label_table;
    extern int line;
    vector<string> stringsToBePrinted;
    using namespace std;

#line 83 "ass6_19CS10069_19CS30007.tab.c"

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
#ifndef YY_YY_ASS6_19CS10069_19CS30007_TAB_H_INCLUDED
# define YY_YY_ASS6_19CS10069_19CS30007_TAB_H_INCLUDED
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
#line 15 "ass6_19CS10069_19CS30007.y"

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

#line 230 "ass6_19CS10069_19CS30007.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS6_19CS10069_19CS30007_TAB_H_INCLUDED  */



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
#define YYLAST   1375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  424

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
       0,   107,   107,   126,   133,   140,   149,   155,   159,   170,
     178,   186,   209,   218,   222,   226,   234,   243,   245,   250,
     255,   263,   267,   274,   278,   283,   288,   327,   331,   339,
     343,   347,   351,   355,   359,   366,   370,   378,   395,   410,
     423,   440,   444,   457,   473,   477,   488,   504,   508,   527,
     545,   563,   584,   588,   609,   632,   636,   658,   662,   683,
     687,   708,   712,   730,   734,   751,   753,   772,   774,   798,
     800,   802,   804,   806,   808,   810,   812,   814,   816,   818,
     823,   825,   830,   835,   840,   841,   845,   847,   849,   851,
     856,   857,   861,   863,   868,   872,   882,   884,   886,   888,
     893,   897,   900,   902,   905,   907,   910,   912,   914,   916,
     918,   920,   922,   924,   929,   931,   936,   937,   941,   943,
     945,   950,   952,   957,   959,   964,   966,   971,   973,   977,
     979,   981,   986,   988,   990,   995,   996,  1000,  1002,  1008,
    1010,  1016,  1018,  1020,  1025,  1030,  1041,  1047,  1058,  1059,
    1060,  1061,  1082,  1102,  1103,  1104,  1105,  1106,  1125,  1126,
    1149,  1150,  1155,  1159,  1166,  1168,  1173,  1175,  1180,  1182,
    1187,  1191,  1196,  1198,  1203,  1208,  1210,  1212,  1217,  1219,
    1224,  1225,  1229,  1234,  1236,  1241,  1243,  1248,  1250,  1252,
    1257,  1259,  1261,  1266,  1267,  1272,  1273,  1274,  1277,  1291,
    1293,  1298,  1306,  1308,  1316,  1318,  1323,  1325,  1330,  1333,
    1339,  1351,  1364,  1369,  1386,  1403,  1416,  1428,  1446,  1464,
    1482,  1501,  1518,  1520,  1522,  1527,  1535,  1537,  1542,  1544,
    1549,  1563,  1564,  1568,  1570,  1574,  1581,  1588,  1595,  1602,
    1618,  1630
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
  "'?'", "':'", "';'", "$accept", "changetable", "constant",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
  "function_definition", "declaration_list_opt", "declaration_list", "M",
  "F", "W", "D", "X", "N", "semicolon", YY_NULLPTR
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

#define YYPACT_NINF (-369)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-233)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1313,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,   -22,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,    48,  1313,  1313,  -369,   -27,
    -369,  1313,  1313,  1288,  -369,  -369,   -32,   -12,  -369,   192,
      48,   -53,   -24,  -369,  1179,   -38,   -18,  -369,  -369,  -369,
      -9,  1338,  -369,  -369,  -369,  -369,    69,  -369,    57,   192,
      31,  -369,  -369,    48,   771,  -369,    48,  -369,  1313,    83,
     825,   -38,  1338,  1338,    26,   999,  -369,  1338,    89,     4,
    -369,  -369,  -369,  -369,  -369,   101,  1053,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  1082,  1082,  -369,  -369,  -369,
     943,   146,  -369,  -369,   149,   265,  1111,  -369,    99,   194,
     207,   212,   204,    87,    78,   134,   140,   -33,  -369,  -369,
    -369,   139,  -369,  -369,  1204,    33,  1024,   167,  -369,   171,
     872,  1022,  -369,  -369,  1111,   152,  -369,   174,  -369,  -369,
    -369,  -369,  1111,  -369,   -14,   943,  -369,   943,  -369,  -369,
    -369,    73,  -369,   198,  1111,   248,   182,   771,  -369,    41,
    -369,   251,  -369,  -369,  1111,  1111,   257,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  1111,  -369,
    -369,  1111,  1111,  1111,  1111,  1111,  1111,  1111,  1111,  1111,
    1111,  1111,  1111,  1111,  1111,  1111,  1111,  -369,  -369,  1111,
     366,  -369,    48,   215,   216,  -369,  -369,   264,   221,  1024,
    -369,  -369,   224,  -369,   225,  -369,  -369,  -369,    66,  -369,
    1111,  -369,  -369,  -369,   228,   229,  -369,  1111,   798,   230,
    -369,  -369,   120,  -369,  -369,  -369,  -369,   227,   235,  -369,
      70,  -369,  -369,  -369,  -369,  -369,    99,    99,   194,   194,
     207,   207,   207,   207,   212,   212,   204,    87,    78,  1111,
    1111,   162,   -53,   743,  1111,  -369,  -369,   279,   -53,   238,
    -369,   239,   231,   232,  -369,   156,  -369,  -369,  -369,  -369,
     236,   240,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    1235,  -369,  -369,   244,  -369,  -369,  -369,  -369,   243,   243,
    -369,   146,  -369,  -369,  -369,   771,  1111,  -369,  -369,   134,
     140,  1111,  -369,   156,  -369,   241,   249,   266,   -53,  -369,
    1111,   259,  1111,   430,  -369,  -369,  -369,   366,  -369,  -369,
    -369,  -369,   191,  -369,  -369,  -369,  -369,   430,  -369,  -369,
    -369,   258,  -369,   622,    80,  -369,   430,   366,  -369,  -369,
     131,  -369,  -369,  -369,   269,   366,  -369,  -369,  -369,  -369,
    -369,  -369,   430,  -369,   261,  -369,   700,  -369,  -369,   267,
     346,  -369,  -369,  -369,  -369,  1111,   430,  -369,   272,   743,
     743,   104,  -369,   350,  1111,  -369,  -369,   271,   345,   278,
     108,  1111,  1111,  -369,   622,  -369,  1111,   -53,   258,   258,
     366,  -369,   430,   124,  -369,   280,   281,   273,  -369,   -53,
    -369,  -369,  -369,  -369,   494,   558,   366,  -369,   366,  -369,
     274,   277,  -369,  -369
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   105,   102,   101,   109,   111,   110,   103,   106,   104,
     100,   107,    98,   108,   136,   122,   121,   141,    97,    99,
     142,   143,    96,   144,   229,    85,    91,    91,   113,     0,
     112,    91,    91,     0,   226,   228,   134,     0,   147,   161,
       0,     0,    84,    92,    94,   146,     0,    90,    86,    87,
     120,     0,    88,    89,     1,   227,     0,   164,   162,   160,
       0,   241,    83,     0,     0,   233,    85,     2,   231,     2,
       0,   145,     0,   117,     0,     0,   123,   117,   139,     0,
     137,   163,   165,   148,    93,    94,     0,     6,     3,     5,
       4,     8,    31,    32,    30,     0,     0,    29,    33,    34,
       0,   181,     7,    10,    23,    35,     0,    37,    41,    44,
      47,    52,    55,    57,    59,    61,    63,    65,    67,   175,
      95,     0,   234,   172,     0,     0,     0,    30,   152,     0,
       0,     0,   116,   114,     0,     0,   127,   131,   125,   118,
     124,   115,     0,   132,     0,     0,    27,     0,    24,    25,
      80,     0,   174,     0,     0,     0,     0,     0,   180,     0,
     183,     0,    15,    16,    22,     0,     0,    69,    73,    74,
      70,    71,    72,    75,    76,    77,    79,    78,     0,    35,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   235,   235,     0,
     205,   159,   171,     0,   166,   168,   158,     0,     0,     0,
     156,   151,    30,   150,     0,   119,    82,   129,     0,   126,
       0,   140,   133,   138,     0,     0,     9,     0,     0,     0,
     186,   176,   181,   178,   182,   184,    14,    21,     0,    19,
       0,    13,    68,    38,    39,    40,    42,    43,    46,    45,
      48,    49,    50,    51,    53,    54,    56,    58,    60,     0,
       0,     0,     0,     0,     0,   236,   237,     0,     0,     0,
     238,     0,     0,     6,   239,     0,   206,   207,   187,   188,
     235,     0,   202,   189,   190,   191,   192,   208,   170,   157,
       0,   173,   154,     0,   155,   149,   128,   130,    28,     0,
      81,   181,    36,   185,   177,     0,     0,    12,    11,    62,
      64,     0,   223,     0,   225,     0,     0,     0,     0,   222,
       0,   235,     0,     0,   235,     2,   209,     0,   230,   167,
     169,   153,     0,   179,    20,    66,   224,     0,   239,   239,
     221,   240,   235,     0,     0,   200,     0,   205,   203,    17,
     181,   199,     2,     2,     0,   205,   235,   193,   194,   195,
     196,   197,     0,   198,     0,    18,     0,   235,   235,     0,
       0,   212,   201,   235,   235,     0,     0,   235,     0,     0,
       0,     0,   240,     0,     0,   235,   235,   235,   210,     0,
       0,     0,     0,   235,     0,   235,     0,     0,   240,   240,
     205,   213,     0,     0,   215,     0,     0,     0,   211,     0,
     235,   235,   214,   216,     0,     0,   205,   217,   205,   218,
       0,     0,   219,   220
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,   -67,  -369,  -369,  -369,  -369,  -369,   -10,  -369,   -99,
     105,    97,    85,   100,   172,   185,   201,   155,   158,  -369,
    -119,   -59,  -369,   -97,  -133,     1,  -369,    10,   211,  -369,
     352,  -369,    64,   -48,   342,  -369,  -369,   348,   -69,  -369,
     203,  -369,  -369,  -369,   282,   -19,  -369,   -13,   376,  -369,
     365,   -54,  -369,  -369,   135,  -369,   110,  -153,   123,  -215,
    -369,  -369,   268,  -299,  -261,  -335,  -369,  -369,  -204,   102,
    -178,  -324,  -294,  -254,  -369,   397,  -369,  -369,  -369,   -60,
    -369,  -369,  -369,   -36,  -368,   -41
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   121,   102,   103,   104,   237,   238,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   150,   178,   275,   217,   276,    41,    66,    48,    42,
      43,    26,    27,    74,   133,    28,    29,    75,    76,   135,
     136,    30,    37,    79,    80,    31,    32,    85,    45,    58,
      46,    59,   203,   204,   205,   125,   153,   120,   156,   157,
     158,   159,   160,   277,   356,   278,   279,   280,   281,   282,
     283,   284,   285,   286,    33,    34,    35,    67,    68,   259,
     316,   317,   321,   325,   354,   287
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    24,   124,   151,   233,   119,   140,   180,   357,   221,
      25,   129,    44,    50,   388,   216,   130,   305,    36,   359,
      57,   229,    38,   216,   345,   132,    78,    60,   198,   132,
     405,   406,    77,   138,    24,   216,    47,    47,   351,    61,
      82,    47,    47,    25,    69,    65,    70,   363,   151,   360,
     151,    57,   152,    77,    77,  -135,    77,   199,    77,   357,
      51,   137,   140,   371,    40,    63,    38,   208,   240,   122,
     359,   214,   209,    39,   222,    56,   146,   382,    72,   357,
     357,    77,   243,   244,   245,   148,   149,   297,    38,   361,
     359,   359,   143,   144,   219,    39,   179,   152,   119,   152,
     360,   216,   261,   408,    39,   239,    38,    57,    40,    78,
     234,    82,    77,    39,    83,    73,   206,   134,    61,   242,
     360,   360,   207,   123,   179,   154,    77,   155,    77,   302,
      40,   315,   179,   401,   202,   305,    73,    73,   260,    73,
     361,    73,   195,   364,   179,   216,   181,   182,    40,   194,
     293,   369,   333,   417,   419,   308,   226,   134,   142,   227,
     361,   361,   227,   362,    73,   358,   313,   183,   300,   227,
      64,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   387,   374,   288,
      82,   397,   335,   227,   196,    73,   407,   227,   161,   162,
     163,   385,   386,   197,   154,   137,   155,   409,   304,    73,
     179,    73,   420,   227,   421,   154,   358,   155,   179,   365,
     327,   312,   314,   341,    17,   344,   200,   319,    20,    21,
     154,   164,   155,   165,   326,   166,   358,   358,    49,   184,
     185,   218,    52,    53,    61,   227,   119,   334,    61,   179,
     179,   227,   210,   311,   179,   224,   211,   225,   347,   186,
     187,   343,   192,   193,   346,   220,   188,   189,   190,   191,
     231,   232,   336,   250,   251,   252,   253,   340,   381,   349,
     350,   228,   355,   248,   249,   366,   367,   390,   230,   246,
     247,   236,   254,   255,   398,   399,   370,   241,   289,   403,
     202,   179,   352,   353,   291,   290,   292,   375,   376,   294,
     295,   298,   299,   379,   380,   303,   306,   383,   307,   318,
     320,   322,   323,   324,  -204,   391,   392,   394,   328,   331,
     301,   338,   337,   400,   167,   402,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   342,   227,   339,   372,
     414,   415,   368,   378,   384,   377,   404,   389,   393,   395,
     396,   412,   422,   410,   411,   423,   256,   373,   413,   262,
     263,   264,   265,   266,   267,    86,   268,   269,   270,   271,
     257,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   258,    17,   272,
      18,    19,    20,    21,    22,    23,   273,    88,    89,    90,
      91,    92,    93,    94,   309,    84,    95,    96,   310,   141,
     131,   296,    71,    81,   332,   330,   223,   235,    97,   348,
      55,    98,    99,   262,   263,   264,   265,   266,   267,    86,
     268,   269,   270,   271,     0,     0,     0,     0,   100,     0,
       0,     0,     0,   274,     0,     0,     0,     0,    61,     0,
       0,     0,     0,   272,     0,     0,     0,     0,     0,     0,
     273,    88,    89,    90,    91,    92,    93,    94,     0,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,   262,   263,   264,
     265,   266,   267,    86,   268,   269,   270,   271,     0,     0,
       0,     0,   100,     0,     0,     0,     0,   274,     0,     0,
       0,     0,    61,     0,     0,     0,     0,   272,     0,     0,
       0,     0,     0,     0,   273,    88,    89,    90,    91,    92,
      93,    94,     0,     0,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   262,   263,   264,   265,   266,   267,    86,   268,   269,
     270,   271,     0,     0,     0,     0,   100,     0,     0,     0,
       0,   416,     0,     0,     0,     0,    61,     0,     0,     0,
       0,   272,     0,     0,     0,     0,     0,     0,   273,    88,
      89,    90,    91,    92,    93,    94,     0,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    98,    99,   262,   263,   264,   265,   266,
     267,    86,   268,   269,   270,   271,     0,     0,     0,     0,
     100,     0,     0,     0,     0,   418,     0,     0,     0,     0,
      61,     0,     0,     0,     0,   272,     0,     0,     0,     0,
       0,     0,   273,    88,    89,    90,    91,    92,    93,    94,
       0,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,    86,
       0,     0,     0,     0,    61,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
      95,    96,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,   100,    87,    88,    89,    90,    91,    92,    93,
      94,     0,    61,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    86,    98,    99,
       0,    87,    88,    89,    90,    91,    92,    93,    94,     0,
       0,    95,    96,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,    97,    86,    61,    98,    99,    87,    88,
      89,    90,    91,    92,    93,    94,     0,     0,    95,    96,
       0,     0,     0,   100,     0,     0,     0,    17,   101,   126,
      97,    20,    21,    98,    99,    87,    88,    89,    90,    91,
      92,    93,   127,     0,     0,    95,    96,     0,     0,     0,
     100,    86,     0,     0,     0,   301,     0,    97,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,   100,    20,    21,
     128,     0,    87,    88,    89,    90,    91,    92,    93,   212,
       0,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,   100,     0,     0,   213,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      13,    14,    15,    16,     0,    17,     0,     0,     0,    20,
      21,     0,     0,    87,    88,    89,    90,    91,    92,    93,
      94,     0,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   100,    13,    14,    15,    16,
       0,    17,     0,    86,     0,    20,    21,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,     0,    13,
      14,    15,    16,     0,    17,     0,    17,     0,    20,    21,
      20,    21,    86,     0,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,   139,     0,    98,
      99,    86,     0,    87,    88,    89,    90,    91,    92,    93,
      94,     0,     0,    95,    96,     0,   100,     0,     0,     0,
     215,     0,     0,     0,     0,    97,     0,     0,    98,    99,
      86,     0,    87,    88,    89,    90,    91,    92,    93,    94,
       0,     0,    95,    96,     0,   145,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,     0,
       0,    87,    88,    89,    90,    91,    92,    93,    94,     0,
       0,    95,    96,     0,   147,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,    64,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,  -232,    17,     0,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   329,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,    17,     0,    18,    19,    20,
      21,    22,    23,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    13,    14,    15,    16,     0,
      17,     0,     0,     0,    20,    21
};

static const yytype_int16 yycheck[] =
{
      41,     0,    69,   100,   157,    64,    75,   106,   343,   142,
       0,    70,    25,    40,   382,   134,    70,   232,    40,   343,
      39,   154,    40,   142,   323,    73,    40,    40,    61,    77,
     398,   399,    51,    74,    33,   154,    26,    27,   337,    92,
      59,    31,    32,    33,    82,    44,    84,   346,   145,   343,
     147,    70,   100,    72,    73,    87,    75,    90,    77,   394,
      87,    74,   131,   362,    82,    89,    40,   126,   165,    68,
     394,   130,   126,    47,    88,    87,    86,   376,    87,   414,
     415,   100,   181,   182,   183,    95,    96,   220,    40,   343,
     414,   415,    88,    89,   135,    47,   106,   145,   157,   147,
     394,   220,   199,   402,    47,   164,    40,   126,    82,    40,
      69,   130,   131,    47,    83,    51,    83,    91,    92,   178,
     414,   415,    89,    40,   134,    84,   145,    86,   147,   228,
      82,   264,   142,   394,   124,   350,    72,    73,   198,    75,
     394,    77,    64,   347,   154,   264,    47,    48,    82,    62,
     209,   355,   305,   414,   415,    85,    83,    91,    69,    89,
     414,   415,    89,    83,   100,   343,   263,    68,   227,    89,
      69,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,    83,   366,   202,
     209,    83,   311,    89,    60,   131,   400,    89,    49,    50,
      51,   379,   380,    63,    84,   218,    86,    83,    88,   145,
     220,   147,   416,    89,   418,    84,   394,    86,   228,    88,
     280,   262,   263,   320,    32,   322,    87,   268,    36,    37,
      84,    82,    86,    84,   275,    86,   414,   415,    27,    45,
      46,    89,    31,    32,    92,    89,   305,   306,    92,   259,
     260,    89,    85,    91,   264,   145,    85,   147,   325,    52,
      53,   321,    58,    59,   324,    91,    54,    55,    56,    57,
      88,    89,   313,   188,   189,   190,   191,   318,   375,    88,
      89,    83,   342,   186,   187,   352,   353,   384,    40,   184,
     185,    40,   192,   193,   391,   392,   356,    40,    83,   396,
     290,   311,   338,   339,    40,    89,    85,   367,   368,    85,
      85,    83,    83,   373,   374,    85,    89,   377,    83,    40,
      82,    82,    91,    91,    88,   385,   386,   387,    88,    85,
      87,    82,    91,   393,    69,   395,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    87,    89,    82,    88,
     410,   411,    83,     7,    82,    88,   397,     7,    87,    14,
      82,    88,    88,    83,    83,    88,   194,   366,   409,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     195,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   196,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   259,    63,    50,    51,   260,    77,
      72,   218,    46,    58,   301,   290,   144,   159,    62,   327,
      33,    65,    66,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    92,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    51,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    82,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    92,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,     9,    65,    66,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,     9,    92,    65,    66,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    51,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    32,    87,    34,
      62,    36,    37,    65,    66,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,
      82,     9,    -1,    -1,    -1,    87,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    82,    36,    37,
      85,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    82,    -1,    -1,    85,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    36,
      37,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    82,    27,    28,    29,    30,
      -1,    32,    -1,     9,    -1,    36,    37,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    30,    -1,    32,    -1,    32,    -1,    36,    37,
      36,    37,     9,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    88,    -1,    65,
      66,     9,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    50,    51,    -1,    82,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
       9,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    51,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    51,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    69,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    87,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    34,    35,
      36,    37,    38,    39,   118,   120,   124,   125,   128,   129,
     134,   138,   139,   167,   168,   169,    40,   135,    40,    47,
      82,   119,   122,   123,   140,   141,   143,   120,   121,   121,
      40,    87,   121,   121,     0,   168,    87,   138,   142,   144,
     140,    92,   178,    89,    69,   118,   120,   170,   171,    82,
      84,   141,    87,   125,   126,   130,   131,   138,    40,   136,
     137,   143,   138,    83,   123,   140,     9,    40,    41,    42,
      43,    44,    45,    46,    47,    50,    51,    62,    65,    66,
      82,    87,    95,    96,    97,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     150,    94,   118,    40,    94,   148,    34,    47,    85,   114,
     144,   130,   126,   127,    91,   132,   133,   140,   178,    88,
     131,   127,    69,    88,    89,    82,   100,    82,   100,   100,
     114,   116,   126,   149,    84,    86,   151,   152,   153,   154,
     155,    49,    50,    51,    82,    84,    86,    69,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,   115,   100,
     102,    47,    48,    68,    45,    46,    52,    53,    54,    55,
      56,    57,    58,    59,    62,    64,    60,    63,    61,    90,
      87,    83,   120,   145,   146,   147,    83,    89,   114,   144,
      85,    85,    47,    85,   114,    88,   113,   117,    89,   178,
      91,   117,    88,   137,   149,   149,    83,    89,    83,   117,
      40,    88,    89,   150,    69,   155,    40,    98,    99,   114,
     116,    40,   114,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   108,   109,   172,
     172,   116,     3,     4,     5,     6,     7,     8,    10,    11,
      12,    13,    33,    40,    87,   116,   118,   156,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   178,   140,    83,
      89,    40,    85,   114,    85,    85,   133,   117,    83,    83,
     114,    87,   102,    85,    88,   152,    89,    83,    85,   110,
     111,    91,   178,   116,   178,   117,   173,   174,    40,   178,
      82,   175,    82,    91,    91,   176,   178,   172,    88,    67,
     147,    85,   151,   150,   114,   113,   178,    91,    82,    82,
     178,   116,    87,   172,   116,   156,   172,    94,   162,    88,
      89,   156,   176,   176,   177,   172,   157,   158,   163,   164,
     165,   166,    83,   156,   161,    88,    94,    94,    83,   161,
     172,   156,    88,   118,   163,   172,   172,    88,     7,   172,
     172,   116,   156,   172,    82,   163,   163,    83,   177,     7,
     116,   172,   172,    87,   172,    14,    82,    83,   116,   116,
     172,   157,   172,   116,   178,   177,   177,   161,   156,    83,
      83,    83,    88,   178,   172,   172,    87,   157,    87,   157,
     161,   161,    88,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    95,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   103,
     103,   104,   104,   104,   105,   105,   105,   106,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   133,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   138,   139,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   150,   150,   150,   151,   151,
     152,   152,   153,   154,   154,   155,   155,   156,   156,   156,
     156,   156,   156,   157,   157,   157,   157,   157,   158,   158,
     158,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   166,   166,   166,   166,   166,   167,   167,   168,   168,
     169,   170,   170,   171,   171,   172,   173,   174,   175,   176,
     177,   178
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     0,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     1,     4,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     4,     5,
       2,     1,     1,     1,     2,     2,     3,     1,     3,     2,
       3,     1,     5,     6,     2,     1,     0,     1,     3,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     3,     5,
       4,     4,     3,     6,     5,     5,     4,     5,     4,     4,
       1,     0,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     3,     4,     2,     4,
       1,     0,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       3,     5,     1,     3,     1,     0,     1,     1,     1,     2,
       8,    11,     5,    10,    12,    10,    12,    14,    14,    16,
      16,     3,     2,     2,     3,     2,     1,     2,     1,     1,
       7,     1,     0,     1,     2,     0,     0,     0,     0,     0,
       0,     1
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
#line 108 "ass6_19CS10069_19CS30007.y"
        {    
        // Utility to change the table
		parST = ST;                                                               

        // If nested call recursively on the nested table
		if(currSymbolPtr->nested==NULL) {
			changeTable(new symtable(curPossibleSTName));	                                           
		}
		else {
			changeTable(currSymbolPtr ->nested);						               
			Q.emit("label", ST->name);
		}
	}
#line 1948 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 3:
#line 126 "ass6_19CS10069_19CS30007.y"
                                  { 
                        // Here we are creating a new instance and storing it
                        (yyval.expr)=new Expression();	
                        string p=convertIntToString((yyvsp[0].int_val));
                        (yyval.expr)->loc=gentemp(new symboltype("int"),p);
                        Q.emit("=",(yyval.expr)->loc->name,p);
                    }
#line 1960 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 4:
#line 134 "ass6_19CS10069_19CS30007.y"
                    {                                                                         
                        (yyval.expr)=new Expression();
                        string p=convertFloatToString((yyvsp[0].float_val));
                        (yyval.expr)->loc=gentemp(new symboltype("float"),p);
                        Q.emit("=",(yyval.expr)->loc->name,p);
                    }
#line 1971 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 5:
#line 141 "ass6_19CS10069_19CS30007.y"
                    {                                                                        
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_val));
                        Q.emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 1981 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 6:
#line 150 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.expr)=new Expression();                                                  
                        (yyval.expr)->loc=(yyvsp[0].symp);
                        (yyval.expr)->type="not-boolean";
                    }
#line 1991 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 7:
#line 156 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr) = (yyvsp[0].expr); 
                    }
#line 1999 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 8:
#line 160 "ass6_19CS10069_19CS30007.y"
                    {
                        // TODO: pushback in the strings to be printed
                        (yyval.expr) = new Expression();
                        symboltype* temp = new symboltype("PTR");
                        (yyval.expr)->loc = gentemp(temp, (yyvsp[0].char_val));
                        (yyval.expr)->loc->type->arrtype = new symboltype("CHAR");

                        Q.emit("EQUALSTR", (yyval.expr)->loc->name, to_string(stringsToBePrinted.size()));          // TODO: verify this
                        stringsToBePrinted.push_back((yyvsp[0].char_val));
                    }
#line 2014 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 9:
#line 171 "ass6_19CS10069_19CS30007.y"
                    {                                                                        
                        (yyval.expr)=(yyvsp[-1].expr);
                    }
#line 2022 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 10:
#line 179 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=(yyvsp[0].expr)->loc;	

                        (yyval.A)->type=(yyvsp[0].expr)->loc->type;	
                        (yyval.A)->loc=(yyval.A)->Array;
                    }
#line 2034 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 11:
#line 187 "ass6_19CS10069_19CS30007.y"
                    { 	
		
                        (yyval.A)=new Array();
                        (yyval.A)->type=(yyvsp[-3].A)->type->arrtype;                 
                        (yyval.A)->Array=(yyvsp[-3].A)->Array;                       
                        (yyval.A)->loc=gentemp(new symboltype("int"));     
                        (yyval.A)->atype="arr";                           

                        // Recursive definition is crucial here
                        if((yyvsp[-3].A)->atype=="arr") {			                               
                            sym* t=gentemp(new symboltype("int"));
                            int p=computeSize((yyval.A)->type);
                            string str=convertIntToString(p);
                            Q.emit("*",t->name,(yyvsp[-1].expr)->loc->name,str);
                            Q.emit("+",(yyval.A)->loc->name,(yyvsp[-3].A)->loc->name,t->name);
                        }
                        else {                        
                            int p=computeSize((yyval.A)->type);	
                            string str=convertIntToString(p);
                            Q.emit("*",(yyval.A)->loc->name,(yyvsp[-1].expr)->loc->name,str);
                        }
                    }
#line 2061 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 12:
#line 210 "ass6_19CS10069_19CS30007.y"
                    {
                        // Calling the function with a variable number of arguments
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-3].A)->type);

                        string str=convertIntToString((yyvsp[-1].num_params));
                        Q.emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
                    }
#line 2074 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 13:
#line 219 "ass6_19CS10069_19CS30007.y"
                    { 

                    }
#line 2082 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 14:
#line 223 "ass6_19CS10069_19CS30007.y"
                    { 

                    }
#line 2090 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 15:
#line 227 "ass6_19CS10069_19CS30007.y"
                    { 
                        // We generate a temporary instance and add 1 to it
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
                        Q.emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        Q.emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
                    }
#line 2102 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 16:
#line 235 "ass6_19CS10069_19CS30007.y"
                    {
                        // We generate a temporary instance and subtract 1 from it
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);

                        Q.emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        Q.emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");	
                    }
#line 2115 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 17:
#line 244 "ass6_19CS10069_19CS30007.y"
                    { }
#line 2121 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 18:
#line 246 "ass6_19CS10069_19CS30007.y"
                    { }
#line 2127 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 19:
#line 251 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=1;                                      //Simple assignment
                        Q.emit("param",(yyvsp[0].expr)->loc->name);	
                    }
#line 2136 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 20:
#line 256 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //Add 1 here
                        Q.emit("param",(yyvsp[0].expr)->loc->name);
                    }
#line 2145 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 21:
#line 264 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=(yyvsp[0].num_params); // Simple assignment here
                    }
#line 2153 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 22:
#line 268 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.num_params) = 0; // defaults to 0
                    }
#line 2161 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 23:
#line 275 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.A)=(yyvsp[0].A); /* assign $$ =  $1*/
                    }
#line 2169 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 24:
#line 279 "ass6_19CS10069_19CS30007.y"
                    {  	
                        Q.emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");		// we just add 1 here
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2178 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 25:
#line 284 "ass6_19CS10069_19CS30007.y"
                    {
                        Q.emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");        // we just subtract 1 here
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2187 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 26:
#line 289 "ass6_19CS10069_19CS30007.y"
                    {   
                        (yyval.A)=new Array();
                        // We need to do case work here
                        switch((yyvsp[-1].unaryOp)) {	  

                            case '&':                                                  // This is ampersand, indicating address value
                                (yyval.A)->Array=gentemp(new symboltype("ptr"));
                                (yyval.A)->Array->type->arrtype=(yyvsp[0].A)->Array->type; 
                                Q.emit("=&",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;

                            case '*':                                                   // Dereferencing operator here
                                (yyval.A)->atype="ptr";
                                (yyval.A)->loc=gentemp((yyvsp[0].A)->Array->type->arrtype);
                                (yyval.A)->Array=(yyvsp[0].A)->Array;
                                Q.emit("=*",(yyval.A)->loc->name,(yyvsp[0].A)->Array->name);
                                break;

                            case '+':  
                                (yyval.A)=(yyvsp[0].A);
                                break;                 // Stays same as +a = a

                            case '-':				   // Just make a temporary vaiable with negative value
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                Q.emit("uminus",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;
                                
                            case '~':                   // The bitwise not
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                Q.emit("~",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;

                            case '!':				// The logical not, again we create a temporary and do our work
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                Q.emit("!",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;
                        }
                    }
#line 2230 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 27:
#line 328 "ass6_19CS10069_19CS30007.y"
                    { 

                    }
#line 2238 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 28:
#line 332 "ass6_19CS10069_19CS30007.y"
                    { 

                    }
#line 2246 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 29:
#line 340 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '&'; 
                    }
#line 2254 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 30:
#line 344 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '*'; 
                    }
#line 2262 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 31:
#line 348 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '+'; 
                    }
#line 2270 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 32:
#line 352 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '-'; 
                    }
#line 2278 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 33:
#line 356 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '~'; 
                    }
#line 2286 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 34:
#line 360 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '!'; 
                    }
#line 2294 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 35:
#line 367 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.A) = (yyvsp[0].A); 
                    }
#line 2302 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 36:
#line 371 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             // Convert and assign
                    }
#line 2311 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 37:
#line 379 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.expr) = new Expression();             

                        // We handle casting by checking types and doing necessary conversions
                        if((yyvsp[0].A)->atype=="arr") {
                            (yyval.expr)->loc = gentemp((yyvsp[0].A)->loc->type);	
                            Q.emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].A)->Array->name, (yyvsp[0].A)->loc->name);     
                        }

                        else if((yyvsp[0].A)->atype=="ptr") { 
                            (yyval.expr)->loc = (yyvsp[0].A)->loc;        
                        }
                        else {
                            (yyval.expr)->loc = (yyvsp[0].A)->Array;
                        }
                    }
#line 2332 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 38:
#line 396 "ass6_19CS10069_19CS30007.y"
                    { 
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)) {
                            // Types are not same
                            cout<<"Line: "<<line<<"\n";
                            yyerror("There is a type error in our program!");
                            return 1;
                        }    
                        else {
                            // Simply assign here
                            (yyval.expr) = new Expression();	
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
                        }
                    }
#line 2351 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 39:
#line 411 "ass6_19CS10069_19CS30007.y"
                    {
                        //Types are not same
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)){ 
                            cout << "There is a type error in our Program"<< endl;
                        }
                        else {
                            // Just do the operation
                            (yyval.expr) = new Expression();
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
                        }
                    }
#line 2368 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 40:
#line 424 "ass6_19CS10069_19CS30007.y"
                    {
                        // Incompatible types
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)) 
                            cout << "There is a type error in our Program"<< endl;		
                        else {
                            // Just do the operation
                            (yyval.expr) = new Expression();

                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);	
                        }
                    }
#line 2385 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 41:
#line 441 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2393 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 42:
#line 445 "ass6_19CS10069_19CS30007.y"
                    {
                        // Incompatible types
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
                            cout << "There is a type error in our Program"<< endl;
                        else {
                            // Continue with the operation
                            (yyval.expr) = new Expression();	

                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2410 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 43:
#line 458 "ass6_19CS10069_19CS30007.y"
                    {
                        // Check and do the operation
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
                            cout << "There is a type error in our Program"<< endl;		
                        else        
                        {	
                            (yyval.expr) = new Expression();	

                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2427 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 44:
#line 474 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2435 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 45:
#line 478 "ass6_19CS10069_19CS30007.y"
                    { 
                        if(!((yyvsp[0].expr)->loc->type->type == "int"))
                            cout << "There is a type error in our Program"<< endl; 		
                        else {		
                            (yyval.expr) = new Expression();		

                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            Q.emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);		
                        }
                    }
#line 2450 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 46:
#line 489 "ass6_19CS10069_19CS30007.y"
                    { 	
                        // Check and carry out operation
                        if(!((yyvsp[0].expr)->loc->type->type == "int")) {
                            cout << "There is a type Error in our Program"<< endl; 		
                        }
                        else {			
                            (yyval.expr) = new Expression();	

                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            Q.emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);			
                        }
                    }
#line 2467 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 47:
#line 505 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2475 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 48:
#line 509 "ass6_19CS10069_19CS30007.y"
                    {
                        // Check and do the operation
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            yyerror("There is a type error in our Program");
                        }
                        else 
                        {      
                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "bool";                         
                            // Need to update truelist and falselist since type is boolean
                            (yyval.expr)->truelist = makelist(nextinstr());     
                            (yyval.expr)->falselist = makelist(nextinstr()+1);
                            
                            Q.emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     
                            Q.emit("goto", "");	
                        }
                    }
#line 2498 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 49:
#line 528 "ass6_19CS10069_19CS30007.y"
                    {
                        // Check and carry out conversions and generate reqd attributed for bool type
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            yyerror("There is a type error in our program");
                        }
                        else {	
                            (yyval.expr) = new Expression();		

                            (yyval.expr)->type = "bool";
                            // Need to update truelist and falselist since type is boolean
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);

                            Q.emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            Q.emit("goto", "");
                        }	
                    }
#line 2520 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 50:
#line 546 "ass6_19CS10069_19CS30007.y"
                    {
                        // Compare and carry out operation
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {			
                            (yyval.expr) = new Expression();		

                            (yyval.expr)->type = "bool";
                            // Need to update the attributes
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);

                            Q.emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            Q.emit("goto", "");
                        }		
                    }
#line 2542 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 51:
#line 564 "ass6_19CS10069_19CS30007.y"
                    {
                        // Compare and carry out operation
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)){
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {	
                            (yyval.expr) = new Expression();	
                            
                            (yyval.expr)->type = "bool";
                            // Need to update the attributes for boolean data type
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);

                            Q.emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            Q.emit("goto", "");
                        }
                    }
#line 2564 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 52:
#line 585 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2572 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 53:
#line 589 "ass6_19CS10069_19CS30007.y"
                    {
                        // Check and assign
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {
                            // We need to convert here
                            convertBoolToInt((yyvsp[-2].expr));                  
                            convertBoolToInt((yyvsp[0].expr));

                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());            
                            (yyval.expr)->falselist = makelist(nextinstr()+1); 

                            Q.emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);      
                            Q.emit("goto", "");				
                        }
                    }
#line 2597 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 54:
#line 610 "ass6_19CS10069_19CS30007.y"
                    {
                        // Similar to last one, just that we check for inequality here
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {			
                            convertBoolToInt((yyvsp[-2].expr));
                            convertBoolToInt((yyvsp[0].expr));

                            (yyval.expr) = new Expression();                 

                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);

                            Q.emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            Q.emit("goto", "");
                        }
                    }
#line 2621 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 55:
#line 633 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2629 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 56:
#line 637 "ass6_19CS10069_19CS30007.y"
                    {
                        // Check and assign similar to last one, but since it is not boolean,
                        // we just update the loc (its only int)
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)){		
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {              
                            convertBoolToInt((yyvsp[-2].expr));                             
                            convertBoolToInt((yyvsp[0].expr));			

                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "not-boolean";                   
                            (yyval.expr)->loc = gentemp(new symboltype("int"));

                            Q.emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);               
                        }
                    }
#line 2652 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 57:
#line 659 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2660 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 58:
#line 663 "ass6_19CS10069_19CS30007.y"
                    {
                        // Similar to the last one, check, assign loc if alright and emit quad
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {
                            convertBoolToInt((yyvsp[-2].expr));
                            convertBoolToInt((yyvsp[0].expr));

                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "not-boolean";
                            (yyval.expr)->loc = gentemp(new symboltype("int"));

                            Q.emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2682 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 59:
#line 684 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2690 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 60:
#line 688 "ass6_19CS10069_19CS30007.y"
                    { 
                        // Again same as the last one, convert to int, asign loc and emit quad
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) { 
                            yyerror("There is a type error in our program"); 
                        }
                        else {
                            convertBoolToInt((yyvsp[-2].expr));		
                            convertBoolToInt((yyvsp[0].expr));

                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "not-boolean";
                            (yyval.expr)->loc = gentemp(new symboltype("int"));

                            Q.emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        } 
                    }
#line 2712 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 61:
#line 709 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2720 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 62:
#line 713 "ass6_19CS10069_19CS30007.y"
                    { 
                        // Converto to bool before the logical operation
                        convertIntToBool((yyvsp[0].expr));                                  
                        convertIntToBool((yyvsp[-3].expr));                                 

                        // Generate new boolean expression
                        (yyval.expr) = new Expression();                               
                        (yyval.expr)->type = "bool";
                        
                        // Do the backpatching and generate the attributes
                        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));                        
                        (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                       
                        (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);   
                    }
#line 2739 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 63:
#line 731 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2747 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 64:
#line 735 "ass6_19CS10069_19CS30007.y"
                    { 
                        // Similar to last one
                        convertIntToBool((yyvsp[0].expr));			 
                        convertIntToBool((yyvsp[-3].expr));			

                        (yyval.expr) = new Expression();	
                        (yyval.expr)->type = "bool";

                        // As per requirement
                        backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr_number));		
                        (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);		
                        (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	
                    }
#line 2765 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 65:
#line 752 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2771 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 66:
#line 754 "ass6_19CS10069_19CS30007.y"
                    {
                        //normal conversion method to get conditional expressions
                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->loc->type);       //generate temporary for expression
                        (yyval.expr)->loc->update((yyvsp[-2].expr)->loc->type);
                        
                        backpatch((yyvsp[-4].expr)->truelist, nextinstr());           // $1 true goes to expression
                        Q.emit("=", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name);      // make it equal to first expression
                        list<int> l = makelist(nextinstr());            //makelist next instruction
                        Q.emit("goto", "");                             //prevent fallthrough

                        backpatch((yyvsp[-4].expr)->falselist, nextinstr());          // $1 false goes to conditional expression
                        Q.emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);      // Second Expression

                        backpatch(l, nextinstr());                      // fallthrough, go to next instruction
                    }
#line 2791 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 67:
#line 773 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2797 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 68:
#line 775 "ass6_19CS10069_19CS30007.y"
                    {
                        if((yyvsp[-2].A)->atype=="arr")                                            // if type is arr, Check and convert then Q.emit as []=
                        {
                            (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->type->type);
                            Q.emit("[]=", (yyvsp[-2].A)->Array->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].expr)->loc->name);		
                        }
                        else if((yyvsp[-2].A)->atype=="ptr")                                       // if type is ptr, simply Q.emit as *=
                        {
                            Q.emit("*=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);	
                        }
                        else                                                            // otherwise simple assignment
                        {
                            (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->Array->type->type);
                            // ithink we can fix this TODO
                            Q.emit("=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);
                        }
                        
                        (yyval.expr) = (yyvsp[0].expr);
                    }
#line 2821 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 69:
#line 799 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2827 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 70:
#line 801 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2833 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 71:
#line 803 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2839 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 72:
#line 805 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2845 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 73:
#line 807 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2851 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 74:
#line 809 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2857 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 75:
#line 811 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2863 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 76:
#line 813 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2869 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 77:
#line 815 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2875 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 78:
#line 817 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2881 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 79:
#line 819 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2887 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 80:
#line 824 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2893 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 81:
#line 826 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2899 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 82:
#line 831 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2905 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 83:
#line 836 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2911 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 84:
#line 840 "ass6_19CS10069_19CS30007.y"
                                         {  }
#line 2917 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 85:
#line 841 "ass6_19CS10069_19CS30007.y"
                            {  }
#line 2923 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 86:
#line 846 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2929 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 87:
#line 848 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2935 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 88:
#line 850 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2941 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 89:
#line 852 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2947 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 90:
#line 856 "ass6_19CS10069_19CS30007.y"
                                           { }
#line 2953 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 91:
#line 857 "ass6_19CS10069_19CS30007.y"
                             {  }
#line 2959 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 92:
#line 862 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2965 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 93:
#line 864 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2971 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 94:
#line 869 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.symp) = (yyvsp[0].symp);                            // Simple Assign 
                    }
#line 2979 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 95:
#line 873 "ass6_19CS10069_19CS30007.y"
                    {
                        if((yyvsp[0].symp)->val != ""){
                            (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;                // get the initial value
                        }
                        Q.emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);	// emit that initial value with Assign operator
                    }
#line 2990 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 96:
#line 883 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2996 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 97:
#line 885 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3002 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 98:
#line 887 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3008 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 99:
#line 889 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3014 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 100:
#line 894 "ass6_19CS10069_19CS30007.y"
                    { var_type="void"; /* Store the latest var type */ 
                        lookupInsideParent = false;
                    }
#line 3022 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 101:
#line 898 "ass6_19CS10069_19CS30007.y"
                    { var_type="char"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 3029 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 102:
#line 901 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3035 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 103:
#line 903 "ass6_19CS10069_19CS30007.y"
                    { var_type="int"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 3042 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 104:
#line 906 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3048 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 105:
#line 908 "ass6_19CS10069_19CS30007.y"
                    { var_type="float"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 3055 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 106:
#line 911 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3061 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 107:
#line 913 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3067 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 108:
#line 915 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3073 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 109:
#line 917 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3079 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 110:
#line 919 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3085 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 111:
#line 921 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3091 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 112:
#line 923 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3097 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 113:
#line 925 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3103 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 114:
#line 930 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3109 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 115:
#line 932 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3115 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 116:
#line 936 "ass6_19CS10069_19CS30007.y"
                                             {  }
#line 3121 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 117:
#line 937 "ass6_19CS10069_19CS30007.y"
                             {  }
#line 3127 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 118:
#line 942 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3133 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 119:
#line 944 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3139 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 120:
#line 946 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3145 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 121:
#line 951 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3151 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 122:
#line 953 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3157 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 123:
#line 958 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3163 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 124:
#line 960 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3169 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 125:
#line 965 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3175 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 126:
#line 967 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3181 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 127:
#line 972 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3187 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 128:
#line 974 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3193 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 129:
#line 978 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3199 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 130:
#line 980 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3205 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 131:
#line 982 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3211 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 132:
#line 987 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3217 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 133:
#line 989 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3223 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 134:
#line 991 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3229 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 135:
#line 995 "ass6_19CS10069_19CS30007.y"
                               {  }
#line 3235 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 136:
#line 996 "ass6_19CS10069_19CS30007.y"
                             {  }
#line 3241 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 137:
#line 1001 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3247 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 138:
#line 1003 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3253 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 139:
#line 1009 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3259 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 140:
#line 1011 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3265 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 141:
#line 1017 "ass6_19CS10069_19CS30007.y"
                    { /* NOT to be modelled */ }
#line 3271 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 142:
#line 1019 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3277 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 143:
#line 1021 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3283 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 144:
#line 1026 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3289 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 145:
#line 1031 "ass6_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-1].sym_type);
                        while(t->arrtype!=NULL)
                        {
                            t = t->arrtype;                                         // Recursively get to the base Array
                        }   
                        t->arrtype = (yyvsp[0].symp)->type;                                      // add the base type 
                        
                        (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                                        // update the symbol type
                    }
#line 3304 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 146:
#line 1041 "ass6_19CS10069_19CS30007.y"
                                        {   }
#line 3310 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 147:
#line 1048 "ass6_19CS10069_19CS30007.y"
                    {
                        //if ID, simply add a new variable of var_type
                        
                        string nameOfTable = (yyvsp[0].symp)->name;
                        if(nameOfTable.find("@")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("@"));
                        curPossibleSTName = nameOfTable;	 
                        (yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));                                      // update the symbol type to latest type specifier
                        currSymbolPtr = (yyval.symp);	                                                            // store the latest Symbol
                    }
#line 3325 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 148:
#line 1058 "ass6_19CS10069_19CS30007.y"
                                         {(yyval.symp)=(yyvsp[-1].symp);}
#line 3331 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 149:
#line 1059 "ass6_19CS10069_19CS30007.y"
                                                                                          {	}
#line 3337 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 150:
#line 1060 "ass6_19CS10069_19CS30007.y"
                                                                    {	}
#line 3343 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 151:
#line 1062 "ass6_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-3].symp) -> type;
                        symboltype *prev = NULL;                                                        // prev initialized to NULL
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;                                                             // recursively find the base type
                        }
                        if(prev==NULL) 
                        {
                            int temp = atoi((yyvsp[-1].expr)->loc->val.c_str());                                      // temp = string(value)
                            symboltype* s = new symboltype("arr", (yyvsp[-3].symp)->type, temp);                      // Create a new symbol with the initial value
                            (yyval.symp) = (yyvsp[-3].symp)->update(s);                                                         // Update the symbol type
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, atoi((yyvsp[-1].expr)->loc->val.c_str()));      // similar arguments as above		
                            (yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
                        }
                    }
#line 3368 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 152:
#line 1083 "ass6_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-2].symp) -> type;
                        symboltype *prev = NULL;                                    // initialize prev to NULL
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;                                         // Recursively find the base type
                        }
                        if(prev==NULL) 
                        {
                            symboltype* s = new symboltype("arr", (yyvsp[-2].symp)->type, 0);     // no initial values, simply keep 0
                            (yyval.symp) = (yyvsp[-2].symp)->update(s);                                     // Update the symboltype of $$
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, 0);
                            (yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
                        }
                    }
#line 3392 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 153:
#line 1102 "ass6_19CS10069_19CS30007.y"
                                                                                                 {	}
#line 3398 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 154:
#line 1103 "ass6_19CS10069_19CS30007.y"
                                                                             {	}
#line 3404 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 155:
#line 1104 "ass6_19CS10069_19CS30007.y"
                                                                         {	}
#line 3410 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 156:
#line 1105 "ass6_19CS10069_19CS30007.y"
                                                     {	}
#line 3416 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 157:
#line 1107 "ass6_19CS10069_19CS30007.y"
                    {
                        string nameOfTable = (yyvsp[-4].symp)->name;
                        if(nameOfTable.find("@")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("@"));
                        ST->name = nameOfTable;
                        (yyvsp[-4].symp)->name = nameOfTable;	                    // change the ST name to fun
                        if((yyvsp[-4].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");          // lookup for return value	
                            s->update((yyvsp[-4].symp)->type);		            // update return type
                        }
                        (yyvsp[-4].symp)->nested=ST;                              // link nested Symbol Table 
                        (yyvsp[-4].symp)->category = "function";                   // TODO: clarify
                        ST->parent = globalST;                      // link parent Symbol Table
                        
                        changeTable(globalST);				        // Come back to globalsymbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3439 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 158:
#line 1125 "ass6_19CS10069_19CS30007.y"
                                                                {	}
#line 3445 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 159:
#line 1127 "ass6_19CS10069_19CS30007.y"
                    {        //similar as above

                        string nameOfTable = (yyvsp[-3].symp)->name;
                        if(nameOfTable.find("@")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("@"));
                        ST->name = nameOfTable;
                        (yyvsp[-3].symp)->name = nameOfTable;
                        if((yyvsp[-3].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");
                            s->update((yyvsp[-3].symp)->type);            // update return type
                        }
                        (yyvsp[-3].symp)->nested=ST;                      // link nested Symbol table
                        (yyvsp[-3].symp)->category = "function";                   // TODO: clarify
                        ST->parent = globalST;              // Set parent to Global Symbol table
                        
                        changeTable(globalST);				// Go back to global Symbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3469 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 160:
#line 1149 "ass6_19CS10069_19CS30007.y"
                                        { }
#line 3475 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 161:
#line 1150 "ass6_19CS10069_19CS30007.y"
                             {  }
#line 3481 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 162:
#line 1156 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr");   //create a new pointer symbol
                    }
#line 3489 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 163:
#line 1160 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type)); // create the symboltype with $3 symbol type
                    }
#line 3497 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 164:
#line 1167 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3503 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 165:
#line 1169 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3509 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 166:
#line 1174 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3515 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 167:
#line 1176 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3521 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 168:
#line 1181 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3527 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 169:
#line 1183 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3533 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 170:
#line 1188 "ass6_19CS10069_19CS30007.y"
                    {  
                        (yyvsp[0].symp)->category = "param";              // verify
                    }
#line 3541 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 171:
#line 1192 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3547 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 172:
#line 1197 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3553 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 173:
#line 1199 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3559 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 174:
#line 1204 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3565 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 175:
#line 1209 "ass6_19CS10069_19CS30007.y"
                    { (yyval.symp)=(yyvsp[0].expr)->loc; /* assignment */  }
#line 3571 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 176:
#line 1211 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3577 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 177:
#line 1213 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3583 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 178:
#line 1218 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3589 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 179:
#line 1220 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3595 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 180:
#line 1224 "ass6_19CS10069_19CS30007.y"
                                { }
#line 3601 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 181:
#line 1225 "ass6_19CS10069_19CS30007.y"
                             { }
#line 3607 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 182:
#line 1230 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3613 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 183:
#line 1235 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3619 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 184:
#line 1237 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3625 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 185:
#line 1242 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3631 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 186:
#line 1244 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3637 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 187:
#line 1249 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3643 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 188:
#line 1251 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3649 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 189:
#line 1253 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=new Statement();              //create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
                    }
#line 3658 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 190:
#line 1258 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3664 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 191:
#line 1260 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3670 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 192:
#line 1262 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3676 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 193:
#line 1266 "ass6_19CS10069_19CS30007.y"
                                        {  }
#line 3682 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 194:
#line 1268 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=new Statement();                         // create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist;                  // assign the nextlist
                    }
#line 3691 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 195:
#line 1272 "ass6_19CS10069_19CS30007.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3697 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 196:
#line 1273 "ass6_19CS10069_19CS30007.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3703 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 197:
#line 1274 "ass6_19CS10069_19CS30007.y"
                                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3709 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 198:
#line 1278 "ass6_19CS10069_19CS30007.y"
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
#line 3727 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 199:
#line 1292 "ass6_19CS10069_19CS30007.y"
                    { /* Not to be modelled */ }
#line 3733 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 200:
#line 1294 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3739 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 201:
#line 1299 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=(yyvsp[-1].stat);                           // Compound Statement = blockItemList
                        changeTable(ST->parent);         // Change Symbol Table
                    }
#line 3748 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 202:
#line 1307 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3754 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 203:
#line 1309 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=(yyvsp[0].stat);
                        backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
                    }
#line 3763 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 204:
#line 1317 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat) ;/* simple assign */}
#line 3769 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 205:
#line 1319 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3775 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 206:
#line 1324 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3781 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 207:
#line 1326 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3787 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 208:
#line 1331 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr) = new Expression(); /* new Expression */
                    }
#line 3794 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 209:
#line 1334 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[-1].expr); /* Simple assign */
                    }
#line 3801 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 210:
#line 1340 "ass6_19CS10069_19CS30007.y"
                    {
                        // if without else
                        backpatch((yyvsp[-4].stat)->nextlist, nextinstr());                   // After we hit N we go to next instr
                        convertIntToBool((yyvsp[-5].expr));                                   // expression in IF is converted to bool

                        (yyval.stat) = new Statement();                                   
                        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));                            // We do the backpatch here

                        list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);    // If it is false, we just escape the inner statement
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
                    }
#line 3817 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 211:
#line 1352 "ass6_19CS10069_19CS30007.y"
                    {
                        // if with else
                        backpatch((yyvsp[-7].stat)->nextlist, nextinstr());		            // After we hit N we go to next instr
                        convertIntToBool((yyvsp[-8].expr));                                   // convert expression to bool 

                        (yyval.stat) = new Statement();                                   
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));                            // If true, we access the first part
                        backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));                          // Else the second prt

                        list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       // Then we merge with the nextlists of both statements
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);	
                    }
#line 3834 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 212:
#line 1365 "ass6_19CS10069_19CS30007.y"
                    { /* Not asked in question */ }
#line 3840 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 213:
#line 1370 "ass6_19CS10069_19CS30007.y"
                    {	
                        // while statement
                        (yyval.stat) = new Statement();                                  
                        convertIntToBool((yyvsp[-3].expr));                                 
                        
                        // Proper backpatching
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-4].instr_number));	            // M1 to go back to expression again
                        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));	            // M2 to go to statement if the expression is true
                        (yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;               // If expression is false, Exit loop

                        // Q.emit to prevent fallthrough
                        string str=convertIntToString((yyvsp[-4].instr_number));		
                        Q.emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3861 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 214:
#line 1387 "ass6_19CS10069_19CS30007.y"
                    {	
                        //while statement
                        (yyval.stat) = new Statement();                   // create statement
                        convertIntToBool((yyvsp[-5].expr));                   // convert expression to bool
                        
                        // Proper Backpatching
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-6].instr_number));	        // M1 to go back to expression again
                        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));	        // M2 to go to statement if the expression is true
                        (yyval.stat)->nextlist = (yyvsp[-5].expr)->falselist;           // If expression is false, then exit loop
                        
                        // Q.emit to prevent fallthrough
                        string str=convertIntToString((yyvsp[-6].instr_number));		
                        Q.emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3882 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 215:
#line 1404 "ass6_19CS10069_19CS30007.y"
                    {
                        //do statement
                        (yyval.stat) = new Statement();                               //create statement	
                        convertIntToBool((yyvsp[-2].expr));                               //convert to bool
                        
                        // proper Backpatching
                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));						// M1 to go back to statement if expression is true
                        backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
                        
                        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       // Exit loop if statement is false
                        loop_name = "";
                    }
#line 3899 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 216:
#line 1417 "ass6_19CS10069_19CS30007.y"
                        {
                        //do statement
		                (yyval.stat) = new Statement();     //create statement	
		                convertIntToBool((yyvsp[-2].expr));      //convert to bool
		                
                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr_number));						// M1 to go back to statement if expression is true
		                backpatch((yyvsp[-7].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		                
                        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       // Exit loop if statement is false
		                loop_name = "";
	                }
#line 3915 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 217:
#line 1429 "ass6_19CS10069_19CS30007.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		            // create new statement
                        convertIntToBool((yyvsp[-6].expr));                   // convert check expression to boolean
                        
                        // Proper Backpatching
                        backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	        // if expression is true, go to M2
                        backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	        // after N, go back to M1
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	        // statement go back to expression
                        
                        
                        string str=convertIntToString((yyvsp[-5].instr_number));
                        Q.emit("goto", str);				    // Emit goto
                        (yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	        // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3937 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 218:
#line 1447 "ass6_19CS10069_19CS30007.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		 //create new statement
                        convertIntToBool((yyvsp[-6].expr));  //convert check expression to boolean
                        
                        // Proper Backpatching
                        backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	                // if expression is true, go to M2
                        backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	                // after N, go back to M1
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	                // statement go back to expression
                        
                        
                        string str=convertIntToString((yyvsp[-5].instr_number));
                        Q.emit("goto", str);				            //  emit goto str
                        (yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	                // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3959 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 219:
#line 1465 "ass6_19CS10069_19CS30007.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		                    // create new statement
                        convertIntToBool((yyvsp[-8].expr));                           // convert check expression to boolean

                        // Correctly backpatch lists
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));	                // if expression is true, then go to M2
                        backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));	                // after N, go back to M1
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));	                //statement go back to expression
                        
                        
                        string str=convertIntToString((yyvsp[-7].instr_number));
                        Q.emit("goto", str);				            //prevent fallthrough
                        (yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;	                // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3981 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 220:
#line 1483 "ass6_19CS10069_19CS30007.y"
                    {	
                        (yyval.stat) = new Statement();		                    // create new statement
                        convertIntToBool((yyvsp[-8].expr));                           // convert expression to boolean
                        
                        // proper backpatching
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));	                // backpatch &13
                        backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));	                // after N, go back to M1
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));	                // statement go back to expression
                        
                        string str=convertIntToString((yyvsp[-7].instr_number));
                        Q.emit("goto", str);				            // Emit goto Str
                        (yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;	                // Exit if statement is false
                        loop_name = "";
                        changeTable(ST->parent);                        
                    }
#line 4001 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 221:
#line 1502 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat) = new Statement();
                        label *l = find_label((yyvsp[-1].symp)->name);
                        if(l){
                            Q.emit("goto","");
                            list<int>lst = makelist(nextinstr());
                            l->nextlist = merge(l->nextlist,lst);
                            if(l->addr!=-1)
                                backpatch(l->nextlist,l->addr);
                        } else {
                            l = new label((yyvsp[-1].symp)->name);
                            l->nextlist = makelist(nextinstr());
                            Q.emit("goto","");
                            label_table.push_back(*l);
                        }
                    }
#line 4022 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 222:
#line 1519 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat) = new Statement(); }
#line 4028 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 223:
#line 1521 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat) = new Statement(); }
#line 4034 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 224:
#line 1523 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.stat) = new Statement();	
                        Q.emit("return",(yyvsp[-1].expr)->loc->name);             
                    }
#line 4043 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 225:
#line 1528 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.stat) = new Statement();	
                        Q.emit("return","");                         
                    }
#line 4052 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 226:
#line 1536 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4058 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 227:
#line 1538 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4064 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 228:
#line 1543 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4070 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 229:
#line 1545 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4076 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 230:
#line 1550 "ass6_19CS10069_19CS30007.y"
                    {
                        int next_instr=0;	 	
                        ST->parent=globalST;
                        (yyvsp[-5].symp)->updateFuntionStatus(true);
                        // Add a function name
                        table_count = 0;
                        label_table.clear();                        

                        changeTable(globalST);                     // Change the table again to Global ST
                    }
#line 4091 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 231:
#line 1563 "ass6_19CS10069_19CS30007.y"
                                     { }
#line 4097 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 232:
#line 1564 "ass6_19CS10069_19CS30007.y"
                             { }
#line 4103 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 233:
#line 1569 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4109 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 234:
#line 1571 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4115 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 235:
#line 1575 "ass6_19CS10069_19CS30007.y"
        {
        // Used in backpatching
		(yyval.instr_number) = nextinstr();
	}
#line 4124 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 236:
#line 1582 "ass6_19CS10069_19CS30007.y"
        {
		// Beginning of the for statement
		loop_name = "FOR";
	}
#line 4133 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 237:
#line 1589 "ass6_19CS10069_19CS30007.y"
        {
		// Beginning of the while statement
		loop_name = "WHILE";
	}
#line 4142 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 238:
#line 1596 "ass6_19CS10069_19CS30007.y"
        {
		// Beginning of the do while statement
		loop_name = "DO_WHILE";
	}
#line 4151 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 239:
#line 1603 "ass6_19CS10069_19CS30007.y"
        {
		string name = ST->name+"."+loop_name+"$"+to_string(table_count);
		table_count++; 

        // First an entry is created
		sym* s = ST->lookup(name); 
		s->nested = new symtable(name);
		s->nested->parent = ST;
		s->name = name;
		s->update(new symboltype("block"));

		currSymbolPtr = s;          // updating the current symbol
	}
#line 4169 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 240:
#line 1619 "ass6_19CS10069_19CS30007.y"
        {
        /*
            This is also useful in backpatching
        */
		(yyval.stat) = new Statement();
		(yyval.stat)->nextlist=makelist(nextinstr());

		Q.emit("goto","");
	}
#line 4183 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 241:
#line 1631 "ass6_19CS10069_19CS30007.y"
        {
            lookupInsideParent = true;
        }
#line 4191 "ass6_19CS10069_19CS30007.tab.c"
    break;


#line 4195 "ass6_19CS10069_19CS30007.tab.c"

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
#line 1634 "ass6_19CS10069_19CS30007.y"


/*Auxiliaries*/
void yyerror(string s) {
    // print error
    cout<<s<<endl;
}
