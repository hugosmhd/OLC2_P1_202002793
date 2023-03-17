#ifndef ASIGNACION_HPP
#define ASIGNACION_HPP
#include "Abstract/expression.hpp"
#include "Abstract/instruccion.hpp"

class Asignacion : public Instruction
{
public:
    int line, column;
    std::string id;
    Expression *expression;
    Asignacion(int line, int column, std::string id, Expression *expression);
    void ejecutar(Environment *env) override;
};

#endif // ASIGNACION_HPP
