#include <iostream>
#include "CTriangulo.h"
using namespace std;
int main() {
    CTriangulo tri1; // llama al constructor vacio
    tri1.setLados(4, 5.2, 7);
    cout << "Area: "<< tri1.area() << endl;
    cout << "Perimetro: "<< tri1.perimetro() << endl;

    // llama al constuctor con parametros
    CTriangulo tri2(10, 12, 14);
    cout << "Area: "<< tri2.area() << endl;
    cout << "Perimetro: "<< tri2.perimetro() << endl;
    vector<double> lados = tri2.getLados();
    cout << "Lado 1: "<< lados[0] << endl;
    cout << "Lado 2: "<< lados[1] << endl;
    cout << "Lado 3: "<< lados[2] << endl;
    return 0;
}