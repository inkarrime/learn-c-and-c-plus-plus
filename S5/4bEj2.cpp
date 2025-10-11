#include <iostream>
using namespace std;

double calcular_promedio(int *pArr, int tam);
void imprimirEncimaPromedio(int *pArr, int tam);

int main() {
    int arreglo[10];
    cout << "Ingresar 10 numeros: ";
    for (int i = 0; i < 10; i++) {
        cin >> arreglo[i];
    }
    imprimirEncimaPromedio(arreglo, 10);
    return 0;
}

double calcular_promedio(int *pArr, int tam) {
    double suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += pArr[i];
    }
    return suma/tam;
}
void imprimirEncimaPromedio(int *pArr, int tam) {
    double promedio = calcular_promedio(pArr, tam);
    for (int i = 0; i < tam; i++) {
        if (pArr[i] > promedio) {
            cout << pArr[i] << " ";
        }
    }
}