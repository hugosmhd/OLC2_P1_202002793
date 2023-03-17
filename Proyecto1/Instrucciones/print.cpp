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
    switch (symb.type) {
        case STRING:
            //tree->ConsoleOut += *static_cast<std::string*>(sym.Value)+"\n";
            single->addConsola(*static_cast<std::string*>(symb.value) + "\n");
            break;
        case INTEGER:
            //tree->ConsoleOut += std::to_string(*static_cast<int*>(sym.Value))+ "\n";
            single->addConsola(std::to_string(*static_cast<int*>(symb.value)) + "\n");
            break;
        case FLOAT:
            //tree->ConsoleOut += std::to_string(*static_cast<int*>(sym.Value))+ "\n";
            single->addConsola(std::to_string(*static_cast<double*>(symb.value)) + "\n");
            break;
        case BOOL:
            if(*static_cast<bool*>(symb.value)){
                single->addConsola("true\n");
                //tree->ConsoleOut += "true\n";
            }
            else
            {
                single->addConsola("false\n");
                //tree->ConsoleOut += "false\n";
            }
            break;
        default:
            break;
        }

    //std::cout << *static_cast<std::string*>(symb.value) << std::endl;
    //single->addConsola(*static_cast<std::string*>(symb.value));
}
