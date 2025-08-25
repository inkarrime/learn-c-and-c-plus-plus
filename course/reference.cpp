#include <iostream>
using namespace std;

void incrementar(int& num) {
    num++;
}

void cambiarSigno(int& num) {
    num = -num;
}

int main() {
    int x = 10;
    int& ref = x;
    ref = 20;
    cout << ref << endl; // Imprime 20

    int valor = 5;
    incrementar(valor);
    cout << valor << endl; // Imprime 6

    int a = 10;
    cambiarSigno(a);
    cout << a << endl; // Imprime -10

    return 0;
}