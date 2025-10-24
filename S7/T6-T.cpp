#include <iostream>
using namespace std;

int main() {
    int ancho, alto;

    do {
        cout << "Ingrese ancho: ";
        cin >> ancho;
        if (ancho < 5 || ancho % 2 == 0) {
            cout << "Acaso quieres una W? El ancho debe ser un número impar mayor o igual a 5." << endl;
        }
    } while (ancho < 5 || ancho % 2 == 0);
    do {
        cout << "Ingrese alto: ";
        cin >> alto;
        if (alto < ancho) {
            cout << "Queremos un M imponente! El alto debe ser mayor o igual al ancho." << endl;
        }
    } while (alto < ancho);

    char** matriz = new char*[alto];
    for (int i = 0; i < alto; i++) {
        matriz[i] = new char[ancho];
    }

    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            matriz[i][j] = '_';

            if (j == 0) {
                matriz[i][j] = '#';
            } else if (j == ancho - 1) {
                matriz[i][j] = '#';
            } else if (i < ancho / 2 + 1) {
                if (i == j) {
                    matriz[i][j] = '#';
                } else if (i == ancho - j - 1) {
                    matriz[i][j] = '#';
                }
            }
        }
    }

    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            cout << matriz[i][j];
            if (j < ancho - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < alto; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}