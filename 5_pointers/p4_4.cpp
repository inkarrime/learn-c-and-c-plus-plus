#include <iostream>
using namespace std;

int main() {
    char caracter = 'H';
    char *pCaracter = &caracter;
    char **ppCaracter = &pCaracter;

    cout << caracter << " " << (void*)&caracter << endl;
    cout << (void*)pCaracter << " " << *pCaracter  << " " << &pCaracter << endl;
    cout << ppCaracter << " " << (void*)*ppCaracter  << " " << **ppCaracter << endl;

    return 0;
}