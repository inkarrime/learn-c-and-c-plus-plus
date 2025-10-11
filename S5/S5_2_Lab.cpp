#include <iostream>
using namespace std;

void ingresarVentas(double *ventas, int dias) {
    for(int i = 0; i < dias; i++) {
        cout << "Ingrese ventas del día " << (i+1) << ": ";
        cin >> *(ventas + i);
    }
}

double calcularTotal(double *ventas, int dias) {
    double total = 0;
    for(int i = 0; i < dias; i++) {
        total += *(ventas + i);
    }
    return total;
}

double calcularPromedio(double *ventas, int dias) {
    return calcularTotal(ventas, dias) / dias;
}

int diaMayorVenta(double *ventas, int dias) {
    int diaMayor = 0;
    for(int i = 1; i < dias; i++) {
        if(*(ventas + i) > *(ventas + diaMayor)) {
            diaMayor = i;
        }
    }
    return diaMayor + 1;
}

int main() {
    const int DIAS = 7;
    double ventas[DIAS];
    
    ingresarVentas(ventas, DIAS);
    
    double total = calcularTotal(ventas, DIAS);
    double promedio = calcularPromedio(ventas, DIAS);
    int diaMayor = diaMayorVenta(ventas, DIAS);
    
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Total vendido: $" << total << endl;
    cout << "Promedio de ventas: $" << promedio << endl;
    cout << "Día con mayores ventas: " << diaMayor << endl;
    
    return 0;
}