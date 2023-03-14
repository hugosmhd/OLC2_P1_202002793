#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP
#include "Symbols/symbol.hpp"
#include "Symbols/environment.hpp"

class Expression
{
public:
    virtual Symbol ejecutar(Environment *env) = 0; //ast *tree
};

#endif // EXPRESSION_HPP
