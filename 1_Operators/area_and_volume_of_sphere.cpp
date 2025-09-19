#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI = 3.1415;

int main() {
    double radio, area, volumen;
    cout << "Radio : ";
    cin >> radio;
    area = 4 * PI * radio * radio;
    volumen = 4.0/3.0 * PI * pow(radio,3);
    cout << "\n";
    cout << "El area es    ====> " << area << "\n";
    cout << "El volumen es ====> " << volumen << "\n";
    cout << "El volumen es ====> " << fixed << setprecision(7) << volumen;
    return 0;
}