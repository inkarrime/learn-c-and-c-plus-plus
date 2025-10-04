#include <iostream>
using namespace std;

// Función para verificar si un carácter es vocal
bool esVocal(char c) {
    // Convertir a minúscula para comparación uniforme
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;  // Convertir a minúscula
    }
    
    // Verificar si es vocal (incluyendo acentuadas comunes)
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'á' || c == 'é' || c == 'í' || c == 'ó' || c == 'ú');
}

// Función con punteros para contar vocales en un arreglo de nombres
int contarVocales(char nombres[][50], int tam) {
    int totalVocales = 0;
    
    // Recorrer cada nombre
    for (int i = 0; i < tam; i++) {
        char* ptr = nombres[i];
        
        // Recorrer cada carácter del nombre actual
        while (*ptr != '\0') {
            if (esVocal(*ptr)) {
                totalVocales++;
            }
            ptr++;  // Avanzar al siguiente carácter
        }
    }
    
    return totalVocales;
}

// Función para contar vocales en un solo nombre (para análisis individual)
void analizarNombre(char* nombre, int* vocales, int* consonantes, int* espacios) {
    *vocales = 0;
    *consonantes = 0;
    *espacios = 0;
    
    char* ptr = nombre;
    while (*ptr != '\0') {
        if (*ptr == ' ') {
            (*espacios)++;
        } else if (esVocal(*ptr)) {
            (*vocales)++;
        } else if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            (*consonantes)++;
        }
        ptr++;
    }
}

// Función para contar cada vocal específica
void contarCadaVocal(char nombres[][50], int tam, int conteoVocales[]) {
    // Inicializar contadores: [0]=a, [1]=e, [2]=i, [3]=o, [4]=u
    for (int i = 0; i < 5; i++) {
        conteoVocales[i] = 0;
    }
    
    for (int i = 0; i < tam; i++) {
        char* ptr = nombres[i];
        
        while (*ptr != '\0') {
            char c = *ptr;
            
            // Convertir a minúscula
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }
            
            // Contar cada vocal
            switch(c) {
                case 'a': case 'á': conteoVocales[0]++; break;
                case 'e': case 'é': conteoVocales[1]++; break;
                case 'i': case 'í': conteoVocales[2]++; break;
                case 'o': case 'ó': conteoVocales[3]++; break;
                case 'u': case 'ú': conteoVocales[4]++; break;
            }
            ptr++;
        }
    }
}

// Función para obtener la longitud de una cadena
int obtenerLongitud(char* cadena) {
    int longitud = 0;
    while (*cadena != '\0') {
        longitud++;
        cadena++;
    }
    return longitud;
}

int main() {
    const int NUM_PERSONAS = 5;
    char nombres[NUM_PERSONAS][50];
    
    cout << "========== CONTEO DE VOCALES EN NOMBRES ==========\n";
    cout << "Ingrese los nombres de " << NUM_PERSONAS << " personas:\n\n";
    
    // Limpiar buffer antes de leer cadenas
    cin.ignore();
    
    // Entrada de nombres
    for (int i = 0; i < NUM_PERSONAS; i++) {
        cout << "Nombre " << (i + 1) << ": ";
        cin.getline(nombres[i], 50);
    }
    
    // Contar total de vocales
    int totalVocales = contarVocales(nombres, NUM_PERSONAS);
    
    // Mostrar resultado principal
    cout << "\n========== RESULTADO PRINCIPAL ==========\n";
    cout << "Total de vocales en todos los nombres: " << totalVocales << endl;
    
    // Análisis individual de cada nombre
    cout << "\n========== ANÁLISIS POR NOMBRE ==========\n";
    
    int totalCaracteres = 0;
    int totalConsonantes = 0;
    
    for (int i = 0; i < NUM_PERSONAS; i++) {
        int vocales, consonantes, espacios;
        analizarNombre(nombres[i], &vocales, &consonantes, &espacios);
        
        int longitud = obtenerLongitud(nombres[i]);
        totalCaracteres += longitud;
        totalConsonantes += consonantes;
        
        cout << "\nNombre " << (i + 1) << ": " << nombres[i] << endl;
        cout << "  - Longitud: " << longitud << " caracteres" << endl;
        cout << "  - Vocales: " << vocales << endl;
        cout << "  - Consonantes: " << consonantes << endl;
        cout << "  - Espacios: " << espacios << endl;
        
        // Calcular porcentaje de vocales
        if (longitud - espacios > 0) {
            float porcentaje = (vocales * 100.0) / (longitud - espacios);
            cout << "  - Porcentaje de vocales: " << porcentaje << "%" << endl;
        }
    }
    
    // Conteo de cada vocal específica
    int conteoVocales[5];
    contarCadaVocal(nombres, NUM_PERSONAS, conteoVocales);
    
    cout << "\n========== DISTRIBUCIÓN DE VOCALES ==========\n";
    char vocales[] = {'A', 'E', 'I', 'O', 'U'};
    
    for (int i = 0; i < 5; i++) {
        cout << "Vocal '" << vocales[i] << "': " << conteoVocales[i];
        
        // Mostrar barra gráfica
        cout << " |";
        for (int j = 0; j < conteoVocales[i]; j++) {
            cout << "■";
        }
        
        if (totalVocales > 0) {
            float porcentaje = (conteoVocales[i] * 100.0) / totalVocales;
            cout << " (" << porcentaje << "%)";
        }
        cout << endl;
    }
    
    // Encontrar la vocal más frecuente
    int maxVocal = 0;
    int indiceMax = 0;
    for (int i = 0; i < 5; i++) {
        if (conteoVocales[i] > maxVocal) {
            maxVocal = conteoVocales[i];
            indiceMax = i;
        }
    }
    
    cout << "\nVocal más frecuente: '" << vocales[indiceMax] 
         << "' con " << maxVocal << " apariciones" << endl;
    
    // Estadísticas generales
    cout << "\n========== ESTADÍSTICAS GENERALES ==========\n";
    cout << "Total de caracteres: " << totalCaracteres << endl;
    cout << "Total de vocales: " << totalVocales << endl;
    cout << "Total de consonantes: " << totalConsonantes << endl;
    
    if (totalCaracteres > 0) {
        float porcentajeVocales = (totalVocales * 100.0) / totalCaracteres;
        float porcentajeConsonantes = (totalConsonantes * 100.0) / totalCaracteres;
        
        cout << "Porcentaje de vocales del total: " << porcentajeVocales << "%" << endl;
        cout << "Porcentaje de consonantes del total: " << porcentajeConsonantes << "%" << endl;
    }
    
    // Promedio de vocales por nombre
    float promedioVocales = (float)totalVocales / NUM_PERSONAS;
    cout << "Promedio de vocales por nombre: " << promedioVocales << endl;
    
    // Identificar el nombre con más y menos vocales
    cout << "\n========== EXTREMOS ==========\n";
    
    int maxVocalesNombre = 0, minVocalesNombre = 999;
    int indiceMaxNombre = 0, indiceMinNombre = 0;
    
    for (int i = 0; i < NUM_PERSONAS; i++) {
        int vocales, consonantes, espacios;
        analizarNombre(nombres[i], &vocales, &consonantes, &espacios);
        
        if (vocales > maxVocalesNombre) {
            maxVocalesNombre = vocales;
            indiceMaxNombre = i;
        }
        
        if (vocales < minVocalesNombre) {
            minVocalesNombre = vocales;
            indiceMinNombre = i;
        }
    }
    
    cout << "Nombre con más vocales: " << nombres[indiceMaxNombre] 
         << " (" << maxVocalesNombre << " vocales)" << endl;
    cout << "Nombre con menos vocales: " << nombres[indiceMinNombre] 
         << " (" << minVocalesNombre << " vocales)" << endl;
    
    return 0;
}