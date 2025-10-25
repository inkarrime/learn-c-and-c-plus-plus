#include <iostream>
using namespace std;

double calculadora(char op, int* pNum1, int* pNum2);

int main() {
    int num1, num2;
    char operador;
    double resultado;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    resultado = calculadora(operador, &num1, &num2);

    cout << "\nResultado: " << resultado << endl;

    return 0;
}

double calculadora(char op, int* pNum1, int* pNum2) {
    double resultado;

    switch(op) {
        case '+':
            resultado = *pNum1 + *pNum2;
            break;

        case '-':
            resultado = *pNum1 - *pNum2;
            break;

        case '*':
            resultado = *pNum1 * *pNum2;
            break;

        case '/':
            if(*pNum2 == 0) {
                cout << "ERROR: Division por cero!\n";
                return 0;
            }
            resultado = (double)(*pNum1) / (*pNum2);
            break;

        default:
            cout << "Operador invalido!\n";
            return 0;
    }

    return resultado;
}