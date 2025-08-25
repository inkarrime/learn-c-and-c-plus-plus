#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 42;
    cout << *ptr << endl;
    delete ptr;

    int* arreglo = new int[5];
    for (int i = 0; i < 5; i++) {
        arreglo[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    delete[] arreglo;

    // Crear arreglo dinamico segun lo que indique el usuario
    int n;
    cout << "Cuantos elementos quieres?: ";
    cin >> n;
    int* datos = new int[n];
    for (int i = 0; i < n; i++) {
        datos[i] = i * 2;
    }

    for (int i = 0; i < n; i++) {
        cout << datos[i] << " ";
    }
    cout << endl;

    // Uso de datos
    delete[] datos;

    return 0;
}