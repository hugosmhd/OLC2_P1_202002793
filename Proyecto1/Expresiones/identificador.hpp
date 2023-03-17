#ifndef IDENTIFICADOR_HPP
#define IDENTIFICADOR_HPP
#include "Abstract/expression.hpp"
#include "Symbols/symbol.hpp"

class Identificador : public Expression
{
public:
    int line, column;
    std::string id;
    Identificador(int line, int column, std::string id);
    Symbol ejecutar(Environment *env) override;
};

#endif // IDENTIFICADOR_HPP
