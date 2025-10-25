#include <iostream>
using namespace std;
int factorial(int &numero);
int factorial(int *pNumero);

int main() {
    int e1=5, e2=6, e3=7, e4=8;
    int *p1=&e1, *p2=&e2, *p3, *p4;
    p3 = &e3;
    p4 = &e4;

    cout << factorial( e1 ) << endl;
    cout << factorial( p2 ) << endl;
    cout << factorial( *p3 ) << endl;
    p3 = &e4;
    cout << factorial( p3 ) << endl;
    p4 = p3;
    cout << factorial( p4 ) << endl;
    return 0;
}
int factorial(int &numero) {
    int fact = 1;
    for (int i = 1; i <= numero; i++) {
        fact = fact * i;
    }
    return fact;
}
int factorial(int *pNumero) {
    return factorial( *pNumero);
}