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
    extern vector<string> stringsToBePrinted;
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
#define YYLAST   1318

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  242
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  423

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
       0,   107,   107,   126,   134,   141,   150,   156,   160,   171,
     179,   187,   210,   219,   223,   227,   235,   244,   246,   251,
     256,   264,   268,   275,   279,   284,   289,   328,   332,   340,
     344,   348,   352,   356,   360,   367,   371,   379,   396,   411,
     424,   441,   445,   458,   474,   478,   489,   505,   509,   528,
     546,   564,   585,   589,   610,   633,   637,   659,   663,   684,
     688,   709,   713,   731,   735,   752,   754,   773,   775,   799,
     801,   803,   805,   807,   809,   811,   813,   815,   817,   819,
     824,   826,   831,   836,   841,   842,   846,   848,   850,   852,
     857,   858,   862,   864,   869,   873,   883,   885,   887,   889,
     894,   898,   901,   903,   906,   908,   911,   913,   915,   917,
     919,   921,   923,   925,   930,   932,   937,   938,   942,   944,
     946,   951,   953,   958,   960,   965,   967,   972,   974,   978,
     980,   982,   987,   989,   991,   996,   997,  1001,  1003,  1009,
    1011,  1017,  1019,  1021,  1026,  1031,  1042,  1048,  1059,  1060,
    1061,  1062,  1082,  1102,  1103,  1104,  1105,  1106,  1127,  1128,
    1153,  1154,  1159,  1163,  1170,  1172,  1177,  1179,  1184,  1186,
    1191,  1195,  1200,  1202,  1207,  1212,  1214,  1216,  1221,  1223,
    1228,  1229,  1233,  1238,  1240,  1245,  1247,  1252,  1254,  1256,
    1261,  1263,  1265,  1270,  1271,  1276,  1277,  1278,  1281,  1295,
    1297,  1302,  1310,  1312,  1320,  1322,  1327,  1329,  1334,  1337,
    1343,  1355,  1368,  1373,  1390,  1407,  1420,  1432,  1450,  1468,
    1486,  1505,  1522,  1524,  1526,  1531,  1539,  1541,  1546,  1548,
    1553,  1569,  1570,  1574,  1576,  1580,  1587,  1594,  1601,  1608,
    1624,  1636,  1652
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
  "F", "W", "D", "X", "N", "FUN_CT", "semicolon", YY_NULLPTR
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

#define YYPACT_NINF (-305)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-233)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1256,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,   -30,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,    68,  1256,  1256,  -305,   -26,
    -305,  1256,  1256,  1231,  -305,  -305,   -72,   -45,  -305,   111,
      68,   -67,    10,  -305,  1122,   -10,   -28,  -305,  -305,  -305,
     -31,  1281,  -305,  -305,  -305,  -305,    40,  -305,    62,   111,
      33,  -305,  -305,    68,   743,  -305,    68,  -305,  1256,    89,
     797,   -10,  1281,  1281,   -29,   971,  -305,  1281,    65,   164,
    -305,  -305,  -305,  -305,  -305,    99,   298,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  1025,  1025,  -305,  -305,  -305,
     915,   -37,  -305,  -305,    77,   620,  1054,  -305,   -27,   167,
     207,   190,   224,   132,   135,   146,   157,   -35,  -305,  -305,
    -305,   149,  -305,  -305,   -61,  1147,   996,   169,  -305,   172,
     844,   994,  -305,  -305,  1054,    -7,  -305,   151,  -305,  -305,
    -305,  -305,  1054,  -305,   -17,   915,  -305,   915,  -305,  -305,
    -305,     1,  -305,   179,  1054,   200,   209,   743,  -305,   124,
    -305,   231,  -305,  -305,  1054,  1054,   240,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  1054,  -305,
    -305,  1054,  1054,  1054,  1054,  1054,  1054,  1054,  1054,  1054,
    1054,  1054,  1054,  1054,  1054,  1054,  1054,  -305,  -305,  1054,
     366,  -305,   244,  -305,    68,   203,   201,  -305,   218,   996,
    -305,  -305,   221,  -305,   250,  -305,  -305,  -305,    19,  -305,
    1054,  -305,  -305,  -305,   253,   254,  -305,  1054,   770,   265,
    -305,  -305,   147,  -305,  -305,  -305,  -305,   262,   269,  -305,
     -55,  -305,  -305,  -305,  -305,  -305,   -27,   -27,   167,   167,
     207,   207,   207,   207,   190,   190,   224,   132,   135,  1054,
    1054,    66,   -67,   223,  1054,  -305,  -305,   252,   -67,   271,
    -305,   272,   264,   266,  -305,   115,  -305,  -305,  -305,  -305,
     270,   273,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  1178,  -305,   274,  -305,  -305,  -305,  -305,   275,   275,
    -305,   -37,  -305,  -305,  -305,   743,  1054,  -305,  -305,   146,
     157,  1054,  -305,   115,  -305,   306,   283,   284,   -67,  -305,
    1054,   327,  1054,   430,  -305,  -305,  -305,   366,  -305,  -305,
    -305,  -305,   220,  -305,  -305,  -305,  -305,   430,  -305,  -305,
    -305,    15,  -305,   622,    35,  -305,   430,   366,  -305,  -305,
     155,  -305,  -305,  -305,  -305,   366,  -305,  -305,  -305,  -305,
    -305,  -305,   430,  -305,   330,  -305,   700,  -305,   430,   331,
     408,  -305,  -305,  -305,  -305,  1054,  -305,  -305,   338,   223,
     223,   109,   407,   415,  1054,  -305,  -305,   336,  -305,   342,
     112,  1054,  1054,  -305,   622,   430,  1054,   -67,   337,   337,
     366,  -305,  -305,   114,  -305,   344,   346,   356,   -67,  -305,
    -305,  -305,  -305,   494,   558,   366,  -305,   366,  -305,   357,
     358,  -305,  -305
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
       0,   242,    83,     0,     0,   233,    85,   241,   231,   241,
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
     205,   158,     0,   159,   171,     0,   166,   168,     0,     0,
     156,   151,    30,   150,     0,   119,    82,   129,     0,   126,
       0,   140,   133,   138,     0,     0,     9,     0,     0,     0,
     186,   176,   181,   178,   182,   184,    14,    21,     0,    19,
       0,    13,    68,    38,    39,    40,    42,    43,    46,    45,
      48,    49,    50,    51,    53,    54,    56,    58,    60,     0,
       0,     0,     0,     0,     0,   236,   237,     0,     0,     0,
     238,     0,     0,     6,   239,     0,   206,   207,   187,   188,
     235,     0,   202,   189,   190,   191,   192,   208,   173,   170,
     157,     0,   154,     0,   155,   149,   128,   130,    28,     0,
      81,   181,    36,   185,   177,     0,     0,    12,    11,    62,
      64,     0,   223,     0,   225,     0,     0,     0,     0,   222,
       0,   235,     0,     0,   235,     2,   209,     0,   230,   167,
     169,   153,     0,   179,    20,    66,   224,     0,   239,   239,
     221,     0,   235,     0,     0,   200,     0,   205,   203,    17,
     181,   199,     2,     2,   235,   205,   235,   193,   194,   195,
     196,   197,     0,   198,     0,    18,     0,   235,     0,     0,
       0,   212,   201,   235,   235,     0,   240,   235,     0,     0,
       0,     0,   210,     0,     0,   235,   235,   235,   235,     0,
       0,     0,     0,   235,     0,     0,     0,     0,   240,   240,
     205,   213,   211,     0,   215,     0,     0,     0,     0,   235,
     235,   214,   216,     0,     0,   205,   217,   205,   218,     0,
       0,   219,   220
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -305,   -40,  -305,  -305,  -305,  -305,  -305,    -9,  -305,   -90,
     136,   140,   128,   139,   236,   230,   251,   191,   189,  -305,
    -115,   -57,  -305,   -97,  -125,     2,  -305,     5,   133,  -305,
     388,  -305,    69,   -33,   375,  -305,  -305,   382,   -71,  -305,
     237,  -305,  -305,  -305,   312,     6,  -305,   -16,   411,  -305,
     401,   -62,  -305,  -305,   170,  -305,    79,  -151,   159,  -231,
    -305,  -305,   303,  -206,  -223,  -185,  -305,  -305,  -304,   137,
    -291,  -176,  -138,  -113,  -305,   432,  -305,  -305,  -305,   -63,
    -305,  -305,  -305,    -5,   -70,   397,   -41
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   347,   102,   103,   104,   237,   238,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   150,   178,   275,   217,   276,    41,    66,    48,    42,
      43,    26,    27,    74,   133,    28,    29,    75,    76,   135,
     136,    30,    37,    79,    80,    31,    32,    85,    45,    58,
      46,    59,   205,   206,   207,   124,   153,   120,   156,   157,
     158,   159,   160,   277,   356,   278,   279,   280,   281,   282,
     283,   284,   285,   286,    33,    34,    35,    67,    68,   259,
     316,   317,   321,   325,   382,   121,   287
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   305,    24,   151,   140,    25,   233,   119,   130,    44,
      36,    38,    38,   129,    50,  -135,   180,   221,    39,   216,
     181,   182,   201,    78,    60,    61,   198,   216,   202,   229,
     308,    47,    47,   138,   227,    24,    47,    47,    25,   216,
     132,   183,    56,   364,   132,    57,    65,   154,   151,   155,
     151,   369,   358,    40,    40,   199,    72,    77,   137,    38,
     140,    51,   134,    61,   209,    82,    39,   152,   240,   208,
     122,   222,    69,   214,    70,   374,    57,   146,    77,    77,
      78,    77,   218,    77,   226,    61,   148,   149,   385,   386,
     227,   243,   244,   245,   219,   297,   407,   179,   354,    63,
     119,    40,   261,   358,   227,   216,    77,   239,    38,    39,
     134,   419,   152,   420,   152,    39,    83,   345,   362,   305,
      73,   242,   358,   358,   227,   179,   161,   162,   163,   123,
     204,   351,    57,   179,   142,   260,    82,    77,   302,   315,
     363,    73,    73,    17,    73,   179,    73,    20,    21,   216,
      40,    77,   293,    77,   333,   227,   371,   311,   357,   164,
      49,   165,   376,   166,    52,    53,   313,   359,    64,    73,
     300,   401,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   289,   402,
     416,   418,   387,   234,   194,   397,   335,   408,   227,   195,
      73,   227,   137,   227,   227,   360,   196,    61,   154,   357,
     155,   179,   184,   185,    73,    82,    73,   327,   359,   179,
     197,   312,   314,   341,   224,   344,   225,   319,   357,   357,
     361,   154,    86,   155,   326,   304,   200,   359,   359,   154,
     230,   155,   220,   365,   188,   189,   190,   191,   119,   334,
     179,   179,   143,   144,   210,   179,   360,   211,   343,   186,
     187,   346,   228,    87,    88,    89,    90,    91,    92,    93,
      94,   236,   336,    95,    96,   360,   360,   340,   381,   355,
     241,   361,   192,   193,   288,    97,   290,   390,    98,    99,
     291,   368,   318,   370,   398,   399,   204,   231,   232,   403,
     361,   361,   179,   292,   375,   100,   294,    86,   349,   350,
     379,   380,   366,   367,   383,    61,   250,   251,   252,   253,
     246,   247,   391,   392,   394,   395,   248,   249,   405,   406,
     400,   254,   255,   352,   353,   295,   298,   299,    87,    88,
      89,    90,    91,    92,    93,    94,   413,   414,    95,    96,
     303,   306,   307,   320,   322,   323,   404,   324,  -204,   331,
      97,   328,   301,    98,    99,   338,   339,   412,   373,   262,
     263,   264,   265,   266,   267,    86,   268,   269,   270,   271,
     145,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   337,    17,   272,
      18,    19,    20,    21,    22,    23,   273,    88,    89,    90,
      91,    92,    93,    94,   342,   378,    95,    96,   372,   377,
     384,   388,   389,   393,   396,   257,   227,   409,    97,   410,
     256,    98,    99,   262,   263,   264,   265,   266,   267,    86,
     268,   269,   270,   271,   411,   421,   422,   258,   100,   310,
     309,    84,   141,   274,   131,   296,   223,    71,    61,    81,
     332,   330,   235,   272,   348,    55,   125,     0,     0,     0,
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
       0,   415,     0,     0,     0,     0,    61,     0,     0,     0,
       0,   272,     0,     0,     0,     0,     0,     0,   273,    88,
      89,    90,    91,    92,    93,    94,     0,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    98,    99,   262,   263,   264,   265,   266,
     267,    86,   268,   269,   270,   271,     0,     0,     0,     0,
     100,     0,     0,     0,     0,   417,     0,     0,     0,     0,
      61,     0,     0,     0,     0,   272,     0,     0,     0,     0,
       0,     0,   273,    88,    89,    90,    91,    92,    93,    94,
       0,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,   167,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,     0,     0,     0,   100,     0,     0,     0,     0,    86,
       0,     0,     0,     0,    61,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
      95,    96,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,   100,    87,    88,    89,    90,    91,    92,    93,
      94,     0,    61,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,    86,     0,    98,    99,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
      95,    96,     0,     0,     0,   100,     0,     0,     0,    17,
     101,   126,    97,    20,    21,    98,    99,    87,    88,    89,
      90,    91,    92,    93,   127,     0,     0,    95,    96,     0,
       0,     0,   100,    86,     0,     0,     0,   301,     0,    97,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,   100,
      20,    21,   128,     0,    87,    88,    89,    90,    91,    92,
      93,   212,     0,     0,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,   100,     0,     0,   213,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    13,    14,    15,    16,     0,    17,     0,     0,
       0,    20,    21,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,     0,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   100,    13,    14,
      15,    16,     0,    17,     0,    86,     0,    20,    21,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       0,    13,    14,    15,    16,     0,    17,     0,    17,     0,
      20,    21,    20,    21,    86,     0,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,   139,
       0,    98,    99,    86,     0,    87,    88,    89,    90,    91,
      92,    93,    94,     0,     0,    95,    96,     0,   100,     0,
       0,     0,   215,     0,     0,     0,     0,    97,     0,     0,
      98,    99,     0,     0,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,    95,    96,     0,   147,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,    64,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,  -232,
      17,     0,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   329,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,    13,    14,
      15,    16,     0,    17,     0,     0,     0,    20,    21
};

static const yytype_int16 yycheck[] =
{
      41,   232,     0,   100,    75,     0,   157,    64,    70,    25,
      40,    40,    40,    70,    40,    87,   106,   142,    47,   134,
      47,    48,    83,    40,    40,    92,    61,   142,    89,   154,
      85,    26,    27,    74,    89,    33,    31,    32,    33,   154,
      73,    68,    87,   347,    77,    39,    44,    84,   145,    86,
     147,   355,   343,    82,    82,    90,    87,    51,    74,    40,
     131,    87,    91,    92,   126,    59,    47,   100,   165,   126,
      68,    88,    82,   130,    84,   366,    70,    86,    72,    73,
      40,    75,    89,    77,    83,    92,    95,    96,   379,   380,
      89,   181,   182,   183,   135,   220,   400,   106,    83,    89,
     157,    82,   199,   394,    89,   220,   100,   164,    40,    47,
      91,   415,   145,   417,   147,    47,    83,   323,    83,   350,
      51,   178,   413,   414,    89,   134,    49,    50,    51,    40,
     125,   337,   126,   142,    69,   198,   130,   131,   228,   264,
     346,    72,    73,    32,    75,   154,    77,    36,    37,   264,
      82,   145,   209,   147,   305,    89,   362,    91,   343,    82,
      27,    84,   368,    86,    31,    32,   263,   343,    69,   100,
     227,   394,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   204,   395,
     413,   414,    83,    69,    62,    83,   311,    83,    89,    64,
     131,    89,   218,    89,    89,   343,    60,    92,    84,   394,
      86,   220,    45,    46,   145,   209,   147,   280,   394,   228,
      63,   262,   263,   320,   145,   322,   147,   268,   413,   414,
     343,    84,     9,    86,   275,    88,    87,   413,   414,    84,
      40,    86,    91,    88,    54,    55,    56,    57,   305,   306,
     259,   260,    88,    89,    85,   264,   394,    85,   321,    52,
      53,   324,    83,    40,    41,    42,    43,    44,    45,    46,
      47,    40,   313,    50,    51,   413,   414,   318,   375,   342,
      40,   394,    58,    59,    40,    62,    83,   384,    65,    66,
      89,   354,    40,   356,   391,   392,   291,    88,    89,   396,
     413,   414,   311,    85,   367,    82,    85,     9,    88,    89,
     373,   374,   352,   353,   377,    92,   188,   189,   190,   191,
     184,   185,   385,   386,   387,   388,   186,   187,   398,   399,
     393,   192,   193,   338,   339,    85,    83,    83,    40,    41,
      42,    43,    44,    45,    46,    47,   409,   410,    50,    51,
      85,    89,    83,    82,    82,    91,   397,    91,    88,    85,
      62,    88,    87,    65,    66,    82,    82,   408,   366,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      82,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    91,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    87,     7,    50,    51,    88,    88,
      82,    14,     7,    87,    82,   195,    89,    83,    62,    83,
     194,    65,    66,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    88,    88,    88,   196,    82,   260,
     259,    63,    77,    87,    72,   218,   144,    46,    92,    58,
     301,   291,   159,    33,   327,    33,    69,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    92,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    51,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    82,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    92,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,     9,    -1,    65,    66,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    51,    -1,    -1,    -1,    82,    -1,    -1,    -1,    32,
      87,    34,    62,    36,    37,    65,    66,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    50,    51,    -1,
      -1,    -1,    82,     9,    -1,    -1,    -1,    87,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    82,
      36,    37,    85,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    82,    -1,    -1,    85,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    36,    37,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    82,    27,    28,
      29,    30,    -1,    32,    -1,     9,    -1,    36,    37,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    30,    -1,    32,    -1,    32,    -1,
      36,    37,    36,    37,     9,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    88,
      -1,    65,    66,     9,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    51,    -1,    82,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    51,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    69,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    87,
      32,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    36,    37
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
     140,    92,   179,    89,    69,   118,   120,   170,   171,    82,
      84,   141,    87,   125,   126,   130,   131,   138,    40,   136,
     137,   143,   138,    83,   123,   140,     9,    40,    41,    42,
      43,    44,    45,    46,    47,    50,    51,    62,    65,    66,
      82,    87,    95,    96,    97,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     150,   178,   118,    40,   148,   178,    34,    47,    85,   114,
     144,   130,   126,   127,    91,   132,   133,   140,   179,    88,
     131,   127,    69,    88,    89,    82,   100,    82,   100,   100,
     114,   116,   126,   149,    84,    86,   151,   152,   153,   154,
     155,    49,    50,    51,    82,    84,    86,    69,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,   115,   100,
     102,    47,    48,    68,    45,    46,    52,    53,    54,    55,
      56,    57,    58,    59,    62,    64,    60,    63,    61,    90,
      87,    83,    89,    83,   120,   145,   146,   147,   114,   144,
      85,    85,    47,    85,   114,    88,   113,   117,    89,   179,
      91,   117,    88,   137,   149,   149,    83,    89,    83,   117,
      40,    88,    89,   150,    69,   155,    40,    98,    99,   114,
     116,    40,   114,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   108,   109,   172,
     172,   116,     3,     4,     5,     6,     7,     8,    10,    11,
      12,    13,    33,    40,    87,   116,   118,   156,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   179,    40,   140,
      83,    89,    85,   114,    85,    85,   133,   117,    83,    83,
     114,    87,   102,    85,    88,   152,    89,    83,    85,   110,
     111,    91,   179,   116,   179,   117,   173,   174,    40,   179,
      82,   175,    82,    91,    91,   176,   179,   172,    88,    67,
     147,    85,   151,   150,   114,   113,   179,    91,    82,    82,
     179,   116,    87,   172,   116,   156,   172,    94,   162,    88,
      89,   156,   176,   176,    83,   172,   157,   158,   163,   164,
     165,   166,    83,   156,   161,    88,    94,    94,   172,   161,
     172,   156,    88,   118,   163,   172,   156,    88,     7,   172,
     172,   116,   177,   172,    82,   163,   163,    83,    14,     7,
     116,   172,   172,    87,   172,   172,    82,    83,   116,   116,
     172,   157,   156,   116,   179,   177,   177,   161,    83,    83,
      83,    88,   179,   172,   172,    87,   157,    87,   157,   161,
     161,    88,    88
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
     177,   178,   179
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
       7,    10,     5,    10,    12,    10,    12,    14,    14,    16,
      16,     3,     2,     2,     3,     2,     1,     2,     1,     1,
       7,     1,     0,     1,     2,     0,     0,     0,     0,     0,
       0,     0,     1
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
#line 1936 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 3:
#line 127 "ass6_19CS10069_19CS30007.y"
                    { 
                        // Here we are creating a new instance and storing it
                        (yyval.expr)=new Expression();	
                        string p=convertIntToString((yyvsp[0].int_val));
                        (yyval.expr)->loc=gentemp(new symboltype("int"),p);
                        Q.emit("=",(yyval.expr)->loc->name,p);
                    }
#line 1948 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 4:
#line 135 "ass6_19CS10069_19CS30007.y"
                    {                                                                         
                        (yyval.expr)=new Expression();
                        string p=convertFloatToString((yyvsp[0].float_val));
                        (yyval.expr)->loc=gentemp(new symboltype("float"),p);
                        Q.emit("=",(yyval.expr)->loc->name,p);
                    }
#line 1959 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 5:
#line 142 "ass6_19CS10069_19CS30007.y"
                    {                                                                        
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_val));
                        Q.emit("equalchar",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 1969 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 6:
#line 151 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.expr)=new Expression();                                                  
                        (yyval.expr)->loc=(yyvsp[0].symp);
                        (yyval.expr)->type="not-boolean";
                    }
#line 1979 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 7:
#line 157 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr) = (yyvsp[0].expr); 
                    }
#line 1987 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 8:
#line 161 "ass6_19CS10069_19CS30007.y"
                    {
                        // TODO: pushback in the strings to be printed
                        (yyval.expr) = new Expression();
                        symboltype* temp = new symboltype("ptr");
                        (yyval.expr)->loc = gentemp(temp, (yyvsp[0].char_val));
                        (yyval.expr)->loc->type->arrtype = new symboltype("char");

                        Q.emit("equalstr", (yyval.expr)->loc->name, to_string(stringsToBePrinted.size()));          // TODO: verify this
                        stringsToBePrinted.push_back((yyvsp[0].char_val));
                    }
#line 2002 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 9:
#line 172 "ass6_19CS10069_19CS30007.y"
                    {                                                                        
                        (yyval.expr)=(yyvsp[-1].expr);
                    }
#line 2010 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 10:
#line 180 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=(yyvsp[0].expr)->loc;	

                        (yyval.A)->type=(yyvsp[0].expr)->loc->type;	
                        (yyval.A)->loc=(yyval.A)->Array;
                    }
#line 2022 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 11:
#line 188 "ass6_19CS10069_19CS30007.y"
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
#line 2049 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 12:
#line 211 "ass6_19CS10069_19CS30007.y"
                    {
                        // Calling the function with a variable number of arguments
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-3].A)->type);

                        string str=convertIntToString((yyvsp[-1].num_params));
                        Q.emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
                    }
#line 2062 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 13:
#line 220 "ass6_19CS10069_19CS30007.y"
                    { 

                    }
#line 2070 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 14:
#line 224 "ass6_19CS10069_19CS30007.y"
                    { 

                    }
#line 2078 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 15:
#line 228 "ass6_19CS10069_19CS30007.y"
                    { 
                        // We generate a temporary instance and add 1 to it
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
                        Q.emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        Q.emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
                    }
#line 2090 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 16:
#line 236 "ass6_19CS10069_19CS30007.y"
                    {
                        // We generate a temporary instance and subtract 1 from it
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);

                        Q.emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        Q.emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");	
                    }
#line 2103 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 17:
#line 245 "ass6_19CS10069_19CS30007.y"
                    { }
#line 2109 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 18:
#line 247 "ass6_19CS10069_19CS30007.y"
                    { }
#line 2115 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 19:
#line 252 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=1;                                      //Simple assignment
                        Q.emit("param",(yyvsp[0].expr)->loc->name);	
                    }
#line 2124 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 20:
#line 257 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //Add 1 here
                        Q.emit("param",(yyvsp[0].expr)->loc->name);
                    }
#line 2133 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 21:
#line 265 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=(yyvsp[0].num_params); // Simple assignment here
                    }
#line 2141 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 22:
#line 269 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.num_params) = 0; // defaults to 0
                    }
#line 2149 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 23:
#line 276 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.A)=(yyvsp[0].A); /* assign $$ =  $1*/
                    }
#line 2157 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 24:
#line 280 "ass6_19CS10069_19CS30007.y"
                    {  	
                        Q.emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");		// we just add 1 here
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2166 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 25:
#line 285 "ass6_19CS10069_19CS30007.y"
                    {
                        Q.emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");        // we just subtract 1 here
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2175 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 26:
#line 290 "ass6_19CS10069_19CS30007.y"
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
#line 2218 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 27:
#line 329 "ass6_19CS10069_19CS30007.y"
                    { 

                    }
#line 2226 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 28:
#line 333 "ass6_19CS10069_19CS30007.y"
                    { 

                    }
#line 2234 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 29:
#line 341 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '&'; 
                    }
#line 2242 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 30:
#line 345 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '*'; 
                    }
#line 2250 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 31:
#line 349 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '+'; 
                    }
#line 2258 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 32:
#line 353 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '-'; 
                    }
#line 2266 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 33:
#line 357 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '~'; 
                    }
#line 2274 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 34:
#line 361 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.unaryOp) = '!'; 
                    }
#line 2282 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 35:
#line 368 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.A) = (yyvsp[0].A); 
                    }
#line 2290 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 36:
#line 372 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             // Convert and assign
                    }
#line 2299 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 37:
#line 380 "ass6_19CS10069_19CS30007.y"
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
#line 2320 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 38:
#line 397 "ass6_19CS10069_19CS30007.y"
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
#line 2339 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 39:
#line 412 "ass6_19CS10069_19CS30007.y"
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
#line 2356 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 40:
#line 425 "ass6_19CS10069_19CS30007.y"
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
#line 2373 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 41:
#line 442 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2381 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 42:
#line 446 "ass6_19CS10069_19CS30007.y"
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
#line 2398 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 43:
#line 459 "ass6_19CS10069_19CS30007.y"
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
#line 2415 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 44:
#line 475 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2423 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 45:
#line 479 "ass6_19CS10069_19CS30007.y"
                    { 
                        if(!((yyvsp[0].expr)->loc->type->type == "int"))
                            cout << "There is a type error in our Program"<< endl; 		
                        else {		
                            (yyval.expr) = new Expression();		

                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            Q.emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);		
                        }
                    }
#line 2438 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 46:
#line 490 "ass6_19CS10069_19CS30007.y"
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
#line 2455 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 47:
#line 506 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2463 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 48:
#line 510 "ass6_19CS10069_19CS30007.y"
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
#line 2486 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 49:
#line 529 "ass6_19CS10069_19CS30007.y"
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
#line 2508 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 50:
#line 547 "ass6_19CS10069_19CS30007.y"
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
#line 2530 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 51:
#line 565 "ass6_19CS10069_19CS30007.y"
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
#line 2552 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 52:
#line 586 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2560 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 53:
#line 590 "ass6_19CS10069_19CS30007.y"
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
#line 2585 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 54:
#line 611 "ass6_19CS10069_19CS30007.y"
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
#line 2609 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 55:
#line 634 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2617 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 56:
#line 638 "ass6_19CS10069_19CS30007.y"
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
#line 2640 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 57:
#line 660 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2648 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 58:
#line 664 "ass6_19CS10069_19CS30007.y"
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
#line 2670 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 59:
#line 685 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2678 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 60:
#line 689 "ass6_19CS10069_19CS30007.y"
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
#line 2700 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 61:
#line 710 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2708 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 62:
#line 714 "ass6_19CS10069_19CS30007.y"
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
#line 2727 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 63:
#line 732 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2735 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 64:
#line 736 "ass6_19CS10069_19CS30007.y"
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
#line 2753 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 65:
#line 753 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2759 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 66:
#line 755 "ass6_19CS10069_19CS30007.y"
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
#line 2779 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 67:
#line 774 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2785 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 68:
#line 776 "ass6_19CS10069_19CS30007.y"
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
#line 2809 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 69:
#line 800 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2815 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 70:
#line 802 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2821 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 71:
#line 804 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2827 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 72:
#line 806 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2833 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 73:
#line 808 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2839 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 74:
#line 810 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2845 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 75:
#line 812 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2851 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 76:
#line 814 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2857 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 77:
#line 816 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2863 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 78:
#line 818 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2869 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 79:
#line 820 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2875 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 80:
#line 825 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2881 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 81:
#line 827 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2887 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 82:
#line 832 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2893 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 83:
#line 837 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2899 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 84:
#line 841 "ass6_19CS10069_19CS30007.y"
                                         {  }
#line 2905 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 85:
#line 842 "ass6_19CS10069_19CS30007.y"
                            {  }
#line 2911 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 86:
#line 847 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2917 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 87:
#line 849 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2923 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 88:
#line 851 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2929 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 89:
#line 853 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2935 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 90:
#line 857 "ass6_19CS10069_19CS30007.y"
                                           { }
#line 2941 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 91:
#line 858 "ass6_19CS10069_19CS30007.y"
                             {  }
#line 2947 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 92:
#line 863 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2953 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 93:
#line 865 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2959 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 94:
#line 870 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.symp) = (yyvsp[0].symp);                            // Simple Assign 
                    }
#line 2967 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 95:
#line 874 "ass6_19CS10069_19CS30007.y"
                    {
                        if((yyvsp[0].symp)->val != ""){
                            (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;                // get the initial value
                        }
                        Q.emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);	// emit that initial value with Assign operator
                    }
#line 2978 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 96:
#line 884 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2984 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 97:
#line 886 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2990 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 98:
#line 888 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 2996 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 99:
#line 890 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3002 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 100:
#line 895 "ass6_19CS10069_19CS30007.y"
                    { var_type="void"; /* Store the latest var type */ 
                        lookupInsideParent = false;
                    }
#line 3010 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 101:
#line 899 "ass6_19CS10069_19CS30007.y"
                    { var_type="char"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 3017 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 102:
#line 902 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3023 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 103:
#line 904 "ass6_19CS10069_19CS30007.y"
                    { var_type="int"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 3030 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 104:
#line 907 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3036 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 105:
#line 909 "ass6_19CS10069_19CS30007.y"
                    { var_type="float"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 3043 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 106:
#line 912 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3049 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 107:
#line 914 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3055 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 108:
#line 916 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3061 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 109:
#line 918 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3067 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 110:
#line 920 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3073 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 111:
#line 922 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3079 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 112:
#line 924 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3085 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 113:
#line 926 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3091 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 114:
#line 931 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3097 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 115:
#line 933 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3103 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 116:
#line 937 "ass6_19CS10069_19CS30007.y"
                                             {  }
#line 3109 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 117:
#line 938 "ass6_19CS10069_19CS30007.y"
                             {  }
#line 3115 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 118:
#line 943 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3121 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 119:
#line 945 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3127 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 120:
#line 947 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3133 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 121:
#line 952 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3139 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 122:
#line 954 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3145 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 123:
#line 959 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3151 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 124:
#line 961 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3157 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 125:
#line 966 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3163 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 126:
#line 968 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3169 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 127:
#line 973 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3175 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 128:
#line 975 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3181 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 129:
#line 979 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3187 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 130:
#line 981 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3193 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 131:
#line 983 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3199 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 132:
#line 988 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3205 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 133:
#line 990 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3211 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 134:
#line 992 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3217 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 135:
#line 996 "ass6_19CS10069_19CS30007.y"
                               {  }
#line 3223 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 136:
#line 997 "ass6_19CS10069_19CS30007.y"
                             {  }
#line 3229 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 137:
#line 1002 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3235 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 138:
#line 1004 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3241 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 139:
#line 1010 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3247 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 140:
#line 1012 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3253 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 141:
#line 1018 "ass6_19CS10069_19CS30007.y"
                    { /* NOT to be modelled */ }
#line 3259 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 142:
#line 1020 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3265 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 143:
#line 1022 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3271 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 144:
#line 1027 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3277 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 145:
#line 1032 "ass6_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-1].sym_type);
                        while(t->arrtype!=NULL)
                        {
                            t = t->arrtype;                                         // Recursively get to the base Array
                        }   
                        t->arrtype = (yyvsp[0].symp)->type;                                      // add the base type 
                        
                        (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                                        // update the symbol type
                    }
#line 3292 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 146:
#line 1042 "ass6_19CS10069_19CS30007.y"
                                        {   }
#line 3298 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 147:
#line 1049 "ass6_19CS10069_19CS30007.y"
                    {
                        //if ID, simply add a new variable of var_type
                        
                        string nameOfTable = (yyvsp[0].symp)->name;
                        if(nameOfTable.find(".")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("."));
                        curPossibleSTName = nameOfTable;	 
                        (yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));                                      // update the symbol type to latest type specifier
                        currSymbolPtr = (yyval.symp);	                                                            // store the latest Symbol
                    }
#line 3313 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 148:
#line 1059 "ass6_19CS10069_19CS30007.y"
                                         {(yyval.symp)=(yyvsp[-1].symp);}
#line 3319 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 149:
#line 1060 "ass6_19CS10069_19CS30007.y"
                                                                                          {	}
#line 3325 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 150:
#line 1061 "ass6_19CS10069_19CS30007.y"
                                                                    {	}
#line 3331 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 151:
#line 1063 "ass6_19CS10069_19CS30007.y"
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
                            symboltype* s = new symboltype("arr", t, stoi((yyvsp[-1].expr)->loc->val));                      // Create a new symbol with the initial value
                            (yyval.symp) = (yyvsp[-3].symp)->update(s);                                                         // Update the symbol type
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, stoi((yyvsp[-1].expr)->loc->val));      // similar arguments as above		
                            (yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
                        }
                    }
#line 3355 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 152:
#line 1083 "ass6_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-2].symp)->type;
                        symboltype *prev = NULL;                                    // initialize prev to NULL
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;                                         // Recursively find the base type
                        }
                        if(prev==NULL) 
                        {
                            symboltype* s = new symboltype("arr", t, 0);     // no initial values, simply keep 0
                            (yyval.symp) = (yyvsp[-2].symp)->update(s);                                     // Update the symboltype of $$
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, 0);
                            (yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
                        }
                    }
#line 3379 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 153:
#line 1102 "ass6_19CS10069_19CS30007.y"
                                                                                                 {	}
#line 3385 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 154:
#line 1103 "ass6_19CS10069_19CS30007.y"
                                                                             {	}
#line 3391 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 155:
#line 1104 "ass6_19CS10069_19CS30007.y"
                                                                         {	}
#line 3397 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 156:
#line 1105 "ass6_19CS10069_19CS30007.y"
                                                     {	}
#line 3403 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 157:
#line 1107 "ass6_19CS10069_19CS30007.y"
                    {
                        string nameOfTable = (yyvsp[-4].symp)->name;
                        if(nameOfTable.find(".")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("."));
                        ST->name = nameOfTable;
                        (yyvsp[-4].symp)->name = nameOfTable;	                    // change the ST name to fun
                        if((yyvsp[-4].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");          // lookup for return value	
                            s->update((yyvsp[-4].symp)->type);		            // update return type
                        }
                        (yyvsp[-4].symp)->nested=ST;                              // link nested Symbol Table 
                        (yyvsp[-4].symp)->category = "function";                   // TODO: clarify
                        (yyvsp[-4].symp)->updateFuntionStatus(true);
                        listOffunctions.push_back((yyvsp[-4].symp));
                        ST->parent = globalST;                      // link parent Symbol Table
                        
                        changeTable(globalST);				        // Come back to globalsymbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3428 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 158:
#line 1127 "ass6_19CS10069_19CS30007.y"
                                                                {	}
#line 3434 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 159:
#line 1129 "ass6_19CS10069_19CS30007.y"
                    {        //similar as above

                        string nameOfTable = (yyvsp[-3].symp)->name;
                        if(nameOfTable.find(".")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("."));
                        ST->name = nameOfTable;
                        (yyvsp[-3].symp)->name = nameOfTable;
                        if((yyvsp[-3].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");
                            s->update((yyvsp[-3].symp)->type);            // update return type
                        }
                        (yyvsp[-3].symp)->nested=ST;                      // link nested Symbol table
                        (yyvsp[-3].symp)->category = "function";                   // TODO: clarify
                        (yyvsp[-3].symp)->updateFuntionStatus(true);
                        listOffunctions.push_back((yyvsp[-3].symp));
                        ST->parent = globalST;              // Set parent to Global Symbol table
                        
                        changeTable(globalST);				// Go back to global Symbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3460 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 160:
#line 1153 "ass6_19CS10069_19CS30007.y"
                                        { }
#line 3466 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 161:
#line 1154 "ass6_19CS10069_19CS30007.y"
                             {  }
#line 3472 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 162:
#line 1160 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr");   //create a new pointer symbol
                    }
#line 3480 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 163:
#line 1164 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type)); // create the symboltype with $3 symbol type
                    }
#line 3488 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 164:
#line 1171 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3494 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 165:
#line 1173 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3500 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 166:
#line 1178 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3506 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 167:
#line 1180 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3512 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 168:
#line 1185 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3518 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 169:
#line 1187 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3524 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 170:
#line 1192 "ass6_19CS10069_19CS30007.y"
                    {  
                        (yyvsp[0].symp)->category = "param";              // verify
                    }
#line 3532 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 171:
#line 1196 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3538 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 172:
#line 1201 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3544 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 173:
#line 1203 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3550 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 174:
#line 1208 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3556 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 175:
#line 1213 "ass6_19CS10069_19CS30007.y"
                    { (yyval.symp)=(yyvsp[0].expr)->loc; /* assignment */  }
#line 3562 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 176:
#line 1215 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3568 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 177:
#line 1217 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3574 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 178:
#line 1222 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3580 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 179:
#line 1224 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3586 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 180:
#line 1228 "ass6_19CS10069_19CS30007.y"
                                { }
#line 3592 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 181:
#line 1229 "ass6_19CS10069_19CS30007.y"
                             { }
#line 3598 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 182:
#line 1234 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3604 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 183:
#line 1239 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3610 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 184:
#line 1241 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3616 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 185:
#line 1246 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3622 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 186:
#line 1248 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3628 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 187:
#line 1253 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3634 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 188:
#line 1255 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3640 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 189:
#line 1257 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=new Statement();              //create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
                    }
#line 3649 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 190:
#line 1262 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3655 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 191:
#line 1264 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3661 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 192:
#line 1266 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3667 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 193:
#line 1270 "ass6_19CS10069_19CS30007.y"
                                        {  }
#line 3673 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 194:
#line 1272 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=new Statement();                         // create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist;                  // assign the nextlist
                    }
#line 3682 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 195:
#line 1276 "ass6_19CS10069_19CS30007.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3688 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 196:
#line 1277 "ass6_19CS10069_19CS30007.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3694 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 197:
#line 1278 "ass6_19CS10069_19CS30007.y"
                                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3700 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 198:
#line 1282 "ass6_19CS10069_19CS30007.y"
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
#line 3718 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 199:
#line 1296 "ass6_19CS10069_19CS30007.y"
                    { /* Not to be modelled */ }
#line 3724 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 200:
#line 1298 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 3730 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 201:
#line 1303 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=(yyvsp[-1].stat);                           // Compound Statement = blockItemList
                        changeTable(ST->parent);         // Change Symbol Table
                    }
#line 3739 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 202:
#line 1311 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3745 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 203:
#line 1313 "ass6_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=(yyvsp[0].stat);
                        backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
                    }
#line 3754 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 204:
#line 1321 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat) ;/* simple assign */}
#line 3760 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 205:
#line 1323 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3766 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 206:
#line 1328 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3772 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 207:
#line 1330 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3778 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 208:
#line 1335 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr) = new Expression(); /* new Expression */
                    }
#line 3785 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 209:
#line 1338 "ass6_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[-1].expr); /* Simple assign */
                    }
#line 3792 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 210:
#line 1344 "ass6_19CS10069_19CS30007.y"
                    {
                        // if without else
                        convertIntToBool((yyvsp[-4].expr));                                   // expression in IF is converted to bool

                        (yyval.stat) = new Statement();                                   
                        backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-2].instr_number));                            // We do the backpatch here

                        list<int> temp = merge((yyvsp[-4].expr)->falselist, (yyvsp[-1].stat)->nextlist);    // If it is false, we just escape the inner statement
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
                        backpatch((yyval.stat)->nextlist, nextinstr());
                    }
#line 3808 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 211:
#line 1356 "ass6_19CS10069_19CS30007.y"
                    {
                        // if with else
                        convertIntToBool((yyvsp[-7].expr));                                   // convert expression to bool 

                        (yyval.stat) = new Statement();                                   
                        backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-5].instr_number));                            // If true, we access the first part
                        backpatch((yyvsp[-7].expr)->falselist, (yyvsp[-1].instr_number));                          // Else the second prt

                        list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       // Then we merge with the nextlists of both statements
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);
                        backpatch((yyval.stat)->nextlist, nextinstr());	
                    }
#line 3825 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 212:
#line 1369 "ass6_19CS10069_19CS30007.y"
                    { /* Not asked in question */ }
#line 3831 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 213:
#line 1374 "ass6_19CS10069_19CS30007.y"
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
#line 3852 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 214:
#line 1391 "ass6_19CS10069_19CS30007.y"
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
#line 3873 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 215:
#line 1408 "ass6_19CS10069_19CS30007.y"
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
#line 3890 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 216:
#line 1421 "ass6_19CS10069_19CS30007.y"
                        {
                        //do statement
		                (yyval.stat) = new Statement();     //create statement	
		                convertIntToBool((yyvsp[-2].expr));      //convert to bool
		                
                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr_number));						// M1 to go back to statement if expression is true
		                backpatch((yyvsp[-7].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		                
                        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       // Exit loop if statement is false
		                loop_name = "";
	                }
#line 3906 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 217:
#line 1433 "ass6_19CS10069_19CS30007.y"
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
#line 3928 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 218:
#line 1451 "ass6_19CS10069_19CS30007.y"
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
#line 3950 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 219:
#line 1469 "ass6_19CS10069_19CS30007.y"
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
#line 3972 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 220:
#line 1487 "ass6_19CS10069_19CS30007.y"
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
#line 3992 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 221:
#line 1506 "ass6_19CS10069_19CS30007.y"
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
#line 4013 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 222:
#line 1523 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat) = new Statement(); }
#line 4019 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 223:
#line 1525 "ass6_19CS10069_19CS30007.y"
                    { (yyval.stat) = new Statement(); }
#line 4025 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 224:
#line 1527 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.stat) = new Statement();	
                        Q.emit("return",(yyvsp[-1].expr)->loc->name);             
                    }
#line 4034 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 225:
#line 1532 "ass6_19CS10069_19CS30007.y"
                    {
                        (yyval.stat) = new Statement();	
                        Q.emit("return","");                         
                    }
#line 4043 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 226:
#line 1540 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4049 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 227:
#line 1542 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4055 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 228:
#line 1547 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4061 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 229:
#line 1549 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4067 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 230:
#line 1554 "ass6_19CS10069_19CS30007.y"
                    {
                        // int next_instr=0;	 	
                        Q.emit("funcend", ST->name);
                        ST->parent=globalST;

                        (yyvsp[-5].symp)->updateFuntionStatus(true);
                        // Add a function name
                        table_count = 0;
                        label_table.clear();                        

                        changeTable(globalST);                     // Change the table again to Global ST
                    }
#line 4084 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 231:
#line 1569 "ass6_19CS10069_19CS30007.y"
                                     { }
#line 4090 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 232:
#line 1570 "ass6_19CS10069_19CS30007.y"
                             { }
#line 4096 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 233:
#line 1575 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4102 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 234:
#line 1577 "ass6_19CS10069_19CS30007.y"
                    {  }
#line 4108 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 235:
#line 1581 "ass6_19CS10069_19CS30007.y"
        {
        // Used in backpatching
		(yyval.instr_number) = nextinstr();
	}
#line 4117 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 236:
#line 1588 "ass6_19CS10069_19CS30007.y"
        {
		// Beginning of the for statement
		loop_name = "FOR";
	}
#line 4126 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 237:
#line 1595 "ass6_19CS10069_19CS30007.y"
        {
		// Beginning of the while statement
		loop_name = "WHILE";
	}
#line 4135 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 238:
#line 1602 "ass6_19CS10069_19CS30007.y"
        {
		// Beginning of the do while statement
		loop_name = "DO_WHILE";
	}
#line 4144 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 239:
#line 1609 "ass6_19CS10069_19CS30007.y"
        {
		string name = ST->name+"$"+loop_name+"$"+to_string(table_count);
		table_count++; 

        // First an entry is created
		sym* s = ST->lookup(name); 
		s->nested = new symtable(name);
		s->nested->parent = ST;
		s->name = name;
		s->update(new symboltype("block"));

		currSymbolPtr = s;          // updating the current symbol
	}
#line 4162 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 240:
#line 1625 "ass6_19CS10069_19CS30007.y"
        {
        /*
            This is also useful in backpatching
        */
		(yyval.stat) = new Statement();
		(yyval.stat)->nextlist=makelist(nextinstr());

		Q.emit("goto","");
	}
#line 4176 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 241:
#line 1637 "ass6_19CS10069_19CS30007.y"
        {    
        // Utility to change the table
		parST = ST;                                                               

        // If nested call recursively on the nested table
		if(currSymbolPtr->nested==NULL) {
			changeTable(new symtable(curPossibleSTName));	                                           
		}
		else {
			changeTable(currSymbolPtr ->nested);						               
			Q.emit("func", ST->name);
		}
	}
#line 4194 "ass6_19CS10069_19CS30007.tab.c"
    break;

  case 242:
#line 1653 "ass6_19CS10069_19CS30007.y"
        {
            lookupInsideParent = true;
        }
#line 4202 "ass6_19CS10069_19CS30007.tab.c"
    break;


#line 4206 "ass6_19CS10069_19CS30007.tab.c"

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
#line 1656 "ass6_19CS10069_19CS30007.y"


/*Auxiliaries*/
void yyerror(string s) {
    // print error
    cout<<s<<endl;
}
