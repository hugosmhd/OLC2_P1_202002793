// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.hpp"


// Unqualified %code blocks.
#line 68 "parser.y"
 yy::Parser::symbol_type yylex(void* yyscanner, yy::location& loc, class Proyecto1::ParserCtx & ctx); 

#line 49 "parser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 141 "parser.cpp"

  /// Build a parser object.
  Parser::Parser (void *scanner_yyarg, yy::location& loc_yyarg, class Proyecto1::ParserCtx & ctx_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      scanner (scanner_yyarg),
      loc (loc_yyarg),
      ctx (ctx_yyarg)
  {}

  Parser::~Parser ()
  {}

  Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  Parser::symbol_kind_type
  Parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  Parser::stack_symbol_type::stack_symbol_type ()
  {}

  Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_TIPOS_DECLARACION: // TIPOS_DECLARACION
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_INCREMENT: // INCREMENT
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOLEANO: // BOOLEANO
        value.YY_MOVE_OR_COPY< Expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARACION: // DECLARACION
      case symbol_kind::S_ASIGNACION: // ASIGNACION
      case symbol_kind::S_INCREMENTINS: // INCREMENTINS
        value.YY_MOVE_OR_COPY< Instruction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_TIPOS: // TIPOS
        value.YY_MOVE_OR_COPY< Type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.YY_MOVE_OR_COPY< funcion_main* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
        value.YY_MOVE_OR_COPY< lista_instrucciones* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_IGUALIGUALR: // IGUALIGUALR
      case symbol_kind::S_DIFERENTER: // DIFERENTER
      case symbol_kind::S_MAYORQUER: // MAYORQUER
      case symbol_kind::S_MENORQUER: // MENORQUER
      case symbol_kind::S_MAYORIGUALQUER: // MAYORIGUALQUER
      case symbol_kind::S_MENORIGUALQUER: // MENORIGUALQUER
      case symbol_kind::S_OPAND: // OPAND
      case symbol_kind::S_OPOR: // OPOR
      case symbol_kind::S_OPNOT: // OPNOT
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_FLOTANTE: // FLOTANTE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_COMA: // COMA
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_TIPOS_DECLARACION: // TIPOS_DECLARACION
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_INCREMENT: // INCREMENT
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOLEANO: // BOOLEANO
        value.move< Expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARACION: // DECLARACION
      case symbol_kind::S_ASIGNACION: // ASIGNACION
      case symbol_kind::S_INCREMENTINS: // INCREMENTINS
        value.move< Instruction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_TIPOS: // TIPOS
        value.move< Type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.move< funcion_main* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
        value.move< lista_instrucciones* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_IGUALIGUALR: // IGUALIGUALR
      case symbol_kind::S_DIFERENTER: // DIFERENTER
      case symbol_kind::S_MAYORQUER: // MAYORQUER
      case symbol_kind::S_MENORQUER: // MENORQUER
      case symbol_kind::S_MAYORIGUALQUER: // MAYORIGUALQUER
      case symbol_kind::S_MENORIGUALQUER: // MENORIGUALQUER
      case symbol_kind::S_OPAND: // OPAND
      case symbol_kind::S_OPOR: // OPOR
      case symbol_kind::S_OPNOT: // OPNOT
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_FLOTANTE: // FLOTANTE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_COMA: // COMA
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_TIPOS_DECLARACION: // TIPOS_DECLARACION
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_INCREMENT: // INCREMENT
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOLEANO: // BOOLEANO
        value.copy< Expression* > (that.value);
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARACION: // DECLARACION
      case symbol_kind::S_ASIGNACION: // ASIGNACION
      case symbol_kind::S_INCREMENTINS: // INCREMENTINS
        value.copy< Instruction* > (that.value);
        break;

      case symbol_kind::S_TIPOS: // TIPOS
        value.copy< Type > (that.value);
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.copy< funcion_main* > (that.value);
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
        value.copy< lista_instrucciones* > (that.value);
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_IGUALIGUALR: // IGUALIGUALR
      case symbol_kind::S_DIFERENTER: // DIFERENTER
      case symbol_kind::S_MAYORQUER: // MAYORQUER
      case symbol_kind::S_MENORQUER: // MENORQUER
      case symbol_kind::S_MAYORIGUALQUER: // MAYORIGUALQUER
      case symbol_kind::S_MENORIGUALQUER: // MENORIGUALQUER
      case symbol_kind::S_OPAND: // OPAND
      case symbol_kind::S_OPOR: // OPOR
      case symbol_kind::S_OPNOT: // OPNOT
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_FLOTANTE: // FLOTANTE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_COMA: // COMA
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_TIPOS_DECLARACION: // TIPOS_DECLARACION
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_INCREMENT: // INCREMENT
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOLEANO: // BOOLEANO
        value.move< Expression* > (that.value);
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARACION: // DECLARACION
      case symbol_kind::S_ASIGNACION: // ASIGNACION
      case symbol_kind::S_INCREMENTINS: // INCREMENTINS
        value.move< Instruction* > (that.value);
        break;

      case symbol_kind::S_TIPOS: // TIPOS
        value.move< Type > (that.value);
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.move< funcion_main* > (that.value);
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
        value.move< lista_instrucciones* > (that.value);
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_IGUALIGUALR: // IGUALIGUALR
      case symbol_kind::S_DIFERENTER: // DIFERENTER
      case symbol_kind::S_MAYORQUER: // MAYORQUER
      case symbol_kind::S_MENORQUER: // MENORQUER
      case symbol_kind::S_MAYORIGUALQUER: // MAYORIGUALQUER
      case symbol_kind::S_MENORIGUALQUER: // MENORIGUALQUER
      case symbol_kind::S_OPAND: // OPAND
      case symbol_kind::S_OPOR: // OPOR
      case symbol_kind::S_OPNOT: // OPNOT
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_FLOTANTE: // FLOTANTE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_COMA: // COMA
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        switch (yykind)
    {
      case symbol_kind::S_NUMERO: // NUMERO
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 562 "parser.cpp"
        break;

      case symbol_kind::S_ID: // ID
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 568 "parser.cpp"
        break;

      case symbol_kind::S_STRING: // STRING
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 574 "parser.cpp"
        break;

      case symbol_kind::S_DECIMAL: // DECIMAL
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 580 "parser.cpp"
        break;

      case symbol_kind::S_INC: // INC
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 586 "parser.cpp"
        break;

      case symbol_kind::S_SUMA: // SUMA
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 592 "parser.cpp"
        break;

      case symbol_kind::S_MENOS: // MENOS
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 598 "parser.cpp"
        break;

      case symbol_kind::S_POR: // POR
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 604 "parser.cpp"
        break;

      case symbol_kind::S_DIV: // DIV
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 610 "parser.cpp"
        break;

      case symbol_kind::S_MOD: // MOD
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 616 "parser.cpp"
        break;

      case symbol_kind::S_PRINTF: // PRINTF
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 622 "parser.cpp"
        break;

      case symbol_kind::S_IGUALIGUALR: // IGUALIGUALR
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 628 "parser.cpp"
        break;

      case symbol_kind::S_DIFERENTER: // DIFERENTER
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 634 "parser.cpp"
        break;

      case symbol_kind::S_MAYORQUER: // MAYORQUER
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 640 "parser.cpp"
        break;

      case symbol_kind::S_MENORQUER: // MENORQUER
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 646 "parser.cpp"
        break;

      case symbol_kind::S_MAYORIGUALQUER: // MAYORIGUALQUER
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 652 "parser.cpp"
        break;

      case symbol_kind::S_MENORIGUALQUER: // MENORIGUALQUER
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 658 "parser.cpp"
        break;

      case symbol_kind::S_OPAND: // OPAND
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 664 "parser.cpp"
        break;

      case symbol_kind::S_OPOR: // OPOR
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 670 "parser.cpp"
        break;

      case symbol_kind::S_OPNOT: // OPNOT
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 676 "parser.cpp"
        break;

      case symbol_kind::S_VOID: // VOID
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 682 "parser.cpp"
        break;

      case symbol_kind::S_INT: // INT
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 688 "parser.cpp"
        break;

      case symbol_kind::S_TSTRING: // TSTRING
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 694 "parser.cpp"
        break;

      case symbol_kind::S_FLOTANTE: // FLOTANTE
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 700 "parser.cpp"
        break;

      case symbol_kind::S_BOOLEAN: // BOOLEAN
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 706 "parser.cpp"
        break;

      case symbol_kind::S_PARA: // PARA
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 712 "parser.cpp"
        break;

      case symbol_kind::S_PARC: // PARC
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 718 "parser.cpp"
        break;

      case symbol_kind::S_RMAIN: // RMAIN
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 724 "parser.cpp"
        break;

      case symbol_kind::S_LLAVA: // LLAVA
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 730 "parser.cpp"
        break;

      case symbol_kind::S_LLAVC: // LLAVC
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 736 "parser.cpp"
        break;

      case symbol_kind::S_RTRUE: // RTRUE
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 742 "parser.cpp"
        break;

      case symbol_kind::S_RFALSE: // RFALSE
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 748 "parser.cpp"
        break;

      case symbol_kind::S_CORA: // CORA
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 754 "parser.cpp"
        break;

      case symbol_kind::S_CORC: // CORC
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 760 "parser.cpp"
        break;

      case symbol_kind::S_COMA: // COMA
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 766 "parser.cpp"
        break;

      case symbol_kind::S_START: // START
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < funcion_main* > (); }
#line 772 "parser.cpp"
        break;

      case symbol_kind::S_MAIN: // MAIN
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < funcion_main* > (); }
#line 778 "parser.cpp"
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < lista_instrucciones* > (); }
#line 784 "parser.cpp"
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 790 "parser.cpp"
        break;

      case symbol_kind::S_PRINT: // PRINT
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 796 "parser.cpp"
        break;

      case symbol_kind::S_DECLARACION: // DECLARACION
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 802 "parser.cpp"
        break;

      case symbol_kind::S_ASIGNACION: // ASIGNACION
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 808 "parser.cpp"
        break;

      case symbol_kind::S_TIPOS_DECLARACION: // TIPOS_DECLARACION
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 814 "parser.cpp"
        break;

      case symbol_kind::S_EXPRESSION: // EXPRESSION
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 820 "parser.cpp"
        break;

      case symbol_kind::S_INCREMENTINS: // INCREMENTINS
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 826 "parser.cpp"
        break;

      case symbol_kind::S_INCREMENT: // INCREMENT
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 832 "parser.cpp"
        break;

      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 838 "parser.cpp"
        break;

      case symbol_kind::S_BOOLEANO: // BOOLEANO
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 844 "parser.cpp"
        break;

      case symbol_kind::S_TIPOS: // TIPOS
#line 108 "parser.y"
                 { yyoutput << yysym.value.template as < Type > (); }
#line 850 "parser.cpp"
        break;

      default:
        break;
    }
        yyo << ')';
      }
  }
#endif

  void
  Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  Parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  Parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  Parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::operator() ()
  {
    return parse ();
  }

  int
  Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (scanner, loc, ctx));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_TIPOS_DECLARACION: // TIPOS_DECLARACION
      case symbol_kind::S_EXPRESSION: // EXPRESSION
      case symbol_kind::S_INCREMENT: // INCREMENT
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOLEANO: // BOOLEANO
        yylhs.value.emplace< Expression* > ();
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARACION: // DECLARACION
      case symbol_kind::S_ASIGNACION: // ASIGNACION
      case symbol_kind::S_INCREMENTINS: // INCREMENTINS
        yylhs.value.emplace< Instruction* > ();
        break;

      case symbol_kind::S_TIPOS: // TIPOS
        yylhs.value.emplace< Type > ();
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        yylhs.value.emplace< funcion_main* > ();
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
        yylhs.value.emplace< lista_instrucciones* > ();
        break;

      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_IGUALIGUALR: // IGUALIGUALR
      case symbol_kind::S_DIFERENTER: // DIFERENTER
      case symbol_kind::S_MAYORQUER: // MAYORQUER
      case symbol_kind::S_MENORQUER: // MENORQUER
      case symbol_kind::S_MAYORIGUALQUER: // MAYORIGUALQUER
      case symbol_kind::S_MENORIGUALQUER: // MENORIGUALQUER
      case symbol_kind::S_OPAND: // OPAND
      case symbol_kind::S_OPOR: // OPOR
      case symbol_kind::S_OPNOT: // OPNOT
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_FLOTANTE: // FLOTANTE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_COMA: // COMA
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // START: MAIN
#line 116 "parser.y"
    {
        ctx.Main = yystack_[0].value.as < funcion_main* > ();
        ctx.Salida = "!Ejecución realizada con éxito!";
        yylhs.value.as < funcion_main* > () = yystack_[0].value.as < funcion_main* > ();
    }
#line 1174 "parser.cpp"
    break;

  case 3: // MAIN: LIST_INST
#line 124 "parser.y"
{
   yylhs.value.as < funcion_main* > () = new funcion_main(0, 0, "VOID", yystack_[0].value.as < lista_instrucciones* > ());
}
#line 1182 "parser.cpp"
    break;

  case 4: // LIST_INST: LIST_INST INSTRUCTION
#line 130 "parser.y"
   {
       yystack_[1].value.as < lista_instrucciones* > ()->newInst(yystack_[0].value.as < Instruction* > ());
       yylhs.value.as < lista_instrucciones* > () = yystack_[1].value.as < lista_instrucciones* > ();
   }
#line 1191 "parser.cpp"
    break;

  case 5: // LIST_INST: INSTRUCTION
#line 135 "parser.y"
   {
       yylhs.value.as < lista_instrucciones* > () = new lista_instrucciones();
       yylhs.value.as < lista_instrucciones* > ()->newInst(yystack_[0].value.as < Instruction* > ());
   }
#line 1200 "parser.cpp"
    break;

  case 6: // INSTRUCTION: PRINT ';'
#line 141 "parser.y"
                        { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1206 "parser.cpp"
    break;

  case 7: // INSTRUCTION: DECLARACION ';'
#line 142 "parser.y"
                      { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1212 "parser.cpp"
    break;

  case 8: // INSTRUCTION: ASIGNACION ';'
#line 143 "parser.y"
                     { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1218 "parser.cpp"
    break;

  case 9: // INSTRUCTION: INCREMENTINS ';'
#line 144 "parser.y"
                       { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1224 "parser.cpp"
    break;

  case 10: // PRINT: PRINTF PARA EXPRESSION PARC
#line 147 "parser.y"
                                    { yylhs.value.as < Instruction* > () = new Print(0,0,yystack_[1].value.as < Expression* > ()); }
#line 1230 "parser.cpp"
    break;

  case 11: // DECLARACION: TIPOS ID TIPOS_DECLARACION
#line 150 "parser.y"
                                         { yylhs.value.as < Instruction* > () = new Declaracion(0,0,yystack_[2].value.as < Type > (),yystack_[1].value.as < std::string > (),yystack_[0].value.as < Expression* > ()); }
#line 1236 "parser.cpp"
    break;

  case 12: // ASIGNACION: ID '=' EXPRESSION
#line 154 "parser.y"
                      { yylhs.value.as < Instruction* > () = new Asignacion(0,0, yystack_[2].value.as < std::string > (), yystack_[0].value.as < Expression* > ()); }
#line 1242 "parser.cpp"
    break;

  case 13: // TIPOS_DECLARACION: '=' EXPRESSION
#line 157 "parser.y"
                                  { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1248 "parser.cpp"
    break;

  case 14: // TIPOS_DECLARACION: %empty
#line 158 "parser.y"
            { yylhs.value.as < Expression* > () = new Literal(0,0,NULO,"",0,false,0.0); }
#line 1254 "parser.cpp"
    break;

  case 15: // EXPRESSION: EXPRESSION SUMA EXPRESSION
#line 161 "parser.y"
                                       { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MAS); }
#line 1260 "parser.cpp"
    break;

  case 16: // EXPRESSION: EXPRESSION MENOS EXPRESSION
#line 162 "parser.y"
                                  { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),SUSTRACCION); }
#line 1266 "parser.cpp"
    break;

  case 17: // EXPRESSION: EXPRESSION POR EXPRESSION
#line 163 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),PRODUCTO); }
#line 1272 "parser.cpp"
    break;

  case 18: // EXPRESSION: EXPRESSION DIV EXPRESSION
#line 164 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),DIVISION); }
#line 1278 "parser.cpp"
    break;

  case 19: // EXPRESSION: EXPRESSION MOD EXPRESSION
#line 165 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MODULO); }
#line 1284 "parser.cpp"
    break;

  case 20: // EXPRESSION: EXPRESSION IGUALIGUALR EXPRESSION
#line 166 "parser.y"
                                        { yylhs.value.as < Expression* > () = new Relacional(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),IGUALIGUAL); }
#line 1290 "parser.cpp"
    break;

  case 21: // EXPRESSION: EXPRESSION DIFERENTER EXPRESSION
#line 167 "parser.y"
                                       { yylhs.value.as < Expression* > () = new Relacional(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),DIFERENTE); }
#line 1296 "parser.cpp"
    break;

  case 22: // EXPRESSION: EXPRESSION MAYORQUER EXPRESSION
#line 168 "parser.y"
                                      { yylhs.value.as < Expression* > () = new Relacional(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MAYOR); }
#line 1302 "parser.cpp"
    break;

  case 23: // EXPRESSION: EXPRESSION MENORQUER EXPRESSION
#line 169 "parser.y"
                                      { yylhs.value.as < Expression* > () = new Relacional(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MENOR); }
#line 1308 "parser.cpp"
    break;

  case 24: // EXPRESSION: EXPRESSION MAYORIGUALQUER EXPRESSION
#line 170 "parser.y"
                                           { yylhs.value.as < Expression* > () = new Relacional(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MAYORIGUAL); }
#line 1314 "parser.cpp"
    break;

  case 25: // EXPRESSION: EXPRESSION MENORIGUALQUER EXPRESSION
#line 171 "parser.y"
                                           { yylhs.value.as < Expression* > () = new Relacional(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MENORIGUAL); }
#line 1320 "parser.cpp"
    break;

  case 26: // EXPRESSION: EXPRESSION OPAND EXPRESSION
#line 172 "parser.y"
                                  { yylhs.value.as < Expression* > () = new Logica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),AND); }
#line 1326 "parser.cpp"
    break;

  case 27: // EXPRESSION: EXPRESSION OPOR EXPRESSION
#line 173 "parser.y"
                                 { yylhs.value.as < Expression* > () = new Logica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),OR); }
#line 1332 "parser.cpp"
    break;

  case 28: // EXPRESSION: OPNOT EXPRESSION
#line 174 "parser.y"
                       { yylhs.value.as < Expression* > () = new LogicaNot(0,0,yystack_[0].value.as < Expression* > (),NOT); }
#line 1338 "parser.cpp"
    break;

  case 29: // EXPRESSION: MENOS EXPRESSION
#line 175 "parser.y"
                       { yylhs.value.as < Expression* > () = new NegacionUnaria(0,0,yystack_[0].value.as < Expression* > ()); }
#line 1344 "parser.cpp"
    break;

  case 30: // EXPRESSION: PRIMITIVE
#line 176 "parser.y"
                { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1350 "parser.cpp"
    break;

  case 31: // EXPRESSION: ID
#line 177 "parser.y"
         { yylhs.value.as < Expression* > () = new Identificador(0,0,yystack_[0].value.as < std::string > ()); }
#line 1356 "parser.cpp"
    break;

  case 32: // EXPRESSION: INCREMENT
#line 178 "parser.y"
                { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1362 "parser.cpp"
    break;

  case 33: // INCREMENTINS: INC ID
#line 182 "parser.y"
                  {yylhs.value.as < Instruction* > () = new IncrementoIns(0,0,"PRE",yystack_[0].value.as < std::string > ()); }
#line 1368 "parser.cpp"
    break;

  case 34: // INCREMENTINS: ID INC
#line 183 "parser.y"
                  {yylhs.value.as < Instruction* > () = new IncrementoIns(0,0,"POST",yystack_[1].value.as < std::string > ()); }
#line 1374 "parser.cpp"
    break;

  case 35: // INCREMENT: INC ID
#line 187 "parser.y"
                  {yylhs.value.as < Expression* > () = new Incremento(0,0,"PRE",yystack_[0].value.as < std::string > ()); }
#line 1380 "parser.cpp"
    break;

  case 36: // INCREMENT: ID INC
#line 188 "parser.y"
                  {yylhs.value.as < Expression* > () = new Incremento(0,0,"POST",yystack_[1].value.as < std::string > ()); }
#line 1386 "parser.cpp"
    break;

  case 37: // PRIMITIVE: STRING
#line 192 "parser.y"
   {
       std::string str1 = yystack_[0].value.as < std::string > ().erase(0,1);
       std::string str2 = str1.erase(str1.length()-1,1);
       yylhs.value.as < Expression* > () = new Literal(0,0,STRING,str2,0,false,0.0);
   }
#line 1396 "parser.cpp"
    break;

  case 38: // PRIMITIVE: NUMERO
#line 198 "parser.y"
    {
        int num = stoi(yystack_[0].value.as < std::string > ());
        yylhs.value.as < Expression* > () = new Literal(0,0,INTEGER,"",num,false,0.0);
    }
#line 1405 "parser.cpp"
    break;

  case 39: // PRIMITIVE: DECIMAL
#line 203 "parser.y"
    {
        float num = stod(yystack_[0].value.as < std::string > ());
        yylhs.value.as < Expression* > () = new Literal(0,0,FLOAT,"",0,false, num);
    }
#line 1414 "parser.cpp"
    break;

  case 40: // PRIMITIVE: BOOLEANO
#line 207 "parser.y"
               { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1420 "parser.cpp"
    break;

  case 41: // BOOLEANO: RTRUE
#line 210 "parser.y"
                 { yylhs.value.as < Expression* > () = new Literal(0,0,BOOL,"",0,true,0.0); }
#line 1426 "parser.cpp"
    break;

  case 42: // BOOLEANO: RFALSE
#line 211 "parser.y"
            { yylhs.value.as < Expression* > () = new Literal(0,0,BOOL,"",0,false,0.0); }
#line 1432 "parser.cpp"
    break;

  case 43: // TIPOS: INT
#line 214 "parser.y"
            { yylhs.value.as < Type > () = INTEGER; }
#line 1438 "parser.cpp"
    break;

  case 44: // TIPOS: FLOTANTE
#line 215 "parser.y"
              { yylhs.value.as < Type > () = FLOAT; }
#line 1444 "parser.cpp"
    break;

  case 45: // TIPOS: TSTRING
#line 216 "parser.y"
             { yylhs.value.as < Type > () = STRING; }
#line 1450 "parser.cpp"
    break;

  case 46: // TIPOS: BOOLEAN
#line 217 "parser.y"
             { yylhs.value.as < Type > () = BOOL; }
#line 1456 "parser.cpp"
    break;


#line 1460 "parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  Parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // Parser::context.
  Parser::context::context (const Parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  Parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  Parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char Parser::yypact_ninf_ = -34;

  const signed char Parser::yytable_ninf_ = -1;

  const signed char
  Parser::yypact_[] =
  {
      -1,     2,    -3,   -26,   -34,   -34,   -34,   -34,     4,   -34,
      -1,   -34,   -33,   -31,   -30,   -28,    16,   -34,    39,   -34,
      39,   -34,   -34,   -34,   -34,   -34,   -34,   -18,   -34,    20,
     -34,   -34,    43,    39,    39,   -34,   -34,    70,   -34,   -34,
     -34,    48,    39,   -34,   -34,   -34,    40,   -34,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,   -34,    70,    40,    40,   -34,   -34,   -34,     7,     7,
       7,     7,     7,     7,    97,    84
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,     0,     0,     0,    43,    45,    44,    46,     0,     2,
       3,     5,     0,     0,     0,     0,     0,    34,     0,    33,
       0,     1,     4,     6,     7,     8,     9,    14,    38,    31,
      37,    39,     0,     0,     0,    41,    42,    12,    32,    30,
      40,     0,     0,    11,    36,    35,    29,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    13,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27
  };

  const signed char
  Parser::yypgoto_[] =
  {
     -34,   -34,   -34,   -34,     1,   -34,   -34,   -34,   -34,   -20,
     -34,   -34,   -34,   -34,   -34
  };

  const signed char
  Parser::yydefgoto_[] =
  {
       0,     8,     9,    10,    11,    12,    13,    14,    43,    37,
      15,    38,    39,    40,    16
  };

  const signed char
  Parser::yytable_[] =
  {
      41,    19,    20,     1,    21,    23,     2,    24,    25,    17,
      26,    22,     3,    46,    47,    48,    49,    50,    51,    52,
      27,    42,    62,     4,     5,     6,     7,    44,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    18,    28,    29,    30,    31,    32,    45,    33,     0,
      50,    51,    52,     0,     0,     0,    48,    49,    50,    51,
      52,    34,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,    35,    36,     0,     0,     0,    61,    48,    49,
      50,    51,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,    48,    49,    50,    51,    52,     0,    53,    54,
      55,    56,    57,    58,    59,    48,    49,    50,    51,    52,
       0,    53,    54,    55,    56,    57,    58
  };

  const signed char
  Parser::yycheck_[] =
  {
      20,     4,    28,     4,     0,    38,     7,    38,    38,     7,
      38,    10,    13,    33,    34,     8,     9,    10,    11,    12,
       4,    39,    42,    24,    25,    26,    27,     7,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    39,     3,     4,     5,     6,     7,     4,     9,    -1,
      10,    11,    12,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    22,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    33,    34,    -1,    -1,    -1,    29,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19
  };

  const signed char
  Parser::yystos_[] =
  {
       0,     4,     7,    13,    24,    25,    26,    27,    41,    42,
      43,    44,    45,    46,    47,    50,    54,     7,    39,     4,
      28,     0,    44,    38,    38,    38,    38,     4,     3,     4,
       5,     6,     7,     9,    22,    33,    34,    49,    51,    52,
      53,    49,    39,    48,     7,     4,    49,    49,     8,     9,
      10,    11,    12,    14,    15,    16,    17,    18,    19,    20,
      21,    29,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    40,    41,    42,    43,    43,    44,    44,    44,    44,
      45,    46,    47,    48,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    50,    50,    51,    51,    52,    52,    52,
      52,    53,    53,    54,    54,    54,    54
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     1,     2,     1,     2,     2,     2,     2,
       4,     3,     3,     2,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "END", "error", "\"invalid token\"", "NUMERO", "ID", "STRING",
  "DECIMAL", "INC", "SUMA", "MENOS", "POR", "DIV", "MOD", "PRINTF",
  "IGUALIGUALR", "DIFERENTER", "MAYORQUER", "MENORQUER", "MAYORIGUALQUER",
  "MENORIGUALQUER", "OPAND", "OPOR", "OPNOT", "VOID", "INT", "TSTRING",
  "FLOTANTE", "BOOLEAN", "PARA", "PARC", "RMAIN", "LLAVA", "LLAVC",
  "RTRUE", "RFALSE", "CORA", "CORC", "COMA", "';'", "'='", "$accept",
  "START", "MAIN", "LIST_INST", "INSTRUCTION", "PRINT", "DECLARACION",
  "ASIGNACION", "TIPOS_DECLARACION", "EXPRESSION", "INCREMENTINS",
  "INCREMENT", "PRIMITIVE", "BOOLEANO", "TIPOS", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  Parser::yyrline_[] =
  {
       0,   115,   115,   123,   129,   134,   141,   142,   143,   144,
     147,   150,   154,   157,   158,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   182,   183,   187,   188,   191,   197,   202,
     207,   210,   211,   214,   215,   216,   217
  };

  void
  Parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  Parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1983 "parser.cpp"

#line 220 "parser.y"


void yy::Parser::error(const yy::location& l, const std::string& m)
{
   std::cerr << l << ": " << m << std::endl;
}
