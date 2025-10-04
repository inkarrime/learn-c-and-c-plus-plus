#include <iostream>
using namespace std;

// Función que invierte un arreglo usando punteros
void invertirArreglo(int* arr, int tam) {
    // Usar dos punteros: uno al inicio y otro al final
    int* inicio = arr;
    int* fin = arr + tam - 1;
    
    // Intercambiar elementos mientras los punteros no se crucen
    while (inicio < fin) {
        // Intercambiar valores usando una variable temporal
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        
        // Mover punteros hacia el centro
        inicio++;
        fin--;
    }
}

// Función alternativa de inversión (para demostración)
void invertirArregloIndices(int* arr, int tam) {
    for (int i = 0; i < tam / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + tam - 1 - i);
        *(arr + tam - 1 - i) = temp;
    }
}

// Función para mostrar un arreglo
void mostrarArreglo(int* arr, int tam, const char* mensaje) {
    cout << mensaje;
    for (int i = 0; i < tam; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    const int TAM = 10;
    int numeros[TAM];
    int copia[TAM];  // Para demostrar método alternativo
    
    cout << "========== INVERSIÓN DE ARREGLO ==========\n";
    cout << "Ingrese " << TAM << " números enteros:\n\n";
    
    // Entrada de datos
    for (int i = 0; i < TAM; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
        copia[i] = numeros[i];  // Guardar copia
    }
    
    // Mostrar arreglo original
    cout << "\n========== ARREGLO ORIGINAL ==========\n";
    mostrarArreglo(numeros, TAM, "Elementos: ");
    
    // Mostrar índices para claridad
    cout << "Índices:   ";
    for (int i = 0; i < TAM; i++) {
        cout << "[" << i << "] ";
    }
    cout << endl;
    
    // Invertir el arreglo usando punteros
    invertirArreglo(numeros, TAM);
    
    // Mostrar arreglo invertido
    cout << "\n========== ARREGLO INVERTIDO ==========\n";
    mostrarArreglo(numeros, TAM, "Elementos: ");
    
    // Mostrar proceso de inversión paso a paso
    cout << "\n========== PROCESO DE INVERSIÓN ==========\n";
    cout << "El algoritmo intercambia elementos simétricos:\n";
    
    // Restaurar arreglo original para mostrar el proceso
    for (int i = 0; i < TAM; i++) {
        numeros[i] = copia[i];
    }
    
    // Mostrar cada paso de la inversión
    int* inicio = numeros;
    int* fin = numeros + TAM - 1;
    int paso = 1;
    
    while (inicio < fin) {
        cout << "\nPaso " << paso << ": ";
        cout << "Intercambiar posición " << (inicio - numeros) 
             << " (valor " << *inicio << ") con posición " 
             << (fin - numeros) << " (valor " << *fin << ")" << endl;
        
        // Realizar intercambio
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        
        // Mostrar estado actual
        cout << "Estado: ";
        for (int i = 0; i < TAM; i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;
        
        inicio++;
        fin--;
        paso++;
    }
    
    // Análisis adicional
    cout << "\n========== ANÁLISIS ==========\n";
    cout << "Número de intercambios realizados: " << (TAM / 2) << endl;
    cout << "Complejidad temporal: O(n/2) = O(n)" << endl;
    cout << "Complejidad espacial: O(1) - inversión in-place" << endl;
    
    // Verificación de palíndromo
    cout << "\n========== VERIFICACIÓN DE PALÍNDROMO ==========\n";
    bool esPalindromo = true;
    for (int i = 0; i < TAM / 2; i++) {
        if (copia[i] != numeros[i]) {
            esPalindromo = false;
            break;
        }
    }
    
    if (esPalindromo) {
        cout << "El arreglo original es un palíndromo ";
        cout << "(es igual a su inversión)" << endl;
    } else {
        cout << "El arreglo original NO es un palíndromo" << endl;
    }
    
    // Demostrar método alternativo
    cout << "\n========== MÉTODO ALTERNATIVO (con índices) ==========\n";
    
    // Restaurar copia original
    for (int i = 0; i < TAM; i++) {
        copia[i] = numeros[TAM - 1 - i];  // Copiar del invertido al original
    }
    
    cout << "Arreglo antes de inversión alternativa: ";
    for (int i = 0; i < TAM; i++) {
        cout << copia[i] << " ";
    }
    cout << endl;
    
    invertirArregloIndices(copia, TAM);
    
    cout << "Arreglo después de inversión alternativa: ";
    for (int i = 0; i < TAM; i++) {
        cout << copia[i] << " ";
    }
    cout << endl;
    
    return 0;
}