#ifndef PRINT_HPP
#define PRINT_HPP
#include "Abstract/instruccion.hpp"
#include "Abstract/expression.hpp"
#include "Symbols/environment.hpp"
#include "patron_singleton/singleton.hpp"
#include "Symbols/symbol.hpp"

class Print : public Instruction
{
public:
    int line, column;
    Expression *expression;

    double valor;

    Print(int line, int col, Expression *expression);
    void ejecutar(Environment *env) override; //, ast *tree
};

#endif // PRINT_HPP
