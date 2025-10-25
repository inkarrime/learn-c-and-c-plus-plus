#include <iostream>
using namespace std;

void actualizaPuntosAzul(int* ptosAzul);
void actualizaPuntosRojo(int* ptosRojo);
void imprimeTablasPuntos(int* ptosAzul, int* ptosRojo);

int main() {
    int puntosAzul = 0;
    int puntosRojo = 0;
    int opcion;

    do {
        cout << "\n========================================\n";
        cout << "               MENU\n";
        cout << "========================================\n";
        cout << "1. INGRESA PUNTOS AZUL\n";
        cout << "2. INGRESA PUNTOS ROJO\n";
        cout << "3. IMPRIME PUNTAJES\n";
        cout << "4. SALIR\n";
        cout << "========================================\n";
        cout << "Ingrese opcion (1-4): ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                actualizaPuntosAzul(&puntosAzul);
                break;
            case 2:
                actualizaPuntosRojo(&puntosRojo);
                break;
            case 3:
                imprimeTablasPuntos(&puntosAzul, &puntosRojo);
                break;
            case 4:
                cout << "\nSaliendo del programa...\n";
                break;
            default:
                cout << "\nOpcion invalida. Intente nuevamente.\n";
        }

    } while(opcion != 4);

    return 0;
}

void actualizaPuntosAzul(int* ptosAzul) {
    int puntos;
    cout << "\nIngrese puntos Equipo Azul: ";
    cin >> puntos;

    if(puntos < 0) {
        cout << "No se permiten puntos negativos.\n";
        return;
    }

    *ptosAzul += puntos;
    cout << "Puntos actualizados correctamente.\n";
}

void actualizaPuntosRojo(int* ptosRojo) {
    int puntos;
    cout << "\nIngrese puntos Equipo Rojo: ";
    cin >> puntos;

    if(puntos < 0) {
        cout << "No se permiten puntos negativos.\n";
        return;
    }

    *ptosRojo += puntos;
    cout << "Puntos actualizados correctamente.\n";
}

void imprimeTablasPuntos(int* ptosAzul, int* ptosRojo) {
    cout << "\n========================================\n";
    cout << "          TABLA DE PUNTAJES\n";
    cout << "========================================\n";

    // Determinar ganador y orden de impresión
    if(*ptosRojo > *ptosAzul) {
        cout << "PRIMER PUESTO: EQUIPO ROJO con " << *ptosRojo << " puntos...\n";
        cout << "SEGUNDO PUESTO: EQUIPO AZUL con " << *ptosAzul << " puntos...\n";
    }
    else if(*ptosAzul > *ptosRojo) {
        cout << "PRIMER PUESTO: EQUIPO AZUL con " << *ptosAzul << " puntos...\n";
        cout << "SEGUNDO PUESTO: EQUIPO ROJO con " << *ptosRojo << " puntos...\n";
    }
    else {
        cout << "EMPATE: Ambos equipos tienen " << *ptosAzul << " puntos.\n";
    }
    cout << "========================================\n";
}