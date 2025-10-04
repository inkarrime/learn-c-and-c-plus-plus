#include <iostream>
#include "arreglo.h"
using namespace std;
int main() {
    int tam, *pArr;
    cout << "Tam: ";
    cin >> tam;

    pArr = new int[tam];
    llenarAleatorios(pArr, tam, 1, 30);
    imprimir(pArr, tam);
    cout << "\nMedia:" << media(pArr, tam) << endl;

    return 0;
}