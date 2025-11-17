#include "Planeta.h"
#include <iostream>
using namespace std;

Planeta::Planeta(): CuerpoCeleste(), tieneAtmosfera{false}, numeroLunas{0} {}

Planeta::Planeta(string pNombre, double pMasa, double pRadio,
                 bool pTieneAtmosfera, int pNumeroLunas):
    CuerpoCeleste(pNombre, pMasa, pRadio),
    tieneAtmosfera{pTieneAtmosfera},
    numeroLunas{pNumeroLunas} {}

Planeta::~Planeta() {}

void Planeta::mostrarInformacion() {
    cout << "\nPLANETA\n";
    CuerpoCeleste::mostrarInformacion();
    cout << "Tiene atmosfera: " << (tieneAtmosfera ? "Si" : "No") << "\n";
    cout << "Numero de lunas: " << numeroLunas << "\n";
}