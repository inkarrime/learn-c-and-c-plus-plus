#ifndef DIOSGRIEGO_H
#define DIOSGRIEGO_H

#include <string>
#include <vector>
using namespace std;

class DiosGriego {
private:
    string nombre;
    string nombreAlterno;
    vector<string> padres;
    vector<string> hijosComidos;
    int contadorHijos;
    string morada;

public:
    // Constructor
    DiosGriego(string nom, string alterno = "");

    // Getters
    string getNombre();
    string getNombreAlterno();
    vector<string> getPadres();
    int getContadorHijos();
    string getMorada();
    vector<string> getHijosComidos();

    // Setters
    void agregarPadres(string padre);
    void setMorada(string nuevaMorada);

    // Métodos para comer (sobrecarga de funciones)
    void comer(DiosGriego& dios);
    void comer(string objeto);

    // Método para vomitar
    void vomitar();

    // Método para mostrar cantidad de hijos
    void mostrarCantidadHijos();

    // Sobrecarga de operadores (3 versiones)
    // Pregunta 6: retorna string con nombres de padres
    friend string operator+(DiosGriego& dios1, DiosGriego& dios2);

    // Pregunta 13: dios + string (para no-dioses)
    friend string operator+(DiosGriego& dios, string noDios);
};

#endif