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
    /*std::cout << "Hola declaracion!" << std::endl;
    std::cout << type << std::endl;
    std::cout << symb.type << std::endl;
    std::cout << this->id << std::endl;*/
    //std::cout << std::to_string(*static_cast<int*>(symb.value)) << std::endl;
    if(type == symb.type) {
         //std::cout << "GUARDA VARIABLE" << std::endl;
        env->guardar_variable(symb, id);
    } else if(symb.type == NULO) {
        switch(type) {
            case INTEGER:
                //std::cout << "Es INTEGER" << std::endl;
                //Symbol new_symb = Symbol(symb.line, symb.column, symb.id, INTEGER, 0);
                //std::cout << new_symb.type << std::endl;
                symb.type = INTEGER;
                symb.value = 0;
                env->guardar_variable(symb, id);
            break;
        }
    }
    else {
        //se reporta error por que no son del mismo tipo
    }
}
