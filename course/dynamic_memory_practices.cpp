#include <iostream>
using namespace std;

// Funcion para liberar memoria dinamica y evitar acceso accidental
void liberar(int*& ptr) {
    delete[] ptr;   // Libera la memoria
    ptr = nullptr;  // Asigna nullptr para evitar accesos posteriores
}

int main() {
    // Reservar memoria dinamica para 10 enteros
    int* datos = new int[10];

    // Inicializar los datos con valores de ejemplo
    for (int i = 0; i < 10; i++) {
        datos[i] = i + 1;
    }

    // Mostrar el primer elemento
    cout << "Primer elemento: " << datos[0] << endl;

    // Validar que el puntero no sea nullptr antes de usarlo
    if (datos != nullptr) {
        cout << "Segundo elemento: " << datos[1] << endl;
    }

    // Liberar la memoria usando la funcion
    liberar(datos);

    // Verificar que el puntero haya sido puesto es nullptr
    if (datos == nullptr) {
        cout << "Memoria liberada correctamente." << endl;
    }

    return 0;
}