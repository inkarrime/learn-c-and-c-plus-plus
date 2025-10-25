#include <iostream>
using namespace std;

string par_impar(int *pNum);

int main() {
    int e1, e2;
    int *p1, *p2;
    p1 = &e1; p2 = &e2;

    cout << "Dos numeros:";
    cin >> *p1 >> *p2;

    cout << par_impar(p1) << endl;
    cout << par_impar(p2) << endl;

    return 0;
}

string par_impar(int *pNum) {
    return (*pNum % 2 == 0) ? "par" : "impar";
}