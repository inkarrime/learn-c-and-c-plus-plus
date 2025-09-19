#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    double celsius;

    cout << "Ingrese la temperatura en grados Fahrenheit:";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9;
    cout << "La temperatura en grados Celsius es: " << celsius;
    return 0;
}
