#include <iostream>
#include "arreglo.h"
using namespace std;

int main() {
    int tam,n_tam, bus, *pArr;
    cout << "Tamano del array: ";
    cin >> tam;
    pArr = new int[tam];
    llenarAleatorios(pArr, tam);
    imprimir(pArr, tam);

    cout << "Numero a buscar [0-10]: ";
    cin >> bus;

    busquedaNtam(pArr, tam, &n_tam, bus);
    nuevoArray(&pArr,tam, n_tam, bus);
    if (n_tam > 0) {
        cout << "El numero "<< bus << " aparece: "<< n_tam <<" veces" <<endl;
        imprimir(pArr, n_tam);
    } else {
        cout << "El numero no se encontro en el array." << endl;
    }
    return 0;
}