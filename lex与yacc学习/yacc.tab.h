
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


