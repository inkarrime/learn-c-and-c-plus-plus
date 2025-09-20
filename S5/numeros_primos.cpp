#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int n) {
    // Casos especiales
    if (n <= 1) return false;  // 0, 1 y negativos no son primos
    if (n <= 3) return true;   // 2 y 3 son primos
    
    // Si es divisible por 2 o 3, no es primo
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    // Verificar divisibilidad hasta la raíz cuadrada de n
    // Optimización: solo verificar números de la forma 6k ± 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    
    return true;
}

// Función con punteros para contar primos y no primos
void contarPrimos(int* numeros, int tam, int* primos, int* noPrimos) {
    // Inicializar contadores
    *primos = 0;
    *noPrimos = 0;
    
    // Recorrer arreglo usando punteros
    for (int i = 0; i < tam; i++) {
        if (esPrimo(*(numeros + i))) {
            (*primos)++;
        } else {
            (*noPrimos)++;
        }
    }
}

// Función para encontrar divisores de un número
void mostrarDivisores(int n) {
    cout << "Divisores de " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    const int CANTIDAD = 10;
    int numeros[CANTIDAD];
    
    cout << "========== NÚMEROS PRIMOS ==========\n";
    cout << "Ingrese " << CANTIDAD << " números enteros positivos:\n\n";
    
    // Entrada de datos
    for (int i = 0; i < CANTIDAD; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
        
        // Validación para números positivos
        while (numeros[i] < 0) {
            cout << "Por favor ingrese un número positivo: ";
            cin >> numeros[i];
        }
    }
    
    // Variables para resultados
    int primos, noPrimos;
    
    // Contar primos y no primos
    contarPrimos(numeros, CANTIDAD, &primos, &noPrimos);
    
    // Mostrar resultados principales
    cout << "\n========== RESULTADOS ==========\n";
    cout << "Cantidad de números primos: " << primos << endl;
    cout << "Cantidad de números no primos: " << noPrimos << endl;
    cout << "Porcentaje de números primos: " 
         << (primos * 100.0 / CANTIDAD) << "%" << endl;
    
    // Mostrar clasificación detallada
    cout << "\n========== CLASIFICACIÓN DETALLADA ==========\n";
    
    cout << "\nNúmeros primos encontrados: ";
    bool hayPrimos = false;
    for (int i = 0; i < CANTIDAD; i++) {
        if (esPrimo(numeros[i])) {
            cout << numeros[i] << " ";
            hayPrimos = true;
        }
    }
    if (!hayPrimos) cout << "Ninguno";
    cout << endl;
    
    cout << "\nNúmeros no primos: ";
    bool hayNoPrimos = false;
    for (int i = 0; i < CANTIDAD; i++) {
        if (!esPrimo(numeros[i])) {
            cout << numeros[i] << " ";
            hayNoPrimos = true;
        }
    }
    if (!hayNoPrimos) cout << "Ninguno";
    cout << endl;
    
    // Análisis individual de cada número
    cout << "\n========== ANÁLISIS INDIVIDUAL ==========\n";
    for (int i = 0; i < CANTIDAD; i++) {
        cout << "\nNúmero " << numeros[i] << ": ";
        
        if (esPrimo(numeros[i])) {
            cout << "ES PRIMO";
        } else {
            cout << "NO ES PRIMO - ";
            mostrarDivisores(numeros[i]);
        }
    }
    
    // Encontrar el primo más grande y más pequeño
    cout << "\n\n========== ESTADÍSTICAS ADICIONALES ==========\n";
    
    int primoMayor = -1;
    int primoMenor = -1;
    
    for (int i = 0; i < CANTIDAD; i++) {
        if (esPrimo(numeros[i])) {
            if (primoMayor == -1 || numeros[i] > primoMayor) {
                primoMayor = numeros[i];
            }
            if (primoMenor == -1 || numeros[i] < primoMenor) {
                primoMenor = numeros[i];
            }
        }
    }
    
    if (primoMayor != -1) {
        cout << "Número primo más grande: " << primoMayor << endl;
        cout << "Número primo más pequeño: " << primoMenor << endl;
    } else {
        cout << "No se encontraron números primos en la lista" << endl;
    }
    
    // Mostrar información sobre números especiales
    cout << "\n========== CASOS ESPECIALES ==========\n";
    for (int i = 0; i < CANTIDAD; i++) {
        if (numeros[i] == 0) {
            cout << "El 0 no es primo ni compuesto" << endl;
        } else if (numeros[i] == 1) {
            cout << "El 1 no es considerado primo por convención" << endl;
        } else if (numeros[i] == 2) {
            cout << "El 2 es el único número primo par" << endl;
        }
    }
    
    return 0;
}