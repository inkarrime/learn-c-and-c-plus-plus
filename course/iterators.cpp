#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaramos un vector con algunos elementos enteros
    vector<int> numeros = {10, 20, 30};

    // -----------------------------------------
    // 1. Iterador normal (lectura y escritura)
    // -----------------------------------------
    cout << "Iterador normal (modificable): ";
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); it++) {
        // El iterador apunta a cada elemento del vector
        cout << *it << " ";
    }
    cout << endl;

    //
}