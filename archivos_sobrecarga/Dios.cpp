#include "Dios.h"
using namespace std;

// Constructor
Dios::Dios(string nombre, string alterno, string otroAlterno, string romano) {
    this->nombre = nombre;
    this->nombreAlterno = alterno;
    this->nombreOtroAlterno = otroAlterno;
    this->nombreRomano = romano;

    this->numeroHijos = 0;

    this->morada = "";
}

string Dios::getNombre() const { return nombre; }
string Dios::getNombreAlterno() const { return nombreAlterno; }
string Dios::getNombreRomano() const { return nombreRomano; }

void Dios::addPadres(string padre) { padres.push_back(padre); }
vector<string> Dios::getPadres() const { return padres; }

string Dios::getNombreOtroAlterno() const { return nombreOtroAlterno; }

int Dios::getNumeroHijos() const { return numeroHijos; }
/*string operator+(Dios& padre1, Dios& padre2) {
    return padre1.getNombre() + " y " + padre2.getNombre();
}*/

string operator+(Dios& padre1, Dios& padre2) {
    padre1.numeroHijos++;
    padre2.numeroHijos++;
    return padre1.getNombre() + " y " + padre2.getNombre();
}

vector<string> Dios::getDiosDevorados() const { return diosDevorados; }
void Dios::devorar(Dios& diosHijo) { diosDevorados.push_back(diosHijo.getNombre()); }

void Dios::devorar(string objeto) { diosDevorados.push_back(objeto); }

string Dios::getMorada() const { return morada; }
void Dios::setMorada(string nuevaMorada) { morada = nuevaMorada; }

