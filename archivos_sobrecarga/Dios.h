#ifndef DIOS_H
#define DIOS_H

#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Dios {
private:
    string nombre;
    string nombreAlterno;
    string nombreOtroAlterno;
    string nombreRomano;

    vector<string> padres;

    int numeroHijos;

    vector<string> diosDevorados;

    string morada;

public:
    Dios(string nombre, string nombreAlterno = "", string nombreOtroAlterno = "", string nombreRomano = "");
    string getNombre() const;
    string getNombreAlterno() const;
    string getNombreOtroAlterno() const;
    string getNombreRomano() const;

    void addPadres(string padre);
    vector<string> getPadres() const;

    int getNumeroHijos() const;
    friend string operator+(Dios& padre1, Dios& padre2);

    vector<string> getDiosDevorados() const;
    void devorar(Dios& dioshijo);

    void devorar(string objeto);

    string getMorada() const;
    void setMorada(string nuevaMorada);
};

#endif