#ifndef SYMBOL_HPP
#define SYMBOL_HPP
#include <iostream>
#include "Symbols/type.h"
class Symbol
{
public:
    int line;
    int column;
    std::string id;
    Type type;
    void *value;
    Symbol();
    Symbol(int line, int column, std::string id, Type type, void *value);
};

#endif // SYMBOL_HPP
