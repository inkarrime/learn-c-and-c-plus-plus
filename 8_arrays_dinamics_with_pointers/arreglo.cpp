#include <iostream>
using namespace std;

void llenarAleatorios(int *pArr, int tam, int min, int max) {
    for (int i = 0; i < tam; i++) {
        pArr[i] = rand() % (max - min + 1) + min;
    }
}
void imprimir(int *pArr, int tam) {
    cout << endl;
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
}
double media(int *pArr, int tam) {
    double suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += pArr[i];
    }
    return suma / tam;
}