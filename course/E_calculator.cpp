#include <iostream>
using namespace std;

int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) {
    if (b != 0) return a / b;
    else {
        cout << "Error: Division entre cero" << endl;
        return 0;
    }
}

int main() {
    int option, num1, num2;
    do {
        cout << endl;
        cout << "\nCalculadora:\n";
        cout << "1. Suma\n2. Ingresar\n3. Multiplicar\n4. Dividir\n5. Salir\n";
        cout << "Elige una opcion: ";
        cin >> option;

        if (option == 1 && opcion <= 4) {
            cout << "Ingresa dos numeros";
            cin >> num1 >> num2;
        }

        switch (option) {
            case 1:
                cout << "Resultado: " << sumar(num1, num2) << endl;
                break;
            case 2:
                cout << "Resultado: " << restar(num1, num2) << endl;
                break;
            case 3:
                cout << "Resultado: " << multiplicar(num1, num2) << endl;
                break;
            case 4:
                cout << "Resultado: " << dividir(num1, num2) << endl;
            case 5:
                cout << "Saliendo del programa" << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (option != 5);

    return 0;
}