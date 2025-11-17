#include "CuerpoCeleste.h"
#include <iostream>
using namespace std;

CuerpoCeleste::CuerpoCeleste(): nombre{""}, masa{0.0}, radio{0.0} {}

CuerpoCeleste::CuerpoCeleste(string pNombre, double pMasa, double pRadio):
    nombre{pNombre}, masa{pMasa}, radio{pRadio} {}

CuerpoCeleste::~CuerpoCeleste() {}

void CuerpoCeleste::mostrarInformacion() {
    cout << "Nombre: " << nombre << "\n";
    cout << "Masa: " << masa << " kg\n";
    cout << "Radio: " << radio << " km\n";
}