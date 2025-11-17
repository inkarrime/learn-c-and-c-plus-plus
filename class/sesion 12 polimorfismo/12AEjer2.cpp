#include "Persona.h"

int main() {
    Persona p;
    p.addDocumento( new DNI("1234","2025-2-2","Lima"));

    p.mostrar();

}