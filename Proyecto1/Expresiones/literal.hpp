#ifndef LITERAL_HPP
#define LITERAL_HPP
#include "Symbols/symbol.hpp"
#include "Abstract/expression.hpp"
#include "Symbols/environment.hpp"

class Literal : public Expression
{
public:
    int line, column, numVal;
    Type type;
    std::string strVal;
    bool boolVal;
    float floatVal;
    Literal(int, int, Type, std::string, int, bool, float);
    Symbol ejecutar(Environment *env) override;
};

#endif // LITERAL_HPP
