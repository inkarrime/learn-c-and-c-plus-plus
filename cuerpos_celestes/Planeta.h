#ifndef PLANETA_H
#define PLANETA_H

#include "CuerpoCeleste.h"

class Planeta : public CuerpoCeleste {
private:
    bool tieneAtmosfera;
    int numeroLunas;
public:
    Planeta();
    Planeta(string pNombre, double pMasa, double pRadio,
            bool pTieneAtmosfera, int pNumeroLunas);
    virtual ~Planeta();
    void mostrarInformacion();
};

#endif