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
    Logica();
};

#endif // LOGICA_HPP
