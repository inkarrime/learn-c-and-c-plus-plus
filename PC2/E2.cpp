#include <iostream>
#include <vector>
using namespace std;

void imprimir(vector<int> vec);
vector<int> vunicos(vector<int> vec);

int main() {
    int n, tmp;
    cout << "Ingrese la cantidad de elementos: "; cin >> n;
    vector<int> vec;
    cout << "Ingrese los elementos del vector: ";
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vec.emplace_back(tmp);
    }
    vec = vunicos(vec);
    if (n == vec.size()) {
        cout << "No hay repeticiones consecutivas \n";
    }
    cout << "Resultado: ";
    imprimir(vec);
    return 0;
}

void imprimir(vector<int> vec) {
    for (int elem : vec) {
        cout << elem << " ";
    }
}

vector<int> vunicos(vector<int> vec) {
    vector<int> res;
    for (int i=0; i < vec.size(); i++) {
        if (vec[i] != vec[i+1]) {
            res.push_back(vec[i]);
        }
    }
    return res;
}