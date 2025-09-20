#include <iostream>
using namespace std;

int main() {
    int dia, mes;

    cout << "dia = ";
    cin >> dia;
    cout << "mes = ";
    cin >> mes;
    cout << "Respuesta: ";

    int diasEnMes;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: diasEnMes = 31; break;
        case 4: case 6: case 9: case 11: diasEnMes = 30; break;
        case 2: diasEnMes = 28; break;
    }

    int diasTranscurridos = 0;
    for (int i = 1; i < mes; i++) {
        int diasMes;
        switch (i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: diasMes = 31; break;
            case 4: case 6: case 9: case 11: diasMes = 30; break;
            case 2: diasMes = 28; break;
        }
        diasTranscurridos += diasMes;
    }
    diasTranscurridos += dia - 1;

    int diaBase = 2;
    int diaSemana = (diaBase + diasTranscurridos) % 7;

    switch (diaSemana) {
        case 0: cout << "Lunes" << endl; break;
        case 1: cout << "Martes" << endl; break;
        case 2: cout << "Miercoles" << endl; break;
        case 3: cout << "Jueves" << endl; break;
        case 4: cout << "Viernes" << endl; break;
        case 5: cout << "Sabado" << endl; break;
        case 6: cout << "Domingo" << endl; break;
    }

    cout << endl;
    return 0;
}