#ifndef ESTRELLA_H
#define ESTRELLA_H
#include <iostream>
using namespace std;
class Estrella {
protected:
    string nombre;
public:
    Estrella(string nom){ nombre = nom; }

    virtual string imprimir() = 0;
};

class Simple : public Estrella {
public:
    Simple(string nom): Estrella(nom){}
    string imprimir() {
        return "Simple: " + nombre;
    }
};

class Binaria : public Estrella {
public:
    Binaria(string nom): Estrella(nom){}
    string imprimir() {
        return "Binaria: " + nombre;
    }
};

#endif //ESTRELLA_H
