#include <iostream>
using namespace std;

void llenarAleatorios(int *pArr, int tam) {
    for (int i = 0; i < tam; i++) {
        pArr[i] = rand() % 10;
    }
}
void imprimir(int *pArr, int tam) {
    cout << endl;
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
}

void busquedaNtam(int *pArr, int tam, int bus, int *contador) {
    *contador = 0;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] == bus) {
            contador++;
        }
    }
}

