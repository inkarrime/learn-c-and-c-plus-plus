#include <iostream>
#include <iomanip>
using namespace std;

int** generarMatriz(int fils, int cols);
void llenarAleatorios(int **mat, int fils, int cols, int min, int max);
double promedio(int **mat, int fils, int cols);
void binario(int **mat, int fils, int cols, double prmd);
void imprimir(int **mat, int fils, int cols);

int main() {
    int fils, cols, **mat;
    cout << "filas columnas: ";
    cin >> fils >> cols;
    mat = generarMatriz(fils, cols);
    llenarAleatorios(mat, fils, cols, 0,255);
    imprimir(mat, fils, cols);
    prmd = promedio(mat, fils, cols);
    cout << "Promedio general: " << prmd << endl;
    cout << "Imagen binaria: ";
    imprimir()
    return 0;
}

int** generarMatriz(int fils, int cols) {
    int **mat;
    mat = new int*[fils];
    for (int i = 0; i < fils; i++) {
        mat[i] = new int[cols];
    }
    return mat;
}

void llenarAleatorios(int **mat, int fils, int cols, int min, int max) {
    for(int f=0; f<fils; f++) {
        for(int c=0; c<cols; c++) {
            mat[f][c] = rand()%(max-min+1) + min;
        }
    }
}
void binario(int **mat, int fils, int cols, double prmd) {
    for(int f=0; f<fils; f++) {
        for(int c=0; c<cols; c++) {

            mat[f][c];
        }
    }
    return suma / (fils * cols);
}
double promedio(int **mat, int fils, int cols) {
    double suma = 0;
    for(int f=0; f<fils; f++) {
        for(int c=0; c<cols; c++) {
            suma += mat[f][c];
        }
    }
    return suma / (fils * cols);
}
void imprimir(int **mat, int fils, int cols) {
    for(int f=0; f<fils; f++) {
        for(int c=0; c<cols; c++) {
            cout << setw(5) << mat[f][c];
        }
        cout << endl;
    }
}