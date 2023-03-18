#ifndef LOGICANOT_HPP
#define LOGICANOT_HPP
#include "Abstract/expression.hpp"
#include "Symbols/LogicalOption.h"

class LogicaNot : public Expression
{
public:
    int line, column;
    Expression *left;
    LogicalOption type;

    bool valor_final;

    LogicaNot(int line, int column, Expression *left, LogicalOption type);
    Symbol ejecutar(Environment *env) override;
};

#endif // LOGICANOT_HPP
