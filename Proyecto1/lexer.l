/* se convierte con: flex --verbose lexer.l*/
/* opcciones para encapsulamiento */
/* win_flex -o lexer.yy.c lexer.l */
%option reentrant noyywrap nounput batch noinput
%option debug
/*%option outfile="lexer.cpp" */
/* %option header-file="lexer.hpp"*/
%{
    #include <iostream>
    // definicion del tipo de funcion del retorno de simbolos
    // yy::Parser ¿Por qué?
    // yy es el namespace de parser
    // Parser es el nombre de la clase que lo envuelve (wapper)
    #define YY_DECL yy::Parser::symbol_type yylex(yyscan_t yyscanner, yy::location& loc, class Proyecto1::ParserCtx & ctx)
    // definición de acciones
    #define YY_USER_ACTION loc.columns(yyleng);
    // defincion de caracter EOF
    #define yyterminate() return Parser::make_END(loc)
    //se incrusta el parser
    #include "parser.hpp"


    using namespace yy;
    //typedefs (abreviaturas DefLarga DefCorta) para definiciones de tokens
    typedef yy::Parser::token token;
    typedef yy::Parser::token_type token_type;
/// código adicinoal aquí

%}

/* ============== INICIO DE SCANNER ==========  */


/* expresiones regulares */

DIGITO [0-9]
LETRAS [a-zA-ZñÑ]
NUMERO {DIGITO}+
ID  {LETRAS}({DIGITO}|{LETRAS}|"_")*
DECIMAL {NUMERO}"."{NUMERO}
%%

%{
    loc.step();
%}


"//"[^\n]*\n            ; /* comentarios de una linea */

[ \t\v\r\n\f]             ; /* caracteres en blanco */

">="     return Parser::symbol_type( token::MAYORIGUALQUER, loc );
">"     return Parser::symbol_type( token::MAYORQUER, loc );
"<="     return Parser::symbol_type( token::MENORIGUALQUER, loc );
"<"     return Parser::symbol_type( token::MENORQUER, loc );
"=="     return Parser::symbol_type( token::IGUALIGUALR, loc );
"!="     return Parser::symbol_type( token::DIFERENTER, loc );
"++"     return Parser::symbol_type( token::INC, loc );
"+"     return Parser::symbol_type( token::SUMA, loc );
"-"     return Parser::symbol_type( token::MENOS, loc );
"*"     return Parser::symbol_type( token::POR, loc );
"/"     return Parser::symbol_type( token::DIV, loc );
"%"     return Parser::symbol_type( token::MOD, loc );

";"     return Parser::symbol_type( token_type(';'), loc );
"="     return Parser::symbol_type( token_type('='), loc );

"("     return Parser::symbol_type( token::PARA, loc ); //
")"     return Parser::symbol_type( token::PARC, loc ); //
","     return Parser::symbol_type( token::COMA, loc ); //

"printf"    return Parser::symbol_type( token::PRINTF, loc );

"string"    return Parser::symbol_type( token::TSTRING, loc );
"int"    return Parser::symbol_type( token::INT, loc );
"float"    return Parser::symbol_type( token::FLOTANTE, loc );
"bool"    return Parser::symbol_type( token::BOOLEAN, loc );

"true"    return Parser::symbol_type( token::RTRUE, loc );
"false"    return Parser::symbol_type( token::RFALSE, loc );


{ID}  return Parser::make_ID(yytext, loc);
{NUMERO} return Parser::make_NUMERO(yytext, loc);
{DECIMAL} return Parser::make_DECIMAL(yytext, loc);
\"(\\.|[^"\\])*\" return Parser::make_STRING (yytext, loc); //

.  {std::cerr<<loc <<": "<<"error token no esperado"<<  std::endl; }

    /*si no se usa yyterminate() se agrega lo siguiente*/
    /* <<EOF>> {return Parser::make_END(loc);} */



%%


 // más código - normalmente para manejo de errores
