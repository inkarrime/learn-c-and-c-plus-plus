#include <iostream>
using namespace std;
double calculadora(char op, int *pNum1, int *pNum2);

int main() {
    int num1, num2;
    char operador;

    cout << "Ingrese que operacion vas a realizar (+, -, *, /): ";
    cin >> operador;
    cout << "Ingrese primer numero: ";
    cin >> num1;
    cout << "Ingrese segundo numero: ";
    cin >> num2;

    double resultado = calculadora(operador, &num1, &num2);
    cout << "Resultado: " << resultado << endl;

    return 0;
}

double calculadora(char op, int *pNum1, int *pNum2) {
    switch(op) {
        case '+':
            return *pNum1 + *pNum2;
        case '-':
            return *pNum1 - *pNum2;
        case '*':
            return *pNum1 * *pNum2;
        case '/':
            if(*pNum2 != 0) {
                return (double)*pNum1 / *pNum2;
            } else {
                cout << "Error: División por cero" << endl;
                return 0;
            }
        default:
            cout << "Operador no válido" << endl;
            return 0;
    }
}