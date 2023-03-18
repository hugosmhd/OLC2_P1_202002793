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
#line 62 "parser.y"
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
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 526 "parser.cpp"
        break;

      case symbol_kind::S_ID: // ID
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 532 "parser.cpp"
        break;

      case symbol_kind::S_STRING: // STRING
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 538 "parser.cpp"
        break;

      case symbol_kind::S_DECIMAL: // DECIMAL
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 544 "parser.cpp"
        break;

      case symbol_kind::S_INC: // INC
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 550 "parser.cpp"
        break;

      case symbol_kind::S_SUMA: // SUMA
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 556 "parser.cpp"
        break;

      case symbol_kind::S_MENOS: // MENOS
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 562 "parser.cpp"
        break;

      case symbol_kind::S_POR: // POR
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 568 "parser.cpp"
        break;

      case symbol_kind::S_DIV: // DIV
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 574 "parser.cpp"
        break;

      case symbol_kind::S_MOD: // MOD
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 580 "parser.cpp"
        break;

      case symbol_kind::S_PRINTF: // PRINTF
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 586 "parser.cpp"
        break;

      case symbol_kind::S_VOID: // VOID
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 592 "parser.cpp"
        break;

      case symbol_kind::S_INT: // INT
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 598 "parser.cpp"
        break;

      case symbol_kind::S_TSTRING: // TSTRING
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 604 "parser.cpp"
        break;

      case symbol_kind::S_FLOTANTE: // FLOTANTE
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 610 "parser.cpp"
        break;

      case symbol_kind::S_BOOLEAN: // BOOLEAN
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 616 "parser.cpp"
        break;

      case symbol_kind::S_PARA: // PARA
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 622 "parser.cpp"
        break;

      case symbol_kind::S_PARC: // PARC
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 628 "parser.cpp"
        break;

      case symbol_kind::S_RMAIN: // RMAIN
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 634 "parser.cpp"
        break;

      case symbol_kind::S_LLAVA: // LLAVA
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 640 "parser.cpp"
        break;

      case symbol_kind::S_LLAVC: // LLAVC
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 646 "parser.cpp"
        break;

      case symbol_kind::S_RTRUE: // RTRUE
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 652 "parser.cpp"
        break;

      case symbol_kind::S_RFALSE: // RFALSE
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 658 "parser.cpp"
        break;

      case symbol_kind::S_CORA: // CORA
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 664 "parser.cpp"
        break;

      case symbol_kind::S_CORC: // CORC
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 670 "parser.cpp"
        break;

      case symbol_kind::S_COMA: // COMA
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 676 "parser.cpp"
        break;

      case symbol_kind::S_START: // START
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < funcion_main* > (); }
#line 682 "parser.cpp"
        break;

      case symbol_kind::S_MAIN: // MAIN
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < funcion_main* > (); }
#line 688 "parser.cpp"
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < lista_instrucciones* > (); }
#line 694 "parser.cpp"
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 700 "parser.cpp"
        break;

      case symbol_kind::S_PRINT: // PRINT
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 706 "parser.cpp"
        break;

      case symbol_kind::S_DECLARACION: // DECLARACION
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 712 "parser.cpp"
        break;

      case symbol_kind::S_ASIGNACION: // ASIGNACION
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 718 "parser.cpp"
        break;

      case symbol_kind::S_TIPOS_DECLARACION: // TIPOS_DECLARACION
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 724 "parser.cpp"
        break;

      case symbol_kind::S_EXPRESSION: // EXPRESSION
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 730 "parser.cpp"
        break;

      case symbol_kind::S_INCREMENTINS: // INCREMENTINS
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Instruction* > (); }
#line 736 "parser.cpp"
        break;

      case symbol_kind::S_INCREMENT: // INCREMENT
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 742 "parser.cpp"
        break;

      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 748 "parser.cpp"
        break;

      case symbol_kind::S_BOOLEANO: // BOOLEANO
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Expression* > (); }
#line 754 "parser.cpp"
        break;

      case symbol_kind::S_TIPOS: // TIPOS
#line 96 "parser.y"
                 { yyoutput << yysym.value.template as < Type > (); }
#line 760 "parser.cpp"
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
#line 104 "parser.y"
    {
        ctx.Main = yystack_[0].value.as < funcion_main* > ();
        ctx.Salida = "!Ejecución realizada con éxito!";
        yylhs.value.as < funcion_main* > () = yystack_[0].value.as < funcion_main* > ();
    }
#line 1075 "parser.cpp"
    break;

  case 3: // MAIN: LIST_INST
#line 112 "parser.y"
{
   yylhs.value.as < funcion_main* > () = new funcion_main(0, 0, "VOID", yystack_[0].value.as < lista_instrucciones* > ());
}
#line 1083 "parser.cpp"
    break;

  case 4: // LIST_INST: LIST_INST INSTRUCTION
#line 118 "parser.y"
   {
       yystack_[1].value.as < lista_instrucciones* > ()->newInst(yystack_[0].value.as < Instruction* > ());
       yylhs.value.as < lista_instrucciones* > () = yystack_[1].value.as < lista_instrucciones* > ();
   }
#line 1092 "parser.cpp"
    break;

  case 5: // LIST_INST: INSTRUCTION
#line 123 "parser.y"
   {
       yylhs.value.as < lista_instrucciones* > () = new lista_instrucciones();
       yylhs.value.as < lista_instrucciones* > ()->newInst(yystack_[0].value.as < Instruction* > ());
   }
#line 1101 "parser.cpp"
    break;

  case 6: // INSTRUCTION: PRINT ';'
#line 129 "parser.y"
                        { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1107 "parser.cpp"
    break;

  case 7: // INSTRUCTION: DECLARACION ';'
#line 130 "parser.y"
                      { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1113 "parser.cpp"
    break;

  case 8: // INSTRUCTION: ASIGNACION ';'
#line 131 "parser.y"
                     { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1119 "parser.cpp"
    break;

  case 9: // INSTRUCTION: INCREMENTINS ';'
#line 132 "parser.y"
                       { yylhs.value.as < Instruction* > () = yystack_[1].value.as < Instruction* > (); }
#line 1125 "parser.cpp"
    break;

  case 10: // PRINT: PRINTF PARA EXPRESSION PARC
#line 135 "parser.y"
                                    { yylhs.value.as < Instruction* > () = new Print(0,0,yystack_[1].value.as < Expression* > ()); }
#line 1131 "parser.cpp"
    break;

  case 11: // DECLARACION: TIPOS ID TIPOS_DECLARACION
#line 138 "parser.y"
                                         { yylhs.value.as < Instruction* > () = new Declaracion(0,0,yystack_[2].value.as < Type > (),yystack_[1].value.as < std::string > (),yystack_[0].value.as < Expression* > ()); }
#line 1137 "parser.cpp"
    break;

  case 12: // ASIGNACION: ID '=' EXPRESSION
#line 142 "parser.y"
                      { yylhs.value.as < Instruction* > () = new Asignacion(0,0, yystack_[2].value.as < std::string > (), yystack_[0].value.as < Expression* > ()); }
#line 1143 "parser.cpp"
    break;

  case 13: // TIPOS_DECLARACION: '=' EXPRESSION
#line 145 "parser.y"
                                  { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1149 "parser.cpp"
    break;

  case 14: // TIPOS_DECLARACION: %empty
#line 146 "parser.y"
            { yylhs.value.as < Expression* > () = new Literal(0,0,NULO,"",0,false,0.0); }
#line 1155 "parser.cpp"
    break;

  case 15: // EXPRESSION: EXPRESSION SUMA EXPRESSION
#line 149 "parser.y"
                                       { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MAS); }
#line 1161 "parser.cpp"
    break;

  case 16: // EXPRESSION: EXPRESSION MENOS EXPRESSION
#line 150 "parser.y"
                                  { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),SUSTRACCION); }
#line 1167 "parser.cpp"
    break;

  case 17: // EXPRESSION: EXPRESSION POR EXPRESSION
#line 151 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),PRODUCTO); }
#line 1173 "parser.cpp"
    break;

  case 18: // EXPRESSION: EXPRESSION DIV EXPRESSION
#line 152 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),DIVISION); }
#line 1179 "parser.cpp"
    break;

  case 19: // EXPRESSION: EXPRESSION MOD EXPRESSION
#line 153 "parser.y"
                                { yylhs.value.as < Expression* > () = new Aritmetica(0,0,yystack_[2].value.as < Expression* > (),yystack_[0].value.as < Expression* > (),MODULO); }
#line 1185 "parser.cpp"
    break;

  case 20: // EXPRESSION: PRIMITIVE
#line 154 "parser.y"
                { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1191 "parser.cpp"
    break;

  case 21: // EXPRESSION: ID
#line 155 "parser.y"
         { yylhs.value.as < Expression* > () = new Identificador(0,0,yystack_[0].value.as < std::string > ()); }
#line 1197 "parser.cpp"
    break;

  case 22: // EXPRESSION: INCREMENT
#line 156 "parser.y"
                { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1203 "parser.cpp"
    break;

  case 23: // INCREMENTINS: INC ID
#line 160 "parser.y"
                  {yylhs.value.as < Instruction* > () = new IncrementoIns(0,0,"PRE",yystack_[0].value.as < std::string > ()); }
#line 1209 "parser.cpp"
    break;

  case 24: // INCREMENTINS: ID INC
#line 161 "parser.y"
                  {yylhs.value.as < Instruction* > () = new IncrementoIns(0,0,"POST",yystack_[1].value.as < std::string > ()); }
#line 1215 "parser.cpp"
    break;

  case 25: // INCREMENT: INC ID
#line 165 "parser.y"
                  {yylhs.value.as < Expression* > () = new Incremento(0,0,"PRE",yystack_[0].value.as < std::string > ()); }
#line 1221 "parser.cpp"
    break;

  case 26: // INCREMENT: ID INC
#line 166 "parser.y"
                  {yylhs.value.as < Expression* > () = new Incremento(0,0,"POST",yystack_[1].value.as < std::string > ()); }
#line 1227 "parser.cpp"
    break;

  case 27: // PRIMITIVE: STRING
#line 170 "parser.y"
   {
       std::string str1 = yystack_[0].value.as < std::string > ().erase(0,1);
       std::string str2 = str1.erase(str1.length()-1,1);
       yylhs.value.as < Expression* > () = new Literal(0,0,STRING,str2,0,false,0.0);
   }
#line 1237 "parser.cpp"
    break;

  case 28: // PRIMITIVE: NUMERO
#line 176 "parser.y"
    {
        int num = stoi(yystack_[0].value.as < std::string > ());
        yylhs.value.as < Expression* > () = new Literal(0,0,INTEGER,"",num,false,0.0);
    }
#line 1246 "parser.cpp"
    break;

  case 29: // PRIMITIVE: DECIMAL
#line 181 "parser.y"
    {
        float num = stod(yystack_[0].value.as < std::string > ());
        yylhs.value.as < Expression* > () = new Literal(0,0,FLOAT,"",0,false, num);
    }
#line 1255 "parser.cpp"
    break;

  case 30: // PRIMITIVE: BOOLEANO
#line 185 "parser.y"
               { yylhs.value.as < Expression* > () = yystack_[0].value.as < Expression* > (); }
#line 1261 "parser.cpp"
    break;

  case 31: // BOOLEANO: RTRUE
#line 188 "parser.y"
                 { yylhs.value.as < Expression* > () = new Literal(0,0,BOOL,"",0,true,0.0); }
#line 1267 "parser.cpp"
    break;

  case 32: // BOOLEANO: RFALSE
#line 189 "parser.y"
            { yylhs.value.as < Expression* > () = new Literal(0,0,BOOL,"",0,false,0.0); }
#line 1273 "parser.cpp"
    break;

  case 33: // TIPOS: INT
#line 192 "parser.y"
            { yylhs.value.as < Type > () = INTEGER; }
#line 1279 "parser.cpp"
    break;

  case 34: // TIPOS: FLOTANTE
#line 193 "parser.y"
              { yylhs.value.as < Type > () = FLOAT; }
#line 1285 "parser.cpp"
    break;

  case 35: // TIPOS: TSTRING
#line 194 "parser.y"
             { yylhs.value.as < Type > () = STRING; }
#line 1291 "parser.cpp"
    break;

  case 36: // TIPOS: BOOLEAN
#line 195 "parser.y"
             { yylhs.value.as < Type > () = BOOL; }
#line 1297 "parser.cpp"
    break;


#line 1301 "parser.cpp"

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
      26,    -1,     3,   -11,   -21,   -21,   -21,   -21,    19,   -21,
      26,   -21,     2,     8,     9,    11,    28,   -21,    -2,   -21,
      -2,   -21,   -21,   -21,   -21,   -21,   -21,    15,   -21,    39,
     -21,   -21,    43,   -21,   -21,     6,   -21,   -21,   -21,     1,
      -2,   -21,   -21,   -21,    -2,    -2,    -2,    -2,    -2,   -21,
       6,    24,    24,   -21,   -21,   -21
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,     0,     0,     0,    33,    35,    34,    36,     0,     2,
       3,     5,     0,     0,     0,     0,     0,    24,     0,    23,
       0,     1,     4,     6,     7,     8,     9,    14,    28,    21,
      27,    29,     0,    31,    32,    12,    22,    20,    30,     0,
       0,    11,    26,    25,     0,     0,     0,     0,     0,    10,
      13,    15,    16,    17,    18,    19
  };

  const signed char
  Parser::yypgoto_[] =
  {
     -21,   -21,   -21,   -21,    38,   -21,   -21,   -21,   -21,   -20,
     -21,   -21,   -21,   -21,   -21
  };

  const signed char
  Parser::yydefgoto_[] =
  {
       0,     8,     9,    10,    11,    12,    13,    14,    41,    35,
      15,    36,    37,    38,    16
  };

  const signed char
  Parser::yytable_[] =
  {
      39,    28,    29,    30,    31,    32,    17,    19,    20,    44,
      45,    46,    47,    48,    44,    45,    46,    47,    48,    21,
      50,    49,    33,    34,    51,    52,    53,    54,    55,    18,
       1,    23,    27,     2,    46,    47,    48,    24,    25,     3,
      26,     4,     5,     6,     7,    40,    42,    43,    22
  };

  const signed char
  Parser::yycheck_[] =
  {
      20,     3,     4,     5,     6,     7,     7,     4,    19,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     0,
      40,    20,    24,    25,    44,    45,    46,    47,    48,    30,
       4,    29,     4,     7,    10,    11,    12,    29,    29,    13,
      29,    15,    16,    17,    18,    30,     7,     4,    10
  };

  const signed char
  Parser::yystos_[] =
  {
       0,     4,     7,    13,    15,    16,    17,    18,    32,    33,
      34,    35,    36,    37,    38,    41,    45,     7,    30,     4,
      19,     0,    35,    29,    29,    29,    29,     4,     3,     4,
       5,     6,     7,    24,    25,    40,    42,    43,    44,    40,
      30,    39,     7,     4,     8,     9,    10,    11,    12,    20,
      40,    40,    40,    40,    40,    40
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    31,    32,    33,    34,    34,    35,    35,    35,    35,
      36,    37,    38,    39,    39,    40,    40,    40,    40,    40,
      40,    40,    40,    41,    41,    42,    42,    43,    43,    43,
      43,    44,    44,    45,    45,    45,    45
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     1,     2,     1,     2,     2,     2,     2,
       4,     3,     3,     2,     0,     3,     3,     3,     3,     3,
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
  "DECIMAL", "INC", "SUMA", "MENOS", "POR", "DIV", "MOD", "PRINTF", "VOID",
  "INT", "TSTRING", "FLOTANTE", "BOOLEAN", "PARA", "PARC", "RMAIN",
  "LLAVA", "LLAVC", "RTRUE", "RFALSE", "CORA", "CORC", "COMA", "';'",
  "'='", "$accept", "START", "MAIN", "LIST_INST", "INSTRUCTION", "PRINT",
  "DECLARACION", "ASIGNACION", "TIPOS_DECLARACION", "EXPRESSION",
  "INCREMENTINS", "INCREMENT", "PRIMITIVE", "BOOLEANO", "TIPOS", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  Parser::yyrline_[] =
  {
       0,   103,   103,   111,   117,   122,   129,   130,   131,   132,
     135,   138,   142,   145,   146,   149,   150,   151,   152,   153,
     154,   155,   156,   160,   161,   165,   166,   169,   175,   180,
     185,   188,   189,   192,   193,   194,   195
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
#line 1799 "parser.cpp"

#line 198 "parser.y"


void yy::Parser::error(const yy::location& l, const std::string& m)
{
   std::cerr << l << ": " << m << std::endl;
}
