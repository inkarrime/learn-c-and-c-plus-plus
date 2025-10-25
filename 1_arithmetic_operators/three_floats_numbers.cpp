#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    float n1, n2, n3;
    cout << "3 numeros: ";
    cin >> n1 >> n2 >> n3;
    float entera = int(n1 + n2);
    float fracc = n2 + n3 - int(n2 + n3);
    float nuevo = entera + fracc;

    cout << fixed << setprecision(2);
    cout << nuevo << endl;

    return 0;
}