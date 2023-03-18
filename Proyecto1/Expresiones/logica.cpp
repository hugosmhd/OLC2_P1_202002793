#include "logica.hpp"

Logica::Logica(int line, int column, Expression *left, Expression *right, LogicalOption type) {
    this->line = line;
    this->column = column;
    this->right = right;
    this->left = left;
    this->type = type;
}

Symbol Logica::ejecutar(Environment *env) {
    Symbol result(line, column, "", NULO, nullptr);

    Symbol nodo_izq = this->left->ejecutar(env);
    Symbol nodo_der = this->right->ejecutar(env);

    if(this->type == AND) {
        std::cout << "Operador AND" << std::endl;
        if(nodo_izq.type == BOOL && nodo_der.type == BOOL) {
            bool val1 = *static_cast<bool*>(nodo_izq.value);
            bool val2 = *static_cast<bool*>(nodo_der.value);
            valor_final = val1 == val2 ? true : false;
            result = Symbol(line, column, "", BOOL, &valor_final);
        }
    } else if(this->type == OR) {
        std::cout << "Operador OR" << std::endl;
        if(nodo_izq.type == BOOL && nodo_der.type == BOOL) {
            bool val1 = *static_cast<bool*>(nodo_izq.value);
            bool val2 = *static_cast<bool*>(nodo_der.value);
            valor_final = val1 || val2 ? true : false;
            result = Symbol(line, column, "", BOOL, &valor_final);
        }
    }

    return result;
}
