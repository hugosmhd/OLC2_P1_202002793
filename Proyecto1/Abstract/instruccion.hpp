#ifndef INSTRUCTION_HPP
#define INSTRUCTION_HPP
#include "Symbols/environment.hpp"


class Instruction
{
public:
    virtual void ejecutar(Environment *env) = 0; //, ast *tree
};

#endif // INSTRUCTION_HPP
