#include "identificador.hpp"

Identificador::Identificador(int line, int column, std::string id)
{
    this->line = line;
    this->column = column;
    this->id = id;
}

Symbol Identificador::ejecutar(Environment *env) {
    Symbol identificador = env->get_variable(this->id);
    //std::cout << "desde identificador" << std::endl;
    if(identificador.type != NULO && identificador.id != "") {
        return identificador;
    }

}
