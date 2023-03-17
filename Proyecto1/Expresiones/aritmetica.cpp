#include "aritmetica.hpp"

Aritmetica::Aritmetica(int line, int column, Expression *right, Expression *left, ArithmeticOption type) {
    this->line = line;
    this->column = column;
    this->right = right;
    this->left = left;
    this->type = type;
}

Symbol Aritmetica::ejecutar(Environment *env) {

    Symbol result(line, column, "", NULO, nullptr);

    Symbol nodo_izq = this->left->ejecutar(env);
    Symbol nodo_der = this->right->ejecutar(env);
    /*std::cout << "Desde aritmetica" << std::endl;
    std::cout << nodo_izq.type << std::endl;
    std::cout << nodo_der.type << std::endl;*/

    if(this->type == MAS) {
        //std::cout << "Hola mas" << std::endl;
        if(nodo_izq.type == INTEGER && nodo_der.type == INTEGER) {
            valor_int = *static_cast<int*>(nodo_izq.value) + *static_cast<int*>(nodo_der.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == INTEGER) {
            valor_float = *static_cast<double*>(nodo_izq.value) + *static_cast<int*>(nodo_der.value);
            //std::cout << valor_float << std::endl;
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == FLOAT) {
            valor_float = *static_cast<int*>(nodo_izq.value) + *static_cast<double*>(nodo_der.value);
            //std::cout << valor_float << std::endl;
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == BOOL) {
            //std::cout << "Hola bool" << std::endl;
            valor_int = *static_cast<int*>(nodo_izq.value) + *static_cast<bool*>(nodo_der.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == BOOL && nodo_der.type == INTEGER) {
            //std::cout << "Hola bool" << std::endl;
            valor_int = *static_cast<bool*>(nodo_izq.value) + *static_cast<int*>(nodo_der.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == STRING) {
            valor_string = std::to_string(*static_cast<int*>(nodo_izq.value)) + *static_cast<std::string*>(nodo_der.value);
            std::cout << valor_string << std::endl;
            result = Symbol(line, column, "", STRING, &valor_string);
        } else if(nodo_izq.type == STRING && nodo_der.type == INTEGER) {
            valor_string = *static_cast<std::string*>(nodo_izq.value) + std::to_string(*static_cast<int*>(nodo_der.value));
            std::cout << valor_string << std::endl;
            result = Symbol(line, column, "", STRING, &valor_string);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_izq.value) + *static_cast<double*>(nodo_der.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == BOOL) {
            valor_float = *static_cast<double*>(nodo_izq.value) + *static_cast<bool*>(nodo_der.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == BOOL && nodo_der.type == FLOAT) {
            //std::cout << "Hola flotane y bool" << std::endl;
            valor_float = *static_cast<bool*>(nodo_izq.value) + *static_cast<double*>(nodo_der.value);
            //std::cout << valor_float << std::endl;
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == STRING) {
            std::cout << "Hola FLOAT STRING" << std::endl;
            valor_string = *static_cast<std::string*>(nodo_der.value) + std::to_string(*static_cast<double*>(nodo_izq.value));
            //std::cout << valor_string << std::endl;
            result = Symbol(line, column, "", STRING, &valor_string);
        } else if(nodo_izq.type == STRING && nodo_der.type == FLOAT) {
            std::cout << "Hola STRING FLOAT" << std::endl;
            valor_string = std::to_string(*static_cast<double*>(nodo_der.value)) + *static_cast<std::string*>(nodo_izq.value);
            //std::cout << valor_string << std::endl;
            result = Symbol(line, column, "", STRING, &valor_string);
        } else if(nodo_izq.type == STRING && nodo_der.type == STRING) {
            valor_string = *static_cast<std::string*>(nodo_der.value) + *static_cast<std::string*>(nodo_izq.value);
            result = Symbol(line, column, "", STRING, &valor_string);
        } else if(nodo_izq.type == STRING && nodo_der.type == BOOL) {
            int val = *static_cast<bool*>(nodo_der.value);
            valor_string = val == 1 ? "true" : "false";
            valor_string +=*static_cast<std::string*>(nodo_izq.value);
            result = Symbol(line, column, "", STRING, &valor_string);
        } else if(nodo_izq.type == BOOL && nodo_der.type == STRING) {
            int val = *static_cast<bool*>(nodo_izq.value);
            valor_string = *static_cast<std::string*>(nodo_der.value);
            valor_string += val == 1 ? "true" : "false";
            result = Symbol(line, column, "", STRING, &valor_string);
        } else if(nodo_izq.type == BOOL && nodo_der.type == BOOL) {
            //std::cout << "Hola bool" << std::endl;
            valor_int = *static_cast<bool*>(nodo_izq.value) + *static_cast<bool*>(nodo_der.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        }

    } else if(this->type == SUSTRACCION) {
        //std::cout << "Hola menos" << std::endl;
        if(nodo_izq.type == INTEGER && nodo_der.type == INTEGER) {
            valor_int = *static_cast<int*>(nodo_der.value) - *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == INTEGER) {
            valor_float = *static_cast<int*>(nodo_der.value) - *static_cast<double*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_der.value) - *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == BOOL) {
            valor_int = *static_cast<bool*>(nodo_der.value) - *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == BOOL && nodo_der.type == INTEGER) {
            valor_int = *static_cast<int*>(nodo_der.value) - *static_cast<bool*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_der.value) - *static_cast<double*>(nodo_izq.value) ;
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == BOOL) {
            valor_float = *static_cast<bool*>(nodo_der.value) - *static_cast<double*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == BOOL && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_der.value) - *static_cast<bool*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == BOOL && nodo_der.type == BOOL) {
            valor_int = *static_cast<bool*>(nodo_der.value) - *static_cast<bool*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        }

    } else if(this->type == PRODUCTO) {
        if(nodo_izq.type == INTEGER && nodo_der.type == INTEGER) {
            valor_int = *static_cast<int*>(nodo_der.value) * *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == INTEGER) {
            valor_float = *static_cast<int*>(nodo_der.value) * *static_cast<double*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_der.value) * *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == BOOL) {
            valor_int = *static_cast<bool*>(nodo_der.value) * *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == BOOL && nodo_der.type == INTEGER) {
            valor_int = *static_cast<int*>(nodo_der.value) * *static_cast<bool*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_der.value) * *static_cast<double*>(nodo_izq.value) ;
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == BOOL) {
            valor_float = *static_cast<bool*>(nodo_der.value) * *static_cast<double*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == BOOL && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_der.value) * *static_cast<bool*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == BOOL && nodo_der.type == BOOL) {
            valor_int = *static_cast<bool*>(nodo_der.value) * *static_cast<bool*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        }

    } else if(this->type == DIVISION) {
        if(nodo_izq.type == INTEGER && nodo_der.type == INTEGER) {
            valor_int = *static_cast<int*>(nodo_der.value) / *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == INTEGER) {
            valor_float = *static_cast<int*>(nodo_der.value) / *static_cast<double*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_der.value) / *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == INTEGER && nodo_der.type == BOOL) {
            valor_int = *static_cast<bool*>(nodo_der.value) / *static_cast<int*>(nodo_izq.value);
            result = Symbol(line, column, "", INTEGER, &valor_int);
        } else if(nodo_izq.type == BOOL && nodo_der.type == INTEGER) {
            int val_bool = *static_cast<bool*>(nodo_izq.value);
            if(val_bool != 0) {
                valor_int = *static_cast<int*>(nodo_der.value) / *static_cast<bool*>(nodo_izq.value);
                result = Symbol(line, column, "", INTEGER, &valor_int);
            }
        } else if(nodo_izq.type == FLOAT && nodo_der.type == FLOAT) {
            valor_float = *static_cast<double*>(nodo_der.value) / *static_cast<double*>(nodo_izq.value) ;
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == FLOAT && nodo_der.type == BOOL) {
            valor_float = *static_cast<bool*>(nodo_der.value) / *static_cast<double*>(nodo_izq.value);
            result = Symbol(line, column, "", FLOAT, &valor_float);
        } else if(nodo_izq.type == BOOL && nodo_der.type == FLOAT) {
            int val_bool = *static_cast<bool*>(nodo_izq.value);
            if(val_bool != 0) {
                valor_float = *static_cast<double*>(nodo_der.value) / *static_cast<bool*>(nodo_izq.value);
                result = Symbol(line, column, "", FLOAT, &valor_float);
            }
        } else if(nodo_izq.type == BOOL && nodo_der.type == BOOL) {
            int val_bool = *static_cast<bool*>(nodo_izq.value);
            if(val_bool != 0) {
                valor_int = *static_cast<bool*>(nodo_der.value) / *static_cast<bool*>(nodo_izq.value);
                result = Symbol(line, column, "", INTEGER, &valor_int);
            }


        }
    }

    return result;
}

