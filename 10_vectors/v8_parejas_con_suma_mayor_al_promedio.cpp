#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Prototipos
double calcularPromedio(const vector<int>& vec);
vector<pair<int, int>> encontrarParejas(const vector<int>& vec);
void imprimirParejas(const vector<pair<int, int>>& parejas);

int main() {
    int n;
    
    cout << "Ingrese N: ";
    cin >> n;
    
    vector<int> numeros;
    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numeros.push_back(num);
    }
    
    // Calcular promedio
    double promedio = calcularPromedio(numeros);
    cout << "\nEl promedio es: " << promedio << endl;
    
    // Encontrar parejas
    vector<pair<int, int>> parejas = encontrarParejas(numeros);
    
    cout << "\nParejas de numeros cuya suma es mayor que el promedio:" << endl;
    imprimirParejas(parejas);
    
    return 0;
}

double calcularPromedio(const vector<int>& vec) {
    double suma = 0;
    for (int num : vec) {
        suma += num;
    }
    return suma / vec.size();
}

vector<pair<int, int>> encontrarParejas(const vector<int>& vec) {
    vector<pair<int, int>> parejas;
    set<int> numerosUnicos(vec.begin(), vec.end());
    vector<int> sinRepetidos(numerosUnicos.begin(), numerosUnicos.end());
    
    double promedio = calcularPromedio(vec);
    
    // Buscar todas las parejas posibles
    for (int i = 0; i < sinRepetidos.size(); i++) {
        for (int j = i + 1; j < sinRepetidos.size(); j++) {
            if (sinRepetidos[i] + sinRepetidos[j] > promedio) {
                parejas.push_back({sinRepetidos[i], sinRepetidos[j]});
            }
        }
    }
    
    return parejas;
}

void imprimirParejas(const vector<pair<int, int>>& parejas) {
    for (const auto& pareja : parejas) {
        cout << pareja.first << "-" << pareja.second << " , ";
    }
    cout << endl;
}