/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
    comentariu = 258,
    incep_sintaxa = 259,
    sfarsit_sintaxa = 260,
    nume_sintaxe = 261,
    cuvinte = 262,
    drept = 263,
    ghili = 264,
    paranteze1 = 265,
    sageata = 266,
    inm = 267,
    atribut = 268,
    imp = 269,
    plus = 270,
    minus = 271,
    smir = 272,
    and = 273,
    Sma = 274,
    Soe = 275,
    paranteze31 = 276,
    paranteze32 = 277,
    simb = 278,
    special = 279,
    incep_semantica = 280,
    import = 281,
    k = 282,
    configur = 283,
    env = 284,
    store = 285,
    stack = 286,
    instream = 287,
    outstream = 288,
    var = 289,
    rule = 290,
    tip_i = 291,
    tip_st = 292,
    tip_bl = 293,
    mme = 294,
    mMe = 295,
    pInt = 296,
    sp = 297,
    mmeInt = 298,
    ttrue = 299,
    ffalse = 300,
    tip_B = 301,
    simpleR = 302,
    incepK = 303,
    sfarsitK = 304,
    incepEnv = 305,
    sfarsitEnv = 306,
    incepSto = 307,
    sfarsitSto = 308,
    ghmi = 309,
    drp = 310,
    incepSta = 311,
    sfarsitSta = 312
  };
#endif
/* Tokens.  */
#define comentariu 258
#define incep_sintaxa 259
#define sfarsit_sintaxa 260
#define nume_sintaxe 261
#define cuvinte 262
#define drept 263
#define ghili 264
#define paranteze1 265
#define sageata 266
#define inm 267
#define atribut 268
#define imp 269
#define plus 270
#define minus 271
#define smir 272
#define and 273
#define Sma 274
#define Soe 275
#define paranteze31 276
#define paranteze32 277
#define simb 278
#define special 279
#define incep_semantica 280
#define import 281
#define k 282
#define configur 283
#define env 284
#define store 285
#define stack 286
#define instream 287
#define outstream 288
#define var 289
#define rule 290
#define tip_i 291
#define tip_st 292
#define tip_bl 293
#define mme 294
#define mMe 295
#define pInt 296
#define sp 297
#define mmeInt 298
#define ttrue 299
#define ffalse 300
#define tip_B 301
#define simpleR 302
#define incepK 303
#define sfarsitK 304
#define incepEnv 305
#define sfarsitEnv 306
#define incepSto 307
#define sfarsitSto 308
#define ghmi 309
#define drp 310
#define incepSta 311
#define sfarsitSta 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{

char *coment;char *nume;


};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
