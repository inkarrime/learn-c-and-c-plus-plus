#include "Asteroide.h"
#include <iostream>
using namespace std;

Asteroide::Asteroide(): CuerpoCeleste(), composicion{""}, distanciaSol{0.0} {}

Asteroide::Asteroide(string pNombre, double pMasa, double pRadio,
                     string pComposicion, double pDistanciaSol):
    CuerpoCeleste(pNombre, pMasa, pRadio),
    composicion{pComposicion},
    distanciaSol{pDistanciaSol} {}

Asteroide::~Asteroide() {}

void Asteroide::mostrarInformacion() {
    cout << "\nASTEROIDE\n";
    CuerpoCeleste::mostrarInformacion();
    cout << "Composicion: " << composicion << "\n";
    cout << "Distancia al Sol: " << distanciaSol << " millones de km\n";
}