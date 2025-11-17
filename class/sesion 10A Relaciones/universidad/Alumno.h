#ifndef ALUMNO_H
#define ALUMNO_H
#include <vector>
#include "Curso.h"
class Alumno {
    string nombre, codigo;
    vector<Curso*> cursos;
public:
    Alumno(string nom, string cod) {
        nombre = nom; codigo = cod;
    }
    void agregarCurso(Curso *pCurso) {
        cursos.push_back(pCurso);
    }
    string imprimir() {
        return nombre + " " + codigo;
    }
    string imprimir_cursos() {
        string cadena = "";
        for (auto &pCurso : cursos) {
            cadena += pCurso->imprimir() + "\n";
        }
        return cadena;
    }
};



#endif //ALUMNO_H
