#include <iostream>
using namespace std;

int main() {
    double diametro;
    int c_paredes, p_electricas, r_mecanica;

    cout << "Ingrese el diametro en nm: ";
    cin >> diametro;
    cout << "Ingrese la cantidad de paredes: ";
    cin >> c_paredes;
    cout << "Ingrese las propiedades electricas (1 para conductor, 2 para semiconductor): ";
    cin >> p_electricas;
    cout << "Ingrese la resistencia mecanica en GPa: ";
    cin >> r_mecanica;

    cout << "Clasificacion: ";

    if (diametro <= 1.40) {
        cout << "Nanometrico ";
    } else if (diametro > 1.4 && diametro < 1.5) {
        cout << "";
    }else if (diametro >= 1.5 && diametro <= 3.0) {
        cout << "Submicrometrico ";
    } else {
        cout << "Micrometrico ";
    }

    if (c_paredes == 1) {
        cout << "Unipared";
    } else {
        cout << "Multipared";
    }

    if (r_mecanica > 50) {
        cout << " de Alto modulo." << endl;
    } else if (r_mecanica >= 30 && r_mecanica <= 50) {
        cout << " de Modulo intermedio." << endl;
    } else {
        cout << " de Bajo modulo." << endl;
    }

    bool es_conductor = (p_electricas == 1);
    bool es_nanometrico = (diametro <= 1.4);
    bool es_semiconductor = (p_electricas == 2);
    bool es_submicrometrico = (diametro >= 1.5 && diametro <= 3.0);
    bool es_alto_modulo = (r_mecanica > 50);

    cout << "Aplicacion: ";

    if (es_conductor && es_nanometrico) {
        cout << "Electronica.";
    } else if (es_semiconductor && es_submicrometrico) {
        cout << "Medicina.";
    } else if (es_alto_modulo) {
        cout << "Materiales compuestos.";
    } else {
        cout << "Sin aplicacion especifica.";
    }

    return 0;
}