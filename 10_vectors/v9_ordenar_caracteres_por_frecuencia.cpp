#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de caracteres: ";
    cin >> n;

    string cadena;
    cout << "Ingrese los caracteres: ";
    cin >> cadena;

    cout << "\nCon las letras: " << cadena << endl;

    // 1. Crear vectores paralelos para caracteres únicos y sus frecuencias
    vector<char> caracteres;
    vector<int> frecuencias;

    // Contar frecuencias
    for (int i = 0; i < cadena.length(); i++) {
        char c = cadena[i];

        // Buscar si ya existe
        int pos = -1;
        for (int j = 0; j < caracteres.size(); j++) {
            if (caracteres[j] == c) {
                pos = j;
                break;
            }
        }

        if (pos != -1) {
            frecuencias[pos]++;  // Ya existe, incrementar
        } else {
            caracteres.push_back(c);   // No existe, agregar
            frecuencias.push_back(1);
        }
    }

    // 2. Mostrar letras no repetidas
    cout << "Las letras no repetidas serian: ";
    for (int i = 0; i < caracteres.size(); i++) {
        cout << caracteres[i];
        if (i < caracteres.size() - 1) cout << ",";
    }
    cout << endl;

    // 3. Ordenar por frecuencia (descendente) usando bubble sort
    for (int i = 0; i < caracteres.size() - 1; i++) {
        for (int j = i + 1; j < caracteres.size(); j++) {
            bool debeIntercambiar = false;

            // Mayor frecuencia primero
            if (frecuencias[j] > frecuencias[i]) {
                debeIntercambiar = true;
            }
            // Si empatan en frecuencia, alfabéticamente
            else if (frecuencias[j] == frecuencias[i] && caracteres[j] < caracteres[i]) {
                debeIntercambiar = true;
            }

            if (debeIntercambiar) {
                // Intercambiar caracteres
                char tempC = caracteres[i];
                caracteres[i] = caracteres[j];
                caracteres[j] = tempC;

                // Intercambiar frecuencias
                int tempF = frecuencias[i];
                frecuencias[i] = frecuencias[j];
                frecuencias[j] = tempF;
            }
        }
    }

    // 4. Mostrar resultado
    cout << "Su orden original: ";
    for (int i = 0; i < cadena.length(); i++) {
        cout << cadena[i];
        if (i < cadena.length() - 1) cout << ",";
    }
    cout << endl;

    cout << "La respuesta: ";
    for (int i = 0; i < caracteres.size(); i++) {
        cout << caracteres[i];
        if (i < caracteres.size() - 1) cout << ",";
    }
    cout << endl;

    return 0;
}