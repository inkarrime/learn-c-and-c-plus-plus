#include <iostream>
#include <iomanip>
using namespace std;
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
void imprimir(int **mat, int fils, int cols) {
    for(int f=0; f<fils; f++) {
        for(int c=0; c<cols; c++) {
            cout << setw(5) << mat[f][c];
        }
        cout << endl;
    }
}