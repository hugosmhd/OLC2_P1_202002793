#include "incremento.hpp"

Incremento::Incremento(int line, int column, std::string tipo_incremento, std::string id)
{
    this->line = line;
    this->column = column;
    this->tipo_incremento = tipo_incremento;
    this->id = id;
}

Symbol Incremento::ejecutar(Environment *env) {
    Symbol result(line, column, "", NULO, nullptr);
    Symbol actualizar(line, column, "", NULO, nullptr);
    Symbol identificador = env->get_variable(this->id);
    std::cout << identificador.id << std::endl;
    if(this->tipo_incremento == "POST") {
        std::cout << "Incremento POST" << std::endl;
        if(identificador.type == INTEGER) {
            val = *static_cast<int*>(identificador.value);
            std::cout << val << std::endl;
            result = Symbol(line, column, identificador.id, INTEGER, &val);
            new_val = *static_cast<int*>(identificador.value) + 1;
            actualizar = Symbol(line, column, identificador.id, INTEGER, &new_val);
            std::cout << new_val << std::endl;
            env->actualizar_variable(actualizar, identificador.id);
        } else if(identificador.type == FLOAT) {
            val_d = *static_cast<double*>(identificador.value);
            std::cout << val_d << std::endl;
            result = Symbol(line, column, identificador.id, FLOAT, &val_d);
            new_val_d = *static_cast<double*>(identificador.value) + 1.0;
            actualizar = Symbol(line, column, identificador.id, FLOAT, &new_val_d);
            std::cout << new_val_d << std::endl;
            env->actualizar_variable(actualizar, identificador.id);
        }

    } else if(this->tipo_incremento == "PRE") {
        std::cout << "Incremento PRE" << std::endl;
        if(identificador.type == INTEGER) {
            new_val = *static_cast<int*>(identificador.value) + 1;
            actualizar = Symbol(line, column, identificador.id, INTEGER, &new_val);
            result = Symbol(line, column, identificador.id, INTEGER, &new_val);
            std::cout << new_val << std::endl;
            env->actualizar_variable(actualizar, identificador.id);
        } else if(identificador.type == FLOAT) {
            new_val_d = *static_cast<double*>(identificador.value) + 1.0;
            actualizar = Symbol(line, column, identificador.id, FLOAT, &new_val_d);
            result = Symbol(line, column, identificador.id, FLOAT, &new_val_d);
            std::cout << new_val_d << std::endl;
            env->actualizar_variable(actualizar, identificador.id);
        }
    }
    std::cout << *static_cast<int*>(result.value) << std::endl;
    return result;
}
