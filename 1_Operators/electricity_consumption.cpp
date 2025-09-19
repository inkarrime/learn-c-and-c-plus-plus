#include <iostream>
using namespace std;
int main() {
    double kw, monto_1, monto_2;
    bool menor_100, mayor_100;
    cout << "KW:";
    cin >> kw;

    monto_1 = kw * 0.4522;
    monto_2 = 100*0.4522 + (kw-100)*0.7;
    menor_100 = kw <= 100;
    mayor_100 = kw > 100;

    cout << monto_1 * menor_100 << endl;
    cout << monto_2 * mayor_100 << endl;
    return 0;
}