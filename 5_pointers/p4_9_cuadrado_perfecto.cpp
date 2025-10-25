#include <iostream>
using namespace std;

void cuadradoPerfecto(int* p);

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;
    
    cout << "Valor original: " << numero << endl;

    cuadradoPerfecto(&numero);
    
    cout << "Valor al cuadrado: " << numero << endl;
    
    return 0;
}

void cuadradoPerfecto(int* p) {
    *p = (*p) * (*p);
}