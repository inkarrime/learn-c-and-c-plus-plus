#include <iostream>
#include <fstream>
#include "DiosGriego.h"
using namespace std;

int main() {
    // Abrir archivo de salida
    ofstream archivo("mitologia.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    // ========== PREGUNTA 1: EL CAOS ==========
    cout << "\n=== Pregunta 1 ===" << endl;
    cout << "En el comienzo de los tiempos solo habia un vacio infinito llamado Caos." << endl;
    cout << "El Caos es aquello que existe antes que los dioses." << endl;

    archivo << "\n=== Pregunta 1 ===" << endl;
    archivo << "En el comienzo de los tiempos solo habia un vacio infinito llamado Caos." << endl;
    archivo << "El Caos es aquello que existe antes que los dioses." << endl;

    // ========== PREGUNTA 2: GEA ==========
    DiosGriego gea("Gea", "Gaia");
    gea.agregarPadres("vacio");

    cout << "\n=== Pregunta 2 ===" << endl;
    cout << "De ese Caos, emano la diosa " << gea.getNombre() << endl;
    cout << "Tambien llamada " << gea.getNombreAlterno() << " y conocida como Terra en la mitologia romana." << endl;

    archivo << "\n=== Pregunta 2 ===" << endl;
    archivo << "De ese Caos, emano la diosa " << gea.getNombre() << endl;
    archivo << "Tambien llamada " << gea.getNombreAlterno() << " y conocida como Terra en la mitologia romana." << endl;

    // ========== PREGUNTA 3: EROS ==========
    DiosGriego eros("Eros");
    eros.agregarPadres("vacio");
    eros.agregarPadres("Afrodita y Ares");
    eros.agregarPadres("Afrodita y Hermes");
    eros.agregarPadres("Afrodita y Hefesto");
    eros.agregarPadres("Poros y Penia");
    eros.agregarPadres("Iris y Cefiro");

    cout << "\n=== Pregunta 3 ===" << endl;
    cout << "Del Caos surgio tambien Eros, el dios del deseo." << endl;
    cout << "Padres de Gea: ";
    for (int i = 0; i < gea.getPadres().size(); i++) {
        cout << gea.getPadres()[i];
        if (i < gea.getPadres().size() - 1) cout << ", ";
    }
    cout << endl;

    cout << "Posibles padres de Eros: ";
    for (int i = 0; i < eros.getPadres().size(); i++) {
        cout << eros.getPadres()[i];
        if (i < eros.getPadres().size() - 1) cout << ", ";
    }
    cout << endl;

    archivo << "\n=== Pregunta 3 ===" << endl;
    archivo << "Del Caos surgio tambien Eros, el dios del deseo." << endl;
    archivo << "Padres de Gea: ";
    for (int i = 0; i < gea.getPadres().size(); i++) {
        archivo << gea.getPadres()[i];
        if (i < gea.getPadres().size() - 1) archivo << ", ";
    }
    archivo << endl;

    archivo << "Posibles padres de Eros: ";
    for (int i = 0; i < eros.getPadres().size(); i++) {
        archivo << eros.getPadres()[i];
        if (i < eros.getPadres().size() - 1) archivo << ", ";
    }
    archivo << endl;

    // ========== PREGUNTA 4: URANO ==========
    DiosGriego urano("Urano");
    urano.agregarPadres("Gea");

    cout << "\n=== Pregunta 4 ===" << endl;
    cout << "De Gea, nacio Urano. Urano rodeo a Gea y este se transformo en el Cielo." << endl;

    archivo << "\n=== Pregunta 4 ===" << endl;
    archivo << "De Gea, nacio Urano. Urano rodeo a Gea y este se transformo en el Cielo." << endl;

    // ========== PREGUNTA 5: OTROS DIOSES PRIMORDIALES ==========
    DiosGriego nix("Nix", "Nyx");
    nix.agregarPadres("vacio");

    DiosGriego erebo("Erebo");
    erebo.agregarPadres("vacio");

    DiosGriego hemera("Hemera");
    hemera.agregarPadres("vacio");

    DiosGriego eter("Eter");
    eter.agregarPadres("vacio");

    DiosGriego tifon("Tifon");
    tifon.agregarPadres("Gea");

    DiosGriego pontos("Pontos");
    pontos.agregarPadres("Gea");

    DiosGriego ourea("Ourea");
    ourea.agregarPadres("Gea");

    cout << "\n=== Pregunta 5 ===" << endl;
    cout << "Del Caos tambien nacieron: Nix, Erebo, Hemera y Eter." << endl;
    cout << "De Gea nacieron: Tifon, Pontos y Ourea." << endl;

    archivo << "\n=== Pregunta 5 ===" << endl;
    archivo << "Del Caos tambien nacieron: Nix, Erebo, Hemera y Eter." << endl;
    archivo << "De Gea nacieron: Tifon, Pontos y Ourea." << endl;

    // Continúa en la siguiente parte...

    archivo.close();
    return 0;
}