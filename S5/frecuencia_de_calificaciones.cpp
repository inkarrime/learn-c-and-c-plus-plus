#include <iostream>
using namespace std;

// Función con punteros para analizar calificaciones
void analizarCalificaciones(int* notas, int tam, int* aprobados, int* desaprobados) {
    // Inicializar contadores
    *aprobados = 0;
    *desaprobados = 0;
    
    // Recorrer notas usando punteros
    for (int i = 0; i < tam; i++) {
        // Nota aprobatoria es 11 o más
        if (*(notas + i) >= 11) {
            (*aprobados)++;
        } else {
            (*desaprobados)++;
        }
    }
}

// Función adicional para calcular frecuencia por rangos
void calcularFrecuencias(int* notas, int tam, int frecuencias[]) {
    // Inicializar frecuencias (5 rangos de 4 puntos cada uno)
    for (int i = 0; i < 5; i++) {
        frecuencias[i] = 0;
    }
    
    // Contar frecuencias por rangos
    for (int i = 0; i < tam; i++) {
        int nota = *(notas + i);
        
        if (nota >= 0 && nota <= 4) {
            frecuencias[0]++;  // Muy bajo
        } else if (nota >= 5 && nota <= 8) {
            frecuencias[1]++;  // Bajo
        } else if (nota >= 9 && nota <= 12) {
            frecuencias[2]++;  // Regular
        } else if (nota >= 13 && nota <= 16) {
            frecuencias[3]++;  // Bueno
        } else if (nota >= 17 && nota <= 20) {
            frecuencias[4]++;  // Excelente
        }
    }
}

int main() {
    const int NUM_NOTAS = 15;
    int notas[NUM_NOTAS];
    
    cout << "========== FRECUENCIA DE CALIFICACIONES ==========\n";
    cout << "Ingrese " << NUM_NOTAS << " notas (0-20):\n\n";
    
    // Entrada de datos con validación
    for (int i = 0; i < NUM_NOTAS; i++) {
        bool notaValida = false;
        
        while (!notaValida) {
            cout << "Nota " << (i + 1) << ": ";
            cin >> notas[i];
            
            if (notas[i] >= 0 && notas[i] <= 20) {
                notaValida = true;
            } else {
                cout << "Error: La nota debe estar entre 0 y 20. ";
            }
        }
    }
    
    // Variables para resultados principales
    int aprobados, desaprobados;
    
    // Análisis de aprobación
    analizarCalificaciones(notas, NUM_NOTAS, &aprobados, &desaprobados);
    
    // Mostrar resultados principales
    cout << "\n========== RESULTADOS DE APROBACIÓN ==========\n";
    cout << "Alumnos aprobados (nota ≥ 11): " << aprobados << endl;
    cout << "Alumnos desaprobados (nota < 11): " << desaprobados << endl;
    cout << "Porcentaje de aprobación: " 
         << (aprobados * 100.0 / NUM_NOTAS) << "%" << endl;
    cout << "Porcentaje de desaprobación: " 
         << (desaprobados * 100.0 / NUM_NOTAS) << "%" << endl;
    
    // Calcular estadísticas básicas
    int suma = 0;
    int maxNota = notas[0];
    int minNota = notas[0];
    
    for (int i = 0; i < NUM_NOTAS; i++) {
        suma += notas[i];
        if (notas[i] > maxNota) maxNota = notas[i];
        if (notas[i] < minNota) minNota = notas[i];
    }
    
    float promedio = (float)suma / NUM_NOTAS;
    
    cout << "\n========== ESTADÍSTICAS ==========\n";
    cout << "Promedio general: " << promedio << endl;
    cout << "Nota máxima: " << maxNota << endl;
    cout << "Nota mínima: " << minNota << endl;
    
    // Análisis por rangos
    int frecuencias[5];
    calcularFrecuencias(notas, NUM_NOTAS, frecuencias);
    
    cout << "\n========== DISTRIBUCIÓN POR RANGOS ==========\n";
    const char* etiquetas[] = {
        "Muy bajo (0-4)   ",
        "Bajo (5-8)       ",
        "Regular (9-12)   ",
        "Bueno (13-16)    ",
        "Excelente (17-20)"
    };
    
    for (int i = 0; i < 5; i++) {
        cout << etiquetas[i] << ": " << frecuencias[i] << " alumnos";
        
        // Mostrar barra gráfica
        cout << " |";
        for (int j = 0; j < frecuencias[i]; j++) {
            cout << "■";
        }
        cout << endl;
    }
    
    // Mostrar lista de notas ordenadas
    cout << "\n========== LISTA DE NOTAS ==========\n";
    
    // Crear copia para ordenar (ordenamiento burbuja simple)
    int notasOrdenadas[NUM_NOTAS];
    for (int i = 0; i < NUM_NOTAS; i++) {
        notasOrdenadas[i] = notas[i];
    }
    
    // Ordenar de mayor a menor
    for (int i = 0; i < NUM_NOTAS - 1; i++) {
        for (int j = 0; j < NUM_NOTAS - i - 1; j++) {
            if (notasOrdenadas[j] < notasOrdenadas[j + 1]) {
                int temp = notasOrdenadas[j];
                notasOrdenadas[j] = notasOrdenadas[j + 1];
                notasOrdenadas[j + 1] = temp;
            }
        }
    }
    
    cout << "Notas ordenadas de mayor a menor:\n";
    for (int i = 0; i < NUM_NOTAS; i++) {
        cout << "Alumno " << (i + 1) << ": " << notasOrdenadas[i];
        
        // Indicar estado
        if (notasOrdenadas[i] >= 11) {
            cout << " [Aprobado]";
        } else {
            cout << " [Desaprobado]";
        }
        cout << endl;
    }
    
    return 0;
}