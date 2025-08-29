#include <iostream>
using namespace std;

int main() {
    int num, leidos = 0, pares = 0;
    while(num != 0) {
        cout << "Num: ";
        cin >> num;

        if(num == 0) break;
        leidos++;
        if(leidos % 2 == 0) pares++;
    }
    cout << "Leidos: " << leidos << endl;
    cout << "Pares: " << pares << endl;
    cout << "Impares: " << leidos - pares << endl;
    return 0;
}
