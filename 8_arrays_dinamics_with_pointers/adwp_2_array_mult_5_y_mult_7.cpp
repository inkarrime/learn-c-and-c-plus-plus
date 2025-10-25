#include <iostream>
#include "arreglo.h"
using namespace std;


int main() {
    int tam, *pArr;
    cout << "Tam:";
    cin >> tam;
    pArr = new int[tam];

    llenarAleatorios(pArr, tam);
    imprimir(pArr, tam);

    return 0;
}