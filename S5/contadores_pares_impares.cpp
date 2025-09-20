#include <iostream>
using namespace std;
void contarParesImpares(int* numeros, int tam, int* pares, int* impares,
                        int* sumaPares, int* sumaImpares);

int main() {
    const int CANTIDAD = 20;
    int numeros[CANTIDAD]={0};

    cout << "========== CONTADOR DE PARES E IMPARES ==========\n";
    cout << "Ingrese " << CANTIDAD << " números enteros:\n\n";

    // Entrada de datos
    for (int i = 0; i < CANTIDAD; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Variables para almacenar resultados
    int pares, impares, sumaPares, sumaImpares;

    // Llamar función de análisis
    contarParesImpares(numeros, CANTIDAD, &pares, &impares, &sumaPares, &sumaImpares);

    // Mostrar resultados principales
    cout << "\n========== RESULTADOS ==========\n";
    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;
    cout << "Suma de números pares: " << sumaPares << endl;
    cout << "Suma de números impares: " << sumaImpares << endl;
    return 0;
}

void contarParesImpares(int* numeros, int tam, int* pares, int* impares,
                        int* sumaPares, int* sumaImpares) {
    // Inicializar contadores y acumuladores
    *pares = 0;
    *impares = 0;
    *sumaPares = 0;
    *sumaImpares = 0;

    // Recorrer arreglo con aritmética de punteros
    for (int i = 0; i < tam; i++) {
        // Verificar si es par o impar
        if (numeros[i] % 2 == 0) {
            (*pares)++;                    // Incrementar contador de pares
            *sumaPares += numeros[i];  // Sumar al acumulador de pares
        } else {
            (*impares)++;                  // Incrementar contador de impares
            *sumaImpares += numeros[i]; // Sumar al acumulador de impares
        }
    }
}