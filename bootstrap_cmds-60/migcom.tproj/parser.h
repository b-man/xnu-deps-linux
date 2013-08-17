/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* Line 2068 of yacc.c  */
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



/* Line 2068 of yacc.c  */
#line 230 "parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


