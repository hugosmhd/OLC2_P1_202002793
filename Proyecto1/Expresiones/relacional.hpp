#ifndef RELACIONAL_HPP
#define RELACIONAL_HPP
#include "Abstract/expression.hpp"
#include "Symbols/RelacionalOption.h"

class Relacional : public Expression
{
public:
    int line, column;
    Expression *right, *left;
    RelacionalOption type;

    bool valor_final;

    Relacional(int line, int column, Expression *right, Expression *left, RelacionalOption type);
    Symbol ejecutar(Environment *env) override;
};

#endif // RELACIONAL_HPP
