#ifndef CUERPOCELESTE_H
#define CUERPOCELESTE_H

#include <string>
using namespace std;

class CuerpoCeleste {
protected:
    string nombre;
    double masa;
    double radio;
public:
    CuerpoCeleste();
    CuerpoCeleste(string pNombre, double pMasa, double pRadio);
    virtual ~CuerpoCeleste();
    virtual void mostrarInformacion();
};

#endif