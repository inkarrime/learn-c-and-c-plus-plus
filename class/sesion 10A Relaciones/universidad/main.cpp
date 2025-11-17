#include "Alumno.h"

int main() {
    Alumno alu("manuel", "202512");
    Curso obj("Prog1", "CS11");
    Curso *ptr = new Curso("Prog2", "CS12");

    alu.agregarCurso( &obj );
    alu.agregarCurso( ptr );

    cout << alu.imprimir() << endl;;
    cout << alu.imprimir_cursos();

    return 0;
}
