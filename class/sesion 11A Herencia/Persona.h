#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    Persona(string n, int e): nombre(n), edad(e) {}
    void mostrar() {
        cout << nombre << " (" << edad << " años)" << endl; }
};

class Estudiante : public Persona {
    string carrera;
public:
    Estudiante(string n, int e, string c) : Persona(n, e), carrera(c) {}
    void estudiar() {
        cout << nombre << " estudia " << carrera << endl; }
};

class Profesor : public Persona {
    string curso;
public:
    Profesor(string n, int e, string cu) : Persona(n, e), curso(cu) {}
    void ensenar() {
        cout << nombre << " enseña " << curso << endl; }
};


#endif //PERSONA_H
