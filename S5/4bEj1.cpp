#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

void imprimir(int *pArr, int tam);
int separar_m5(int *pArr, int tam, int *pArr2);

int main() {
    srand(time(nullptr));
    const int tam = 100;
    int arreglo[tam], arreglo_5[tam] = {0}; // Inicializar en 0

    // Generar números aleatorios
    for (int i = 0; i < tam; i++) {
        arreglo[i] = rand() % 1000;
    }

    cout << "Array original:";
    imprimir(arreglo, tam);

    int cant = separar_m5(arreglo, tam, arreglo_5);

    cout << "\nMultiplos de 5 encontrados: " << cant;
    cout << "\nArray de multiplos de 5:";
    imprimir(arreglo_5, cant); // Solo imprimir 'cant' elementos

    return 0;
}

void imprimir(int *pArr, int tam) {
    cout << endl;
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl; // Salto cada 10 números
    }
}

int separar_m5(int *pArr, int tam, int *pArr2) {
    int cont = 0;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] % 5 == 0) {
            pArr2[cont] = pArr[i];
            cont++;
        }
    }
    return cont;
}