#include "asignacion.hpp"

Asignacion::Asignacion(int line, int column, std::string id, Expression *expression)
{
    this->line = line;
    this->column = column;
    this->id = id;
    this->expression = expression;
}

void Asignacion::ejecutar(Environment *env) {
    Symbol symb = this->expression->ejecutar(env);
    Symbol identificador = env->get_variable(this->id);
    std::cout << identificador.type << std::endl;
    if(identificador.type == symb.type) {
        std::cout << "Son del mismo tipo" << std::endl;
        std::cout << identificador.type << std::endl;
        identificador.value = symb.value;
        env->actualizar_variable(identificador, id);
        identificador = env->get_variable(this->id);
        //std::cout << std::to_string(*static_cast<int*>(identificador.value)) << std::endl;
    }

}
