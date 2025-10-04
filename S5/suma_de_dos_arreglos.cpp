#include <iostream>
using namespace std;

// Función con punteros para sumar dos arreglos
void sumarArreglos(int* arr1, int* arr2, int* resultado, int tam) {
    // Recorrer ambos arreglos y sumar elemento a elemento
    for (int i = 0; i < tam; i++) {
        *(resultado + i) = *(arr1 + i) + *(arr2 + i);
        // También válido: resultado[i] = arr1[i] + arr2[i];
    }
}

// Función adicional para restar arreglos
void restarArreglos(int* arr1, int* arr2, int* resultado, int tam) {
    for (int i = 0; i < tam; i++) {
        *(resultado + i) = *(arr1 + i) - *(arr2 + i);
    }
}

// Función para multiplicar elemento a elemento
void multiplicarArreglos(int* arr1, int* arr2, int* resultado, int tam) {
    for (int i = 0; i < tam; i++) {
        *(resultado + i) = *(arr1 + i) * *(arr2 + i);
    }
}

// Función para mostrar un arreglo
void mostrarArreglo(int* arr, int tam, const char* nombre) {
    cout << nombre << ": ";
    for (int i = 0; i < tam; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Función para calcular estadísticas de un arreglo
void calcularEstadisticas(int* arr, int tam, int* suma, float* promedio, int* max, int* min) {
    *suma = 0;
    *max = *arr;
    *min = *arr;
    
    for (int i = 0; i < tam; i++) {
        *suma += *(arr + i);
        
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
        
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
    }
    
    *promedio = (float)*suma / tam;
}

int main() {
    const int TAM = 10;
    int arreglo1[TAM], arreglo2[TAM];
    int suma[TAM], resta[TAM], producto[TAM];
    
    cout << "========== SUMA DE DOS ARREGLOS ==========\n";
    
    // Entrada del primer arreglo
    cout << "\nIngrese los elementos del PRIMER arreglo:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo1[i];
    }
    
    // Entrada del segundo arreglo
    cout << "\nIngrese los elementos del SEGUNDO arreglo:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo2[i];
    }
    
    // Realizar operaciones
    sumarArreglos(arreglo1, arreglo2, suma, TAM);
    restarArreglos(arreglo1, arreglo2, resta, TAM);
    multiplicarArreglos(arreglo1, arreglo2, producto, TAM);
    
    // Mostrar arreglos originales
    cout << "\n========== ARREGLOS ORIGINALES ==========\n";
    mostrarArreglo(arreglo1, TAM, "Arreglo 1");
    mostrarArreglo(arreglo2, TAM, "Arreglo 2");
    
    // Mostrar resultados de operaciones
    cout << "\n========== RESULTADOS DE OPERACIONES ==========\n";
    
    cout << "\nSUMA elemento a elemento:\n";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo1[i] << " + " << arreglo2[i] << " = " << suma[i] << endl;
    }
    
    cout << "\nRESTA elemento a elemento:\n";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo1[i] << " - " << arreglo2[i] << " = " << resta[i] << endl;
    }
    
    cout << "\nPRODUCTO elemento a elemento:\n";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo1[i] << " × " << arreglo2[i] << " = " << producto[i] << endl;
    }
    
    // Estadísticas de cada arreglo
    cout << "\n========== ESTADÍSTICAS ==========\n";
    
    int suma1, suma2, sumaTotal;
    float promedio1, promedio2, promedioTotal;
    int max1, min1, max2, min2, maxTotal, minTotal;
    
    // Estadísticas del arreglo 1
    calcularEstadisticas(arreglo1, TAM, &suma1, &promedio1, &max1, &min1);
    cout << "\nArreglo 1:\n";
    cout << "  Suma: " << suma1 << endl;
    cout << "  Promedio: " << promedio1 << endl;
    cout << "  Máximo: " << max1 << endl;
    cout << "  Mínimo: " << min1 << endl;
    
    // Estadísticas del arreglo 2
    calcularEstadisticas(arreglo2, TAM, &suma2, &promedio2, &max2, &min2);
    cout << "\nArreglo 2:\n";
    cout << "  Suma: " << suma2 << endl;
    cout << "  Promedio: " << promedio2 << endl;
    cout << "  Máximo: " << max2 << endl;
    cout << "  Mínimo: " << min2 << endl;
    
    // Estadísticas del arreglo suma
    calcularEstadisticas(suma, TAM, &sumaTotal, &promedioTotal, &maxTotal, &minTotal);
    cout << "\nArreglo Suma:\n";
    cout << "  Suma total: " << sumaTotal << endl;
    cout << "  Promedio: " << promedioTotal << endl;
    cout << "  Máximo: " << maxTotal << endl;
    cout << "  Mínimo: " << minTotal << endl;
    
    // Verificación de la suma
    cout << "\n========== VERIFICACIÓN ==========\n";
    cout << "Suma de todos los elementos del arreglo 1: " << suma1 << endl;
    cout << "Suma de todos los elementos del arreglo 2: " << suma2 << endl;
    cout << "Suma esperada en el arreglo resultado: " << (suma1 + suma2) << endl;
    cout << "Suma real en el arreglo resultado: " << sumaTotal << endl;
    
    if (sumaTotal == suma1 + suma2) {
        cout << "✓ La suma es correcta!" << endl;
    } else {
        cout << "✗ Error en la suma!" << endl;
    }
    
    // Visualización gráfica simple
    cout << "\n========== VISUALIZACIÓN GRÁFICA ==========\n";
    cout << "Comparación de valores (escala: * = 5 unidades):\n\n";
    
    for (int i = 0; i < TAM; i++) {
        cout << "Posición [" << i << "]:\n";
        
        // Arreglo 1
        cout << "  Arr1(" << arreglo1[i] << "): ";
        int barras1 = arreglo1[i] / 5;
        if (arreglo1[i] > 0) {
            for (int j = 0; j < barras1; j++) cout << "*";
        }
        cout << endl;
        
        // Arreglo 2
        cout << "  Arr2(" << arreglo2[i] << "): ";
        int barras2 = arreglo2[i] / 5;
        if (arreglo2[i] > 0) {
            for (int j = 0; j < barras2; j++) cout << "*";
        }
        cout << endl;
        
        // Suma
        cout << "  Suma(" << suma[i] << "): ";
        int barrasSuma = suma[i] / 5;
        if (suma[i] > 0) {
            for (int j = 0; j < barrasSuma; j++) cout << "■";
        }
        cout << endl << endl;
    }
    
    // Análisis adicional: encontrar posiciones donde la suma es máxima/mínima
    cout << "========== ANÁLISIS ADICIONAL ==========\n";
    
    // Encontrar posición del máximo en la suma
    int posMax = 0;
    for (int i = 1; i < TAM; i++) {
        if (suma[i] > suma[posMax]) {
            posMax = i;
        }
    }
    
    // Encontrar posición del mínimo en la suma
    int posMin = 0;
    for (int i = 1; i < TAM; i++) {
        if (suma[i] < suma[posMin]) {
            posMin = i;
        }
    }
    
    cout << "La suma máxima está en la posición [" << posMax << "] = " 
         << suma[posMax] << " (" << arreglo1[posMax] << " + " 
         << arreglo2[posMax] << ")" << endl;
    
    cout << "La suma mínima está en la posición [" << posMin << "] = " 
         << suma[posMin] << " (" << arreglo1[posMin] << " + " 
         << arreglo2[posMin] << ")" << endl;
    
    return 0;
}