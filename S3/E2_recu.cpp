#include <iostream>
using namespace std;

int suma_cuadrados(int n);

int main() {
    cout << suma_cuadrados(1) << endl;
    cout << suma_cuadrados(2) << endl;
    cout << suma_cuadrados(3) << endl;
    cout << suma_cuadrados(4) << endl;
    cout << suma_cuadrados(5) << endl;
    return 0;
}

int suma_cuadrados(int n) {
    if (n == 1) return 1;
    return suma_cuadrados(n-1) + (n * n);
}
