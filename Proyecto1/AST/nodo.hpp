#ifndef NODO_HPP
#define NODO_HPP
#include <string>
#include "QVector"

class nodo
{
public:
    std::string valor;
    QVector<nodo*> hijos;
    nodo(std::string valor);
    void setHijos(QVector<nodo*> hijos);
    std::string getValor();
    QVector<nodo*> getHijos();
    /*void agregarHijo(std::string value);
    void agregarHijos(QVector<nodo*> hijos);
    void agregarHijo_nodo(nodo hijo);
    void agregarPrimerHijo(std::string valor);
    void agregarPrimerHijo_nodo(nodo hijo);*/
};

#endif // NODO_HPP
