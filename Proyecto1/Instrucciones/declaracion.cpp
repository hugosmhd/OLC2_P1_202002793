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
    if(type == symb.type) {
        env->guardar_variable(symb, id);
    } else if(symb.type == NULO) {

        switch(type) {
            case INTEGER:
                symb.type = INTEGER;
                symb.value = &vacio_int;
                std::cout << "Integer no inicializado" << std::endl;
                std::cout << vacio_int << std::endl;
                symb = Symbol(0,0,id,type,&vacio_int);
                env->guardar_variable(symb, id);
            break;
            case STRING:
                symb.type = STRING;
                symb.value = &vacio_string;
                //symb = Symbol(0,0,id,type,"");
                env->guardar_variable(symb, id);
            break;
            case FLOAT:
                symb.type = FLOAT;
                symb.value = &vacio_float;
                env->guardar_variable(symb, id);
            break;
            case BOOL:
                symb.type = BOOL;
                symb.value = &vacio_bool;
                env->guardar_variable(symb, id);
            break;
        }
    }
    else {
        //se reporta error por que no son del mismo tipo
    }
}
