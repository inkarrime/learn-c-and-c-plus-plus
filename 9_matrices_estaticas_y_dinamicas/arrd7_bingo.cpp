#include <iostream>
#include <iomanip>
using namespace std;
int** crearMatriz(int fils, int cols);
int** crearBingo();
int   comparar(int **oficial, int **jugador);
void  imprimir(int** mat, int fils, int cols);
int main() {
    int **oficial = crearBingo();
    int **jugador = crearBingo();
    imprimir(oficial,5,5);
    imprimir(jugador,5,5);
    int aciertos = comparar(oficial, jugador);
    cout << "Acierto: " << aciertos << endl;
    return 0;
}
int **crearMatriz(int fils, int cols) {
    int **mat = new int*[fils];
    for (int i = 0; i < fils; i++) {
        mat[i] = new int[cols];
    }
    return mat;
}
int** crearBingo() {
    int **mat = crearMatriz(5,5);
    for (int f = 0; f < 5; f++) {
        for (int c = 0; c < 5; c++) {
            mat[f][c] = (c*15) + rand()%15 + 1;
        }
    }
    return mat;
}
void  imprimir(int** mat, int fils, int cols) {
    for(int f = 0; f < fils; f++) {
        for(int c = 0; c < cols; c++) {
            cout << setw(3) << mat[f][c];
        }
        cout << endl;
    }
}
int   comparar(int **oficial, int **jugador) {
    int aciertos = 0;
    for(int c=0; c < 5; c++) {
        for(int f=0; f < 5; f++) {
            for(int f2 = 0; f2 < 5; f2++) {
                if (oficial[f][c] == jugador[f2][c]) {
                    aciertos++;
                }
            }
        }
    }
    return aciertos;
}