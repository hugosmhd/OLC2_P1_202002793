#include "nodo.hpp"

nodo::nodo(std::string valor)
{
    this->valor = valor;
    this->hijos = QVector<nodo*>();
}

void nodo::setHijos(QVector<nodo *> hijos) {
    this->hijos = hijos;
}

std::string nodo::getValor() {
    this->valor;
}

QVector<nodo*> nodo::getHijos() {
    return this->hijos;
}
/*
nodo::agregarHijo(std::string value) {
    this->hijos.push_back(new nodo(value));
}

nodo::agregarHijos(QVector<nodo *> hijos) {
    for(nodo hijo: hijos) {
        this->hijos.push_back(hijo);
    }
}

nodo::agregarHijo_nodo(nodo hijo) {
    this->hijos.push_back(hijo);
}

nodo::agregarPrimerHijo(std::string valor) {
    this->hijos.push_front(new nodo(valor));
}

nodo::agregarPrimerHijo_nodo(nodo hijo) {
    this->hijos.push_front(hijo);
}
*/
