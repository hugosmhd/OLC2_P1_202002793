#ifndef FUNCION_MAIN_HPP
#define FUNCION_MAIN_HPP
#include "Abstract/instruccion.hpp"
#include "Instrucciones/lista_instrucciones.hpp"
#include "Symbols/environment.hpp"

class funcion_main : public Instruction
{
public:
    int line, column;
    std::string type;
    lista_instrucciones *listaInstrucciones;

    void ejecutar(Environment *env) override; //, ast* tree
    funcion_main(int line, int col, std::string tipo, lista_instrucciones *listainst);
};

#endif // FUNCION_MAIN_HPP
