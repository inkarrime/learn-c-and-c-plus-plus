#include <iostream>
#include <vector>
#include "Planeta.h"
#include "Asteroide.h"
using namespace std;

int main() {
    vector<CuerpoCeleste*> cuerpos;

    // Agregando 5 planetas
    cuerpos.push_back(new Planeta("Tierra", 5.972e24, 6371, true, 1));
    cuerpos.push_back(new Planeta("Marte", 6.39e23, 3389, true, 2));
    cuerpos.push_back(new Planeta("Jupiter", 1.898e27, 69911, true, 79));
    cuerpos.push_back(new Planeta("Venus", 4.867e24, 6051, true, 0));
    cuerpos.push_back(new Planeta("Saturno", 5.683e26, 58232, true, 82));

    cuerpos.push_back(new Asteroide("Ceres", 9.39e20, 473, "Roca y hielo", 414));
    cuerpos.push_back(new Asteroide("Vesta", 2.59e20, 262, "Roca basaltica", 353));
    cuerpos.push_back(new Asteroide("Pallas", 2.04e20, 256, "Silicatos", 414));
    cuerpos.push_back(new Asteroide("Hygiea", 8.32e19, 217, "Carbonaceo", 470));
    cuerpos.push_back(new Asteroide("Eros", 6.69e15, 8, "Silicatos y metales", 218));

    cout << "CATALOGO DE CUERPOS CELESTES\n";

    for (auto cuerpo : cuerpos) {
        cuerpo->mostrarInformacion();
    }

    for (auto cuerpo : cuerpos) {
        delete cuerpo;
    }
    cuerpos.clear();

    return 0;
}
