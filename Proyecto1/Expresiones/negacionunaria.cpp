#include "negacionunaria.hpp"

NegacionUnaria::NegacionUnaria(int line, int column, Expression *left)
{
    this->line = line;
    this->column = column;
    this->left = left;
}

Symbol NegacionUnaria::ejecutar(Environment *env) {
    Symbol result(line, column, "", NULO, nullptr);
    Symbol nodo_izq = this->left->ejecutar(env);

    if(nodo_izq.type == INTEGER) {
        val_int = *static_cast<int*>(nodo_izq.value) * -1;
        result = Symbol(line, column, nodo_izq.id, INTEGER, &val_int);
    } else if(nodo_izq.type == FLOAT) {
        val_double = *static_cast<double*>(nodo_izq.value) * -1.0;
        result = Symbol(line, column, nodo_izq.id, FLOAT, &val_double);
    } else if(nodo_izq.type == BOOL) {
        val_bool = *static_cast<bool*>(nodo_izq.value) * -1.0;
        result = Symbol(line, column, nodo_izq.id, INTEGER, &val_bool);
    }


    return result;
}
