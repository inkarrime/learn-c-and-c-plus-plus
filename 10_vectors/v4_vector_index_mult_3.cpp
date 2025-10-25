#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Prototipos de las 3 funciones
int multiplicacionImpares(const vector<int>& vec);
int sumaPares(const vector<int>& vec);
vector<int> multiplos3(const vector<int>& vec);

// Función para imprimir un vector
void imprimirVector(const vector<int>& vec);

int main() {
    srand(time(0));  // Inicializar semilla para números aleatorios
    
    int n;
    
    // Solicitar cantidad de números
    cout << "Ingrese la cantidad de numeros (N): ";
    cin >> n;
    
    // Validar que N esté entre 1 y 10
    if (n < 1 || n > 10) {
        cout << "Error: N debe estar entre 1 y 10." << endl;
        return 1;
    }
    
    // Crear vector y llenarlo con números aleatorios del 1 al 10
    vector<int> numeros;
    for (int i = 0; i < n; i++) {
        numeros.push_back(rand() % 10 + 1);
    }
    
    // Mostrar el vector generado
    cout << "\nVector generado: ";
    imprimirVector(numeros);
    
    // a) Multiplicación de todos los números impares
    int resultadoImpares = multiplicacionImpares(numeros);
    cout << "\na) Multiplicacion de numeros impares: " << resultadoImpares << endl;
    
    // b) Suma de todos los números pares
    int resultadoPares = sumaPares(numeros);
    cout << "b) Suma de numeros pares: " << resultadoPares << endl;
    
    // c) Generar nuevo vector con valores en posiciones múltiplo de 3
    vector<int> vectorMultiplos = multiplos3(numeros);
    cout << "c) Vector con valores en posiciones multiplo de 3 (incluyendo 0): ";
    imprimirVector(vectorMultiplos);
    
    return 0;
}

// Función a: Multiplicación de todos los números impares
int multiplicacionImpares(const vector<int>& vec) {
    int producto = 1;
    bool hayImpar = false;
    
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] % 2 != 0) {  // Si es impar
            producto *= vec[i];
            hayImpar = true;
        }
    }
    
    // Si no hay impares, retornar 0
    return hayImpar ? producto : 0;
}

// Función b: Suma de todos los números pares
int sumaPares(const vector<int>& vec) {
    int suma = 0;
    
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] % 2 == 0) {  // Si es par
            suma += vec[i];
        }
    }
    
    return suma;
}

// Función c: Generar nuevo vector con valores en posiciones múltiplo de 3 (incluyendo 0)
vector<int> multiplos3(const vector<int>& vec) {
    vector<int> resultado;
    
    for (int i = 0; i < vec.size(); i++) {
        if (i % 3 == 0) {  // Posiciones 0, 3, 6, 9, ...
            resultado.push_back(vec[i]);
        }
    }
    
    return resultado;
}

// Función auxiliar para imprimir un vector
void imprimirVector(const vector<int>& vec) {
    cout << "[ ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << " ]" << endl;
}