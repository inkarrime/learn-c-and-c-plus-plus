#include <iostream>
using namespace std;

int main() {
    // FOR: Contar del 1 al 5
    cout << "Ciclo for: contar del 1 al 5\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    cout << endl;

    // FOR con continue: mostrar del 1 al 5, excepto el 3
    cout << "Ciclo for con continue (se omite el 3)\n";
    for (int i = 2; i <= 6; i++) {
        if (i == 3) continue;
        cout << i << endl;
    }

    cout << endl;

    // FOR con break:  detener al llegar a 4
    cout << "Ciclo for con break (se detiene en 4)\n";
    for (int i = 1; i <= 5; i++) {
        if (i == 4) break;
        cout << i << endl;
    }

    cout << endl;

    // WHILE: contar del 1 al 5
    cout << "Ciclo while: contar del 1 al 5\n";
    int j = 1;
    while (j <= 5) {
        cout << j << endl;
        j++;
    }

    cout << endl;

    // WHILE con break: detener cuando el numero sea igual a 3
    cout << "Ciclo do while con break (se detiene al llegar a 3)\n";
    int k = 1;
    while (k <= 5) {
        if (k == 3) break;
        cout << k << endl;
        k++;
    }

    cout << endl;

    // DO-WHILE: contar del 1 al 5
    cout << "Ciclo do-while: contar del 1 al 5\n";
    int x = 1;
    do {
        cout << x << endl;
        x++;
    } while (x <= 5);

    cout << endl;

    // DO-WHILE con continue: omitir el numero 2
    cout << "Ciclo do-while con continue (se omite el 2)\n";
    int y = 1;
    do {
        if (y == 2) {
            y++;
            continue;
        }
        cout << y << endl;
        y++;
    } while (y <= 4);
}