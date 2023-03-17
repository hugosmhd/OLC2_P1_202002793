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

    int vacio_int = 0;
    std::string vacio_string = "";
    float vacio_float = 0.0;
    bool vacio_bool = false;

    Declaracion(int line, int column, Type type, std::string id, Expression *expression);
    void ejecutar(Environment *env) override;
};

#endif // DECLARACION_HPP
