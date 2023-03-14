#ifndef SINGLETON_HPP
#define SINGLETON_HPP
#include <string>

class Singleton
{
private:
    static Singleton instance;
    std::string consola = "";
public:    
    Singleton();
    static Singleton * getInstance();
    void addConsola(std::string data);
    std::string getConsola();
};

#endif // SINGLETON_HPP
