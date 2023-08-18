#include <iostream>

int main() {
    double fahrenheit;
    double celsius;

    std::cout << "Ingrese la temperatura en grados Fahrenheit:";
    std::cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9;
    std::cout << "La temperatura en grados Celsius es: " << celsius;
    return 0;
}
