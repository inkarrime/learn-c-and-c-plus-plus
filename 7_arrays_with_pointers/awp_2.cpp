#include <iostream>
using namespace std;
void imprimir(int *pArr, int tam);
int separar_mul5(int *pArr, int tam, int *pArr2);
int main() {
    srand(time(nullptr));
    const int tam = 100;
    int arreglo[tam], arreglo_5[tam];
    for (int i = 0; i < tam; i++) {
        arreglo[i] = rand() % 1000;
    }
    imprimir(arreglo, tam);
    int cant = separar_mul5(arreglo, tam, arreglo_5);
    imprimir(arreglo_5, cant);
    return 0;
}
void imprimir(int *pArr, int tam) {
    cout << endl;
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
}
int separar_mul5(int *pArr, int tam, int *pArr2) {
    int cont = 0;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] % 5 == 0) {
            pArr2[cont] = pArr[i];
            cont++;
        }
    }
    return cont;
}
