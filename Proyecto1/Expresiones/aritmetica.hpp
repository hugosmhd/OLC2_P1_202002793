#ifndef ARITMETICA_HPP
#define ARITMETICA_HPP
#include "Abstract/expression.hpp"
#include "Symbols/ArithmeticOption.h"

class Aritmetica : public Expression
{
public:
    int line, column;
    Expression *right, *left;
    ArithmeticOption type;

    int valor_int;
    double valor_float;
    std::string valor_string;

    Aritmetica(int line, int column, Expression *right, Expression *left, ArithmeticOption type);
    Symbol ejecutar(Environment *env) override;
};

#endif // ARITMETICA_HPP
