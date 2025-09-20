#include <iostream>
using namespace std;

void clasificarTemperaturas(float* temps, int tam, int* frios, int* templados, int* calurosos) {
    // Inicializar contadores
    *frios = 0;
    *templados = 0;
    *calurosos = 0;
    
    // Recorrer temperaturas usando punteros
    for (int i = 0; i < tam; i++) {
        float temperatura = *(temps + i);
        
        // Clasificar según rangos
        if (temperatura <= 15) {
            (*frios)++;
        } else if (temperatura >= 16 && temperatura <= 25) {
            (*templados)++;
        } else {  // temperatura > 25
            (*calurosos)++;
        }
    }
}

void calcularEstadisticas(float* temps, int tam, float* promedio, 
                          float* maxTemp, float* minTemp) {
    *promedio = 0;
    *maxTemp = *temps;
    *minTemp = *temps;
    
    for (int i = 0; i < tam; i++) {
        *promedio += *(temps + i);
        
        if (*(temps + i) > *maxTemp)
            *maxTemp = *(temps + i);
        
        if (*(temps + i) < *minTemp)
            *minTemp = *(temps + i);
    }
    
    *promedio /= tam;
}

int main() {
    const int DIAS = 10;
    float temperaturas[DIAS];
    
    cout << "========== TEMPERATURAS DIARIAS ==========\n";
    cout << "Ingrese las temperaturas de " << DIAS << " días (en °C):\n\n";
    
    // Entrada de datos
    for (int i = 0; i < DIAS; i++) {
        cout << "Día " << (i + 1) << " - Temperatura (°C): ";
        cin >> temperaturas[i];
        
        // Validación de temperatura razonable
        while (temperaturas[i] < -50 || temperaturas[i] > 60) {
            cout << "Error: Temperatura fuera de rango (-50 a 60°C). Ingrese nuevamente: ";
            cin >> temperaturas[i];
        }
    }
    
    // Variables para clasificación
    int frios, templados, calurosos;
    
    // Llamar función de clasificación
    clasificarTemperaturas(temperaturas, DIAS, &frios, &templados, &calurosos);
    
    // Mostrar clasificación
    cout << "\n========== CLASIFICACIÓN ==========\n";
    cout << "Días fríos (≤ 15°C): " << frios << endl;
    cout << "Días templados (16°C - 25°C): " << templados << endl;
    cout << "Días calurosos (> 25°C): " << calurosos << endl;
    
    // Calcular estadísticas adicionales
    float promedio, maxTemp, minTemp;
    calcularEstadisticas(temperaturas, DIAS, &promedio, &maxTemp, &minTemp);
    
    cout << "\n========== ESTADÍSTICAS ==========\n";
    cout << "Temperatura promedio: " << promedio << "°C" << endl;
    cout << "Temperatura máxima: " << maxTemp << "°C" << endl;
    cout << "Temperatura mínima: " << minTemp << "°C" << endl;
    cout << "Rango térmico: " << (maxTemp - minTemp) << "°C" << endl;
    
    // Mostrar detalle día por día
    cout << "\n========== DETALLE POR DÍA ==========\n";
    for (int i = 0; i < DIAS; i++) {
        cout << "Día " << (i + 1) << ": " << temperaturas[i] << "°C - ";
        
        // Clasificar cada día
        if (temperaturas[i] <= 15) {
            cout << "Frío";
        } else if (temperaturas[i] >= 16 && temperaturas[i] <= 25) {
            cout << "Templado";
        } else {
            cout << "Caluroso";
        }
        
        // Indicar si está por encima o debajo del promedio
        if (temperaturas[i] > promedio) {
            cout << " [Sobre el promedio]";
        } else if (temperaturas[i] < promedio) {
            cout << " [Bajo el promedio]";
        }
        
        cout << endl;
    }
    
    // Gráfico de barras simple
    cout << "\n========== GRÁFICO DE TEMPERATURAS ==========\n";
    cout << "Escala: cada * representa 2°C\n\n";
    
    for (int i = 0; i < DIAS; i++) {
        cout << "Día " << (i + 1) << " |";
        
        // Dibujar barra proporcional a la temperatura
        int barras = (int)(temperaturas[i] / 2);
        for (int j = 0; j < barras; j++) {
            cout << "*";
        }
        cout << " " << temperaturas[i] << "°C" << endl;
    }
    
    return 0;
}