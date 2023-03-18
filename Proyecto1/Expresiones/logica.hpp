#ifndef LOGICA_HPP
#define LOGICA_HPP
#include "Abstract/expression.hpp"
#include "Symbols/LogicalOption.h"

class Logica : public Expression
{
public:
    int line, column;
    Expression *right, *left;
    LogicalOption type;

    bool valor_final;

    Logica(int line, int column, Expression *left, Expression *right, LogicalOption type);
    Symbol ejecutar(Environment *env) override;
};

#endif // LOGICA_HPP
