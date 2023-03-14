#ifndef LISTA_INSTRUCCIONES_HPP
#define LISTA_INSTRUCCIONES_HPP
#include "Abstract/instruccion.hpp"
#include "QVector"

class lista_instrucciones : public Instruction
{
public:
    QVector<Instruction*> lista;
    lista_instrucciones();
    void ejecutar(Environment *env) override; //, ast *tree
    void newInst(Instruction *inst);
};

#endif // LISTA_INSTRUCCIONES_HPP
