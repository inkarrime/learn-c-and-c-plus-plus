#include <iostream>
#include <cstdlib>
#include <ctime>
#include "arreglo.h"
using namespace std;

int buscarDato(int* pArr, int tam, int dato);
void crearArrayPosiciones(int* pArr, int tam, int dato, int* pPosiciones, int& cantOcurrencias);

int main() {
    srand(time(0));
    
    int tamano;

    cout << "Ingrese el tamanio del array: ";
    cin >> tamano;

    int* arr = new int[tamano];

    llenarAleatorios(arr, tamano);

    cout << "\nArray generado:";
    imprimir(arr, tamano);
    cout << endl;

    int datoBuscar;
    cout << "\nIngrese el numero a buscar: ";
    cin >> datoBuscar;

    int cantidadVeces = buscarDato(arr, tamano, datoBuscar);

    if (cantidadVeces == 0) {
        cout << "\nEl dato " << datoBuscar << " NO se encuentra en el array." << endl;
    } else {
        cout << "\nEl dato " << datoBuscar << " aparece " << cantidadVeces << " vez/veces en el array." << endl;

        int* posiciones = new int[cantidadVeces];
        int ocurrencias = 0;
        
        crearArrayPosiciones(arr, tamano, datoBuscar, posiciones, ocurrencias);

        cout << "Posiciones donde se encuentra: ";
        for (int i = 0; i < ocurrencias; i++) {
            cout << posiciones[i];
            if (i < ocurrencias - 1) cout << ", ";
        }
        cout << endl;

        delete[] posiciones;
    }

    delete[] arr;
    
    return 0;
}

int buscarDato(int* pArr, int tam, int dato) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] == dato) {
            contador++;
        }
    }
    return contador;
}

void crearArrayPosiciones(int* pArr, int tam, int dato, int* pPosiciones, int& cantOcurrencias) {
    cantOcurrencias = 0;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] == dato) {
            pPosiciones[cantOcurrencias] = i;
            cantOcurrencias++;
        }
    }
}