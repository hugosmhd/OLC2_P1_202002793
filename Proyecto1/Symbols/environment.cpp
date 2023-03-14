#include "environment.hpp"

Environment::Environment() {}

void Environment::guardar_variable(Symbol sym, std::string id) //, ast *tree
{
    if (tabla_simbolos.find(id) == tabla_simbolos.end())
    {
        tabla_simbolos[id] = sym;
    }
    else
    {
        //se reporta un error
        //tree->ErrorOut += "Ya existe la variable "+id;
    }
}

Symbol Environment::get_variable(std::string id) //, ast *tree
{
    Symbol sym (0,0,"",NULO,nullptr);
    if (tabla_simbolos.find(id) == tabla_simbolos.end())
    {
        //se reporta un error
        //tree->ErrorOut += "No existe la variable "+id;
    }
    else
    {
        Symbol tempSym (tabla_simbolos[id].line,
                        tabla_simbolos[id].column,
                        tabla_simbolos[id].id,
                        tabla_simbolos[id].type,
                        tabla_simbolos[id].value);
        sym = tempSym;
    }
    return sym;
}

