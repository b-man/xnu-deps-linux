/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 153 "parser.y"


#include <stdio.h>
#include "lexxer.h"
#include "strdefs.h"
#include "type.h"
#include "routine.h"
#include "statement.h"
#include "global.h"
#include "error.h"

static char *import_name();
extern int yylex(void);

/* forward declaration */
void yyerror(char *s);
  


/* Line 268 of yacc.c  */
#line 91 "parser.c"

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
     sySkip = 258,
     syRoutine = 259,
     sySimpleRoutine = 260,
     sySubsystem = 261,
     syKernelUser = 262,
     syKernelServer = 263,
     syMsgOption = 264,
     syMsgSeqno = 265,
     syWaitTime = 266,
     sySendTime = 267,
     syNoWaitTime = 268,
     syErrorProc = 269,
     syServerPrefix = 270,
     syUserPrefix = 271,
     syServerDemux = 272,
     syRCSId = 273,
     syImport = 274,
     syUImport = 275,
     sySImport = 276,
     syIImport = 277,
     syDImport = 278,
     syIn = 279,
     syOut = 280,
     syInOut = 281,
     syUserImpl = 282,
     syServerImpl = 283,
     syRequestPort = 284,
     syReplyPort = 285,
     sySReplyPort = 286,
     syUReplyPort = 287,
     syType = 288,
     syArray = 289,
     syStruct = 290,
     syOf = 291,
     syInTran = 292,
     syOutTran = 293,
     syDestructor = 294,
     syCType = 295,
     syCUserType = 296,
     syUserTypeLimit = 297,
     syOnStackLimit = 298,
     syCServerType = 299,
     syPointerTo = 300,
     syPointerToIfNot = 301,
     syValueOf = 302,
     syCString = 303,
     sySecToken = 304,
     syUserSecToken = 305,
     syServerSecToken = 306,
     syAuditToken = 307,
     syUserAuditToken = 308,
     syServerAuditToken = 309,
     syColon = 310,
     sySemi = 311,
     syComma = 312,
     syPlus = 313,
     syMinus = 314,
     syStar = 315,
     syDiv = 316,
     syLParen = 317,
     syRParen = 318,
     syEqual = 319,
     syCaret = 320,
     syTilde = 321,
     syLAngle = 322,
     syRAngle = 323,
     syLBrack = 324,
     syRBrack = 325,
     syBar = 326,
     syError = 327,
     syNumber = 328,
     sySymbolicType = 329,
     syIdentifier = 330,
     syString = 331,
     syQString = 332,
     syFileName = 333,
     syIPCFlag = 334
   };
#endif
/* Tokens.  */
#define sySkip 258
#define syRoutine 259
#define sySimpleRoutine 260
#define sySubsystem 261
#define syKernelUser 262
#define syKernelServer 263
#define syMsgOption 264
#define syMsgSeqno 265
#define syWaitTime 266
#define sySendTime 267
#define syNoWaitTime 268
#define syErrorProc 269
#define syServerPrefix 270
#define syUserPrefix 271
#define syServerDemux 272
#define syRCSId 273
#define syImport 274
#define syUImport 275
#define sySImport 276
#define syIImport 277
#define syDImport 278
#define syIn 279
#define syOut 280
#define syInOut 281
#define syUserImpl 282
#define syServerImpl 283
#define syRequestPort 284
#define syReplyPort 285
#define sySReplyPort 286
#define syUReplyPort 287
#define syType 288
#define syArray 289
#define syStruct 290
#define syOf 291
#define syInTran 292
#define syOutTran 293
#define syDestructor 294
#define syCType 295
#define syCUserType 296
#define syUserTypeLimit 297
#define syOnStackLimit 298
#define syCServerType 299
#define syPointerTo 300
#define syPointerToIfNot 301
#define syValueOf 302
#define syCString 303
#define sySecToken 304
#define syUserSecToken 305
#define syServerSecToken 306
#define syAuditToken 307
#define syUserAuditToken 308
#define syServerAuditToken 309
#define syColon 310
#define sySemi 311
#define syComma 312
#define syPlus 313
#define syMinus 314
#define syStar 315
#define syDiv 316
#define syLParen 317
#define syRParen 318
#define syEqual 319
#define syCaret 320
#define syTilde 321
#define syLAngle 322
#define syRAngle 323
#define syLBrack 324
#define syRBrack 325
#define syBar 326
#define syError 327
#define syNumber 328
#define sySymbolicType 329
#define syIdentifier 330
#define syString 331
#define syQString 332
#define syFileName 333
#define syIPCFlag 334




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 173 "parser.y"

    u_int number;
    identifier_t identifier;
    string_t string;
    statement_kind_t statement_kind;
    ipc_type_t *type;
    struct
    {
	u_int innumber;		/* msgt_name value, when sending */
	string_t instr;
	u_int outnumber;	/* msgt_name value, when receiving */
	string_t outstr;
	u_int size;		/* 0 means there is no default size */
    } symtype;
    routine_t *routine;
    arg_kind_t direction;
    argument_t *argument;
    ipc_flags_t flag;



/* Line 293 of yacc.c  */
#line 307 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 319 "parser.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  241

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    16,    19,    22,
      25,    28,    31,    34,    37,    40,    43,    46,    49,    51,
      54,    59,    61,    62,    65,    67,    69,    71,    73,    77,
      80,    83,    87,    89,    92,    95,    98,   101,   105,   107,
     109,   111,   113,   115,   119,   122,   126,   128,   137,   146,
     154,   159,   164,   169,   171,   173,   176,   179,   182,   185,
     187,   189,   194,   201,   206,   208,   215,   217,   219,   221,
     225,   227,   232,   238,   246,   252,   258,   263,   270,   272,
     275,   279,   283,   287,   291,   293,   297,   299,   301,   305,
     309,   312,   316,   318,   320,   324,   328,   333,   337,   338,
     340,   342,   344,   346,   348,   350,   352,   354,   356,   358,
     360,   362,   364,   366,   368,   370,   372,   374,   376,   379,
     382,   385,   386,   390,   396,   397,   398
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    -1,    81,    82,    -1,    83,    56,    -1,
      92,    56,    -1,    89,    56,    -1,    90,    56,    -1,    91,
      56,    -1,    93,    56,    -1,    94,    56,    -1,    95,    56,
      -1,    96,    56,    -1,   100,    56,    -1,   115,    56,    -1,
       3,    56,    -1,    97,    56,    -1,    99,    56,    -1,    56,
      -1,     1,    56,    -1,    84,    85,    87,    88,    -1,     6,
      -1,    -1,    85,    86,    -1,     7,    -1,     8,    -1,    75,
      -1,    73,    -1,   126,     9,    76,    -1,    42,    73,    -1,
      43,    73,    -1,   126,    11,    76,    -1,    13,    -1,    14,
      75,    -1,    15,    75,    -1,    16,    75,    -1,    17,    75,
      -1,   127,    98,    78,    -1,    19,    -1,    20,    -1,    21,
      -1,    22,    -1,    23,    -1,   128,    18,    77,    -1,    33,
     101,    -1,    75,    64,   102,    -1,   103,    -1,   102,    37,
      55,    75,    75,    62,    75,    63,    -1,   102,    38,    55,
      75,    75,    62,    75,    63,    -1,   102,    39,    55,    75,
      62,    75,    63,    -1,   102,    40,    55,    75,    -1,   102,
      41,    55,    75,    -1,   102,    44,    55,    75,    -1,   105,
      -1,   108,    -1,   109,   103,    -1,   110,   103,    -1,    65,
     103,    -1,   111,   103,    -1,   112,    -1,   104,    -1,    45,
      62,   113,    63,    -1,    46,    62,   113,    57,   113,    63,
      -1,    47,    62,   113,    63,    -1,   107,    -1,    62,   107,
      57,   114,   125,    63,    -1,    73,    -1,    74,    -1,   106,
      -1,   106,    71,   106,    -1,    75,    -1,    34,    69,    70,
      36,    -1,    34,    69,    60,    70,    36,    -1,    34,    69,
      60,    55,   114,    70,    36,    -1,    34,    69,   114,    70,
      36,    -1,    35,    69,   114,    70,    36,    -1,    48,    69,
     114,    70,    -1,    48,    69,    60,    55,   114,    70,    -1,
      75,    -1,   113,    75,    -1,   114,    58,   114,    -1,   114,
      59,   114,    -1,   114,    60,   114,    -1,   114,    61,   114,
      -1,    73,    -1,    62,   114,    63,    -1,   116,    -1,   117,
      -1,     4,    75,   118,    -1,     5,    75,   118,    -1,    62,
      63,    -1,    62,   119,    63,    -1,   120,    -1,   121,    -1,
     120,    56,   119,    -1,   121,    56,   119,    -1,   122,    75,
     124,   125,    -1,   123,    75,   124,    -1,    -1,    24,    -1,
      25,    -1,    26,    -1,    29,    -1,    30,    -1,    31,    -1,
      32,    -1,    11,    -1,    12,    -1,     9,    -1,    49,    -1,
      51,    -1,    50,    -1,    52,    -1,    54,    -1,    53,    -1,
      10,    -1,    28,    -1,    27,    -1,    55,    75,    -1,    55,
     101,    -1,    55,   104,    -1,    -1,   125,    57,    79,    -1,
     125,    57,    79,    69,    70,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   195,   195,   196,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   219,   221,   222,   223,   224,
     228,   241,   253,   254,   257,   268,   276,   279,   282,   299,
     302,   306,   312,   320,   328,   336,   344,   352,   363,   364,
     365,   366,   367,   370,   380,   390,   394,   396,   416,   436,
     451,   465,   474,   486,   488,   490,   492,   494,   496,   498,
     500,   504,   506,   509,   513,   519,   526,   532,   536,   538,
     562,   566,   568,   570,   575,   579,   583,   585,   590,   592,
     596,   598,   600,   602,   604,   606,   611,   612,   615,   619,
     623,   625,   630,   632,   634,   639,   646,   667,   677,   678,
     679,   680,   681,   682,   683,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   699,   700,   704,   710,
     712,   717,   718,   725,   734,   738,   742
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "sySkip", "syRoutine", "sySimpleRoutine",
  "sySubsystem", "syKernelUser", "syKernelServer", "syMsgOption",
  "syMsgSeqno", "syWaitTime", "sySendTime", "syNoWaitTime", "syErrorProc",
  "syServerPrefix", "syUserPrefix", "syServerDemux", "syRCSId", "syImport",
  "syUImport", "sySImport", "syIImport", "syDImport", "syIn", "syOut",
  "syInOut", "syUserImpl", "syServerImpl", "syRequestPort", "syReplyPort",
  "sySReplyPort", "syUReplyPort", "syType", "syArray", "syStruct", "syOf",
  "syInTran", "syOutTran", "syDestructor", "syCType", "syCUserType",
  "syUserTypeLimit", "syOnStackLimit", "syCServerType", "syPointerTo",
  "syPointerToIfNot", "syValueOf", "syCString", "sySecToken",
  "syUserSecToken", "syServerSecToken", "syAuditToken", "syUserAuditToken",
  "syServerAuditToken", "syColon", "sySemi", "syComma", "syPlus",
  "syMinus", "syStar", "syDiv", "syLParen", "syRParen", "syEqual",
  "syCaret", "syTilde", "syLAngle", "syRAngle", "syLBrack", "syRBrack",
  "syBar", "syError", "syNumber", "sySymbolicType", "syIdentifier",
  "syString", "syQString", "syFileName", "syIPCFlag", "$accept",
  "Statements", "Statement", "Subsystem", "SubsystemStart",
  "SubsystemMods", "SubsystemMod", "SubsystemName", "SubsystemBase",
  "MsgOption", "UserTypeLimit", "OnStackLimit", "WaitTime", "Error",
  "ServerPrefix", "UserPrefix", "ServerDemux", "Import", "ImportIndicant",
  "RCSDecl", "TypeDecl", "NamedTypeSpec", "TransTypeSpec", "TypeSpec",
  "NativeTypeSpec", "BasicTypeSpec", "PrimIPCType", "IPCType",
  "PrevTypeSpec", "VarArrayHead", "ArrayHead", "StructHead", "CStringSpec",
  "TypePhrase", "IntExp", "RoutineDecl", "Routine", "SimpleRoutine",
  "Arguments", "ArgumentList", "Argument", "Trailer", "Direction",
  "TrImplKeyword", "ArgumentType", "IPCFlags", "LookString",
  "LookFileName", "LookQString", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    84,    85,    85,    86,    86,    87,    88,    89,    90,
      91,    92,    92,    93,    94,    95,    96,    97,    98,    98,
      98,    98,    98,    99,   100,   101,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   109,   109,   109,   110,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   117,
     118,   118,   119,   119,   119,   119,   120,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   124,
     124,   125,   125,   125,   126,   127,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       4,     1,     0,     2,     1,     1,     1,     1,     3,     2,
       2,     3,     1,     2,     2,     2,     2,     3,     1,     1,
       1,     1,     1,     3,     2,     3,     1,     8,     8,     7,
       4,     4,     4,     1,     1,     2,     2,     2,     2,     1,
       1,     4,     6,     4,     1,     6,     1,     1,     1,     3,
       1,     4,     5,     7,     5,     5,     4,     6,     1,     2,
       3,     3,     3,     3,     1,     3,     1,     1,     3,     3,
       2,     3,     1,     1,     3,     3,     4,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     0,     3,     5,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,    21,    32,     0,
       0,     0,     0,     0,     0,     0,    18,     3,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,     0,     0,     0,    19,    15,     0,
       0,    33,    34,    35,    36,     0,    44,    29,    30,     4,
       0,     6,     7,     8,     5,     9,    10,    11,    12,    16,
      17,    13,    14,     0,     0,    38,    39,    40,    41,    42,
       0,     0,    98,    88,    89,     0,    24,    25,    26,    23,
       0,    28,    31,    37,    43,   108,   115,   106,   107,    99,
     100,   101,   117,   116,   102,   103,   104,   105,   109,   111,
     110,   112,   114,   113,    90,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    67,
      70,    45,    46,    60,    53,    68,    64,    54,     0,     0,
       0,    59,    27,    20,    91,    98,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    58,    94,    95,     0,
     121,    97,     0,     0,     0,    84,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,   118,   119,   120,    96,     0,     0,     0,    71,
       0,     0,     0,     0,     0,     0,    61,    79,     0,    63,
       0,    76,   121,     0,     0,     0,    50,    51,    52,     0,
       0,    72,    85,    80,    81,    82,    83,    74,    75,     0,
       0,     0,     0,     0,     0,   122,     0,    62,    77,    65,
       0,     0,     0,     0,    73,     0,     0,    49,   123,    47,
      48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    17,    18,    19,    50,    79,    80,   133,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    70,    29,
      30,    46,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   169,   166,    31,    32,    33,    73,   105,
     106,   107,   108,   109,   160,   185,    34,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const yytype_int16 yypact[] =
{
    -140,    60,  -140,   -23,   -21,   -36,   -18,  -140,  -140,    -5,
      -3,    20,    40,    42,   -26,    54,  -140,  -140,    70,  -140,
      72,    83,    84,    85,    92,   111,   112,   113,   114,   116,
     117,   118,  -140,  -140,     8,    78,   124,  -140,  -140,   132,
     132,  -140,  -140,  -140,  -140,   134,  -140,  -140,  -140,  -140,
      -7,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,   119,   120,  -140,  -140,  -140,  -140,  -140,
     121,   125,    80,  -140,  -140,   -24,  -140,  -140,  -140,  -140,
     130,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,   137,   148,   149,   133,   135,
     138,   140,   144,   150,   151,   142,   -60,   -24,  -140,  -140,
    -140,    81,  -140,  -140,  -140,   143,  -140,  -140,   -24,   -24,
     -24,  -140,  -140,  -140,  -140,   126,   126,   160,   160,   -44,
      -6,   141,   141,   141,   -28,   161,  -140,   162,   164,   165,
     166,   167,   168,   -60,  -140,  -140,  -140,  -140,  -140,   -38,
    -140,  -140,   -50,    -6,   188,  -140,    26,   101,  -140,   -48,
     -45,   -35,   170,   123,    -6,   152,   153,   154,   155,   156,
     157,  -140,   134,  -140,  -140,   169,    -6,   197,    86,  -140,
      -6,    -6,    -6,    -6,   198,   199,  -140,  -140,   141,  -140,
      -6,  -140,   105,   163,   171,   174,  -140,  -140,  -140,   158,
     127,  -140,  -140,    53,    53,  -140,  -140,  -140,  -140,   -17,
     131,    31,   177,   178,   172,   173,   205,  -140,  -140,  -140,
     175,   176,   180,   179,  -140,   181,   182,  -140,  -140,  -140,
    -140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,    89,  -140,   -86,    93,  -140,   100,   139,  -140,  -140,
    -140,  -140,  -140,  -139,  -138,  -140,  -140,  -140,   214,   -12,
    -140,  -140,  -140,  -140,   122,    55,  -140,  -140,  -140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -127
static const yytype_int16 yytable[] =
{
      76,    77,   167,   170,   171,   186,   173,   112,   113,   114,
     110,   111,   198,   118,   119,   196,   162,    63,   163,    64,
     187,   112,   113,   114,   115,   188,   164,   197,   199,   165,
     197,   146,   172,    37,   163,    38,   202,   182,   116,    39,
     197,   117,   154,   155,   156,   165,   227,    47,   210,   118,
     119,   120,   213,   214,   215,   216,   163,    40,   197,   219,
       2,     3,   220,     4,     5,     6,     7,   165,    78,  -124,
      41,  -124,    42,     8,     9,    10,    11,    12,  -126,  -125,
    -125,  -125,  -125,  -125,   190,   191,   192,   193,   209,    85,
      86,    87,    88,    13,   229,    43,   194,    65,    66,    67,
      68,    69,    14,    15,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   192,   193,    44,    16,    45,   147,   148,
     149,   150,   151,   157,   158,   152,    49,    48,    51,    98,
      99,   100,   101,   102,   103,    85,    86,    87,    88,    52,
      53,    54,    71,   104,   190,   191,   192,   193,    55,   212,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   190,
     191,   192,   193,   190,   191,   192,   193,    56,    57,    58,
      59,   195,    60,    61,    62,    98,    99,   100,   101,   102,
     103,   190,   191,   192,   193,   190,   191,   192,   193,   190,
     191,   192,   193,   201,    72,    81,    82,   226,    75,    83,
     134,   228,    84,   132,   135,   136,   141,   139,   137,   140,
     138,   144,   142,   143,   153,   159,   168,   175,   174,   176,
     177,   178,   179,   180,   189,   200,   209,   203,   204,   205,
     206,   207,   208,   211,   217,   218,   224,   225,   222,   230,
     231,   234,   233,   237,   239,   240,   223,   232,   183,   238,
     235,   236,   184,   181,    74,   145,     0,   221,     0,     0,
     161
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-140))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,     8,   140,   142,   143,    55,   144,    45,    46,    47,
      34,    35,    57,    73,    74,    63,    60,     9,    62,    11,
      70,    45,    46,    47,    48,   163,    70,    75,    63,    73,
      75,   117,    60,    56,    62,    56,   174,    75,    62,    75,
      75,    65,   128,   129,   130,    73,    63,    73,   186,    73,
      74,    75,   190,   191,   192,   193,    62,    75,    75,   198,
       0,     1,   200,     3,     4,     5,     6,    73,    75,     9,
      75,    11,    75,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    58,    59,    60,    61,    57,     9,
      10,    11,    12,    33,    63,    75,    70,    19,    20,    21,
      22,    23,    42,    43,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    60,    61,    75,    56,    75,    37,    38,
      39,    40,    41,   135,   136,    44,    56,    73,    56,    49,
      50,    51,    52,    53,    54,     9,    10,    11,    12,    56,
      56,    56,    18,    63,    58,    59,    60,    61,    56,    63,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    58,
      59,    60,    61,    58,    59,    60,    61,    56,    56,    56,
      56,    70,    56,    56,    56,    49,    50,    51,    52,    53,
      54,    58,    59,    60,    61,    58,    59,    60,    61,    58,
      59,    60,    61,    70,    62,    76,    76,    70,    64,    78,
      63,    70,    77,    73,    56,    56,    62,    69,    75,    69,
      75,    69,    62,    62,    71,    55,    75,    55,    57,    55,
      55,    55,    55,    55,    36,    55,    57,    75,    75,    75,
      75,    75,    75,    36,    36,    36,    62,    79,    75,    62,
      62,    36,    69,    63,    63,    63,    75,    75,   159,    70,
      75,    75,   159,   153,    40,   116,    -1,   202,    -1,    -1,
     138
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    81,     0,     1,     3,     4,     5,     6,    13,    14,
      15,    16,    17,    33,    42,    43,    56,    82,    83,    84,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    99,
     100,   115,   116,   117,   126,   127,   128,    56,    56,    75,
      75,    75,    75,    75,    75,    75,   101,    73,    73,    56,
      85,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,     9,    11,    19,    20,    21,    22,    23,
      98,    18,    62,   118,   118,    64,     7,     8,    75,    86,
      87,    76,    76,    78,    77,     9,    10,    11,    12,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    49,    50,
      51,    52,    53,    54,    63,   119,   120,   121,   122,   123,
      34,    35,    45,    46,    47,    48,    62,    65,    73,    74,
      75,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    73,    88,    63,    56,    56,    75,    75,    69,
      69,    62,    62,    62,    69,   107,   103,    37,    38,    39,
      40,    41,    44,    71,   103,   103,   103,   119,   119,    55,
     124,   124,    60,    62,    70,    73,   114,   114,    75,   113,
     113,   113,    60,   114,    57,    55,    55,    55,    55,    55,
      55,   106,    75,   101,   104,   125,    55,    70,   114,    36,
      58,    59,    60,    61,    70,    70,    63,    75,    57,    63,
      55,    70,   114,    75,    75,    75,    75,    75,    75,    57,
     114,    36,    63,   114,   114,   114,   114,    36,    36,   113,
     114,   125,    75,    75,    62,    79,    70,    63,    70,    63,
      62,    62,    75,    69,    36,    75,    75,    63,    70,    63,
      63
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
      int yyn = yypact[*yyssp];
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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
        case 14:

/* Line 1806 of yacc.c  */
#line 210 "parser.y"
    {
    register statement_t *st = stAlloc();

    st->stKind = skRoutine;
    st->stRoutine = (yyvsp[(1) - (2)].routine);
    rtCheckRoutine((yyvsp[(1) - (2)].routine));
    if (BeVerbose)
	rtPrintRoutine((yyvsp[(1) - (2)].routine));
}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 220 "parser.y"
    { rtSkip(); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 225 "parser.y"
    { yyerrok; }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 230 "parser.y"
    {
    if (BeVerbose)
    {
	printf("Subsystem %s: base = %u%s%s\n\n",
	       SubsystemName, SubsystemBase,
	       IsKernelUser ? ", KernelUser" : "",
	       IsKernelServer ? ", KernelServer" : "");
    }
}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 242 "parser.y"
    {
    if (SubsystemName != strNULL)
    {
	warn("previous Subsystem decl (of %s) will be ignored", SubsystemName);
	IsKernelUser = FALSE;
	IsKernelServer = FALSE;
	strfree(SubsystemName);
    }
}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 258 "parser.y"
    {
    if (IsKernelUser)
	warn("duplicate KernelUser keyword");
    if (!UseMsgRPC) 
    {
	warn("with KernelUser the -R option is meaningless");
	UseMsgRPC = TRUE;
    }
    IsKernelUser = TRUE;
}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 269 "parser.y"
    {
    if (IsKernelServer)
	warn("duplicate KernelServer keyword");
    IsKernelServer = TRUE;
}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 276 "parser.y"
    { SubsystemName = (yyvsp[(1) - (1)].identifier); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 279 "parser.y"
    { SubsystemBase = (yyvsp[(1) - (1)].number); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 283 "parser.y"
    {
    if (streql((yyvsp[(3) - (3)].string), "MACH_MSG_OPTION_NONE"))
    {
	MsgOption = strNULL;
	if (BeVerbose)
	    printf("MsgOption: canceled\n\n");
    }
    else
    {
	MsgOption = (yyvsp[(3) - (3)].string);
	if (BeVerbose)
	    printf("MsgOption %s\n\n",(yyvsp[(3) - (3)].string));
    }
}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 300 "parser.y"
    {UserTypeLimit = (yyvsp[(2) - (2)].number); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 303 "parser.y"
    {MaxMessSizeOnStack = (yyvsp[(2) - (2)].number); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 307 "parser.y"
    {
    WaitTime = (yyvsp[(3) - (3)].string);
    if (BeVerbose)
	printf("WaitTime %s\n\n", WaitTime);
}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 313 "parser.y"
    {
    WaitTime = strNULL;
    if (BeVerbose)
	printf("NoWaitTime\n\n");
}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 321 "parser.y"
    {
    ErrorProc = (yyvsp[(2) - (2)].identifier);
    if (BeVerbose)
	printf("ErrorProc %s\n\n", ErrorProc);
}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 329 "parser.y"
    {
    ServerPrefix = (yyvsp[(2) - (2)].identifier);
    if (BeVerbose)
	printf("ServerPrefix %s\n\n", ServerPrefix);
}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 337 "parser.y"
    {
    UserPrefix = (yyvsp[(2) - (2)].identifier);
    if (BeVerbose)
	printf("UserPrefix %s\n\n", UserPrefix);
}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 345 "parser.y"
    {
    ServerDemux = (yyvsp[(2) - (2)].identifier);
    if (BeVerbose)
	printf("ServerDemux %s\n\n", ServerDemux);
}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 353 "parser.y"
    {
    register statement_t *st = stAlloc();
    st->stKind = (yyvsp[(2) - (3)].statement_kind);
    st->stFileName = (yyvsp[(3) - (3)].string);

    if (BeVerbose)
	printf("%s %s\n\n", import_name((yyvsp[(2) - (3)].statement_kind)), (yyvsp[(3) - (3)].string));
}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 363 "parser.y"
    { (yyval.statement_kind) = skImport; }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 364 "parser.y"
    { (yyval.statement_kind) = skUImport; }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 365 "parser.y"
    { (yyval.statement_kind) = skSImport; }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 366 "parser.y"
    { (yyval.statement_kind) = skIImport; }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 367 "parser.y"
    { (yyval.statement_kind) = skDImport; }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 371 "parser.y"
    {
    if (RCSId != strNULL)
	warn("previous RCS decl will be ignored");
    if (BeVerbose)
	printf("RCSId %s\n\n", (yyvsp[(3) - (3)].string));
    RCSId = (yyvsp[(3) - (3)].string);
}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 381 "parser.y"
    {
    register identifier_t name = (yyvsp[(2) - (2)].type)->itName;

    if (itLookUp(name) != itNULL)
	warn("overriding previous definition of %s", name);
    itInsert(name, (yyvsp[(2) - (2)].type));
}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 391 "parser.y"
    { itTypeDecl((yyvsp[(1) - (3)].identifier), (yyval.type) = (yyvsp[(3) - (3)].type)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 395 "parser.y"
    { (yyval.type) = itResetType((yyvsp[(1) - (1)].type)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 398 "parser.y"
    {
    (yyval.type) = (yyvsp[(1) - (8)].type);

    if (((yyval.type)->itTransType != strNULL) && !streql((yyval.type)->itTransType, (yyvsp[(4) - (8)].identifier)))
	warn("conflicting translation types (%s, %s)",
	     (yyval.type)->itTransType, (yyvsp[(4) - (8)].identifier));
    (yyval.type)->itTransType = (yyvsp[(4) - (8)].identifier);

    if (((yyval.type)->itInTrans != strNULL) && !streql((yyval.type)->itInTrans, (yyvsp[(5) - (8)].identifier)))
	warn("conflicting in-translation functions (%s, %s)",
	     (yyval.type)->itInTrans, (yyvsp[(5) - (8)].identifier));
    (yyval.type)->itInTrans = (yyvsp[(5) - (8)].identifier);

    if (((yyval.type)->itServerType != strNULL) && !streql((yyval.type)->itServerType, (yyvsp[(7) - (8)].identifier)))
	warn("conflicting server types (%s, %s)",
	     (yyval.type)->itServerType, (yyvsp[(7) - (8)].identifier));
    (yyval.type)->itServerType = (yyvsp[(7) - (8)].identifier);
}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 418 "parser.y"
    {
    (yyval.type) = (yyvsp[(1) - (8)].type);

    if (((yyval.type)->itServerType != strNULL) && !streql((yyval.type)->itServerType, (yyvsp[(4) - (8)].identifier)))
	warn("conflicting server types (%s, %s)",
	     (yyval.type)->itServerType, (yyvsp[(4) - (8)].identifier));
    (yyval.type)->itServerType = (yyvsp[(4) - (8)].identifier);

    if (((yyval.type)->itOutTrans != strNULL) && !streql((yyval.type)->itOutTrans, (yyvsp[(5) - (8)].identifier)))
	warn("conflicting out-translation functions (%s, %s)",
	     (yyval.type)->itOutTrans, (yyvsp[(5) - (8)].identifier));
    (yyval.type)->itOutTrans = (yyvsp[(5) - (8)].identifier);

    if (((yyval.type)->itTransType != strNULL) && !streql((yyval.type)->itTransType, (yyvsp[(7) - (8)].identifier)))
	warn("conflicting translation types (%s, %s)",
	     (yyval.type)->itTransType, (yyvsp[(7) - (8)].identifier));
    (yyval.type)->itTransType = (yyvsp[(7) - (8)].identifier);
}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 438 "parser.y"
    {
    (yyval.type) = (yyvsp[(1) - (7)].type);

    if (((yyval.type)->itDestructor != strNULL) && !streql((yyval.type)->itDestructor, (yyvsp[(4) - (7)].identifier)))
	warn("conflicting destructor functions (%s, %s)",
	     (yyval.type)->itDestructor, (yyvsp[(4) - (7)].identifier));
    (yyval.type)->itDestructor = (yyvsp[(4) - (7)].identifier);

    if (((yyval.type)->itTransType != strNULL) && !streql((yyval.type)->itTransType, (yyvsp[(6) - (7)].identifier)))
	warn("conflicting translation types (%s, %s)",
	     (yyval.type)->itTransType, (yyvsp[(6) - (7)].identifier));
    (yyval.type)->itTransType = (yyvsp[(6) - (7)].identifier);
}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 452 "parser.y"
    {
    (yyval.type) = (yyvsp[(1) - (4)].type);

    if (((yyval.type)->itUserType != strNULL) && !streql((yyval.type)->itUserType, (yyvsp[(4) - (4)].identifier)))
	warn("conflicting user types (%s, %s)",
	     (yyval.type)->itUserType, (yyvsp[(4) - (4)].identifier));
    (yyval.type)->itUserType = (yyvsp[(4) - (4)].identifier);

    if (((yyval.type)->itServerType != strNULL) && !streql((yyval.type)->itServerType, (yyvsp[(4) - (4)].identifier)))
	warn("conflicting server types (%s, %s)",
	     (yyval.type)->itServerType, (yyvsp[(4) - (4)].identifier));
    (yyval.type)->itServerType = (yyvsp[(4) - (4)].identifier);
}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 466 "parser.y"
    {
    (yyval.type) = (yyvsp[(1) - (4)].type);

    if (((yyval.type)->itUserType != strNULL) && !streql((yyval.type)->itUserType, (yyvsp[(4) - (4)].identifier)))
	warn("conflicting user types (%s, %s)",
	     (yyval.type)->itUserType, (yyvsp[(4) - (4)].identifier));
    (yyval.type)->itUserType = (yyvsp[(4) - (4)].identifier);
}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 476 "parser.y"
    {
    (yyval.type) = (yyvsp[(1) - (4)].type);

    if (((yyval.type)->itServerType != strNULL) && !streql((yyval.type)->itServerType, (yyvsp[(4) - (4)].identifier)))
	warn("conflicting server types (%s, %s)",
	     (yyval.type)->itServerType, (yyvsp[(4) - (4)].identifier));
    (yyval.type)->itServerType = (yyvsp[(4) - (4)].identifier);
}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 487 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 489 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 491 "parser.y"
    { (yyval.type) = itVarArrayDecl((yyvsp[(1) - (2)].number), (yyvsp[(2) - (2)].type)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 493 "parser.y"
    { (yyval.type) = itArrayDecl((yyvsp[(1) - (2)].number), (yyvsp[(2) - (2)].type)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 495 "parser.y"
    { (yyval.type) = itPtrDecl((yyvsp[(2) - (2)].type)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 497 "parser.y"
    { (yyval.type) = itStructDecl((yyvsp[(1) - (2)].number), (yyvsp[(2) - (2)].type)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 499 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 501 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 505 "parser.y"
    { (yyval.type) = itNativeType((yyvsp[(3) - (4)].identifier), TRUE, 0); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 508 "parser.y"
    { (yyval.type) = itNativeType((yyvsp[(3) - (6)].identifier), TRUE, (yyvsp[(5) - (6)].identifier)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 510 "parser.y"
    { (yyval.type) = itNativeType((yyvsp[(3) - (4)].identifier), FALSE, 0); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 514 "parser.y"
    {
    (yyval.type) = itShortDecl((yyvsp[(1) - (1)].symtype).innumber, (yyvsp[(1) - (1)].symtype).instr,
		     (yyvsp[(1) - (1)].symtype).outnumber, (yyvsp[(1) - (1)].symtype).outstr,
		     (yyvsp[(1) - (1)].symtype).size);
}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 521 "parser.y"
    {
    error("Long form type declarations aren't allowed anylonger\n");
}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 527 "parser.y"
    {
    (yyval.symtype).innumber = (yyval.symtype).outnumber = (yyvsp[(1) - (1)].number);
    (yyval.symtype).instr = (yyval.symtype).outstr = strNULL;
    (yyval.symtype).size = 0;
}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 533 "parser.y"
    { (yyval.symtype) = (yyvsp[(1) - (1)].symtype); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 537 "parser.y"
    { (yyval.symtype) = (yyvsp[(1) - (1)].symtype); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 539 "parser.y"
    {
    if ((yyvsp[(1) - (3)].symtype).size != (yyvsp[(3) - (3)].symtype).size)
    {
	if ((yyvsp[(1) - (3)].symtype).size == 0)
	    (yyval.symtype).size = (yyvsp[(3) - (3)].symtype).size;
	else if ((yyvsp[(3) - (3)].symtype).size == 0)
	    (yyval.symtype).size = (yyvsp[(1) - (3)].symtype).size;
	else
	{
	    error("sizes in IPCTypes (%d, %d) aren't equal",
		  (yyvsp[(1) - (3)].symtype).size, (yyvsp[(3) - (3)].symtype).size);
	    (yyval.symtype).size = 0;
	}
    }
    else
	(yyval.symtype).size = (yyvsp[(1) - (3)].symtype).size;
    (yyval.symtype).innumber = (yyvsp[(1) - (3)].symtype).innumber;
    (yyval.symtype).instr = (yyvsp[(1) - (3)].symtype).instr;
    (yyval.symtype).outnumber = (yyvsp[(3) - (3)].symtype).outnumber;
    (yyval.symtype).outstr = (yyvsp[(3) - (3)].symtype).outstr;
}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 563 "parser.y"
    { (yyval.type) = itPrevDecl((yyvsp[(1) - (1)].identifier)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 567 "parser.y"
    { (yyval.number) = 0; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 569 "parser.y"
    { (yyval.number) = 0; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 572 "parser.y"
    { (yyval.number) = (yyvsp[(5) - (7)].number); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 576 "parser.y"
    { (yyval.number) = (yyvsp[(3) - (5)].number); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 580 "parser.y"
    { (yyval.number) = (yyvsp[(3) - (5)].number); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 584 "parser.y"
    { (yyval.type) = itCStringDecl((yyvsp[(3) - (4)].number), FALSE); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 587 "parser.y"
    { (yyval.type) = itCStringDecl((yyvsp[(5) - (6)].number), TRUE); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 591 "parser.y"
    { (yyval.identifier) = (yyvsp[(1) - (1)].identifier); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 593 "parser.y"
    { (yyval.identifier) = strphrase((yyvsp[(1) - (2)].identifier), (yyvsp[(2) - (2)].identifier)); strfree((yyvsp[(2) - (2)].identifier)); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 597 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);	}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 599 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number);	}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 601 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number);	}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 603 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);	}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 605 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number);	}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 607 "parser.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 611 "parser.y"
    { (yyval.routine) = (yyvsp[(1) - (1)].routine); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 612 "parser.y"
    { (yyval.routine) = (yyvsp[(1) - (1)].routine); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 616 "parser.y"
    { (yyval.routine) = rtMakeRoutine((yyvsp[(2) - (3)].identifier), (yyvsp[(3) - (3)].argument)); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 620 "parser.y"
    { (yyval.routine) = rtMakeSimpleRoutine((yyvsp[(2) - (3)].identifier), (yyvsp[(3) - (3)].argument)); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 624 "parser.y"
    { (yyval.argument) = argNULL; }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 626 "parser.y"
    { (yyval.argument) = (yyvsp[(2) - (3)].argument); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 631 "parser.y"
    { (yyval.argument) = (yyvsp[(1) - (1)].argument); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 633 "parser.y"
    { (yyval.argument) = (yyvsp[(1) - (1)].argument); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 635 "parser.y"
    {
    (yyval.argument) = (yyvsp[(1) - (3)].argument);
    (yyval.argument)->argNext = (yyvsp[(3) - (3)].argument);
}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 640 "parser.y"
    {
    (yyval.argument) = (yyvsp[(1) - (3)].argument);
    (yyval.argument)->argNext = (yyvsp[(3) - (3)].argument);
}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 647 "parser.y"
    {
    (yyval.argument) = argAlloc();
    (yyval.argument)->argKind = (yyvsp[(1) - (4)].direction);
    (yyval.argument)->argName = (yyvsp[(2) - (4)].identifier);
    (yyval.argument)->argType = (yyvsp[(3) - (4)].type);
    (yyval.argument)->argFlags = (yyvsp[(4) - (4)].flag);
    if ((yyvsp[(3) - (4)].type) && (yyvsp[(3) - (4)].type)->itNative)
    {
        if ((yyvsp[(1) - (4)].direction) != akIn && (yyvsp[(1) - (4)].direction) != akOut && (yyvsp[(1) - (4)].direction) != akInOut)
	    error("Illegal direction specified");
       
        if (!((yyvsp[(3) - (4)].type)->itNativePointer) && (yyvsp[(1) - (4)].direction) != akIn)
	    error("ValueOf only valid for in");

        if (((yyvsp[(3) - (4)].type)->itBadValue) != NULL && (yyvsp[(1) - (4)].direction) != akIn)
	    error("PointerToIfNot only valid for in");
    }
}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 668 "parser.y"
    {
    (yyval.argument) = argAlloc();
    (yyval.argument)->argKind = (yyvsp[(1) - (3)].direction);
    (yyval.argument)->argName = (yyvsp[(2) - (3)].identifier);
    (yyval.argument)->argType = (yyvsp[(3) - (3)].type);
}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 677 "parser.y"
    { (yyval.direction) = akNone; }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 678 "parser.y"
    { (yyval.direction) = akIn; }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 679 "parser.y"
    { (yyval.direction) = akOut; }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 680 "parser.y"
    { (yyval.direction) = akInOut; }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 681 "parser.y"
    { (yyval.direction) = akRequestPort; }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 682 "parser.y"
    { (yyval.direction) = akReplyPort; }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 683 "parser.y"
    { (yyval.direction) = akSReplyPort; }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 684 "parser.y"
    { (yyval.direction) = akUReplyPort; }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 685 "parser.y"
    { (yyval.direction) = akWaitTime; }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 686 "parser.y"
    { (yyval.direction) = akSendTime; }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 687 "parser.y"
    { (yyval.direction) = akMsgOption; }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 688 "parser.y"
    { (yyval.direction) = akSecToken; }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 689 "parser.y"
    { (yyval.direction) = akServerSecToken; }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 690 "parser.y"
    { (yyval.direction) = akUserSecToken; }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 691 "parser.y"
    { (yyval.direction) = akAuditToken; }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 692 "parser.y"
    { (yyval.direction) = akServerAuditToken; }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 693 "parser.y"
    { (yyval.direction) = akUserAuditToken; }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 694 "parser.y"
    { (yyval.direction) = akMsgSeqno; }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 699 "parser.y"
    { (yyval.direction) = akServerImpl; }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 700 "parser.y"
    { (yyval.direction) = akUserImpl; }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 705 "parser.y"
    {
    (yyval.type) = itLookUp((yyvsp[(2) - (2)].identifier));
    if ((yyval.type) == itNULL)
	error("type '%s' not defined", (yyvsp[(2) - (2)].identifier));
}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 711 "parser.y"
    { (yyval.type) = (yyvsp[(2) - (2)].type); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 713 "parser.y"
    { (yyval.type) = (yyvsp[(2) - (2)].type); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 717 "parser.y"
    { (yyval.flag) = flNone; }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 719 "parser.y"
    {
    if ((yyvsp[(1) - (3)].flag) & (yyvsp[(3) - (3)].flag))
	warn("redundant IPC flag ignored");
    else
	(yyval.flag) = (yyvsp[(1) - (3)].flag) | (yyvsp[(3) - (3)].flag);
}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 726 "parser.y"
    {
    if ((yyvsp[(3) - (5)].flag) != flDealloc)
	warn("only Dealloc is variable");
    else
	(yyval.flag) = (yyvsp[(1) - (5)].flag) | flMaybeDealloc;
}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 734 "parser.y"
    { LookString(); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 738 "parser.y"
    { LookFileName(); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 742 "parser.y"
    { LookQString(); }
    break;



/* Line 1806 of yacc.c  */
#line 2780 "parser.c"
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 745 "parser.y"


void
yyerror(s)
    char *s;
{
    error(s);
}

static char *
import_name(sk)
    statement_kind_t sk;
{
    switch (sk)
    {
      case skImport:
	return "Import";
      case skSImport:
	return "SImport";
      case skUImport:
	return "UImport";
      case skIImport:
	return "IImport";
      case skDImport:
	return "DImport";
      default:
	fatal("import_name(%d): not import statement", (int) sk);
	/*NOTREACHED*/
        return strNULL;
    }
}

