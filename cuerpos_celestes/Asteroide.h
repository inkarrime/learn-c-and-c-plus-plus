#ifndef ASTEROIDE_H
#define ASTEROIDE_H

#include "CuerpoCeleste.h"

class Asteroide : public CuerpoCeleste {
private:
    string composicion;
    double distanciaSol;
public:
    Asteroide();
    Asteroide(string pNombre, double pMasa, double pRadio,
              string pComposicion, double pDistanciaSol);
    virtual ~Asteroide();
    void mostrarInformacion();
};

#endif