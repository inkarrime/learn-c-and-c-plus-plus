#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        // 0,0
        // 0,1
        // 0,2
        // 1,0...
    }

    matrix[1][2] = 100;

    // Sumar todos los elementos de una matriz
    int suma = 0;
    for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {
            suma += matrix[k][l];
        }
    }
    cout << "Suma total: " << suma << endl;

    return 0;
}