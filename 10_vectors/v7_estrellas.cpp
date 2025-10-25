#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Estructura para almacenar información de una estrella
struct Estrella {
    string nombre;
    char tipo;
};

// Prototipos
void mostrarMenu();
void agregarEstrella(vector<Estrella>& estrellas, vector<char>& tipos);
void borrarEstrella(vector<Estrella>& estrellas, vector<char>& tipos);
void buscarEstrella(const vector<Estrella>& estrellas);
void ordenarEstrellas(vector<Estrella>& estrellas, vector<char>& tipos);
void imprimirEstrellas(const vector<Estrella>& estrellas, const vector<char>& tipos);

int main() {
    vector<Estrella> estrellas;
    vector<char> tipos;
    int opcion;

    // Tabla de referencia
    cout << "=== CLASIFICACION DE ESTRELLAS ===\n";
    cout << "Estrella      | Tipo\n";
    cout << "--------------|-----\n";
    cout << "Zeta Puppis   | O\n";
    cout << "Alnilam       | B\n";
    cout << "Fomalhaut     | A\n";
    cout << "Canopus       | F\n";
    cout << "Sol           | G\n";
    cout << "Arcturus      | K\n";
    cout << "Antares       | M\n";
    cout << "==================================\n\n";

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch(opcion) {
            case 1:
                agregarEstrella(estrellas, tipos);
                break;
            case 2:
                borrarEstrella(estrellas, tipos);
                break;
            case 3:
                buscarEstrella(estrellas);
                break;
            case 4:
                ordenarEstrellas(estrellas, tipos);
                break;
            case 5:
                cout << "\nSaliendo del programa...\n";
                break;
            default:
                cout << "\nOpcion invalida.\n";
        }
    } while(opcion != 5);

    return 0;
}

void mostrarMenu() {
    cout << "\n--- MENU ---\n";
    cout << "1. Anadir estrella\n";
    cout << "2. Borrar estrella\n";
    cout << "3. Buscar estrella\n";
    cout << "4. Ordenar alfabeticamente\n";
    cout << "5. Salir\n";
    cout << "Opcion: ";
}

void agregarEstrella(vector<Estrella>& estrellas, vector<char>& tipos) {
    Estrella nueva;
    cout << "\nIngrese el nombre de la estrella: ";
    getline(cin, nueva.nombre);
    cout << "Ingrese el tipo (O,B,A,F,G,K,M): ";
    cin >> nueva.tipo;
    cin.ignore();

    estrellas.push_back(nueva);
    tipos.push_back(nueva.tipo);

    cout << "Estrella agregada exitosamente.\n";
    imprimirEstrellas(estrellas, tipos);
}

void borrarEstrella(vector<Estrella>& estrellas, vector<char>& tipos) {
    string nombre;
    cout << "\nIngrese el nombre de la estrella a borrar: ";
    getline(cin, nombre);

    for (int i = 0; i < estrellas.size(); i++) {
        if (estrellas[i].nombre == nombre) {
            estrellas.erase(estrellas.begin() + i);
            tipos.erase(tipos.begin() + i);
            cout << "Estrella eliminada exitosamente.\n";
            imprimirEstrellas(estrellas, tipos);
            return;
        }
    }

    cout << "Estrella no encontrada.\n";
}

void buscarEstrella(const vector<Estrella>& estrellas) {
    string nombre;
    cout << "\nIngrese el nombre de la estrella a buscar: ";
    getline(cin, nombre);

    for (const auto& estrella : estrellas) {
        if (estrella.nombre == nombre) {
            cout << "\nEstrella encontrada:\n";
            cout << "Nombre: " << estrella.nombre << endl;
            cout << "Tipo: " << estrella.tipo << endl;
            return;
        }
    }

    cout << "Estrella no encontrada.\n";
}

void ordenarEstrellas(vector<Estrella>& estrellas, vector<char>& tipos) {
    // Ordenar ambos vectores manteniendo correspondencia
    for (int i = 0; i < estrellas.size() - 1; i++) {
        for (int j = i + 1; j < estrellas.size(); j++) {
            if (estrellas[i].nombre > estrellas[j].nombre) {
                swap(estrellas[i], estrellas[j]);
                swap(tipos[i], tipos[j]);
            }
        }
    }

    cout << "\nEstrellas ordenadas alfabeticamente.\n";
    imprimirEstrellas(estrellas, tipos);
}

void imprimirEstrellas(const vector<Estrella>& estrellas, const vector<char>& tipos) {
    cout << "\n--- LISTA DE ESTRELLAS ---\n";
    for (int i = 0; i < estrellas.size(); i++) {
        cout << estrellas[i].nombre << " (" << tipos[i] << ")" << endl;
    }
}