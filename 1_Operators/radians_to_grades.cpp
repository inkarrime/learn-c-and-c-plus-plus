#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double rad, gra;
    cout << "Radianes: ";
    cin >> rad;
    gra = rad * 180 / M_PI;
    cout << "Grados: " << gra << endl;
    return 0;
}