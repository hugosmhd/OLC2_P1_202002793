#include "funcion_main.hpp"

funcion_main::funcion_main(int line, int column, std::string type, lista_instrucciones *listaInstrucciones)
{
    this->line = line;
    this->column = column;
    this->type = type;
    this->listaInstrucciones = listaInstrucciones;
}

void funcion_main::ejecutar(Environment *env) //, ast *tree
{
    this->listaInstrucciones->ejecutar(env); //tree
}
