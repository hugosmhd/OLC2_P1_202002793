#include "print.hpp"

Print::Print(int _line, int _column, Expression *_expression)
{
    this->line = _line;
    this->column = _column;
    this->expression = _expression;
}

void Print::ejecutar(Environment *env) {
    Singleton *single = Singleton::getInstance();
    Symbol symb = this->expression->ejecutar(env);
    std::cout << *static_cast<std::string*>(symb.value) << std::endl;
    single->addConsola(*static_cast<std::string*>(symb.value));
}
