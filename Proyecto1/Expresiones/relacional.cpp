#include "relacional.hpp"

Relacional::Relacional(int line, int column, Expression *right, Expression *left, RelacionalOption type)
{
    this->line = line;
    this->column = column;
    this->right = right;
    this->left = left;
    this->type = type;
}

Symbol Relacional::ejecutar(Environment *env) {
    Symbol result(line, column, "", NULO, nullptr);

    Symbol nodo_izq = this->left->ejecutar(env);
    Symbol nodo_der = this->right->ejecutar(env);

    if(this->type == IGUALIGUAL) {
        if(nodo_izq.type == INTEGER && nodo_der.type == INTEGER) {
            int val1 = *static_cast<int*>(nodo_izq.value);
            int val2 = *static_cast<int*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == FLOAT) {
            double val1 = (double)*static_cast<int*>(nodo_izq.value);
            double val2 = *static_cast<double*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == INTEGER) {
            double val1 = (double)*static_cast<int*>(nodo_der.value);
            double val2 = *static_cast<double*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == BOOL) {
            int val1 = *static_cast<int*>(nodo_izq.value);
            int val2 = *static_cast<bool*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == BOOL && nodo_der.type == INTEGER) {
            int val1 = *static_cast<int*>(nodo_der.value);
            int val2 = *static_cast<bool*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == FLOAT) {
            double val1 = *static_cast<double*>(nodo_izq.value);
            double val2 = *static_cast<double*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == BOOL) {
            double val1 = *static_cast<double*>(nodo_izq.value);
            double val2 = *static_cast<bool*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == BOOL && nodo_der.type == FLOAT) {
            double val1 = *static_cast<double*>(nodo_der.value);
            double val2 = *static_cast<bool*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == BOOL && nodo_der.type == BOOL) {
            int val1 = *static_cast<bool*>(nodo_der.value);
            int val2 = *static_cast<bool*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == STRING && nodo_der.type == STRING) {
            std::string val1 = *static_cast<std::string*>(nodo_der.value);
            std::string val2 = *static_cast<std::string*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 == val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        }
    } else if(this->type == DIFERENTE) {
        if(nodo_izq.type == INTEGER && nodo_der.type == INTEGER) {
            int val1 = *static_cast<int*>(nodo_izq.value);
            int val2 = *static_cast<int*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == FLOAT) {
            double val1 = (double)*static_cast<int*>(nodo_izq.value);
            double val2 = *static_cast<double*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == INTEGER) {
            double val1 = (double)*static_cast<int*>(nodo_der.value);
            double val2 = *static_cast<double*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == BOOL) {
            int val1 = *static_cast<int*>(nodo_izq.value);
            int val2 = *static_cast<bool*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == BOOL && nodo_der.type == INTEGER) {
            int val1 = *static_cast<int*>(nodo_der.value);
            int val2 = *static_cast<bool*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == FLOAT) {
            double val1 = *static_cast<double*>(nodo_izq.value);
            double val2 = *static_cast<double*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == BOOL) {
            double val1 = *static_cast<double*>(nodo_izq.value);
            double val2 = *static_cast<bool*>(nodo_der.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == BOOL && nodo_der.type == FLOAT) {
            double val1 = *static_cast<double*>(nodo_der.value);
            double val2 = *static_cast<bool*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == BOOL && nodo_der.type == BOOL) {
            int val1 = *static_cast<bool*>(nodo_der.value);
            int val2 = *static_cast<bool*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        } else if(nodo_izq.type == STRING && nodo_der.type == STRING) {
            std::string val1 = *static_cast<std::string*>(nodo_der.value);
            std::string val2 = *static_cast<std::string*>(nodo_izq.value);
            std::cout << val1 << std::endl;
            std::cout << val2 << std::endl;
            valor_final = val1 != val2 ? true : false;
            std::cout << valor_final << std::endl;
            result = Symbol(line, column, "", BOOL, &valor_final);
        }
    }

    return result;
}
