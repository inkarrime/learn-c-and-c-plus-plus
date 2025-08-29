#include <iostream>
using namespace std;

int main() {
    int num, digit, leidos = 0, pares = 0;
    do {
        cout << "Numero: ";
        cin >> num;
    }while(num<100);

    while (num>0) {
        digit = num % 10;
        num = num / 10;
        leidos++;
        if (digit % 2 == 0) pares ++;
    }

    cout << "Numero de digitos: " << leidos << endl;
    cout << "Digitos Pares: " << pares << endl;
    cout << "Digitos Impares: " << leidos - pares << endl;
    return 0;
}
