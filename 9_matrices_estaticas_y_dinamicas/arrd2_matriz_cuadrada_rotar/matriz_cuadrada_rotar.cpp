#include <iostream>
#include "matriz.h"
using namespace std;
void rotarArribaAbajo(int **mat, int fils);
void rotarIzqDer(int **mat, int fils);
int main() {
    int fils;
    cout << "Filas:";
    cin >> fils;

    int **mat = generarMatriz(fils, fils);
    llenarAleatorios(mat, fils, fils, 0,99);
    imprimir(mat, fils, fils);

    cout << "\nRotar arriba abajo:\n";
    rotarArribaAbajo(mat, fils);
    imprimir(mat, fils, fils);

    return 0;
}
void rotarArribaAbajo(int **mat, int fils) {
    int* tmp = mat[fils-1];
    for(int f=fils-1; f > 0; f--) {
        mat[f] = mat[f-1];
    }
    mat[0] = tmp;
}