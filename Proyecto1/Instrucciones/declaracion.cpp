#include "declaracion.hpp"

Declaracion::Declaracion(int line, int column, Type type, std::string id, Expression *expression)
{
    this->line = line;
    this->column = line;
    this->type = type;
    this->id = id;
    this->expression = expression;
}

void Declaracion::ejecutar(Environment *env) {
    Symbol symb = this->expression->ejecutar(env);
    std::cout << "Hola declaracion!" << std::endl;
    std::cout << type << std::endl;
    std::cout << symb.type << std::endl;
    //std::cout << std::to_string(*static_cast<int*>(symb.value)) << std::endl;
    if(type == symb.type) {
        env->guardar_variable(symb, id);
    } else {
        //se reporta error por que no son del mismo tipo
    }
}
