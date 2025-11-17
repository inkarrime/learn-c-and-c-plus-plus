#ifndef CURSO_H
#define CURSO_H
#include <iostream>
using namespace std;
class Curso {
    string nombre, codigo;
public:
    Curso(string nom, string cod){
        nombre = nom;  codigo = cod;
    }
    string imprimir() {
        return nombre + " " + codigo;
    }
};
#endif //CURSO_H
