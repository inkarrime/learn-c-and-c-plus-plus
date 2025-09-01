#include <stdio.h>

double log( double y) {
    double resultado;
    resultado = log10( y );
    return resultado;
}

int main(void) {
    double x;
    x = log(2);
    printf("%f\n", x);
    return 0;
}
