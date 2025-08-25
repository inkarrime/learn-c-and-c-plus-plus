#include <iostream> // ENTRADA Y SALIDA ESTANDAR
#include <vector>   // CONTENEDOR VECTOR
#include <string>   // PARA STRINGS
#include <map>      // CONTENEDOR MAP
#include <algorithm>    // FUNCIONES COMO SORT()
#include <functional>   // PARA GREATER<>
using namespace std;

int main() {
    // ----------------------------
    // VECTOR: Crear y mostrar
    // ----------------------------
    vector<int> numbers = {3, 1, 4, 2};
    numbers.push_back(4); // AGREGAR UN ELEMENTO

    cout << "Elementos del vector: ";
    for (int i : numbers) {
        cout << i << " ";
    }
    cout << endl;

    // EJEMPLO ADICIONAL: Llenar un vector con datos del usuario
    int cantidad;
    cout << "\nCuantos numeros deseas ingresar? ";
    cin >> cantidad;

    vector<int> data;
    for (int i = 0; i < cantidad; i++) {
        int num;
        cout << "Numero " << i + 1 << ": ";
        cin >> num;
        data.push_back(num);
    }

    cout << "Tus numeros fueron: ";
    for (int n : data) {
        cout << n << " ";
    }
    cout << endl;

    // ----------------------------------
    // STRING: Concatenacion y recorrido
    // ----------------------------------
    string mensaje = "Hola ";
    mensaje += "mundo";
    cout << "\nMensaje: " << mensaje << endl;

    // RECORRER CARACTER POR CARACTER
    cout << "Caracteres del mensaje: ";
    for (char c : mensaje) {
        cout << "[" << c << "] ";
    }
    cout << endl;

    // ------------------------------------
    // MAP: Clave-valor con verificacion
    // ------------------------------------
    map<string, int> edades;
    edades["Ana"] = 25;
    edades["Luis"] = 30;

    cout << "\nEdad de Ana: " << edades["Ana"] << endl;

    // Recorrer todas las entradas
    cout << "Todas las edades:\n";
    for (const auto& par : edades) {
        cout << par.first << ": " << par.second << " anos" << endl;
    }

    // Verificar si existe una clave antes de acceder
    string buscado = "Carlos";
    if (edades.find(buscado) != edades.end()) {
        cout <<buscado << " tiene" << edades[buscado] << " anos.\n";
    } else {
        cout << buscado << " no esta en el mapa.\n";
    }

    // ----------------------------------
    // ALGORITHM: Ordenar vectores
    // ----------------------------------
    vector<int> v = {5, 3, 1, 4, 2};

    // Orden ascendente
    sort(v.begin(), v.end());
    cout << "\nVector en orden ascendente: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // Orden descendente usando greater<>
    sort(v.begin(), v.end(), greater<int>());
    cout << "\nVector en orden ascendente: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    return 0;
}