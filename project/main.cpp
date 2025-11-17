#include <iostream>
#include <cmath>
#include <string>
using namespace std;

const int TAM = 4;
const int MAX_TARGET = 100;

bool esPositivo(int numero);
bool esEntero(double numero);
bool sonTodosPositivos(int *pArr, int tam);
bool sonTodosEnteros(double *arr, int tam);
bool sonTodosDistintos(int *arr, int tam);
bool esArregloValido(int *arr, int tam, string &mensajeError);

long long factorial(int n);
double aplicarOperacion(double a, double b, char op);

void generarPermutaciones(int *arr, int inicio, int fin, bool *encontrados, string *expresiones);
void probarCombinaciones(int *nums, bool *encontrados, string *expresiones);
void probarDosNumeros(int a, int b, bool *encontrados, string *expresiones);
void probarTresNumeros(int a, int b, int c, bool *encontrados, string *expresiones);
void probarCuatroNumeros(int a, int b, int c, int d, bool *encontrados, string *expresiones);

void guardarResultado(double resultado, string expresion, bool *encontrados, string *expresiones);
void mostrarResultados(bool *encontrados, string *expresiones);

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

    bool encontrados[MAX_TARGET + 1] = {false};
    string expresiones[MAX_TARGET + 1];

    cout << "\nNumeros generados del 1 al 100:" << endl;

    generarPermutaciones(arreglo, 0, TAM - 1, encontrados, expresiones);
    mostrarResultados(encontrados, expresiones);

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

long long factorial(int n) {
    if (n < 0 || n > 20) return -1;
    if (n == 0 || n == 1) return 1;
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

double aplicarOperacion(double a, double b, char op) {
    switch(op) {
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

void guardarResultado(double resultado, string expresion, bool *encontrados,
                      string *expresiones) {
    if (!esEntero(resultado)) return;
    int valor = (int)resultado;
    if (valor >= 1 && valor <= MAX_TARGET && !encontrados[valor]) {
        encontrados[valor] = true;
        expresiones[valor] = expresion;
    }
}

void generarPermutaciones(int *arr, int inicio, int fin, bool *encontrados,
                          string *expresiones) {
    if (inicio == fin) {
        probarCombinaciones(arr, encontrados, expresiones);
        return;
    }

    for (int i = inicio; i <= fin; i++) {
        int temp = arr[inicio];
        arr[inicio] = arr[i];
        arr[i] = temp;

        generarPermutaciones(arr, inicio + 1, fin, encontrados, expresiones);

        temp = arr[inicio];
        arr[inicio] = arr[i];
        arr[i] = temp;
    }
}

void probarCombinaciones(int *nums, bool *encontrados, string *expresiones) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i != j) {
                probarDosNumeros(nums[i], nums[j], encontrados, expresiones);
            }
        }
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            for (int k = 0; k < TAM; k++) {
                if (i != j && i != k && j != k) {
                    probarTresNumeros(nums[i], nums[j], nums[k], encontrados, expresiones);
                }
            }
        }
    }

    probarCuatroNumeros(nums[0], nums[1], nums[2], nums[3], encontrados, expresiones);
}

void probarDosNumeros(int a, int b, bool *encontrados, string *expresiones) {
    char operaciones[] = {'+', '-', '*', '/', '^', '%'};

    for (int i = 0; i < 6; i++) {
        double resultado = aplicarOperacion(a, b, operaciones[i]);
        if (resultado >= 0) {
            string expr = "(" + to_string(a) + " " + operaciones[i] + " " + to_string(b) + ")";
            guardarResultado(resultado, expr, encontrados, expresiones);
        }
    }

    long long factA = factorial(a);
    long long factB = factorial(b);

    if (factA > 0) {
        for (int i = 0; i < 6; i++) {
            double resultado = aplicarOperacion(factA, b, operaciones[i]);
            if (resultado >= 0) {
                string expr = "(" + to_string(a) + "! " + operaciones[i] + " " + to_string(b) + ")";
                guardarResultado(resultado, expr, encontrados, expresiones);
            }
        }
    }

    if (factB > 0) {
        for (int i = 0; i < 6; i++) {
            double resultado = aplicarOperacion(a, factB, operaciones[i]);
            if (resultado >= 0) {
                string expr = "(" + to_string(a) + " " + operaciones[i] + " " + to_string(b) + "!)";
                guardarResultado(resultado, expr, encontrados, expresiones);
            }
        }
    }
}

void probarTresNumeros(int a, int b, int c, bool *encontrados, string *expresiones) {
    char ops[] = {'+', '-', '*', '/', '^'};

    for (int i = 0; i < 5; i++) {
        double temp = aplicarOperacion(a, b, ops[i]);
        if (temp >= 0) {
            for (int j = 0; j < 5; j++) {
                double resultado = aplicarOperacion(temp, c, ops[j]);
                if (resultado >= 0) {
                    string expr = "((" + to_string(a) + " " + ops[i] + " " +
                                  to_string(b) + ") " + ops[j] + " " + to_string(c) + ")";
                    guardarResultado(resultado, expr, encontrados, expresiones);
                }
            }
        }
    }
}

void probarCuatroNumeros(int a, int b, int c, int d, bool *encontrados,
                         string *expresiones) {
    char ops[] = {'+', '-', '*', '/'};

    for (int i = 0; i < 4; i++) {
        double temp1 = aplicarOperacion(a, b, ops[i]);
        if (temp1 >= 0) {
            for (int j = 0; j < 4; j++) {
                double temp2 = aplicarOperacion(temp1, c, ops[j]);
                if (temp2 >= 0) {
                    for (int k = 0; k < 4; k++) {
                        double resultado = aplicarOperacion(temp2, d, ops[k]);
                        if (resultado >= 0) {
                            string expr = "(((" + to_string(a) + " " + ops[i] + " " +
                                          to_string(b) + ") " + ops[j] + " " +
                                          to_string(c) + ") " + ops[k] + " " + to_string(d) + ")";
                            guardarResultado(resultado, expr, encontrados, expresiones);
                        }
                    }
                }
            }
        }
    }
}

void mostrarResultados(bool *encontrados, string *expresiones) {
    cout << "\nNumeros no generados:" << endl;
    bool hayNoGenerados = false;

    for (int i = 1; i <= MAX_TARGET; i++) {
        if (encontrados[i]) {
            cout << i << ": " << expresiones[i] << endl;
        } else {
            if (!hayNoGenerados) {
                hayNoGenerados = true;
            }
        }
    }
    cout << "Numeros no generados: " << endl;
    if (hayNoGenerados) {
        for (int i = 1; i <= MAX_TARGET; i++) {
            if (!encontrados[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
    } else {
        cout << "Ninguno" << endl;
    }
}