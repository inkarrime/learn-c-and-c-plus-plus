#include <iostream>
using namespace std;

void imprimir(int *pArr, int tam);

int main() {
    srand(time(nullptr));
    const int tam = 30;
    int arr[tam];

    for (int i = 0; i < tam; i++) {
        arr[i] = rand() % 50 + 1;
    }

    imprimir(arr, tam);
    int cant = 0;
    for (int i = 0; i < tam; i++) {
        if (arr[i] > 25)
            cant++;
    }
    cout << "\nMayores que 25:" << cant;
    return 0;
}

void imprimir(int *pArr, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
}