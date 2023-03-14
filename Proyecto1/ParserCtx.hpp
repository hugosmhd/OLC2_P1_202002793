#ifndef PARSERCTX_HPP
#define PARSERCTX_HPP
#include <string>
#include "Instrucciones/funcion_main.hpp"

namespace yy {
class Parser;
class location;
}

namespace Proyecto1 {
class ParserCtx
{
public:
    // constructor
    ParserCtx();//
    // destructor
    ~ParserCtx();//


// atributos del analizador
    void* lexer;//
    yy::location* loc;//
    yy::Parser* Parser;//
// funcion de analisis
    std::string Analizar(std::string entrada);//
    std::string Salida;//
    Instruction *Main;
};


}




#endif // PARSERCTX_HPP
