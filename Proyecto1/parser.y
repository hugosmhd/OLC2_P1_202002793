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
    #include "Abstract/expression.hpp"
    #include "Expresiones/literal.hpp"
    #include "Expresiones/identificador.hpp"
    #include "Expresiones/aritmetica.hpp"
    #include "Expresiones/incremento.hpp"
    #include "Expresiones/negacionunaria.hpp"
    #include "Expresiones/relacional.hpp"
    #include "Expresiones/logica.hpp"
    #include "Expresiones/logicanot.hpp"
    #include "Symbols/type.h"
    #include "Symbols/ArithmeticOption.h"
    #include "Symbols/RelacionalOption.h"
    #include "Symbols/LogicalOption.h"

    /* instrucciones */
    #include "Abstract/instruccion.hpp"
    #include "Instrucciones/print.hpp"
    #include "Instrucciones/asignacion.hpp"
    #include "Instrucciones/funcion_main.hpp"
    #include "Instrucciones/lista_instrucciones.hpp"
    #include "Instrucciones/declaracion.hpp"
    #include "Instrucciones/incrementoins.hpp"
    

}

/* enlace con la función del retorno de simbolos */
%code { yy::Parser::symbol_type yylex(void* yyscanner, yy::location& loc, class Proyecto1::ParserCtx & ctx); }

/* token de salida*/
%token END 0;

/*tokens*/
%token <std::string> NUMERO ID STRING DECIMAL INC SUMA MENOS POR DIV MOD PRINTF
%token <std::string> IGUALIGUALR DIFERENTER MAYORQUER MENORQUER MAYORIGUALQUER MENORIGUALQUER
%token <std::string> OPAND OPOR OPNOT
%token <std::string> VOID INT TSTRING FLOTANTE BOOLEAN PARA PARC RMAIN LLAVA LLAVC RTRUE RFALSE CORA CORC COMA

/* precedencia de operadores */
%left OPOR
%left OPAND
%left MAYORQUER MENORQUER MAYORIGUALQUER MENORIGUALQUER IGUALIGUALR DIFERENTER
%left SUMA MENOS
%left POR DIV MOD
%left OPNOT

/* instancia de la clase que creamos */
%lex-param {void *scanner} {yy::location& loc} { class Proyecto1::ParserCtx & ctx }
%parse-param {void *scanner} {yy::location& loc} { class Proyecto1::ParserCtx & ctx }

/* definicion de no terminales */
%type<funcion_main*> START;
%type<funcion_main*> MAIN;
%type<Instruction*> PRINT;
%type<Instruction*> DECLARACION;
%type<Instruction*> ASIGNACION;
%type<Instruction*> INCREMENTINS;
%type<Expression*> PRIMITIVE;
%type<Expression*> INCREMENT;
%type<Expression*> BOOLEANO;
%type<Expression*> TIPOS_DECLARACION;
%type<lista_instrucciones*> LIST_INST;
%type<Instruction*> INSTRUCTION;
%type<Expression*> EXPRESSION;
%type<Type> TIPOS;

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
    | DECLARACION ';' { $$ = $1; }
    | ASIGNACION ';' { $$ = $1; }
    | INCREMENTINS ';' { $$ = $1; }
;

PRINT : PRINTF PARA EXPRESSION PARC { $$ = new Print(0,0,$3); }
;

DECLARACION : TIPOS ID TIPOS_DECLARACION { $$ = new Declaracion(0,0,$1,$2,$3); }
;

ASIGNACION :
    ID '=' EXPRESSION { $$ = new Asignacion(0,0, $1, $3); }
;

TIPOS_DECLARACION: '=' EXPRESSION { $$ = $2; }
    |%empty { $$ = new Literal(0,0,NULO,"",0,false,0.0); }
;

EXPRESSION: EXPRESSION SUMA EXPRESSION { $$ = new Aritmetica(0,0,$1,$3,MAS); }
    | EXPRESSION MENOS EXPRESSION { $$ = new Aritmetica(0,0,$1,$3,SUSTRACCION); }
    | EXPRESSION POR EXPRESSION { $$ = new Aritmetica(0,0,$1,$3,PRODUCTO); }
    | EXPRESSION DIV EXPRESSION { $$ = new Aritmetica(0,0,$1,$3,DIVISION); }
    | EXPRESSION MOD EXPRESSION { $$ = new Aritmetica(0,0,$1,$3,MODULO); }
    | EXPRESSION IGUALIGUALR EXPRESSION { $$ = new Relacional(0,0,$1,$3,IGUALIGUAL); }
    | EXPRESSION DIFERENTER EXPRESSION { $$ = new Relacional(0,0,$1,$3,DIFERENTE); }
    | EXPRESSION MAYORQUER EXPRESSION { $$ = new Relacional(0,0,$1,$3,MAYOR); }
    | EXPRESSION MENORQUER EXPRESSION { $$ = new Relacional(0,0,$1,$3,MENOR); }
    | EXPRESSION MAYORIGUALQUER EXPRESSION { $$ = new Relacional(0,0,$1,$3,MAYORIGUAL); }
    | EXPRESSION MENORIGUALQUER EXPRESSION { $$ = new Relacional(0,0,$1,$3,MENORIGUAL); }
    | EXPRESSION OPAND EXPRESSION { $$ = new Logica(0,0,$1,$3,AND); }
    | EXPRESSION OPOR EXPRESSION { $$ = new Logica(0,0,$1,$3,OR); }
    | OPNOT EXPRESSION { $$ = new LogicaNot(0,0,$2,NOT); }
    | MENOS EXPRESSION { $$ = new NegacionUnaria(0,0,$2); }
    | PRIMITIVE { $$ = $1; }
    | ID { $$ = new Identificador(0,0,$1); }
    | INCREMENT { $$ = $1; }
;

INCREMENTINS
    : INC ID      {$$ = new IncrementoIns(0,0,"PRE",$2); }             
    | ID INC      {$$ = new IncrementoIns(0,0,"POST",$1); }             
;

INCREMENT
    : INC ID      {$$ = new Incremento(0,0,"PRE",$2); }             
    | ID INC      {$$ = new Incremento(0,0,"POST",$1); }             
;

PRIMITIVE : STRING
   {
       std::string str1 = $1.erase(0,1);
       std::string str2 = str1.erase(str1.length()-1,1);
       $$ = new Literal(0,0,STRING,str2,0,false,0.0);
   }
    | NUMERO
    {
        int num = stoi($1);
        $$ = new Literal(0,0,INTEGER,"",num,false,0.0);
    }
    | DECIMAL
    {
        float num = stod($1);
        $$ = new Literal(0,0,FLOAT,"",0,false, num);
    }
    | BOOLEANO { $$ = $1; }
;

BOOLEANO : RTRUE { $$ = new Literal(0,0,BOOL,"",0,true,0.0); }
   | RFALSE { $$ = new Literal(0,0,BOOL,"",0,false,0.0); }
;

TIPOS : INT { $$ = INTEGER; }
   | FLOTANTE { $$ = FLOAT; }
   | TSTRING { $$ = STRING; }
   | BOOLEAN { $$ = BOOL; }
;

%%

void yy::Parser::error(const yy::location& l, const std::string& m)
{
   std::cerr << l << ": " << m << std::endl;
}
