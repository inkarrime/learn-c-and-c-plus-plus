#include <iostream>
#include <string>
using namespace std;

int calcularPorcentaje(int nota) {
    return (nota * 100) / 20;
}

string generarBarra(int nota, int& porcentaje) {
    string barra = "";

    porcentaje = calcularPorcentaje(nota);

    int barrasLlenas = (nota * 40) / 20;
    for (int i = 0; i < barrasLlenas; i++) {
        barra += "|";
    }

    int espaciosRestantes = 40 - (nota*2);
    for (int i = 0; i < espaciosRestantes; i++) {
        barra += " ";
    }

    return barra;
}

int main() {
    int nota, porcentaje;

    do {
        cout << "Nota: ";
        cin >> nota;
    } while (nota < 0 || nota > 20);

    cout << "0%" << generarBarra(nota, porcentaje) << porcentaje << "/100%" << endl;

    return 0;
}
