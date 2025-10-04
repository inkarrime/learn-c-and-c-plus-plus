#include <iostream>
#include <iomanip>
using namespace std;
int** matrizAleatoria(int sizemat);
void llenarAleatorios(int **mat, int sizemat);
void imprimir(int **mat, int sizemat);
void rotarArribaAbajo(int **mat, int sizemat);
void rotarIzqDer(int **mat, int sizemat);

int main() {
    int sizemat, **mat;
    cout << "Ingrese la tamano de la matriz cuadrada: ";
    cin >> sizemat;

    mat = matrizAleatoria(sizemat);
    llenarAleatorios(mat, sizemat);
    imprimir(mat, sizemat);
    cout << "Luego de rotar de arriba hacia abajo, la matriz queda asi:" << endl;
    rotarArribaAbajo(mat, sizemat);
    imprimir(mat, sizemat);
    cout << "Luego de rotar de izquierda a derecha, la matriz queda asi:" << endl;
    rotarIzqDer(mat, sizemat);
    imprimir(mat, sizemat);

    return 0;
}

int** matrizAleatoria(int sizemat) {
    int **mat;
    mat = new int*[sizemat];
    for (int i = 0; i < sizemat; i++) {
        mat[i] = new int[sizemat];
    }
    return mat;
}
void llenarAleatorios(int **mat, int sizemat) {
    for (int i = 0; i < sizemat; i++) {
        for (int j = 0; j < sizemat; j++) {
            mat[i][j] = rand() % 100;
        }
    }
}
void imprimir(int **mat, int sizemat) {
    for (int i = 0; i < sizemat; i++) {
        for (int j = 0; j < sizemat; j++) {
            cout << setw(5)<< mat[i][j];
        }
        cout << endl;
    }
}
void rotarArribaAbajo(int **mat, int sizemat) {
    int* tmp = mat[sizemat - 1];
    for (int f = sizemat - 1; f > 0; f--) {
        mat[f] = mat[f - 1];
    }
    mat[0] = tmp;
}
void rotarIzqDer(int **mat, int sizemat) {
    
}