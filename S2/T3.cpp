#include <iostream>
using namespace std;

int main() {
    int day, month, year = 2025;
    string resultado;
    cout << "dia = ";
    cin >> day;
    cout << "mes = ";
    cin >> month;

    cout << "Respuesta: ";
    switch (resultado) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
    }

    // 1/1/25 -> Miercoles: 3
}