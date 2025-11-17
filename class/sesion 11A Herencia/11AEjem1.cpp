#include <iostream>
#include "Persona.h"

int main() {
    Estudiante e("Ana", 20, "Ingeniería");
    Profesor p("Carlos", 40, "Programación");
    e.mostrar();
    e.estudiar();
    p.mostrar();
    p.ensenar();
}
