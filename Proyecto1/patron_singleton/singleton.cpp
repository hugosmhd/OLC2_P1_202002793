#include "singleton.hpp"

Singleton::Singleton() {}


Singleton *Singleton::getInstance() {
    static Singleton s1;
    return &s1;
}

void Singleton::addConsola(std::string data) {
    this->consola += data;
}

std::string Singleton::getConsola() {
    return this->consola;
}
