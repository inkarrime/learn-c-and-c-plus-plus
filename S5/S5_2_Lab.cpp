#include <iostream>
using namespace std;
double calcularTotal(double* ventas, int dias);
double calcularPromedio(double* ventas, int dias);
int diaMayorVenta(double* ventas, int dias);

int main() {
    const int dias = 7;
    double ventas[dias] = {0};

    for (int i = 0; i < dias; i++) {
        cout << "Ingrese ventas del dia " << (i + 1) << ": ";
        cin >> ventas[i];
    }

    double total = calcularTotal(ventas, dias);
    double promedio = calcularPromedio(ventas, dias);
    int diaMayor = diaMayorVenta(ventas, dias);

    cout << "Total vendido: S/." << total << endl;
    cout << "Promedio de ventas: S/." << promedio << endl;
    cout << "Dia con mayores ventas: Dia "<< diaMayor << endl;

    return 0;
}

double calcularTotal(double* ventas, int dias) {
    double total = 0;
    for(int i = 0; i < dias; i++) {
        total += ventas[i];
    }
    return total;
}
double calcularPromedio(double* ventas, int dias) {
    return calcularTotal(ventas, dias) / dias;
}
int diaMayorVenta(double* ventas, int dias) {
    int diaMayor = 0;
    for(int i = 1; i < dias; i++) {
        if(ventas[i] > ventas[diaMayor]) {
            diaMayor = i;
        }
    }
    return diaMayor + 1;
}