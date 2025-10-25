#include <iostream>
using namespace std;

void llenarAleatorios(int *pArr, int tam);
void imprimir(int *pArr, int tam);
double calcularPromedio(int *pArr, int tam);
void imprimriEncimaPromedio(int *pArr, int tam);

int main() {
    int tam, *pArr;
    do {
        cout << "Tam:";
        cin >> tam;
    } while (tam <= 15);
    pArr = new int[tam];
    llenarAleatorios(pArr, tam);
    imprimir(pArr, tam);
    imprimriEncimaPromedio(pArr, tam);
    return 0;
}
void llenarAleatorios(int *pArr, int tam) {
    for (int i = 0; i < tam; i++) {
        pArr[i] = rand() % 21;
    }
}
void imprimir(int *pArr, int tam) {
    cout << endl;
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
}
double calcularPromedio(int *pArr, int tam) {
    double suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += pArr[i];
    }
    return suma / tam;
}
void imprimriEncimaPromedio(int *pArr, int tam) {
    double promedio = calcularPromedio(pArr, tam);
    cout << endl;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] > promedio) {
            cout << pArr[i] << " ";
        }
    }
}