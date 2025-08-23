#include <iostream>
using namespace std;

// Function que suma dos numeros
int suma(int a, int b) {
    return a + b;
}

// Function que calcula el promedio de tres numeros
float promedio(float a, float b, float c) {
    return (a + b + c)/3;
}

// Function que verifica si es un numero es par
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    // Llamada a la funcion suma
    int resultado = suma(3,4);
    cout << "La suma es: " << resultado << endl;

    // Llamada a la funcion promedio
    float x = 10.2, y = 5.8, z = 6.0;
    cout << "Promedio: " << promedio(x, y, z) << endl;

    // Llamada a la funcion esPar:
    int n = 7;
    if (esPar(n)) {
        cout << n << " es par" << endl;
    } else {
        cout << n << " es impar" << endl;
    }

    return 0;
}