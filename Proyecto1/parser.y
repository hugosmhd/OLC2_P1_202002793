/* comando   bison --verbose -o parser.cpp  parser.y */
/* win_bison -o parser.cpp parser.y */
/* Se requiere una versión minima de Bison */
%require  "3.0.4"
/* Se usa el skeleton más recienta para c++ */
%skeleton "lalr1.cc"

/* indica que se deben de crear archivos de cabeceras (.h)*/
%defines

/* indica el namespace que contiene al parser */
%define api.prefix{yy}

/* indica la clase que envuelve al parser */
%define api.parser.class {Parser}

/* indica que se generaran clases de tipo locations que leerá el lexer*/
%locations

/* indica que se deben crear contructores y funciones tipo make_TOKEN para cada token */
%define api.token.constructor

/* indica que se utilizará la notacion $1 -> $$ de los no terminales */
%define api.value.type variant

/* indica que el analizador mostrara un trace cuando haya un error*/
%define parse.trace

/* indica que el analizador mostrará los errores de forma descriptiva */
%define parse.error verbose

%code requires
{
    /* cabeceras iniciales */
    #include <iostream>
    #include <string>
    #include <vector>
    #include "parserctx.hpp"

    /*Expresiones*/
    #include "Expresiones/literal.hpp"
    #include "Abstract/expression.hpp"
    #include "Symbols/type.h"

    /* instrucciones */
    #include "Abstract/instruccion.hpp"
    #include "Instrucciones/print.hpp"
    #include "Instrucciones/funcion_main.hpp"
    #include "Instrucciones/lista_instrucciones.hpp"

}

/* enlace con la función del retorno de simbolos */
%code { yy::Parser::symbol_type yylex(void* yyscanner, yy::location& loc, class Proyecto1::ParserCtx & ctx); }

/* token de salida*/
%token END 0;

/*tokens*/
%token <std::string> NUMERO ID STRING SUMA MENOS POR DIV PRINTF
%token <std::string> VOID INT TSTRING PARA PARC RMAIN LLAVA LLAVC RTRUE RFALSE CORA CORC COMA

/* precedencia de operadores */
%left SUMA MENOS
%left POR DIV

/* instancia de la clase que creamos */
%lex-param {void *scanner} {yy::location& loc} { class Proyecto1::ParserCtx & ctx }
%parse-param {void *scanner} {yy::location& loc} { class Proyecto1::ParserCtx & ctx }

/* definicion de no terminales */
%type<funcion_main*> START;
%type<funcion_main*> MAIN;
%type<Instruction*> PRINT;
%type<Expression*> PRIMITIVE;
%type<Expression*> BOOL;
%type<lista_instrucciones*> LIST_INST;
%type<Instruction*> INSTRUCTION;
%type<Expression*> EXPRESSION;

/* printer */
%printer { yyoutput << $$; } <*>;

/* inicio de la grámatica */
%%

%start START;

START : MAIN
    {
        ctx.Main = $1;
        ctx.Salida = "!Ejecución realizada con éxito!";
        $$ = $1;
    }
;

MAIN : LIST_INST
{
   $$ = new funcion_main(0, 0, "VOID", $1);
}
;

LIST_INST : LIST_INST INSTRUCTION
   {
       $1->newInst($2);
       $$ = $1;
   }
   | INSTRUCTION
   {
       $$ = new lista_instrucciones();
       $$->newInst($1);
   }
;

INSTRUCTION : PRINT ';' { $$ = $1; }
;

PRINT : PRINTF PARA EXPRESSION PARC { $$ = new Print(0,0,$3); }
;

EXPRESSION:
    PRIMITIVE { $$ = $1; }
;

PRIMITIVE : STRING
   {
       std::string str1 = $1.erase(0,1);
       std::string str2 = str1.erase(str1.length()-1,1);
       $$ = new Literal(0,0,STRING,str2,0,false);
   }
    | NUMERO
    {
        int num = stoi($1);
        $$ = new Literal(0,0,INTEGER,"",num,false);
    }
    | BOOL { $$ = $1; }
;

BOOL : RTRUE { $$ = new Literal(0,0,BOOL,"",0,true); }
   | RFALSE { $$ = new Literal(0,0,BOOL,"",0,false); }
;


%%

void yy::Parser::error(const yy::location& l, const std::string& m)
{
   std::cerr << l << ": " << m << std::endl;
}
