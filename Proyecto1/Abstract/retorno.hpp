#ifndef RETORNO_HPP
#define RETORNO_HPP
#include "Symbols/type.h"

class Retorno
{
public:
    void *value;
    Type type;
    Retorno(void * _value, Type _type);
};

#endif // RETORNO_HPP
