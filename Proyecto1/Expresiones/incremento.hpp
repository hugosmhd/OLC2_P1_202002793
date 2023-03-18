#ifndef INCREMENTO_HPP
#define INCREMENTO_HPP
#include "Abstract/expression.hpp"

class Incremento : public Expression
{
public:
    int line, column;
    std::string tipo_incremento, id;

    int val;
    int new_val;

    double val_d;
    double new_val_d;

    Incremento(int line, int column, std::string tipo_incremento, std::string id);
    Symbol ejecutar(Environment *env) override;
};

#endif // INCREMENTO_HPP
