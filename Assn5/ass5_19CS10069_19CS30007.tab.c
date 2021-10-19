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
    char float_val;    // float value
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
#define YYLAST   1252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  420

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
       0,   102,   102,   112,   119,   126,   133,   150,   165,   205,
     211,   218,   224,   231,   237,   245,   252,   275,   283,   285,
     287,   295,   303,   305,   310,   315,   323,   327,   334,   336,
     342,   348,   381,   383,   389,   391,   393,   395,   397,   399,
     404,   406,   414,   431,   443,   457,   472,   474,   485,   500,
     502,   513,   529,   531,   547,   564,   580,   599,   601,   619,
     641,   643,   662,   664,   683,   685,   702,   704,   717,   719,
     732,   734,   756,   758,   781,   783,   785,   787,   789,   791,
     793,   795,   797,   799,   801,   806,   808,   813,   818,   823,
     824,   828,   830,   832,   834,   839,   840,   844,   846,   851,
     853,   861,   863,   865,   867,   872,   874,   876,   878,   880,
     882,   884,   886,   888,   890,   892,   894,   896,   898,   903,
     905,   910,   911,   915,   917,   919,   924,   926,   931,   933,
     938,   940,   945,   947,   951,   953,   955,   960,   962,   964,
     969,   970,   974,   976,   982,   984,   990,   992,   994,   999,
    1004,  1011,  1017,  1023,  1025,  1027,  1029,  1031,  1033,  1046,
    1047,  1063,  1064,  1068,  1069,  1073,  1077,  1084,  1086,  1091,
    1093,  1098,  1100,  1105,  1107,  1112,  1114,  1119,  1124,  1126,
    1128,  1133,  1135,  1140,  1141,  1145,  1150,  1152,  1157,  1159,
    1164,  1166,  1168,  1173,  1175,  1177,  1182,  1183,  1188,  1189,
    1190,  1193,  1207,  1209,  1214,  1222,  1224,  1232,  1234,  1238,
    1240,  1245,  1247,  1252,  1262,  1273,  1278,  1292,  1306,  1316,
    1326,  1340,  1354,  1368,  1384,  1401,  1403,  1405,  1410,  1418,
    1420,  1425,  1427,  1432,  1443,  1444,  1448,  1450
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
  "changetable", "primary_expression", "postfix_expression",
  "argument_expression_list", "argument_expression_list_opt",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
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
  "function_specifier", "declarator", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item_list_opt",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
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
     335,   336,    40,    41,    91,    93,    46,   123,   125,    44,
      63,    58,    59
};
# endif

#define YYPACT_NINF (-342)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-236)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1190,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,    44,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,   117,  1190,  1190,  -342,    -6,
    -342,  1190,  1190,  1165,  -342,  -342,   -71,   -59,  -342,    14,
     117,   -38,    78,  -342,  1056,    96,    -2,  -342,  -342,  -342,
     105,  1215,  -342,  -342,  -342,  -342,   155,  -342,   158,    14,
     128,  -342,   117,   736,  -342,   117,   127,  1190,   190,   231,
      96,  1215,  1215,    84,   893,  -342,  1215,   169,   -46,  -342,
    -342,  -342,  -342,  -342,   174,   917,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,   945,   945,  -342,  -342,  -342,   837,
     143,  -342,   335,   233,   975,  -342,    -7,    31,    60,   232,
     142,   184,   202,   188,   212,   -34,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  1081,   -57,    14,   988,   260,   916,  -342,
    -342,   975,  -342,   121,  -342,   238,  -342,  -342,  -342,   975,
    -342,   -25,   837,  -342,   837,  -342,  -342,  -342,   -17,  -342,
     198,   975,   290,    37,   736,  -342,   122,  -342,   291,  -342,
    -342,   975,   975,   292,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,   975,  -342,  -342,   975,   975,
     975,   975,   975,   975,   975,   975,   975,   975,   975,   975,
     975,   975,   975,   975,  -342,  -342,   243,  -342,  -342,   117,
     262,   294,  -342,  -342,   339,   975,   295,  -342,   302,   975,
    -342,  -342,  -342,   103,  -342,   975,  -342,  -342,  -342,   305,
     306,  -342,   975,   763,   307,  -342,  -342,   194,  -342,  -342,
    -342,  -342,   301,   308,  -342,    67,  -342,  -342,  -342,  -342,
    -342,    -7,    -7,    31,    31,    60,    60,    60,    60,   232,
     232,   142,   184,   202,   975,   975,  -342,   331,  -342,  -342,
    1112,  -342,   309,  -342,  -342,   310,  -342,  -342,   322,   322,
    -342,   143,  -342,  -342,  -342,   736,   975,  -342,  -342,   188,
     212,   975,   318,   211,   975,  -342,  -342,   371,   320,   332,
    -342,   333,   325,   329,  -342,   129,  -342,  -342,  -342,  -342,
     334,   336,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,   145,  -342,  -342,   337,  -342,  -342,   130,   338,   343,
     345,   340,  -342,   975,   344,   975,   395,  -342,  -342,   331,
    -342,  -342,   230,   342,  -342,   395,  -342,  -342,  -342,   337,
    -342,   587,    34,  -342,   395,  -342,  -342,  -342,  -342,  -342,
    -342,   347,   331,  -342,  -342,  -342,  -342,  -342,  -342,   395,
    -342,   975,   665,  -342,  -342,   346,   436,  -342,  -342,  -342,
    -342,   975,   395,  -342,   362,   708,   708,    64,  -342,   440,
     975,  -342,  -342,   361,   435,   368,    88,   975,   975,  -342,
     587,  -342,   975,   359,   337,   337,   331,  -342,   395,   107,
    -342,   369,   370,   366,  -342,   363,  -342,  -342,  -342,  -342,
     459,   523,   331,  -342,   331,  -342,   385,   386,  -342,  -342
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   110,   107,   106,   114,   116,   115,   108,   111,   109,
     105,   112,   103,   113,   141,   127,   126,   146,   102,   104,
     147,   148,   101,   149,   232,    90,    96,    96,   118,     0,
     117,    96,    96,     0,   229,   231,   139,     0,   152,   162,
       0,     0,    89,    97,    99,   151,     0,    95,    91,    92,
     125,     0,    93,    94,     1,   230,     0,   167,   165,   161,
       0,    88,     0,     0,   236,    90,     0,   234,     8,   162,
     150,     0,   122,     0,     0,   128,   122,   144,     0,   142,
     166,   168,   153,    98,    99,     0,     9,    10,    12,    11,
      13,    36,    37,    35,     0,     0,    34,    38,    39,     0,
     184,    15,    28,    40,     0,    42,    46,    49,    52,    57,
      60,    62,    64,    66,    68,    70,    72,   178,   100,     6,
     233,   237,   175,     0,     0,   162,   164,   161,     0,   121,
     119,     0,   130,     0,   132,   136,   123,   129,   120,     0,
     137,     0,     0,    32,     0,    29,    30,    85,     0,   177,
       0,     0,     0,     0,     0,   183,     0,   186,     0,    20,
      21,    27,     0,     0,    74,    78,    79,    75,    76,    77,
      80,    81,    82,    84,    83,     0,    40,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     2,     0,     8,   160,   174,
       0,   169,   171,   159,     0,     0,    35,   163,     0,     0,
     124,    87,   134,     0,   131,     0,   145,   138,   143,     0,
       0,    14,     0,     0,     0,   189,   179,   184,   181,   185,
     187,    19,    26,     0,    24,     0,    18,    73,    43,    44,
      45,    47,    48,    51,    50,    53,    54,    55,    56,    58,
      59,    61,    63,    65,     0,     0,     2,   208,   173,   158,
       0,   176,     0,   157,   154,     0,   133,   135,    33,     0,
      86,   184,    41,   188,   180,     0,     0,    17,    16,    67,
      69,     0,     0,     0,     0,     3,     4,     0,     0,     0,
       5,     0,     0,     9,   211,     0,   209,   210,   190,   191,
       2,     0,   205,   192,   193,   194,   195,   170,   172,   155,
     156,     0,   182,    25,     7,   226,   228,     0,     0,     0,
       0,     0,   225,     0,     2,     0,     0,     2,   212,     0,
     204,    22,   184,     0,   227,     0,     6,     6,   224,     7,
       2,     0,     0,   203,     0,   206,    23,     2,   202,     8,
       8,     0,   208,     2,   196,   197,   198,   199,   200,     0,
     201,     0,     0,     2,     2,     0,     0,   215,    71,     2,
       2,     0,     0,     2,     0,     0,     0,     0,     7,     0,
       0,     2,     2,     2,   213,     0,     0,     0,     0,     2,
       0,     2,     0,     0,     7,     7,   208,   216,     0,     0,
     218,     0,     0,     0,   214,     0,     2,     2,   217,   219,
       0,     0,   208,   220,   208,   221,     0,     0,   222,   223
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -342,  -166,  -342,  -342,  -342,   -77,  -256,  -190,  -342,  -342,
    -342,  -342,   -82,  -342,   -87,   144,    86,   136,   138,   265,
     266,   282,   205,   221,  -342,  -130,   -40,  -342,   -97,  -133,
       0,  -342,     4,   113,  -342,   416,  -342,   -12,   -24,   403,
    -342,  -342,   409,   -50,  -342,   268,  -342,  -342,  -342,   348,
     173,  -342,   -20,   437,   -55,  -342,   426,   417,  -342,  -342,
     225,  -342,    95,  -146,   217,  -217,  -342,  -342,   341,  -189,
    -248,  -322,   424,  -342,  -341,   162,   -91,  -316,  -262,  -222,
    -342,   460,  -342,  -342,  -342
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   254,   319,   320,   324,   197,   196,   123,   101,   102,
     232,   233,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   147,   175,   295,   212,
     296,    41,    65,    48,    42,    43,    26,    27,    73,   130,
      28,    29,    74,    75,   133,   134,    30,    37,    78,    79,
      31,    32,    84,    45,    58,   208,    46,    59,   200,   201,
     202,   124,   150,   118,   153,   154,   155,   156,   157,   297,
     353,   298,   299,   300,   301,   302,   303,   304,   305,   306,
      33,    34,    35,    66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   211,   148,   143,    25,    44,   216,   257,   228,   211,
     275,   365,   145,   146,   126,    77,  -140,   177,   224,   354,
      60,   211,   176,   117,   137,   356,   203,   195,    56,   255,
      47,    47,   204,    24,    50,    47,    47,    25,    38,    72,
     178,   179,   140,   141,    64,   148,    17,   148,   129,   176,
      20,    21,   129,   135,    61,   403,    -7,   176,   333,    72,
      72,   180,    72,   217,    72,   235,   221,   121,   354,   176,
     205,   416,   222,   417,   356,   149,   181,   182,   137,   357,
      40,    51,   267,   351,    36,   211,   207,    72,   354,   354,
     281,   238,   239,   240,   356,   356,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   183,   184,   117,   275,    72,   359,   149,   358,
     149,   234,   384,   222,    38,   226,   227,   199,   357,   312,
      72,    39,    72,   176,   329,   237,   272,   343,   401,   402,
      49,   176,   397,    38,    52,    53,   348,   383,   357,   357,
      39,   318,   278,   222,   211,   360,   222,    38,   341,   362,
     363,   344,   413,   415,    39,   262,    40,    62,   358,   265,
     367,   393,   176,   176,   352,   131,   132,   222,    68,   258,
      69,   361,   270,   378,   314,    40,   317,   366,   358,   358,
     405,   229,    71,   135,   131,    77,   222,   371,   372,    40,
     189,   190,   176,   375,   376,    39,   151,   379,   152,   404,
     213,    82,    57,   214,   119,   387,   388,   390,   222,   222,
      85,   328,   334,   396,    76,   398,   339,   151,   342,   152,
     122,   368,    81,   331,   332,   117,   313,   219,   139,   220,
     410,   411,    57,    63,    76,    76,   191,    76,   193,    76,
     355,    86,    87,    88,    89,    90,    91,    92,    93,   349,
     350,    94,    95,    17,   199,   125,   192,    20,    21,   243,
     244,   370,    76,    96,   377,   194,    97,    98,   151,   176,
     152,   223,   274,   386,   381,   382,   185,   186,   187,   188,
     394,   395,    17,    99,   209,   399,    20,    21,    57,   355,
      81,    76,   164,   316,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   151,    76,   152,    76,   346,   355,
     355,   245,   246,   247,   248,   241,   242,   249,   250,   215,
     225,   231,   236,   256,   282,   283,   284,   285,   286,   287,
      85,   288,   289,   290,   291,   259,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   369,    17,   292,    18,    19,    20,    21,    22,
      23,   293,    87,    88,    89,    90,    91,    92,    93,   261,
     263,    94,    95,   260,   158,   159,   160,   264,   268,   269,
     276,   277,   273,    96,   309,   310,    97,    98,   282,   283,
     284,   285,   286,   287,    85,   288,   289,   290,   291,   271,
     315,   321,   322,    99,   323,   325,   326,   161,   119,   162,
     327,   163,  -207,   294,   330,   336,   222,   337,   292,   335,
     364,   340,   338,   347,   373,   293,    87,    88,    89,    90,
      91,    92,    93,   374,   380,    94,    95,   385,   389,   391,
     392,   400,   406,   407,   408,   409,   251,    96,   252,   279,
      97,    98,   282,   283,   284,   285,   286,   287,    85,   288,
     289,   290,   291,   418,   419,   253,   280,    99,    83,   138,
     128,   266,   119,    70,    80,   308,   127,   294,   311,   218,
     120,   345,   292,    55,     0,     0,     0,   230,     0,   293,
      87,    88,    89,    90,    91,    92,    93,     0,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,    97,    98,   282,   283,   284,   285,
     286,   287,    85,   288,   289,   290,   291,     0,     0,     0,
       0,    99,     0,     0,     0,     0,   412,     0,     0,     0,
       0,   294,     0,     0,     0,     0,   292,     0,     0,     0,
       0,     0,     0,   293,    87,    88,    89,    90,    91,    92,
      93,     0,     0,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,    97,    98,
     282,   283,   284,   285,   286,   287,    85,   288,   289,   290,
     291,     0,     0,     0,     0,    99,     0,     0,     0,     0,
     414,     0,     0,     0,     0,   294,     0,     0,     0,     0,
     292,     0,     0,     0,     0,     0,     0,   293,    87,    88,
      89,    90,    91,    92,    93,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,    85,     0,     0,     0,     0,   294,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,    94,    95,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    99,    86,    87,
      88,    89,    90,    91,    92,    93,     0,   294,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,    85,    97,    98,     0,    86,    87,    88,    89,
      90,    91,    92,    93,     0,     0,    94,    95,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,    96,     0,
     294,    97,    98,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,    94,    95,     0,     0,     0,    99,     0,
       0,     0,     0,   100,     0,    96,     0,     0,    97,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,    85,     0,     0,     0,
     271,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    13,    14,    15,    16,     0,    17,
       0,     0,     0,    20,    21,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    99,
      13,    14,    15,    16,     0,    17,    85,     0,     0,    20,
      21,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,     0,    13,    14,    15,    16,     0,    17,     0,
       0,     0,    20,    21,    85,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,   136,    97,    98,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,    94,    95,    85,     0,   142,
       0,     0,     0,     0,   210,     0,     0,    96,     0,     0,
      97,    98,     0,     0,     0,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,    94,    95,   144,    86,    87,
      88,    89,    90,    91,    92,   206,     0,    96,    94,    95,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,     0,    97,    98,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,    63,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,  -235,    17,     0,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   307,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    13,    14,    15,    16,     0,    17,     0,     0,
       0,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,   131,    99,    85,     0,    25,   139,   197,   154,   139,
     227,   352,    94,    95,    69,    40,    87,   104,   151,   341,
      40,   151,   104,    63,    74,   341,    83,    61,    87,   195,
      26,    27,    89,    33,    40,    31,    32,    33,    40,    51,
      47,    48,    88,    89,    44,   142,    32,   144,    72,   131,
      36,    37,    76,    73,    92,   396,    90,   139,   314,    71,
      72,    68,    74,    88,    76,   162,    83,    67,   390,   151,
     125,   412,    89,   414,   390,    99,    45,    46,   128,   341,
      82,    87,   215,   339,    40,   215,   126,    99,   410,   411,
     256,   178,   179,   180,   410,   411,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    52,    53,   154,   332,   128,    83,   142,   341,
     144,   161,   378,    89,    40,    88,    89,   123,   390,   275,
     142,    47,   144,   215,   300,   175,   223,   326,   394,   395,
      27,   223,   390,    40,    31,    32,   335,    83,   410,   411,
      47,   284,    85,    89,   284,   344,    89,    40,   324,   349,
     350,   327,   410,   411,    47,   205,    82,    89,   390,   209,
     359,    83,   254,   255,   340,    91,    92,    89,    82,   199,
      84,   347,   222,   372,   281,    82,   283,   353,   410,   411,
      83,    69,    87,   213,    91,    40,    89,   363,   364,    82,
      58,    59,   284,   369,   370,    47,    84,   373,    86,   398,
      89,    83,    39,    92,    87,   381,   382,   383,    89,    89,
       9,    92,    92,   389,    51,   391,   323,    84,   325,    86,
      40,   361,    59,    88,    89,   275,   276,   142,    69,   144,
     406,   407,    69,    69,    71,    72,    62,    74,    60,    76,
     341,    40,    41,    42,    43,    44,    45,    46,    47,   336,
     337,    50,    51,    32,   260,    34,    64,    36,    37,   183,
     184,   362,    99,    62,   371,    63,    65,    66,    84,   361,
      86,    83,    88,   380,   375,   376,    54,    55,    56,    57,
     387,   388,    32,    82,    34,   392,    36,    37,   125,   390,
     127,   128,    69,    92,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    84,   142,    86,   144,    88,   410,
     411,   185,   186,   187,   188,   181,   182,   189,   190,    91,
      40,    40,    40,    90,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    83,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   362,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    40,
      85,    50,    51,    89,    49,    50,    51,    85,    83,    83,
      89,    83,    85,    62,    85,    85,    65,    66,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    87,
      92,    40,    92,    82,    82,    82,    91,    82,    87,    84,
      91,    86,    88,    92,    88,    82,    89,    82,    33,    91,
      83,    87,    92,    91,    88,    40,    41,    42,    43,    44,
      45,    46,    47,     7,    82,    50,    51,     7,    87,    14,
      82,    92,    83,    83,    88,    92,   191,    62,   192,   254,
      65,    66,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    88,    88,   193,   255,    82,    62,    76,
      71,   213,    87,    46,    58,   260,    69,    92,   271,   141,
      66,   329,    33,    33,    -1,    -1,    -1,   156,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    92,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    51,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    82,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    92,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,     9,    65,    66,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      92,    65,    66,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    50,    51,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,     9,    -1,    -1,    -1,
      87,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    82,
      27,    28,    29,    30,    -1,    32,     9,    -1,    -1,    36,
      37,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    36,    37,     9,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    88,    65,    66,     9,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    51,     9,    -1,    82,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    51,    82,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    62,    50,    51,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    69,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    87,    32,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    34,    35,
      36,    37,    38,    39,   123,   125,   129,   130,   133,   134,
     139,   143,   144,   173,   174,   175,    40,   140,    40,    47,
      82,   124,   127,   128,   145,   146,   149,   125,   126,   126,
      40,    87,   126,   126,     0,   174,    87,   143,   147,   150,
     145,    92,    89,    69,   123,   125,   176,   177,    82,    84,
     146,    87,   130,   131,   135,   136,   143,    40,   141,   142,
     149,   143,    83,   128,   145,     9,    40,    41,    42,    43,
      44,    45,    46,    47,    50,    51,    62,    65,    66,    82,
      87,   101,   102,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   156,    87,
     165,   123,    40,   100,   154,    34,   147,   150,   135,   131,
     132,    91,    92,   137,   138,   145,    88,   136,   132,    69,
      88,    89,    82,   105,    82,   105,   105,   119,   121,   131,
     155,    84,    86,   157,   158,   159,   160,   161,    49,    50,
      51,    82,    84,    86,    69,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   120,   105,   107,    47,    48,
      68,    45,    46,    52,    53,    54,    55,    56,    57,    58,
      59,    62,    64,    60,    63,    61,    99,    98,    83,   125,
     151,   152,   153,    83,    89,   147,    47,   119,   148,    34,
      88,   118,   122,    89,    92,    91,   122,    88,   142,   155,
     155,    83,    89,    83,   122,    40,    88,    89,   156,    69,
     161,    40,   103,   104,   119,   121,    40,   119,   107,   107,
     107,   108,   108,   109,   109,   110,   110,   110,   110,   111,
     111,   112,   113,   114,    94,    94,    90,   100,   145,    83,
      89,    40,   119,    85,    85,   119,   138,   122,    83,    83,
     119,    87,   107,    85,    88,   158,    89,    83,    85,   115,
     116,    94,     3,     4,     5,     6,     7,     8,    10,    11,
      12,    13,    33,    40,    92,   121,   123,   162,   164,   165,
     166,   167,   168,   169,   170,   171,   172,    67,   153,    85,
      85,   157,   156,   119,   121,    92,    92,   121,   122,    95,
      96,    40,    92,    82,    97,    82,    91,    91,    92,    94,
      88,    88,    89,    99,    92,    91,    82,    82,    92,   121,
      87,    94,   121,   162,    94,   168,    88,    91,   162,    98,
      98,    99,    94,   163,   164,   169,   170,   171,   172,    83,
     162,    94,   100,   100,    83,   167,    94,   162,   118,   123,
     169,    94,    94,    88,     7,    94,    94,   121,   162,    94,
      82,   169,   169,    83,    99,     7,   121,    94,    94,    87,
      94,    14,    82,    83,   121,   121,    94,   163,    94,   121,
      92,    99,    99,   167,   162,    83,    83,    83,    88,    92,
      94,    94,    87,   163,    87,   163,   167,   167,    88,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   106,   106,
     107,   107,   108,   108,   108,   108,   109,   109,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   123,   124,
     124,   125,   125,   125,   125,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   129,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   139,   139,   139,
     140,   140,   141,   141,   142,   142,   143,   143,   143,   144,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   156,   156,
     156,   157,   157,   158,   158,   159,   160,   160,   161,   161,
     162,   162,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   164,   164,   164,   165,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   170,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   172,   172,   172,   172,   173,
     173,   174,   174,   175,   176,   176,   177,   177
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
       2,     1,     1,     3,     5,     6,     6,     5,     5,     4,
       4,     1,     0,     1,     0,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     3,
       4,     2,     4,     1,     0,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     5,     1,     3,     1,     0,     1,
       1,     1,     2,     8,    11,     5,    10,    12,    10,    12,
      14,    14,    16,    16,     3,     2,     2,     3,     2,     1,
       2,     1,     1,     4,     1,     0,     1,     2
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
#line 103 "ass5_19CS10069_19CS30007.y"
        {
		/**
		  * backpatching,stores the index of the next quad to be generated
		  * Used in various control statements
		  */
		(yyval.instr_number) = nextinstr();
	}
#line 1911 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 3:
#line 113 "ass5_19CS10069_19CS30007.y"
        {
		// rule for identifying the start of the for statement
		loop_name = "FOR";
	}
#line 1920 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 4:
#line 120 "ass5_19CS10069_19CS30007.y"
        {
		// rule for identifying the start of a while loop
		loop_name = "WHILE";
	}
#line 1929 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 5:
#line 127 "ass5_19CS10069_19CS30007.y"
        {
		// rule for identifyiong the start of the do while statement
		loop_name = "DO_WHILE";
	}
#line 1938 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 6:
#line 134 "ass5_19CS10069_19CS30007.y"
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
#line 1957 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 7:
#line 151 "ass5_19CS10069_19CS30007.y"
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
#line 1973 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 8:
#line 166 "ass5_19CS10069_19CS30007.y"
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
#line 1990 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 9:
#line 206 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.expr)=new Expression();                                                  // create new expression and store pointer to ST entry in the location			
                        (yyval.expr)->loc=(yyvsp[0].symp);
                        (yyval.expr)->type="not-boolean";
                    }
#line 2000 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 10:
#line 212 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.expr)=new Expression();	
                        string p=convertIntToString((yyvsp[0].int_val));
                        (yyval.expr)->loc=gentemp(new symboltype("int"),p);
                        emit("=",(yyval.expr)->loc->name,p);
                    }
#line 2011 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 11:
#line 219 "ass5_19CS10069_19CS30007.y"
                    {                                                                         // create new expression and store the value of the constant in a temporary
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_val));
                        emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 2021 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 12:
#line 225 "ass5_19CS10069_19CS30007.y"
                    {                                                                         // create new expression and store the value of the constant in a temporary
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_val));
                        emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 2031 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 13:
#line 232 "ass5_19CS10069_19CS30007.y"
                    {                                                                          // create new expression and store the value of the constant in a temporary
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("ptr"),(yyvsp[0].char_val));
                        (yyval.expr)->loc->type->arrtype=new symboltype("char");
                    }
#line 2041 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 14:
#line 238 "ass5_19CS10069_19CS30007.y"
                    {                                                                          // simply equal to expression
                        (yyval.expr)=(yyvsp[-1].expr);
                    }
#line 2049 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 15:
#line 246 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=(yyvsp[0].expr)->loc;	
                        (yyval.A)->type=(yyvsp[0].expr)->loc->type;	
                        (yyval.A)->loc=(yyval.A)->Array;
                    }
#line 2060 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 16:
#line 253 "ass5_19CS10069_19CS30007.y"
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
#line 2087 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 17:
#line 276 "ass5_19CS10069_19CS30007.y"
                    {
                        //call the function with number of parameters from argument_expression_list_opt
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-3].A)->type);
                        string str=convertIntToString((yyvsp[-1].num_params));
                        emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
                    }
#line 2099 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 18:
#line 284 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2105 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 19:
#line 286 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2111 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 20:
#line 288 "ass5_19CS10069_19CS30007.y"
                    { 
                        //generate new temporary, equate it to old one and then add 1
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
                        emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
                    }
#line 2123 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 21:
#line 296 "ass5_19CS10069_19CS30007.y"
                    {
                        //generate new temporary, equate it to old one and then subtract 1
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
                        emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");	
                    }
#line 2135 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 22:
#line 304 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2141 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 23:
#line 306 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2147 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 24:
#line 311 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=1;                                      //one argument and emit param
                        emit("param",(yyvsp[0].expr)->loc->name);	
                    }
#line 2156 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 25:
#line 316 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //one more argument and emit param		 
                        emit("param",(yyvsp[0].expr)->loc->name);
                    }
#line 2165 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 26:
#line 324 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.num_params)=(yyvsp[0].num_params); // assign $$ =  $1
                    }
#line 2173 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 27:
#line 328 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.num_params) = 0; // no arguements
                    }
#line 2181 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 28:
#line 335 "ass5_19CS10069_19CS30007.y"
                    { (yyval.A)=(yyvsp[0].A); /* assign $$ =  $1*/}
#line 2187 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 29:
#line 337 "ass5_19CS10069_19CS30007.y"
                    {  	
                        //simply add 1
                        emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");		
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2197 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 30:
#line 343 "ass5_19CS10069_19CS30007.y"
                    {
                        //simply subtract 1
                        emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2207 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 31:
#line 349 "ass5_19CS10069_19CS30007.y"
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
#line 2244 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 32:
#line 382 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2250 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 33:
#line 384 "ass5_19CS10069_19CS30007.y"
                    { }
#line 2256 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 34:
#line 390 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '&'; }
#line 2262 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 35:
#line 392 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '*'; }
#line 2268 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 36:
#line 394 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '+'; }
#line 2274 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 37:
#line 396 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '-'; }
#line 2280 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 38:
#line 398 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '~'; }
#line 2286 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 39:
#line 400 "ass5_19CS10069_19CS30007.y"
                    { (yyval.unaryOp) = '!'; }
#line 2292 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 40:
#line 405 "ass5_19CS10069_19CS30007.y"
                    { (yyval.A) = (yyvsp[0].A); /* simply assign*/ }
#line 2298 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 41:
#line 407 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             //generate a new symbol of the given type	
                    }
#line 2307 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 42:
#line 415 "ass5_19CS10069_19CS30007.y"
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
#line 2328 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 43:
#line 432 "ass5_19CS10069_19CS30007.y"
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
#line 2344 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 44:
#line 444 "ass5_19CS10069_19CS30007.y"
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
#line 2362 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 45:
#line 458 "ass5_19CS10069_19CS30007.y"
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
#line 2377 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 46:
#line 473 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2383 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 47:
#line 475 "ass5_19CS10069_19CS30007.y"
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
#line 2398 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 48:
#line 486 "ass5_19CS10069_19CS30007.y"
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
#line 2414 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 49:
#line 501 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2420 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 50:
#line 503 "ass5_19CS10069_19CS30007.y"
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
#line 2435 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 51:
#line 514 "ass5_19CS10069_19CS30007.y"
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
#line 2452 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 52:
#line 530 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2458 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 53:
#line 532 "ass5_19CS10069_19CS30007.y"
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
#line 2478 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 54:
#line 548 "ass5_19CS10069_19CS30007.y"
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
#line 2499 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 55:
#line 565 "ass5_19CS10069_19CS30007.y"
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
#line 2519 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 56:
#line 581 "ass5_19CS10069_19CS30007.y"
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
#line 2539 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 57:
#line 600 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2545 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 58:
#line 602 "ass5_19CS10069_19CS30007.y"
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
#line 2567 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 59:
#line 620 "ass5_19CS10069_19CS30007.y"
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
#line 2590 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 60:
#line 642 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2596 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 61:
#line 644 "ass5_19CS10069_19CS30007.y"
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
#line 2616 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 62:
#line 663 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2622 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 63:
#line 665 "ass5_19CS10069_19CS30007.y"
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
#line 2642 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 64:
#line 684 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2648 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 65:
#line 686 "ass5_19CS10069_19CS30007.y"
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
#line 2666 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 66:
#line 703 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2672 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 67:
#line 705 "ass5_19CS10069_19CS30007.y"
                    { 
                        convertIntToBool((yyvsp[0].expr));                                  //convert inclusive_or_expression int to bool	
                        convertIntToBool((yyvsp[-3].expr));                                  //convert logical_AND_expression to bool
                        (yyval.expr) = new Expression();                                 //make new boolean expression 
                        (yyval.expr)->type = "bool";
                        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));                           //if $1 is true, we move to $5
                        (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                           //if $5 is also true, we get truelist for $$
                        (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);   //merge their falselists
                    }
#line 2686 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 68:
#line 718 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2692 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 69:
#line 720 "ass5_19CS10069_19CS30007.y"
                    { 
                        convertIntToBool((yyvsp[0].expr));			 //convert logical_AND_expression int to bool	
                        convertIntToBool((yyvsp[-3].expr));			 //convert logical_or_expression to bool
                        (yyval.expr) = new Expression();			 //make new boolean expression
                        (yyval.expr)->type = "bool";
                        backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr_number));		//if $1 is true, we move to $5
                        (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);		//merge their truelists
                        (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	//if $5 is also false, we get falselist for $$
                    }
#line 2706 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 70:
#line 733 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2712 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 71:
#line 735 "ass5_19CS10069_19CS30007.y"
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
#line 2735 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 72:
#line 757 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2741 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 73:
#line 759 "ass5_19CS10069_19CS30007.y"
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
#line 2764 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 74:
#line 782 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2770 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 75:
#line 784 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2776 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 76:
#line 786 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2782 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 77:
#line 788 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2788 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 78:
#line 790 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2794 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 79:
#line 792 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2800 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 80:
#line 794 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2806 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 81:
#line 796 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2812 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 82:
#line 798 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2818 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 83:
#line 800 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2824 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 84:
#line 802 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2830 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 85:
#line 807 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2836 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 86:
#line 809 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2842 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 87:
#line 814 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2848 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 88:
#line 819 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2854 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 89:
#line 823 "ass5_19CS10069_19CS30007.y"
                                         {  }
#line 2860 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 90:
#line 824 "ass5_19CS10069_19CS30007.y"
                            {  }
#line 2866 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 91:
#line 829 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2872 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 92:
#line 831 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2878 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 93:
#line 833 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2884 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 94:
#line 835 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2890 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 95:
#line 839 "ass5_19CS10069_19CS30007.y"
                                           { }
#line 2896 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 96:
#line 840 "ass5_19CS10069_19CS30007.y"
                             {  }
#line 2902 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 97:
#line 845 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2908 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 98:
#line 847 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2914 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 99:
#line 852 "ass5_19CS10069_19CS30007.y"
                    { (yyval.symp) = (yyvsp[0].symp); }
#line 2920 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 100:
#line 854 "ass5_19CS10069_19CS30007.y"
                    {
                        if((yyvsp[0].symp)->val!="") (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;        //get the initial value and  emit it
                        emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);	
                    }
#line 2929 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 101:
#line 862 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2935 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 102:
#line 864 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2941 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 103:
#line 866 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2947 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 104:
#line 868 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2953 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 105:
#line 873 "ass5_19CS10069_19CS30007.y"
                    { var_type="void"; /* Store the latest var type */ }
#line 2959 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 106:
#line 875 "ass5_19CS10069_19CS30007.y"
                    { var_type="char"; }
#line 2965 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 107:
#line 877 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2971 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 108:
#line 879 "ass5_19CS10069_19CS30007.y"
                    { var_type="int"; }
#line 2977 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 109:
#line 881 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2983 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 110:
#line 883 "ass5_19CS10069_19CS30007.y"
                    { var_type="float"; }
#line 2989 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 111:
#line 885 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 2995 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 112:
#line 887 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3001 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 113:
#line 889 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3007 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 114:
#line 891 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3013 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 115:
#line 893 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3019 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 116:
#line 895 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3025 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 117:
#line 897 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3031 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 118:
#line 899 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3037 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 119:
#line 904 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3043 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 120:
#line 906 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3049 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 121:
#line 910 "ass5_19CS10069_19CS30007.y"
                                             {  }
#line 3055 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 122:
#line 911 "ass5_19CS10069_19CS30007.y"
                             {  }
#line 3061 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 123:
#line 916 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3067 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 124:
#line 918 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3073 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 125:
#line 920 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3079 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 126:
#line 925 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3085 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 127:
#line 927 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3091 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 128:
#line 932 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3097 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 129:
#line 934 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3103 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 130:
#line 939 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3109 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 131:
#line 941 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3115 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 132:
#line 946 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3121 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 133:
#line 948 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3127 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 134:
#line 952 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3133 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 135:
#line 954 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3139 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 136:
#line 956 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3145 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 137:
#line 961 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3151 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 138:
#line 963 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3157 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 139:
#line 965 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3163 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 140:
#line 969 "ass5_19CS10069_19CS30007.y"
                               {  }
#line 3169 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 141:
#line 970 "ass5_19CS10069_19CS30007.y"
                             {  }
#line 3175 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 142:
#line 975 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3181 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 143:
#line 977 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3187 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 144:
#line 983 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3193 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 145:
#line 985 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3199 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 146:
#line 991 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3205 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 147:
#line 993 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3211 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 148:
#line 995 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3217 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 149:
#line 1000 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3223 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 150:
#line 1005 "ass5_19CS10069_19CS30007.y"
                    {
                        symboltype *t = (yyvsp[-1].sym_type);
                        while(t->arrtype!=NULL) t = t->arrtype;           //for multidimensional arr1s, move in depth till you get the base type
                        t->arrtype = (yyvsp[0].symp)->type;                //add the base type 
                        (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                  //update
                    }
#line 3234 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 151:
#line 1011 "ass5_19CS10069_19CS30007.y"
                                        {   }
#line 3240 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 152:
#line 1018 "ass5_19CS10069_19CS30007.y"
                    {
                        /* Add a new variable with var_type */
                        (yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));
                        currSymbolPtr = (yyval.symp);	
                    }
#line 3250 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 153:
#line 1024 "ass5_19CS10069_19CS30007.y"
                    { (yyval.symp) = (yyvsp[-1].symp); /* simple assign */ }
#line 3256 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 154:
#line 1026 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3262 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 155:
#line 1028 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3268 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 156:
#line 1030 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3274 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 157:
#line 1032 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3280 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 158:
#line 1034 "ass5_19CS10069_19CS30007.y"
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
#line 3297 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 159:
#line 1046 "ass5_19CS10069_19CS30007.y"
                                                                {	}
#line 3303 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 160:
#line 1048 "ass5_19CS10069_19CS30007.y"
                    {        //similar as above , CHECK
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
#line 3320 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 161:
#line 1063 "ass5_19CS10069_19CS30007.y"
                                        { }
#line 3326 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 162:
#line 1064 "ass5_19CS10069_19CS30007.y"
                             {  }
#line 3332 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 163:
#line 1068 "ass5_19CS10069_19CS30007.y"
                                          {  }
#line 3338 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 164:
#line 1069 "ass5_19CS10069_19CS30007.y"
                             { /*CHECK */ }
#line 3344 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 165:
#line 1074 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr");   //create new pointer
                    }
#line 3352 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 166:
#line 1078 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type));
                    }
#line 3360 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 167:
#line 1085 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3366 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 168:
#line 1087 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3372 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 169:
#line 1092 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3378 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 170:
#line 1094 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3384 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 171:
#line 1099 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3390 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 172:
#line 1101 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3396 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 173:
#line 1106 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3402 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 174:
#line 1108 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3408 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 175:
#line 1113 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3414 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 176:
#line 1115 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3420 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 177:
#line 1120 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3426 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 178:
#line 1125 "ass5_19CS10069_19CS30007.y"
                    { (yyval.symp)=(yyvsp[0].expr)->loc; /* assignment */  }
#line 3432 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 179:
#line 1127 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3438 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 180:
#line 1129 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3444 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 181:
#line 1134 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3450 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 182:
#line 1136 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3456 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 183:
#line 1140 "ass5_19CS10069_19CS30007.y"
                                { }
#line 3462 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 184:
#line 1141 "ass5_19CS10069_19CS30007.y"
                             { }
#line 3468 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 185:
#line 1146 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3474 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 186:
#line 1151 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3480 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 187:
#line 1153 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3486 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 188:
#line 1158 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3492 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 189:
#line 1160 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3498 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 190:
#line 1165 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3504 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 191:
#line 1167 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3510 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 192:
#line 1169 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=new Statement();              //create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
                    }
#line 3519 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 193:
#line 1174 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3525 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 194:
#line 1176 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3531 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 195:
#line 1178 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3537 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 196:
#line 1182 "ass5_19CS10069_19CS30007.y"
                                        {  }
#line 3543 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 197:
#line 1184 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=new Statement();              //create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
                    }
#line 3552 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 198:
#line 1188 "ass5_19CS10069_19CS30007.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3558 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 199:
#line 1189 "ass5_19CS10069_19CS30007.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3564 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 200:
#line 1190 "ass5_19CS10069_19CS30007.y"
                                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3570 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 201:
#line 1194 "ass5_19CS10069_19CS30007.y"
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
#line 3588 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 202:
#line 1208 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3594 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 203:
#line 1210 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3600 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 204:
#line 1215 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=(yyvsp[-1].stat);
                        changeTable(ST->parent); 
                    }
#line 3609 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 205:
#line 1223 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3615 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 206:
#line 1225 "ass5_19CS10069_19CS30007.y"
                    { 
                        (yyval.stat)=(yyvsp[0].stat);
                        backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
                    }
#line 3624 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 207:
#line 1233 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat) ;/* simple assign */}
#line 3630 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 208:
#line 1234 "ass5_19CS10069_19CS30007.y"
                             { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3636 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 209:
#line 1239 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3642 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 210:
#line 1241 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3648 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 211:
#line 1246 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr) = new Expression(); /* new Expression */ }
#line 3654 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 212:
#line 1248 "ass5_19CS10069_19CS30007.y"
                    { (yyval.expr)=(yyvsp[-1].expr); /* Simple assign */}
#line 3660 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 213:
#line 1253 "ass5_19CS10069_19CS30007.y"
                    {
                        // if statement without else
                        backpatch((yyvsp[-4].stat)->nextlist, nextinstr());        //nextlist of N goes to nextinstr
                        convertIntToBool((yyvsp[-5].expr));         //convert expression to bool
                        (yyval.stat) = new Statement();        //make new statement
                        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));        //is expression is true, go to M i.e just before statement body
                        list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);   //merge falselist of expression, nextlist of statement and second N
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
                    }
#line 3674 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 214:
#line 1263 "ass5_19CS10069_19CS30007.y"
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
#line 3689 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 215:
#line 1274 "ass5_19CS10069_19CS30007.y"
                    { /* Not to be modelled */ }
#line 3695 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 216:
#line 1279 "ass5_19CS10069_19CS30007.y"
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
#line 3713 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 217:
#line 1293 "ass5_19CS10069_19CS30007.y"
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
#line 3731 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 218:
#line 1307 "ass5_19CS10069_19CS30007.y"
                    {
                        //do statement
                        (yyval.stat) = new Statement();     //create statement	
                        convertIntToBool((yyvsp[-2].expr));      //convert to bool
                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));						// M1 to go back to statement if expression is true
                        backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
                        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
                        loop_name = "";
                    }
#line 3745 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 219:
#line 1317 "ass5_19CS10069_19CS30007.y"
                        {
                        //do statement
		                (yyval.stat) = new Statement();     //create statement	
		                convertIntToBool((yyvsp[-2].expr));      //convert to bool
		                backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr_number));						// M1 to go back to statement if expression is true
		                backpatch((yyvsp[-7].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		                (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
		                loop_name = "";
	                }
#line 3759 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 220:
#line 1327 "ass5_19CS10069_19CS30007.y"
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
#line 3777 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 221:
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
#line 3795 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 222:
#line 1355 "ass5_19CS10069_19CS30007.y"
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
#line 3813 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 223:
#line 1369 "ass5_19CS10069_19CS30007.y"
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
#line 3830 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 224:
#line 1385 "ass5_19CS10069_19CS30007.y"
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
#line 3851 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 225:
#line 1402 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat) = new Statement(); }
#line 3857 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 226:
#line 1404 "ass5_19CS10069_19CS30007.y"
                    { (yyval.stat) = new Statement(); }
#line 3863 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 227:
#line 1406 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.stat) = new Statement();	
                        emit("return",(yyvsp[-1].expr)->loc->name);               //emit return with the name of the return value
                    }
#line 3872 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 228:
#line 1411 "ass5_19CS10069_19CS30007.y"
                    {
                        (yyval.stat) = new Statement();	
                        emit("return","");                         //simply emit return
                    }
#line 3881 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 229:
#line 1419 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3887 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 230:
#line 1421 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3893 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 231:
#line 1426 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3899 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 232:
#line 1428 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3905 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 233:
#line 1433 "ass5_19CS10069_19CS30007.y"
                    {
                        int next_instr=0;	 	
                        ST->parent=globalST;
                        table_count = 0;
                        label_table.clear();
                        changeTable(globalST);                     //once we come back to this at the end, change the table to global Symbol table
                    }
#line 3917 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 234:
#line 1443 "ass5_19CS10069_19CS30007.y"
                                     { }
#line 3923 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 235:
#line 1444 "ass5_19CS10069_19CS30007.y"
                             { }
#line 3929 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 236:
#line 1449 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3935 "ass5_19CS10069_19CS30007.tab.c"
    break;

  case 237:
#line 1451 "ass5_19CS10069_19CS30007.y"
                    {  }
#line 3941 "ass5_19CS10069_19CS30007.tab.c"
    break;


#line 3945 "ass5_19CS10069_19CS30007.tab.c"

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
#line 1454 "ass5_19CS10069_19CS30007.y"

/*Auxiliaries*/
void yyerror(string s)
{
    // printf("Found error %s\n", s);
    cout<<s<<endl;
}
