#include "logicanot.hpp"

LogicaNot::LogicaNot(int line, int column, Expression *left, LogicalOption type)
{
    this->line = line;
    this->column = column;
    this->left = left;
    this->type = type;
}

Symbol LogicaNot::ejecutar(Environment *env) {
    Symbol result(line, column, "", NULO, nullptr);

    Symbol nodo_izq = this->left->ejecutar(env);

    if(this->type == NOT) {
        std::cout << "Operador NOT" << std::endl;
        if(nodo_izq.type == BOOL) {
            bool val1 = *static_cast<bool*>(nodo_izq.value);
            valor_final = val1 ? false : true;
            result = Symbol(line, column, "", BOOL, &valor_final);
        }
    }

    return result;
}
