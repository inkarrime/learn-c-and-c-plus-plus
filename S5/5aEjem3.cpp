#include <iostream>
#include "arreglo.h"
using namespace std;

int main() {
    int tam, bus, *pArr;
    cout << "Tamano del array 1: ";
    cin >> tam;
    pArr = new int[tam];

    llenarAleatorios(pArr, tam);
    imprimir(pArr, tam);

    cout << "Numero a buscar [1-10]: ";
    cin >> bus;

    int contador = busquedaNtam(pArr, tam, bus, &contador);
    cout << "El numero "<< bus << " aparece: "<< contador;
    //imprimir(pArr, tam);
    //busqueda, cantidad y array
    //imprimir

    return 0;
}