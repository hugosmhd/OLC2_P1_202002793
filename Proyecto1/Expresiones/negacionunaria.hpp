#ifndef NEGACIONUNARIA_HPP
#define NEGACIONUNARIA_HPP
#include "Abstract/expression.hpp"

class NegacionUnaria : public Expression
{
public:
    int line, column;
    Expression *left;

    int val_int;
    double val_double;
    int val_bool;

    NegacionUnaria(int line, int column, Expression *left);

    Symbol ejecutar(Environment *env) override;
};

#endif // NEGACIONUNARIA_HPP
