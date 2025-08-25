#include <iostream>
using namespace std;

void duplicarElementos(int* arr, int tam) {
    for (int i = 0; i < tam; i++) {
        arr[i] *=2;
    }
}

int main() {
    int numeros[] = {1,2,3,4,5};
    duplicarElementos(numeros, 5);
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    return 0;
}

// Tambien podemos manipular cadenas con punteros
// Recorrido secuencial con puntero
void mostrarLetras(const char* str) {
    while (*str != '\0') {
        cout << *str << endl;
        str++;
    }
}