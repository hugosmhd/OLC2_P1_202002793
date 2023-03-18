#include "incrementoins.hpp"

IncrementoIns::IncrementoIns(int line, int column, std::string tipo_incremento, std::string id)
{
    this->line = line;
    this->column = column;
    this->tipo_incremento = tipo_incremento;
    this->id = id;
}

void IncrementoIns::ejecutar(Environment *env) {
    Symbol actualizar(line, column, "", NULO, nullptr);
    Symbol identificador = env->get_variable(this->id);
    if(this->tipo_incremento == "POST" || this->tipo_incremento == "PRE") {
        if(identificador.type == INTEGER) {
            new_val = *static_cast<int*>(identificador.value) + 1;
            actualizar = Symbol(line, column, identificador.id, INTEGER, &new_val);
            //std::cout << new_val << std::endl;
            env->actualizar_variable(actualizar, identificador.id);
        } else if(identificador.type == FLOAT) {
            new_val_d = *static_cast<double*>(identificador.value) + 1.0;
            actualizar = Symbol(line, column, identificador.id, FLOAT, &new_val_d);
            //std::cout << new_val_d << std::endl;
            env->actualizar_variable(actualizar, identificador.id);
        }

    }
}
