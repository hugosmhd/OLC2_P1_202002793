#include "lista_instrucciones.hpp"

lista_instrucciones::lista_instrucciones()
{
    this->lista = QVector<Instruction*>();
}

void lista_instrucciones::ejecutar(Environment *env) //, ast *tree
{
    for (int i = 0; i < this->lista.size(); i ++){
        this->lista[i]->ejecutar(env); //, tree
        //validación return
        /*if(tree->IfReturn)
        {
            return;
        }*/
    }
}

void lista_instrucciones::newInst(Instruction *inst)
{
    this->lista.push_back(inst);
}
