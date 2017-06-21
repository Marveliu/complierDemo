
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 12 "yacc.y"

    #include <stdio.h>
    #include "yacc.tab.h"

	#define	log(msg)	syntaxAnalasisLog(msg,0)
	
	int yylex(void);
	void yyerror(const char *s);
	void syntaxAnalasisLog( const char *msg, int linenoShift );
	
	extern int lineno;


/* Line 189 of yacc.c  */
#line 87 "yacc.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_AUTO = 258,
     KW_CONST = 259,
     KW_EXTERN = 260,
     KW_REGISTER = 261,
     KW_STATIC = 262,
     KW_VOLATILE = 263,
     KW_TYPEDEF = 264,
     KW_CHAR = 265,
     KW_DOUBLE = 266,
     KW_FLOAT = 267,
     KW_INT = 268,
     KW_LONG = 269,
     KW_SHORT = 270,
     KW_SIGNED = 271,
     KW_UNSIGNED = 272,
     KW_VOID = 273,
     KW_STRUCT = 274,
     KW_UNION = 275,
     KW_ENUM = 276,
     KW_BREAK = 277,
     KW_CASE = 278,
     KW_CONTINUE = 279,
     KW_DEFAULT = 280,
     KW_DO = 281,
     KW_ELSE = 282,
     KW_FOR = 283,
     KW_GOTO = 284,
     KW_IF = 285,
     KW_RETURN = 286,
     KW_SWITCH = 287,
     KW_WHILE = 288,
     ID = 289,
     CONSTANT = 290,
     SHRASS = 291,
     SHLASS = 292,
     ORASS = 293,
     XORASS = 294,
     ANDASS = 295,
     MODASS = 296,
     DIVASS = 297,
     MULASS = 298,
     SUBASS = 299,
     ADDASS = 300,
     OR = 301,
     AND = 302,
     NEQ = 303,
     EQ = 304,
     GE = 305,
     LE = 306,
     SHR = 307,
     SHL = 308,
     SIZEOF = 309,
     ADDROF = 310,
     DEREF = 311,
     NEG = 312,
     POS = 313,
     DEC = 314,
     INC = 315,
     ARROW = 316,
     IFX = 317
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 191 "yacc.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNRULES -- Number of states.  */
#define YYNSTATES  271

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    67,    54,     2,
      80,    81,    65,    63,    36,    64,    77,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    84,
      57,    37,    58,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    52,    85,    69,     2,     2,     2,
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
      35,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    50,    51,    55,    56,    59,    60,    61,    62,    70,
      71,    72,    73,    74,    75,    76,    82,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    16,    19,    22,
      25,    29,    31,    32,    39,    40,    47,    48,    55,    58,
      59,    61,    65,    67,    70,    75,    79,    82,    85,    89,
      91,    95,   101,   103,   105,   107,   110,   113,   116,   118,
     120,   122,   124,   126,   128,   130,   132,   134,   136,   139,
     145,   148,   153,   155,   156,   157,   161,   165,   168,   169,
     171,   174,   176,   178,   180,   182,   184,   186,   188,   190,
     194,   197,   200,   203,   207,   210,   213,   216,   218,   223,
     226,   230,   234,   238,   242,   246,   250,   254,   258,   262,
     266,   270,   274,   278,   282,   285,   288,   290,   293,   298,
     300,   303,   309,   313,   317,   321,   325,   329,   333,   337,
     341,   345,   349,   353,   357,   361,   365,   369,   373,   377,
     381,   385,   388,   391,   394,   397,   400,   403,   408,   416,
     422,   423,   430,   438,   439,   450,   452,   453,   454,   464,
     466,   469,   470,   476,   477,   482
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      88,     0,    -1,    88,    89,    -1,    88,    98,    -1,    88,
     104,    -1,    88,   107,    -1,    -1,     1,    84,    -1,     1,
      85,    -1,    90,    84,    -1,     9,   101,    34,    -1,    91,
      -1,    -1,    19,    34,    92,    86,    95,    85,    -1,    -1,
      20,    34,    93,    86,    95,    85,    -1,    -1,    21,    34,
      94,    86,    96,    85,    -1,    95,    98,    -1,    -1,    34,
      -1,    96,    36,    34,    -1,    34,    -1,    65,    97,    -1,
      97,    78,   112,    79,    -1,    97,    78,    79,    -1,    99,
      84,    -1,   101,   100,    -1,    99,    36,   100,    -1,    97,
      -1,    97,    37,   112,    -1,    97,    37,    86,   112,    85,
      -1,   103,    -1,   102,    -1,    91,    -1,    19,    34,    -1,
      20,    34,    -1,    21,    34,    -1,    34,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,    18,    -1,   105,    84,    -1,   101,
      97,    80,   106,    81,    -1,   101,    97,    -1,   106,    36,
     101,    97,    -1,    18,    -1,    -1,    -1,   105,   108,   109,
      -1,    86,   110,    85,    -1,   110,   111,    -1,    -1,   109,
      -1,   112,    84,    -1,    89,    -1,    98,    -1,   118,    -1,
     115,    -1,   117,    -1,   114,    -1,   121,    -1,    84,    -1,
      31,   112,    84,    -1,    31,    84,    -1,    22,    84,    -1,
      24,    84,    -1,    29,    34,    84,    -1,    34,    49,    -1,
       1,    84,    -1,     1,    85,    -1,    34,    -1,   112,    78,
     112,    79,    -1,    65,   112,    -1,   112,    82,   112,    -1,
     112,    77,   112,    -1,    80,   112,    81,    -1,   112,    37,
     112,    -1,   112,    47,   112,    -1,   112,    46,   112,    -1,
     112,    45,   112,    -1,   112,    44,   112,    -1,   112,    43,
     112,    -1,   112,    42,   112,    -1,   112,    41,   112,    -1,
     112,    40,   112,    -1,   112,    39,   112,    -1,   112,    38,
     112,    -1,    76,   112,    -1,    75,   112,    -1,    35,    -1,
      70,   112,    -1,    70,    80,   101,    81,    -1,   113,    -1,
      54,   112,    -1,   112,    48,   112,    49,   112,    -1,   112,
      36,   112,    -1,   112,    50,   112,    -1,   112,    51,   112,
      -1,   112,    52,   112,    -1,   112,    53,   112,    -1,   112,
      54,   112,    -1,   112,    56,   112,    -1,   112,    55,   112,
      -1,   112,    57,   112,    -1,   112,    60,   112,    -1,   112,
      58,   112,    -1,   112,    59,   112,    -1,   112,    62,   112,
      -1,   112,    61,   112,    -1,   112,    63,   112,    -1,   112,
      64,   112,    -1,   112,    65,   112,    -1,   112,    66,   112,
      -1,   112,    67,   112,    -1,    68,   112,    -1,    69,   112,
      -1,   112,    76,    -1,   112,    75,    -1,    63,   112,    -1,
      64,   112,    -1,    34,    80,   112,    81,    -1,    30,    80,
     112,    81,   111,    27,   111,    -1,    30,    80,   112,    81,
     111,    -1,    -1,    33,    80,   112,    81,   116,   111,    -1,
      26,   111,    33,    80,   112,    81,    84,    -1,    -1,    28,
      80,   120,    84,   120,    84,   120,    81,   119,   111,    -1,
     112,    -1,    -1,    -1,    32,    80,   112,    81,   122,    86,
     123,   126,    85,    -1,   124,    -1,   124,   123,    -1,    -1,
      23,    35,    49,   125,   110,    -1,    -1,    25,    49,   127,
     110,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    63,    64,    65,    66,    67,    68,    74,
      77,    78,    81,    81,    82,    82,    83,    83,    86,    87,
      90,    91,    97,    98,    99,   100,   104,   107,   108,   111,
     112,   113,   116,   117,   120,   121,   122,   123,   124,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   141,   145,
     149,   150,   151,   152,   158,   158,   162,   166,   167,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   193,   194,   195,
     196,   197,   198,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   250,   254,   255,
     259,   259,   263,   267,   267,   270,   271,   275,   275,   278,
     279,   282,   282,   285,   285,   286
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_AUTO", "KW_CONST", "KW_EXTERN",
  "KW_REGISTER", "KW_STATIC", "KW_VOLATILE", "KW_TYPEDEF", "KW_CHAR",
  "KW_DOUBLE", "KW_FLOAT", "KW_INT", "KW_LONG", "KW_SHORT", "KW_SIGNED",
  "KW_UNSIGNED", "KW_VOID", "KW_STRUCT", "KW_UNION", "KW_ENUM", "KW_BREAK",
  "KW_CASE", "KW_CONTINUE", "KW_DEFAULT", "KW_DO", "KW_ELSE", "KW_FOR",
  "KW_GOTO", "KW_IF", "KW_RETURN", "KW_SWITCH", "KW_WHILE", "ID",
  "CONSTANT", "','", "'='", "SHRASS", "SHLASS", "ORASS", "XORASS",
  "ANDASS", "MODASS", "DIVASS", "MULASS", "SUBASS", "ADDASS", "'?'", "':'",
  "OR", "AND", "'|'", "'^'", "'&'", "NEQ", "EQ", "'<'", "'>'", "GE", "LE",
  "SHR", "SHL", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "SIZEOF",
  "ADDROF", "DEREF", "NEG", "POS", "DEC", "INC", "'.'", "'['", "']'",
  "'('", "')'", "ARROW", "IFX", "';'", "'}'", "'{'", "$accept", "program",
  "typeDefineStmt", "typeDefine", "compondTypeDef", "$@1", "$@2", "$@3",
  "varDecls", "enumList", "name", "varDeclStmt", "varDecl", "varInit",
  "varType", "userDefType", "atomType", "funcDecl", "funcDef", "argvList",
  "funcImplement", "$@4", "block", "stmts", "stmt", "expr", "funcCall",
  "if", "while", "$@5", "dowhile", "for", "$@6", "forExpr", "switch",
  "$@7", "cases", "case", "$@8", "defaultCase", "$@9", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    44,    61,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,    63,    58,
     301,   302,   124,    94,    38,   303,   304,    60,    62,   305,
     306,   307,   308,    43,    45,    42,    47,    37,    33,   126,
     309,   310,   311,   312,   313,   314,   315,    46,    91,    93,
      40,    41,   316,   317,    59,   125,   123
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    88,    89,
      90,    90,    92,    91,    93,    91,    94,    91,    95,    95,
      96,    96,    97,    97,    97,    97,    98,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   105,
     106,   106,   106,   106,   108,   107,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   114,   114,
     116,   115,   117,   119,   118,   120,   120,   122,   121,   123,
     123,   125,   124,   127,   126,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     0,     2,     2,     2,
       3,     1,     0,     6,     0,     6,     0,     6,     2,     0,
       1,     3,     1,     2,     4,     3,     2,     2,     3,     1,
       3,     5,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       2,     4,     1,     0,     0,     3,     3,     2,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     2,     2,     3,     2,     2,     2,     1,     4,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     2,     4,     1,
       2,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     4,     7,     5,
       0,     6,     7,     0,    10,     1,     0,     0,     9,     1,
       2,     0,     5,     0,     4,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     8,     1,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,    38,
       2,     0,    34,     3,     0,     0,    33,    32,     4,    54,
       5,    34,     0,    35,    36,    37,     9,     0,    26,    22,
       0,    29,    27,    48,     0,    10,     0,     0,     0,    29,
      28,    23,     0,     0,    53,    58,    55,    19,    19,     0,
      77,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    99,    25,     0,    47,     0,     0,
       0,     0,     0,    20,     0,     0,   100,   125,   126,    79,
     121,   122,     0,    97,    95,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     123,     0,     0,     0,    24,    50,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    68,
      56,    61,    62,     0,    59,    57,     0,    66,    64,    65,
      63,    67,    13,    18,    15,     0,    17,     0,    77,     0,
      82,    31,   102,    83,    93,    92,    91,    90,    89,    88,
      87,    86,    85,    84,     0,   103,   104,   105,   106,   107,
     109,   108,   110,   112,   113,   111,   115,   114,   116,   117,
     118,   119,   120,    81,     0,    80,     0,    75,    76,    71,
      72,     0,   136,     0,     0,    70,     0,     0,     0,    74,
      60,    21,   127,    98,     0,    78,    51,     0,   135,     0,
      73,     0,    69,     0,     0,   101,     0,   136,     0,   137,
     130,     0,     0,   129,     0,     0,     0,   136,     0,     0,
     131,   132,     0,   128,     0,   145,   139,   133,     0,     0,
       0,   140,     0,   141,   143,   138,   134,    58,    58,     0,
       0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   151,    21,    22,    46,    47,    48,    81,    84,
      49,   152,    24,    42,   153,    26,    27,    28,    29,    79,
      30,    44,   154,    80,   155,   156,    74,   157,   158,   245,
     159,   160,   262,   229,   161,   244,   255,   256,   267,   260,
     268
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -224
static const yytype_int16 yypact[] =
{
     462,   -78,  1326,  -224,  -224,  -224,  1501,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,   -32,     1,     4,  -224,
    -224,     8,    10,  -224,     5,   -29,  -224,  -224,  -224,    11,
    -224,  -224,    57,    12,    13,    16,  -224,   -29,  -224,  -224,
     -29,    90,  -224,  -224,    17,  -224,    18,    19,    20,    53,
    -224,    30,   453,  1132,  1513,  -224,  -224,  -224,  -224,    62,
      29,  -224,  1150,  1150,  1150,  1150,  1150,  1150,  1175,  1150,
    1150,  1150,  1150,  1219,  -224,  -224,   675,     6,   -29,     7,
     202,   234,   312,  -224,    -7,  1150,   -50,   -50,   -50,   -50,
     -50,   -50,   435,   -50,   -50,   -50,   722,   527,  1150,  1150,
    1150,  1150,  1150,  1150,  1150,  1150,  1150,  1150,  1150,  1150,
    1150,  1150,  1150,  1150,  1150,  1150,  1150,  1150,  1150,  1150,
    1150,  1150,  1150,  1150,  1150,  1150,  1150,  1150,  1150,  -224,
    -224,  1150,  1150,  1150,  -224,    30,  1501,  -224,   -76,    27,
      32,   358,    34,    63,    35,   478,    38,    39,    52,  -224,
    -224,  -224,  -224,   -29,  -224,  -224,   577,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,    87,  -224,   769,   -58,    41,
    -224,  -224,  1219,  1219,  1219,  1219,  1219,  1219,  1219,  1219,
    1219,  1219,  1219,  1219,   816,  1310,  1341,  1371,  1400,  1428,
     342,   342,  1475,  1475,  1475,  1475,  1495,  1495,  1112,  1112,
     -50,   -50,   -50,  -224,   863,  -224,   -29,  -224,  -224,  -224,
    -224,    93,  1150,    44,  1150,  -224,   626,  1150,  1150,  -224,
    -224,  -224,  -224,  -224,  1150,  -224,    30,    49,  1098,    46,
    -224,   910,  -224,   957,  1004,  1252,  1150,  1150,   358,  -224,
    -224,  1051,    67,   134,    77,   358,    85,  1150,   358,   148,
    -224,  -224,    92,  -224,   139,   150,   148,  -224,   127,   128,
      94,  -224,   358,  -224,  -224,  -224,  -224,  -224,  -224,   124,
     280
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,  -224,   178,  -224,    31,  -224,  -224,  -224,   123,  -224,
      -1,     2,  -224,   145,    28,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,   142,  -223,  -138,   -52,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -216,  -224,  -224,   -73,  -224,  -224,  -224,
    -224
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -145
static const yytype_int16 yytable[] =
{
      73,    76,    33,   211,    23,    39,     3,     4,   207,   208,
      86,    87,    88,    89,    90,    91,    93,    94,    95,    96,
      97,   242,    85,   -38,    41,   129,   130,   131,   132,   165,
      25,   252,   133,   167,    32,    34,    40,    31,    35,    51,
      96,    37,   -52,   136,   269,   270,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   135,   166,   203,
     204,   205,    78,   163,   163,    31,   -38,   -52,   137,    38,
      52,    45,    36,   216,   -11,    43,    83,   213,   -12,   -14,
     243,   219,   -16,    55,    57,    58,    59,   250,    53,    85,
     253,   209,    31,    31,   212,   214,   210,   -38,   217,   218,
     169,   221,   223,    31,   266,   138,   227,    52,   230,   236,
     237,    53,    85,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   139,  -142,   140,  -142,
     141,   247,   142,   143,   144,   145,   146,   147,   148,    61,
     228,   248,   231,   249,   206,   233,   234,    31,    53,   251,
      54,   254,   235,   257,   258,   259,   263,   264,    62,   265,
      20,    82,    50,   261,   241,   228,    56,    63,    64,    65,
       0,     0,    66,    67,    68,   228,     0,     0,     0,    69,
      70,     0,     0,   138,    71,   226,     0,     0,   149,  -142,
      55,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   139,     0,   140,     0,   141,     0,
     142,   143,   144,   145,   146,   147,   148,    61,     0,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    62,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    19,     0,
      66,    67,    68,     0,     0,     0,     0,    69,    70,     0,
       0,   138,    71,     0,     0,     0,   149,   150,    55,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   139,     0,   140,     0,   141,     0,   142,   143,
     144,   145,   146,   147,   148,    61,     0,     0,     0,   162,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    62,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    19,     0,    66,    67,
      68,     0,     0,     0,     0,    69,    70,     0,     0,   138,
      71,     0,     0,     0,   149,  -144,    55,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     139,     0,   140,     0,   141,     0,   142,   143,   144,   145,
     146,   147,   148,    61,     0,     0,     0,   164,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,    62,     0,     0,     0,     0,   129,   130,   131,
     132,    63,    64,    65,   133,     0,    66,    67,    68,     0,
       0,     0,     0,    69,    70,     0,     0,     0,    71,     0,
       0,     0,   149,     0,    55,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,    -6,     1,     0,     0,     0,     0,     0,   168,
      61,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,     0,     0,     0,    60,    61,    62,
       0,     0,     0,     0,     0,     0,    -6,     0,    63,    64,
      65,     0,     0,    66,    67,    68,     0,    62,     0,     0,
      69,    70,    60,    61,     0,    71,    63,    64,    65,     0,
       0,    66,    67,    68,     0,     0,     0,     0,    69,    70,
       0,     0,    62,    71,     0,     0,     0,     0,     0,    72,
       0,    63,    64,    65,     0,     0,    66,    67,    68,     0,
       0,     0,     0,    69,    70,     0,     0,     0,    71,     0,
       0,     0,   215,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,     0,     0,     0,   133,
       0,     0,   171,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,     0,     0,     0,   133,
       0,   220,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     0,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,     0,     0,     0,   133,     0,
     232,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     0,     0,     0,     0,
     129,   130,   131,   132,   134,     0,     0,   133,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,     0,     0,   170,   133,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,     0,     0,     0,
       0,     0,     0,     0,   129,   130,   131,   132,     0,     0,
     222,   133,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   224,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,     0,     0,     0,   133,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   225,     0,     0,   133,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,   238,   133,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,     0,     0,   239,   133,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     0,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,     0,     0,     0,     0,     0,     0,     0,   129,
     130,   131,   132,     0,     0,   240,   133,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
       0,     0,   246,   133,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    60,    61,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   126,   127,   128,
     133,     0,     0,     0,    60,    61,    62,   129,   130,   131,
     132,     0,     0,     0,   133,    63,    64,    65,     0,     0,
      66,    67,    68,     0,    62,     0,     0,    69,    70,    60,
      61,    75,    71,    63,    64,    65,     0,     0,    66,    67,
      68,     0,     0,     0,     0,    69,    70,     0,     0,    62,
      71,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,     0,     0,    66,    67,    68,     0,     0,     0,     0,
      69,    70,     0,     0,     0,    92,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,     0,     0,     0,
       0,     0,     0,     0,   129,   130,   131,   132,     0,     0,
     110,   133,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     5,   129,   130,   131,
     132,     0,     0,     0,   133,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,     0,   133,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
       0,     0,     0,   133,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
       0,     0,     0,   133,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,     0,   133,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,     0,     0,     0,
     133,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     7,     8,     9,    10,    11,    12,    13,
      14,    77,    16,    17,    18,    19,   122,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     0,    19,     0,     0,
     129,   130,   131,   132,     0,     0,     0,   133,   124,   125,
     126,   127,   128,     0,     0,     0,     0,     0,     0,     0,
     129,   130,   131,   132,     0,     0,     0,   133
};

static const yytype_int16 yycheck[] =
{
      52,    53,    34,   141,     2,    34,    84,    85,    84,    85,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   237,    80,    81,    25,    75,    76,    77,    78,    36,
       2,   247,    82,    85,     6,    34,    65,     6,    34,    40,
      92,    36,    36,    36,   267,   268,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    78,    85,   131,
     132,   133,    54,    81,    82,    54,    34,    81,    81,    84,
      37,    34,    84,   145,    84,    84,    34,    34,    86,    86,
     238,    49,    86,    86,    86,    86,    86,   245,    78,    80,
     248,    84,    81,    82,    80,    80,    84,    65,    80,    80,
      92,    34,    81,    92,   262,     1,    33,    37,    84,    80,
      84,    78,    80,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    84,    28,    29,    30,    31,    32,    33,    34,    35,
     212,    27,   214,    86,   136,   217,   218,   136,    78,    84,
      80,    23,   224,    81,    35,    25,    49,    49,    54,    85,
       2,    58,    37,   256,   236,   237,    44,    63,    64,    65,
      -1,    -1,    68,    69,    70,   247,    -1,    -1,    -1,    75,
      76,    -1,    -1,     1,    80,   206,    -1,    -1,    84,    85,
      86,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    34,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,     1,    80,    -1,    -1,    -1,    84,    85,    86,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    -1,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    85,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    34,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,     1,
      80,    -1,    -1,    -1,    84,    85,    86,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    85,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    63,    64,    65,    82,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    -1,    86,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,     0,     1,    -1,    -1,    -1,    -1,    -1,    34,
      35,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    34,    35,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    70,    -1,    54,    -1,    -1,
      75,    76,    34,    35,    -1,    80,    63,    64,    65,    -1,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    54,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    85,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    84,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      84,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    -1,    -1,    82,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    -1,    -1,    81,    82,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
      81,    82,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    82,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    82,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
      -1,    81,    82,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    -1,    81,    82,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    -1,    -1,    81,    82,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    82,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    34,    35,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    65,    66,    67,
      82,    -1,    -1,    -1,    34,    35,    54,    75,    76,    77,
      78,    -1,    -1,    -1,    82,    63,    64,    65,    -1,    -1,
      68,    69,    70,    -1,    54,    -1,    -1,    75,    76,    34,
      35,    79,    80,    63,    64,    65,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    54,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    80,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
      48,    82,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,     0,    75,    76,    77,
      78,    -1,    -1,    -1,    82,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
      -1,    -1,    82,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      -1,    -1,    -1,    82,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      -1,    -1,    -1,    82,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
      -1,    -1,    82,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,
      82,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    34,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      75,    76,    77,    78,    -1,    -1,    -1,    82,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    -1,    -1,    -1,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    88,    84,    85,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    34,
      89,    90,    91,    98,    99,   101,   102,   103,   104,   105,
     107,    91,   101,    34,    34,    34,    84,    36,    84,    34,
      65,    97,   100,    84,   108,    34,    92,    93,    94,    97,
     100,    97,    37,    78,    80,    86,   109,    86,    86,    86,
      34,    35,    54,    63,    64,    65,    68,    69,    70,    75,
      76,    80,    86,   112,   113,    79,   112,    18,   101,   106,
     110,    95,    95,    34,    96,    80,   112,   112,   112,   112,
     112,   112,    80,   112,   112,   112,   112,   112,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    75,
      76,    77,    78,    82,    79,    97,    36,    81,     1,    22,
      24,    26,    28,    29,    30,    31,    32,    33,    34,    84,
      85,    89,    98,   101,   109,   111,   112,   114,   115,   117,
     118,   121,    85,    98,    85,    36,    85,   112,    34,   101,
      81,    85,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   101,    84,    85,    84,
      84,   111,    80,    34,    80,    84,   112,    80,    80,    49,
      84,    34,    81,    81,    49,    79,    97,    33,   112,   120,
      84,   112,    84,   112,   112,   112,    80,    84,    81,    81,
      81,   112,   120,   111,   122,   116,    81,    84,    27,    86,
     111,    84,   120,   111,    23,   123,   124,    81,    35,    25,
     126,   123,   119,    49,    49,    85,   111,   125,   127,   110,
     110
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 63 "yacc.y"
    {	log("global variable definition");	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 77 "yacc.y"
    {	log("user type definition");	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 81 "yacc.y"
    {	log("struct definition");	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 82 "yacc.y"
    {	log("union definition");	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 83 "yacc.y"
    {	log("enum definition");	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 141 "yacc.y"
    {	log("function declaration");	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 158 "yacc.y"
    {	syntaxAnalasisLog("function implementation", -1);	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 172 "yacc.y"
    {	log("expression");	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 174 "yacc.y"
    {	log("local variable definition");	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 180 "yacc.y"
    {	log("empty statement");	;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 181 "yacc.y"
    {	log("return statement");	;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 182 "yacc.y"
    {	log("return statement");	;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 183 "yacc.y"
    {	log("break statement");	;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 184 "yacc.y"
    {	log("continue statement");	;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 185 "yacc.y"
    {	log("goto statement");	;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 186 "yacc.y"
    {	log("lable of goto");	;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 250 "yacc.y"
    {	log("function call");	;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 254 "yacc.y"
    {	log("if-else clause");	;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 255 "yacc.y"
    {	log("if clause");	;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 259 "yacc.y"
    {	log("while clause");	;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 263 "yacc.y"
    {	log("do-while clause");	;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 267 "yacc.y"
    {	log("for clause");	;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 275 "yacc.y"
    {	log("switch clause");	;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 282 "yacc.y"
    {	log("case in switch");	;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 285 "yacc.y"
    {	log("default case in switch");	;}
    break;



/* Line 1455 of yacc.c  */
#line 2080 "yacc.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 296 "yacc.y"
	// =================================

void yyerror(const char *msg) {
	printf("Error: %s (line %d)\n", msg, lineno);
}

void syntaxAnalasisLog( const char *msg, int linenoShift ) {
	printf( "line %5d : %s\n", (lineno + linenoShift), msg );
}

int main() {
	//freopen( "in.txt", "r", stdin );
	//freopen( "out.txt", "w", stdout );
	
	yyparse();
	return 0;
}

