#include <iostream>
#include "Temperatura.h"
using namespace std;
int main() {
    Temperatura t1(20.0);
    Temperatura t2;
    t2.setCelsius(35.5);
    cout << "Temperatura 1 -> " << t1.mostrar() << endl;
    cout << "Temperatura 2 -> " << t2.mostrar() << endl;
    cout << "\nComparacion: " << t1.comparar(t2) << endl;
    cout << "t1 en Fahrenheit: " << toFahrenheit() << endl;
    cout << "t1 en Kelvin: " << t1.toKelvin() << endl;

    t1.setCelsius(37.0);
    cout << "\nTemperatura 1 actualizada -> " << t1.mostrar() << endl;
    cout << "Comparacion nuevamente: " << t1.comparar(t2) << endl;

    cout << "Area: "<< tri1.area() << endl;
    cout << "Perimetro: "<< tri1.perimetro() << endl;

    return 0;
}