#include "literal.hpp"

Literal::Literal(int _line, int _column, Type _type, std::string _strVal, int _numVal, bool _boolVal, double _floatVal)
{
    this->line = _line;
    this->column = _column;
    this->type = _type;
    this->strVal = _strVal;
    this->numVal = _numVal;
    this->boolVal = _boolVal;
    this->floatVal = _floatVal;
}

Symbol Literal::ejecutar(Environment *env)
{
    Symbol ret(line, column, "", NULO, nullptr);
    //std::cout << "Desde literal" << std::endl;
    //std::cout << type << std::endl;
    switch (type) {
        case INTEGER:
            ret = Symbol(line, column, "", type, &numVal);
            break;
        case STRING:
            ret = Symbol(line, column, "", type, &strVal);
            //std::cout << ret.type << std::endl;
            //std::cout << ret.value << std::endl;
            break;
        case BOOL:
            ret = Symbol(line, column, "", type, &boolVal);
            break;
        case FLOAT:
            ret = Symbol(line, column, "", type, &floatVal);
            break;
        default:
            break;
    }
    return ret;
}
