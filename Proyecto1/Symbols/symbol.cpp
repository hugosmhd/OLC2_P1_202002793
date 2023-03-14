#include "symbol.hpp"

Symbol::Symbol() {}

Symbol::Symbol(int _line, int _column, std::string _id, Type _type, void * _value)
{
    this->line = _line;
    this->column = _column;
    this->id = _id;
    this->type = _type;
    this->value = _value;
}
