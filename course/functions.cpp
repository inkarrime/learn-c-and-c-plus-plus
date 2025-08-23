#include <iostream>
using namespace std;

// Funcion definida antes de main
void saludar() {
    cout << "Hola, esto es una funcion!" << endl;
}

// Declaracion de funcion antes ed main
void imprimirMensaje();

int main() {
    saludar();
    saludar();

    imprimirMensaje();

    return 0;
}

// Definicion de la funcion despues de main
void imprimirMensaje() {
    cout << "Hola, esto es una funcion declarada!" << endl;
}