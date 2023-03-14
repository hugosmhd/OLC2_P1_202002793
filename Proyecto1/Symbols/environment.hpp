#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP
#include <map>
#include "Symbols/symbol.hpp"
using std::map;

class Environment
{
public:
    Environment *anterior;
    map<std::string, Symbol> tabla_simbolos;
    std::string Id;

    Environment();
    void guardar_variable(Symbol sym, std::string id); //, ast *tree
    Symbol get_variable(std::string id); //, ast *tree
};

#endif // ENVIRONMENT_HPP
