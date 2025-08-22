#include <iostream>

int main() {
    float pi = 3;
    int inicio = 0;
    float dividendo = 0;
    float sumando = 0;
    float divisor = 0;
    int i = 0;

    int ingresar = 0;

    std::cout << "Ingrese un numero : ";
    std::cin >> ingresar;

    for (int i=1; i<=ingresar; i++)
        inicio = 2 * i;
        dividendo = 4.0;
        if (i % 2 == 0) {
            dividendo = -4.0;
        } else {
            dividendo = 4.0;
        }
        divisor = inicio * (inicio + 1) * (inicio + 2);
        sumando = dividendo / divisor;
        pi = pi + sumando;
    printf("%5f", pi);
}
