#include "Temperatura.h"
Temperatura::Temperatura() {
    celsius = 0;
}
Temperatura::Temperatura(double cels) {
    celsius = cels;
}
void Temperatura::mostrar(double _celsius) {
    celsius = _celsius;
}
