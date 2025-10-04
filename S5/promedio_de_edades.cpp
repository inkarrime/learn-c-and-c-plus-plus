#include <iostream>
using namespace std;

// Función con punteros para analizar edades
void analizarEdades(int* edades, int tam, float* promedio, int* menores18, int* mayores60) {
    // Inicializar variables
    *promedio = 0;
    *menores18 = 0;
    *mayores60 = 0;
    
    // Recorrer arreglo usando punteros
    for (int i = 0; i < tam; i++) {
        int edad = *(edades + i);
        
        // Acumular para promedio
        *promedio += edad;
        
        // Contar menores de 18
        if (edad < 18) {
            (*menores18)++;
        }
        
        // Contar mayores o iguales a 60
        if (edad >= 60) {
            (*mayores60)++;
        }
    }
    
    // Calcular promedio final
    *promedio /= tam;
}

// Función adicional para clasificación etaria completa
void clasificacionEtaria(int* edades, int tam, int clasificacion[]) {
    // Inicializar clasificación
    // [0]: Niños (0-12), [1]: Adolescentes (13-17), 
    // [2]: Adultos jóvenes (18-35), [3]: Adultos (36-59), 
    // [4]: Adultos mayores (60+)
    for (int i = 0; i < 5; i++) {
        clasificacion[i] = 0;
    }
    
    for (int i = 0; i < tam; i++) {
        int edad = *(edades + i);
        
        if (edad <= 12) {
            clasificacion[0]++;
        } else if (edad <= 17) {
            clasificacion[1]++;
        } else if (edad <= 35) {
            clasificacion[2]++;
        } else if (edad <= 59) {
            clasificacion[3]++;
        } else {
            clasificacion[4]++;
        }
    }
}

int main() {
    const int NUM_PACIENTES = 20;
    int edades[NUM_PACIENTES];
    
    cout << "========== REGISTRO DE EDADES - HOSPITAL ==========\n";
    cout << "Ingrese las edades de " << NUM_PACIENTES << " pacientes:\n\n";
    
    // Entrada de datos con validación
    for (int i = 0; i < NUM_PACIENTES; i++) {
        bool edadValida = false;
        
        while (!edadValida) {
            cout << "Paciente " << (i + 1) << " - Edad: ";
            cin >> edades[i];
            
            if (edades[i] >= 0 && edades[i] <= 120) {
                edadValida = true;
            } else {
                cout << "Error: Ingrese una edad válida (0-120). ";
            }
        }
    }
    
    // Variables para resultados
    float promedio;
    int menores18, mayores60;
    
    // Analizar edades
    analizarEdades(edades, NUM_PACIENTES, &promedio, &menores18, &mayores60);
    
    // Mostrar resultados principales
    cout << "\n========== RESULTADOS PRINCIPALES ==========\n";
    cout << "Promedio de edades: " << promedio << " años" << endl;
    cout << "Pacientes menores de 18 años: " << menores18 
         << " (" << (menores18 * 100.0 / NUM_PACIENTES) << "%)" << endl;
    cout << "Pacientes con 60 o más años: " << mayores60 
         << " (" << (mayores60 * 100.0 / NUM_PACIENTES) << "%)" << endl;
    
    // Clasificación etaria completa
    int clasificacion[5];
    clasificacionEtaria(edades, NUM_PACIENTES, clasificacion);
    
    cout << "\n========== CLASIFICACIÓN ETARIA COMPLETA ==========\n";
    const char* grupos[] = {
        "Niños (0-12 años)        ",
        "Adolescentes (13-17 años)",
        "Adultos jóvenes (18-35)  ",
        "Adultos (36-59 años)     ",
        "Adultos mayores (60+)    "
    };
    
    for (int i = 0; i < 5; i++) {
        cout << grupos[i] << ": " << clasificacion[i] << " pacientes";
        
        // Mostrar barra gráfica
        cout << " |";
        for (int j = 0; j < clasificacion[i]; j++) {
            cout << "■";
        }
        cout << " (" << (clasificacion[i] * 100.0 / NUM_PACIENTES) << "%)" << endl;
    }
    
    // Calcular estadísticas adicionales
    int edadMax = edades[0];
    int edadMin = edades[0];
    int suma = 0;
    
    for (int i = 0; i < NUM_PACIENTES; i++) {
        if (edades[i] > edadMax) edadMax = edades[i];
        if (edades[i] < edadMin) edadMin = edades[i];
        suma += edades[i];
    }
    
    cout << "\n========== ESTADÍSTICAS ADICIONALES ==========\n";
    cout << "Edad máxima: " << edadMax << " años" << endl;
    cout << "Edad mínima: " << edadMin << " años" << endl;
    cout << "Rango de edades: " << (edadMax - edadMin) << " años" << endl;
    cout << "Suma total de edades: " << suma << " años" << endl;
    
    // Calcular mediana (requiere ordenamiento)
    int edadesOrdenadas[NUM_PACIENTES];
    for (int i = 0; i < NUM_PACIENTES; i++) {
        edadesOrdenadas[i] = edades[i];
    }
    
    // Ordenamiento burbuja
    for (int i = 0; i < NUM_PACIENTES - 1; i++) {
        for (int j = 0; j < NUM_PACIENTES - i - 1; j++) {
            if (edadesOrdenadas[j] > edadesOrdenadas[j + 1]) {
                int temp = edadesOrdenadas[j];
                edadesOrdenadas[j] = edadesOrdenadas[j + 1];
                edadesOrdenadas[j + 1] = temp;
            }
        }
    }
    
    float mediana;
    if (NUM_PACIENTES % 2 == 0) {
        mediana = (edadesOrdenadas[NUM_PACIENTES/2 - 1] + 
                  edadesOrdenadas[NUM_PACIENTES/2]) / 2.0;
    } else {
        mediana = edadesOrdenadas[NUM_PACIENTES/2];
    }
    
    cout << "Mediana de edades: " << mediana << " años" << endl;
    
    // Mostrar distribución ordenada
    cout << "\n========== DISTRIBUCIÓN DE EDADES (ordenadas) ==========\n";
    for (int i = 0; i < NUM_PACIENTES; i++) {
        cout << "Paciente " << (i + 1) << ": " << edadesOrdenadas[i] << " años";
        
        // Indicar grupo etario
        if (edadesOrdenadas[i] < 18) {
            cout << " [Menor de edad]";
        } else if (edadesOrdenadas[i] >= 60) {
            cout << " [Adulto mayor]";
        }
        cout << endl;
    }
    
    // Recomendaciones basadas en la distribución
    cout << "\n========== RECOMENDACIONES ==========\n";
    
    if (menores18 > NUM_PACIENTES * 0.3) {
        cout << "- Alta proporción de pacientes pediátricos. ";
        cout << "Considerar reforzar el área de pediatría.\n";
    }
    
    if (mayores60 > NUM_PACIENTES * 0.4) {
        cout << "- Alta proporción de adultos mayores. ";
        cout << "Considerar servicios geriátricos especializados.\n";
    }
    
    if (promedio < 25) {
        cout << "- Población joven predominante. ";
        cout << "Enfocar en medicina preventiva.\n";
    } else if (promedio > 50) {
        cout << "- Población adulta predominante. ";
        cout << "Enfocar en enfermedades crónicas.\n";
    }
    
    return 0;
}