#ifndef DECLARACION_HPP
#define DECLARACION_HPP
#include "Abstract/expression.hpp"
#include "Abstract/instruccion.hpp"

class Declaracion : public Instruction
{
public:
    int line, column;
    Type type;
    std::string id;
    Expression *expression;

    Declaracion(int line, int column, Type type, std::string id, Expression *expression);
    void ejecutar(Environment *env) override;
};

#endif // DECLARACION_HPP
