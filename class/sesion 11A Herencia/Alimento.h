#ifndef ALIMENTO_H
#define ALIMENTO_H
#include <iostream>
using namespace std;
class Alimento {
protected:
    int cantidad;
public:
    Alimento(int cant) {
        cantidad = cant;
    }
    virtual void mostrar() {
        cout << cantidad << endl;
    }
};

class Verdura : public Alimento {
    string nombre;
public:
    Verdura(string nom, int cant):Alimento(cant) {
        nombre = nom;
    }
    void mostrar() {
        cout << cantidad << " " << nombre << endl;
    }
};


#endif //ALIMENTO_H
