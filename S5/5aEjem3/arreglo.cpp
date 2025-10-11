#include <iostream>
using namespace std;

void llenarAleatorios(int *pArr, int tam) {
    for (int i = 0; i < tam; i++) {
        pArr[i] = rand() % 10;
    }
}
void imprimir(int *pArr, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
    cout << endl;
}

void busquedaNtam(int *pArr,int tam,int* n_tam, int bus) {
    *n_tam = 0;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] == bus) {
            *n_tam = *n_tam + 1;
        }
    }
}

void nuevoArray(int **pArr,int tam, int n_tam, int bus) {
    int *t_array = new int[n_tam];
    int indice = 0;

    for (int j = 0; j < tam; j++) {
        if ((*pArr)[j] == bus && indice < n_tam) {
            t_array[indice] = j;
            indice++;
        }
    }
    delete[] *pArr;
    *pArr = t_array;
}
