#include <iostream>
using namespace std;
void calcularEstadisticasNotas(float* notas, int tam, float* promedio, float* maxNota, float* minNota);

int main() {
    const int NUM_ALUMNOS = 30;
    float notas[NUM_ALUMNOS]={0};

    cout << "Ingrese las notas de " << NUM_ALUMNOS << " alumnos (0-20):\n\n";

    for (int i = 0; i < NUM_ALUMNOS; i++) {
        cout << "Nota del alumno " << (i + 1) << ": ";
        cin >> notas[i];

        while (notas[i] < 0 || notas[i] > 20) {
            cout << "Error: La nota debe estar entre 0 y 20. Ingrese nuevamente: ";
            cin >> notas[i];
        }
    }

    float promedio, maxNota, minNota;

    calcularEstadisticasNotas(notas, NUM_ALUMNOS, &promedio, &maxNota, &minNota);

    // Mostrar resultados
    cout << "Promedio de la clase: " << promedio << endl;
    cout << "Nota más alta: " << maxNota << endl;
    cout << "Nota más baja: " << minNota << endl;

    return 0;
}

void calcularEstadisticasNotas(float* notas, int tam, float* promedio, float* maxNota, float* minNota) {
    // Inicializar valores
    *promedio = 0;
    *maxNota = *notas;  // Primer elemento como referencia inicial
    *minNota = *notas;

    // Recorrer el arreglo usando aritmética de punteros
    for (int i = 0; i < tam; i++) {
        // Acumular para el promedio
        *promedio += notas[i];

        // Buscar máximo
        if (notas[i] > *maxNota)
            *maxNota = notas[i];

        // Buscar mínimo
        if (notas[i] < *minNota)
            *minNota = notas[i];
    }

    // Calcular promedio final
    *promedio /= tam;
}