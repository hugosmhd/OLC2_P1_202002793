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
#line 65 "parser.y"
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
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 534 "parser.cpp"
        break;

      case symbol_kind::S_ID: // ID
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 540 "parser.cpp"
        break;

      case symbol_kind::S_STRING: // STRING
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 546 "parser.cpp"
        break;

      case symbol_kind::S_DECIMAL: // DECIMAL
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 552 "parser.cpp"
        break;

      case symbol_kind::S_INC: // INC
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 558 "parser.cpp"
        break;

      case symbol_kind::S_SUMA: // SUMA
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 564 "parser.cpp"
        break;

      case symbol_kind::S_MENOS: // MENOS
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 570 "parser.cpp"
        break;

      case symbol_kind::S_POR: // POR
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 576 "parser.cpp"
        break;

      case symbol_kind::S_DIV: // DIV
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 582 "parser.cpp"
        break;

      case symbol_kind::S_MOD: // MOD
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 588 "parser.cpp"
        break;

      case symbol_kind::S_PRINTF: // PRINTF
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 594 "parser.cpp"
        break;

      case symbol_kind::S_IGUALIGUALR: // IGUALIGUALR
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 600 "parser.cpp"
        break;

      case symbol_kind::S_DIFERENTER: // DIFERENTER
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 606 "parser.cpp"
        break;

      case symbol_kind::S_VOID: // VOID
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 612 "parser.cpp"
        break;

      case symbol_kind::S_INT: // INT
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 618 "parser.cpp"
        break;

      case symbol_kind::S_TSTRING: // TSTRING
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 624 "parser.cpp"
        break;

      case symbol_kind::S_FLOTANTE: // FLOTANTE
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 630 "parser.cpp"
        break;

      case symbol_kind::S_BOOLEAN: // BOOLEAN
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 636 "parser.cpp"
        break;

      case symbol_kind::S_PARA: // PARA
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 642 "parser.cpp"
        break;

      case symbol_kind::S_PARC: // PARC
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 648 "parser.cpp"
        break;

      case symbol_kind::S_RMAIN: // RMAIN
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 654 "parser.cpp"
        break;

      case symbol_kind::S_LLAVA: // LLAVA
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 660 "parser.cpp"
        break;

      case symbol_kind::S_LLAVC: // LLAVC
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 666 "parser.cpp"
        break;

      case symbol_kind::S_RTRUE: // RTRUE
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 672 "parser.cpp"
        break;

      case symbol_kind::S_RFALSE: // RFALSE
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 678 "parser.cpp"
        break;

      case symbol_kind::S_CORA: // CORA
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 684 "parser.cpp"
        break;

      case symbol_kind::S_CORC: // CORC
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 690 "parser.cpp"
        break;

      case symbol_kind::S_COMA: // COMA
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 696 "parser.cpp"
        break;

      case symbol_kind::S_START: // START
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < funcion_main* > (); }
#line 702 "parser.cpp"
        break;

      case symbol_kind::S_MAIN: // MAIN
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < funcion_main* > (); }
#line 708 "parser.cpp"
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < lista_instrucciones* > (); }
#line 714 "parser.cpp"
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 720 "parser.cpp"
        break;

      case symbol_kind::S_PRINT: // PRINT
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 726 "parser.cpp"
        break;

      case symbol_kind::S_DECLARACION: // DECLARACION
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 732 "parser.cpp"
        break;

      case symbol_kind::S_ASIGNACION: // ASIGNACION
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 738 "parser.cpp"
        break;

      case symbol_kind::S_TIPOS_DECLARACION: // TIPOS_DECLARACION
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 744 "parser.cpp"
        break;

      case symbol_kind::S_EXPRESSION: // EXPRESSION
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 750 "parser.cpp"
        break;

      case symbol_kind::S_INCREMENTINS: // INCREMENTINS
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 756 "parser.cpp"
        break;

      case symbol_kind::S_INCREMENT: // INCREMENT
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 762 "parser.cpp"
        break;

      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 768 "parser.cpp"
        break;

      case symbol_kind::S_BOOLEANO: // BOOLEANO
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 774 "parser.cpp"
        break;

      case symbol_kind::S_TIPOS: // TIPOS
#line 101 "parser.y"
                 { yyoutput << yysym.value.template as < Type > (); }
#line 780 "parser.cpp"
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
#line 109 "parser.y"
    {
        ctx.Main = yystack_[0].value.as < funcion_main* > ();
        ctx.Salida = "!Ejecución realizada con éxito!";
        yylhs.value.as < funcion_main* > () = yystack_[0].value.as < funcion_main* > ();
    }
#line 1097 "parser.cpp"
    break;

  case 3: // MAIN: LIST_INST
#line 117 "parser.y"
{
   yylhs.value.as < funcion_main* > () = new funcion_main(0, 0, "VOID", yystack_[0].value.as < lista_instrucciones* > ());
}
#line 1105 "parser.cpp"
    break;

  case 4: // LIST_INST: LIST_INST INSTRUCTION
#line 123 "parser.y"
   {
       yystack_[1].value.as < lista_instrucciones* > ()->newInst(yystack_[0].value.as < Instruction* > ());
       yylhs.value.as < lista_instrucciones* > () = yystack_[1].value.as < lista_instrucciones* > ();
   }
#line 1114 "parser.cpp"
    break;

  case 5: // LIST_INST: INSTRUCTION
#line 128 "parser.y"
   {
       yylhs.value.as < lista_instrucciones* > () = new lista_instrucciones();
       yylhs.value.as < lista_instrucciones* > ()->newInst(yystack_[0].value.as < Instruction* > ());
   }
#line 1123 "parser.cpp"
    break;

  case 6: // INSTRUCTION: PRINT ';'
#line 134 "parser.y"
                        { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1129 "parser.cpp"
    break;

  case 7: // INSTRUCTION: DECLARACION ';'
#line 135 "parser.y"
                      { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1135 "parser.cpp"
    break;

  case 8: // INSTRUCTION: ASIGNACION ';'
#line 136 "parser.y"
                     { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1141 "parser.cpp"
    break;

  case 9: // INSTRUCTION: INCREMENTINS ';'
#line 137 "parser.y"
                       { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1147 "parser.cpp"
    break;

  case 10: // PRINT: PRINTF PARA EXPRESSION PARC
#line 140 "parser.y"
                                    { yylhs.value.as < Instruction* > () = new Print(0,0,yystack_[1].value.as < Expression* > ()); }
#line 1153 "parser.cpp"
    break;

  case 11: // DECLARACION: TIPOS ID TIPOS_DECLARACION
#line 143 "parser.y"
                                         { yylhs.value.as < Instruction* > () = new Declaracion(0,0,yystack_[2].value.as < Type > (),yystack_[1].value.as < std::string > (),yystack_[0].value.as < Expression* > ()); }
#line 1159 "parser.cpp"
    break;

  case 12: // ASIGNACION: ID '=' EXPRESSION
#line 147 "parser.y"
                      { yylhs.value.as < Instruction* > () = new Asignacion(0,0, yystack_[2].value.as < std::string > (), yystack_[0].value.as < Expression* > ()); }
#line 1165 "parser.cpp"
    break;

  case 13: // TIPOS_DECLARACION: '=' EXPRESSION
#line 150 "parser.y"
                                  { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1171 "parser.cpp"
    break;

  case 14: // TIPOS_DECLARACION: %empty
#line 151 "parser.y"
            { yylhs.value.as < Expression* > () = new Literal(0,0,NULO,"",0,false,0.0); }
#line 1177 "parser.cpp"
    break;

  case 15: // EXPRESSION: EXPRESSION SUMA EXPRESSION
#line 154 "parser.y"
                                       { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MAS); }
#line 1183 "parser.cpp"
    break;

  case 16: // EXPRESSION: EXPRESSION MENOS EXPRESSION
#line 155 "parser.y"
                                  { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),SUSTRACCION); }
#line 1189 "parser.cpp"
    break;

  case 17: // EXPRESSION: EXPRESSION POR EXPRESSION
#line 156 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),PRODUCTO); }
#line 1195 "parser.cpp"
    break;

  case 18: // EXPRESSION: EXPRESSION DIV EXPRESSION
#line 157 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),DIVISION); }
#line 1201 "parser.cpp"
    break;

  case 19: // EXPRESSION: EXPRESSION MOD EXPRESSION
#line 158 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MODULO); }
#line 1207 "parser.cpp"
    break;

  case 20: // EXPRESSION: EXPRESSION IGUALIGUALR EXPRESSION
#line 159 "parser.y"
                                        { yylhs.value.as < Expression* > () = new Relacional(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),IGUALIGUAL); }
#line 1213 "parser.cpp"
    break;

  case 21: // EXPRESSION: EXPRESSION DIFERENTER EXPRESSION
#line 160 "parser.y"
                                       { yylhs.value.as < Expression* > () = new Relacional(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),DIFERENTE); }
#line 1219 "parser.cpp"
    break;

  case 22: // EXPRESSION: MENOS EXPRESSION
#line 161 "parser.y"
                       { yylhs.value.as < Expression* > () = new NegacionUnaria(0,0,yystack_[0].value.as < Expression* > ()); }
#line 1225 "parser.cpp"
    break;

  case 23: // EXPRESSION: PRIMITIVE
#line 162 "parser.y"
                { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1231 "parser.cpp"
    break;

  case 24: // EXPRESSION: ID
#line 163 "parser.y"
         { yylhs.value.as < Expression* > () = new Identificador(0,0,yystack_[0].value.as < std::string > ()); }
#line 1237 "parser.cpp"
    break;

  case 25: // EXPRESSION: INCREMENT
#line 164 "parser.y"
                { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1243 "parser.cpp"
    break;

  case 26: // INCREMENTINS: INC ID
#line 168 "parser.y"
                  {yylhs.value.as < Instruction* > () = new IncrementoIns(0,0,"PRE",yystack_[0].value.as < std::string > ()); }
#line 1249 "parser.cpp"
    break;

  case 27: // INCREMENTINS: ID INC
#line 169 "parser.y"
                  {yylhs.value.as < Instruction* > () = new IncrementoIns(0,0,"POST",yystack_[1].value.as < std::string > ()); }
#line 1255 "parser.cpp"
    break;

  case 28: // INCREMENT: INC ID
#line 173 "parser.y"
                  {yylhs.value.as < Expression* > () = new Incremento(0,0,"PRE",yystack_[0].value.as < std::string > ()); }
#line 1261 "parser.cpp"
    break;

  case 29: // INCREMENT: ID INC
#line 174 "parser.y"
                  {yylhs.value.as < Expression* > () = new Incremento(0,0,"POST",yystack_[1].value.as < std::string > ()); }
#line 1267 "parser.cpp"
    break;

  case 30: // PRIMITIVE: STRING
#line 178 "parser.y"
   {
       std::string str1 = yystack_[0].value.as < std::string > ().erase(0,1);
       std::string str2 = str1.erase(str1.length()-1,1);
       yylhs.value.as < Expression* > () = new Literal(0,0,STRING,str2,0,false,0.0);
   }
#line 1277 "parser.cpp"
    break;

  case 31: // PRIMITIVE: NUMERO
#line 184 "parser.y"
    {
        int num = stoi(yystack_[0].value.as < std::string > ());
        yylhs.value.as < Expression* > () = new Literal(0,0,INTEGER,"",num,false,0.0);
    }
#line 1286 "parser.cpp"
    break;

  case 32: // PRIMITIVE: DECIMAL
#line 189 "parser.y"
    {
        float num = stod(yystack_[0].value.as < std::string > ());
        yylhs.value.as < Expression* > () = new Literal(0,0,FLOAT,"",0,false, num);
    }
#line 1295 "parser.cpp"
    break;

  case 33: // PRIMITIVE: BOOLEANO
#line 193 "parser.y"
               { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1301 "parser.cpp"
    break;

  case 34: // BOOLEANO: RTRUE
#line 196 "parser.y"
                 { yylhs.value.as < Expression* > () = new Literal(0,0,BOOL,"",0,true,0.0); }
#line 1307 "parser.cpp"
    break;

  case 35: // BOOLEANO: RFALSE
#line 197 "parser.y"
            { yylhs.value.as < Expression* > () = new Literal(0,0,BOOL,"",0,false,0.0); }
#line 1313 "parser.cpp"
    break;

  case 36: // TIPOS: INT
#line 200 "parser.y"
            { yylhs.value.as < Type > () = INTEGER; }
#line 1319 "parser.cpp"
    break;

  case 37: // TIPOS: FLOTANTE
#line 201 "parser.y"
              { yylhs.value.as < Type > () = FLOAT; }
#line 1325 "parser.cpp"
    break;

  case 38: // TIPOS: TSTRING
#line 202 "parser.y"
             { yylhs.value.as < Type > () = STRING; }
#line 1331 "parser.cpp"
    break;

  case 39: // TIPOS: BOOLEAN
#line 203 "parser.y"
             { yylhs.value.as < Type > () = BOOL; }
#line 1337 "parser.cpp"
    break;


#line 1341 "parser.cpp"

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


  const signed char Parser::yypact_ninf_ = -21;

  const signed char Parser::yytable_ninf_ = -1;

  const signed char
  Parser::yypact_[] =
  {
      30,     1,     2,    -9,   -21,   -21,   -21,   -21,    14,   -21,
      30,   -21,   -16,     4,     5,     7,    35,   -21,    -2,   -21,
      -2,   -21,   -21,   -21,   -21,   -21,   -21,     9,   -21,    33,
     -21,   -21,    38,    -2,   -21,   -21,     8,   -21,   -21,   -21,
      43,    -2,   -21,   -21,   -21,    -1,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,   -21,     8,    -1,    -1,   -21,   -21,   -21,
      51,    51
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,     0,     0,     0,    36,    38,    37,    39,     0,     2,
       3,     5,     0,     0,     0,     0,     0,    27,     0,    26,
       0,     1,     4,     6,     7,     8,     9,    14,    31,    24,
      30,    32,     0,     0,    34,    35,    12,    25,    23,    33,
       0,     0,    11,    29,    28,    22,     0,     0,     0,     0,
       0,     0,     0,    10,    13,    15,    16,    17,    18,    19,
      20,    21
  };

  const signed char
  Parser::yypgoto_[] =
  {
     -21,   -21,   -21,   -21,    34,   -21,   -21,   -21,   -21,   -20,
     -21,   -21,   -21,   -21,   -21
  };

  const signed char
  Parser::yydefgoto_[] =
  {
       0,     8,     9,    10,    11,    12,    13,    14,    42,    36,
      15,    37,    38,    39,    16
  };

  const signed char
  Parser::yytable_[] =
  {
      40,    28,    29,    30,    31,    32,    19,    33,    17,    48,
      49,    50,    20,    45,    21,    23,    46,    47,    48,    49,
      50,    54,    51,    52,    34,    35,    55,    56,    57,    58,
      59,    60,    61,    18,     1,    24,    25,     2,    26,    27,
      43,    41,    44,     3,    22,     0,     0,     4,     5,     6,
       7,    46,    47,    48,    49,    50,     0,    51,    52,    46,
      47,    48,    49,    50,     0,    53
  };

  const signed char
  Parser::yycheck_[] =
  {
      20,     3,     4,     5,     6,     7,     4,     9,     7,    10,
      11,    12,    21,    33,     0,    31,     8,     9,    10,    11,
      12,    41,    14,    15,    26,    27,    46,    47,    48,    49,
      50,    51,    52,    32,     4,    31,    31,     7,    31,     4,
       7,    32,     4,    13,    10,    -1,    -1,    17,    18,    19,
      20,     8,     9,    10,    11,    12,    -1,    14,    15,     8,
       9,    10,    11,    12,    -1,    22
  };

  const signed char
  Parser::yystos_[] =
  {
       0,     4,     7,    13,    17,    18,    19,    20,    34,    35,
      36,    37,    38,    39,    40,    43,    47,     7,    32,     4,
      21,     0,    37,    31,    31,    31,    31,     4,     3,     4,
       5,     6,     7,     9,    26,    27,    42,    44,    45,    46,
      42,    32,    41,     7,     4,    42,     8,     9,    10,    11,
      12,    14,    15,    22,    42,    42,    42,    42,    42,    42,
      42,    42
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    33,    34,    35,    36,    36,    37,    37,    37,    37,
      38,    39,    40,    41,    41,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    43,    43,    44,    44,
      45,    45,    45,    45,    46,    46,    47,    47,    47,    47
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     1,     2,     1,     2,     2,     2,     2,
       4,     3,     3,     2,     0,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "END", "error", "\"invalid token\"", "NUMERO", "ID", "STRING",
  "DECIMAL", "INC", "SUMA", "MENOS", "POR", "DIV", "MOD", "PRINTF",
  "IGUALIGUALR", "DIFERENTER", "VOID", "INT", "TSTRING", "FLOTANTE",
  "BOOLEAN", "PARA", "PARC", "RMAIN", "LLAVA", "LLAVC", "RTRUE", "RFALSE",
  "CORA", "CORC", "COMA", "';'", "'='", "$accept", "START", "MAIN",
  "LIST_INST", "INSTRUCTION", "PRINT", "DECLARACION", "ASIGNACION",
  "TIPOS_DECLARACION", "EXPRESSION", "INCREMENTINS", "INCREMENT",
  "PRIMITIVE", "BOOLEANO", "TIPOS", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  Parser::yyrline_[] =
  {
       0,   108,   108,   116,   122,   127,   134,   135,   136,   137,
     140,   143,   147,   150,   151,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   168,   169,   173,   174,
     177,   183,   188,   193,   196,   197,   200,   201,   202,   203
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
#line 1847 "parser.cpp"

#line 206 "parser.y"


void yy::Parser::error(const yy::location& l, const std::string& m)
{
   std::cerr << l << ": " << m << std::endl;
}
