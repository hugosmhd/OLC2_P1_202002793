#ifndef INCREMENTOINS_HPP
#define INCREMENTOINS_HPP
#include "Abstract/instruccion.hpp"

class IncrementoIns : public Instruction
{
public:
    int line, column;
    std::string tipo_incremento, id;

    int new_val;
    double new_val_d;

    IncrementoIns(int line, int column, std::string tipo_incremento, std::string id);
    void ejecutar(Environment *env) override;
};

#endif // INCREMENTOINS_HPP
