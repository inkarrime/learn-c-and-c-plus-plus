#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Prototipos de funciones
bool esPalindromo(const string& cadena);
void eliminarPosicionesPares(vector<string>& vec);
string encontrarPalindromoMasLargo(const vector<string>& vec);
void imprimirVector(const vector<string>& vec);

int main() {
    int n;

    // Solicitar cantidad de strings
    cout << "Ingrese la cantidad de strings (N): ";
    cin >> n;
    cin.ignore(); // Limpiar buffer

    // Crear vector y leer strings
    vector<string> palabras;
    cout << "\nIngrese " << n << " strings:" << endl;
    for (int i = 0; i < n; i++) {
        string palabra;
        cout << "String " << (i + 1) << ": ";
        getline(cin, palabra);
        palabras.push_back(palabra);
    }

    // Mostrar vector original
    cout << "\nVector original: ";
    imprimirVector(palabras);

    // Eliminar posiciones pares (0, 2, 4, 6, ...)
    eliminarPosicionesPares(palabras);

    // Mostrar vector después de eliminaciones
    cout << "\nVector despues de eliminar posiciones pares: ";
    imprimirVector(palabras);

    // Encontrar el palíndromo más largo
    string palindromoMasLargo = encontrarPalindromoMasLargo(palabras);

    if (palindromoMasLargo.empty()) {
        cout << "\nNo se encontraron palindromos en el vector." << endl;
    } else {
        cout << "\nLa respuesta seria: " << palindromoMasLargo << endl;
    }

    return 0;
}

// Función para verificar si una cadena es palíndromo
bool esPalindromo(const string& cadena) {
    int inicio = 0;
    int fin = cadena.length() - 1;

    while (inicio < fin) {
        if (cadena[inicio] != cadena[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}

// Función para eliminar elementos en posiciones pares (0, 2, 4, ...)
void eliminarPosicionesPares(vector<string>& vec) {
    vector<string> nuevoVector;

    // Copiar solo los elementos en posiciones impares (1, 3, 5, ...)
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 != 0) {  // Posición impar
            nuevoVector.push_back(vec[i]);
        }
    }

    vec = nuevoVector;
}

// Función para encontrar el palíndromo más largo
string encontrarPalindromoMasLargo(const vector<string>& vec) {
    string palindromoMasLargo = "";

    for (const string& palabra : vec) {
        if (esPalindromo(palabra)) {
            if (palabra.length() > palindromoMasLargo.length()) {
                palindromoMasLargo = palabra;
            }
        }
    }

    return palindromoMasLargo;
}

// Función para imprimir un vector de strings
void imprimirVector(const vector<string>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ",";
    }
    cout << endl;
}