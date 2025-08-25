#include <iostream>
#include <string>
using namespace std;

int main() {
    char saludo[] = "Hola";
    cout << saludo << endl;

    char saludo2[5] = {'H', 'o', 'l', 'a', '\0'};
    // El \0 indica el final de la cadena. Si no lo incluyes, el programa no sabra donde termina la cdaena.

    // Concatenar cadenas
    string nombre = "Ana";
    nombre += " Maria";
    cout << nombre << endl;
    cout << nombre.length() << endl;
    cout << nombre[1] << endl;

    if (nombre == "Ana Maria") {
        cout << "Nombre completo" << endl;
    }

    return 0;
}