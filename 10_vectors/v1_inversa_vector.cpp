#include <iostream>
#include <vector>
using namespace std;
void imprimir(vector<int> vec);
void imprimir_inverso(vector<int> vec);

int main() {
    int n, tmp;
    cout << "N: "; cin >> n;
    vector<int> vec;

    cout << "Ingrese los numeros:";
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vec.emplace_back(tmp);
    }
    imprimir(vec);
    cout << "\nInvirtiendo:\n";
    imprimir_inverso(vec);

    vector<int> vec2(n);
    cout << "\nIngrese numeros:";
    for (int &elem : vec2) {
        cin >> elem;
    }
    imprimir(vec2);
    cout << "\nInvirtiendo:\n";
    imprimir_inverso(vec2);

    return 0;
}
void imprimir(vector<int> vec) {
    for (int elem : vec) {
        cout << elem << " ";
    }
}
void imprimir_inverso(vector<int> vec) {
    for (int i=vec.size()-1; i >=0; i--) {
        cout << vec[i] << " ";
    }
}