#include "literal.hpp"

Literal::Literal(int _line, int _column, Type _type, std::string _strVal, int _numVal, bool _boolVal)
{
    this->line = _line;
    this->column = _column;
    this->type = _type;
    this->strVal = _strVal;
    this->numVal = _numVal;
    this->boolVal = _boolVal;
}

Symbol Literal::ejecutar(Environment *env)
{
    Symbol ret(line, column, "", NULO, nullptr);
    switch (type) {
        case INTEGER:
            ret = Symbol(line, column, "", type, &numVal);
            break;
        case STRING:
            ret = Symbol(line, column, "", type, &strVal);
            std::cout << ret.type << std::endl;
            std::cout << ret.value << std::endl;
            break;
        case BOOL:
            ret = Symbol(line, column, "", type, &boolVal);
            break;
        default:
            break;
    }
    return ret;
}
