#include <iostream>
#include <math.h>
#include <bits/valarray_after.h>
using namespace std;

const int TAM = 4;
const int MAX_TARGET = 100;

// Validacion
bool esPositivo(int numero);
bool esEntero(double numero);
bool sonTodosPositivos(int *pArr, int tam);
bool sonTodosEnteros(double *arr, int tam);
bool sonTodosDistintos(int *arr, int tam);
bool esArregloValido(int *arr, int tam, string &mensajeError);
// Operaciones
double aplicarOperacion(double a, double b, char op);
// Combinaciones


int main() {
    double tempArreglo[TAM];
    int arreglo[TAM];

    cout << "Entrada: ";
    for (int i = 0; i < TAM; i++) {
        cin >> tempArreglo[i];
    }

    if (!sonTodosEnteros(tempArreglo, TAM)) {
        cout << "Error: Los numeros ingresados deben ser enteros positivos distintos." << endl;
        return 1;
    }

    for (int i = 0; i < TAM; i++) {
        arreglo[i] = (int)tempArreglo[i];
    }

    string error;
    if (!esArregloValido(arreglo, TAM, error)) {
        cout << error << endl;
        return 1;
    }
    cout << endl;

    return 0;
}

bool esPositivo(int numero) {
    return numero > 0;
}
bool esEntero(double numero) {
    return numero == (int)numero;
}
bool sonTodosPositivos(int *pArr, int tam) {
    for (int i = 0; i < tam; i++) {
        if (!esPositivo(pArr[i])) {
            return false;
        }
    }
    return true;
}

bool sonTodosEnteros(double *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        if (!esEntero(arr[i])) {
            return false;
        }
    }
    return true;
}

bool sonTodosDistintos(int *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                return false;
            }
        }
    }
    return true;
}

bool esArregloValido(int *arr, int tam, string &mensajeError) {
    if (!sonTodosPositivos(arr, tam)) {
        mensajeError = "Error: Los numeros ingresados deben ser enteros positivos distintos.";
        return false;
    }

    if (!sonTodosDistintos(arr, tam)) {
        mensajeError = "Error: Los numeros ingresados deben ser enteros positivos distintos.";
        return false;
    }

    return true;
}

double aplicarOperacion(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) return -1;
            return a / b;
        case '^':
            if (b < 0 || b > 10) return -1;
            return pow(a, b);
        case '%':
            if (b == 0 || !esEntero(a) || !esEntero(b)) return -1;
            return (int)a % (int)b;
        default: return -1;
    }
}