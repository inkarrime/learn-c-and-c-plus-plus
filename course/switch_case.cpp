#include <iostream>
using namespace std;

int main() {
    int option = 2;
    switch (option) {
        case 1:
            cout << "Seleccionaste 1" << endl;
            break;
        case 2:
            cout << "Seleccionaste 2" << endl;
            break;
        case 3:
            cout << "Seleccionaste 3" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    char optionChar =  'b';
    switch (optionChar) {
        case 'a':
            cout << "Elegiste la opcion A" << endl;
            break;
        case 'b':
            cout << "Elegiste la opcion B" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
    }

    int day = 4;
    switch (day) {
        case 1: case 2: case 3: case 4: case 5:
            cout << "Es dia laboral" << endl;
            break;
        case 6: case 7:
            cout << "Es fin de semana" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
    }
}