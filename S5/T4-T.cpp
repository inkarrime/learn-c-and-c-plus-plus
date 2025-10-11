#include <iostream>
using namespace std;

int main() {
    int arr[3] = { 1, 2, 3 };
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    const int num = 3;
    int arr2[num] = { 4, 5, 6 };
    for (int i = 0; i < num; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int *p = &arr[0];
    cout << "p apunta a arr[0]: " << *p << endl;

    p = &arr[1];
    cout << "p apunta a arr[1]: " << *p << endl;

    cout << "arr[2]: " << arr[2] << endl;

    int *p2 = arr;
    cout << "*p2: " << *p2 << endl;
    p2 = p2 + 1;
    cout << "*(p2): "<<  *p2 << endl;
    cout << "*(p2 +1): " << *(p2 + 1) << endl;

    int *pd = new int;
    *pd = 20;
    cout << "*pd: " << *pd << endl;
    delete pd;
    pd = nullptr;

    int tam = 3;
    int *pdarr = new int[tam];
    for (int i = 0; i < tam; i++) {
        pdarr[i] = (i + 1) * 10;
    };
    for (int i = 0; i < tam; i++) {
        cout << pdarr[i] << " ";
    }
    delete[] pdarr;
    pdarr = nullptr;
}