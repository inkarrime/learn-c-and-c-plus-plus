#include <iostream>
#include <vector>
using namespace std;
void imprimir(vector<int> vec);
vector<int> sin_multiplos_3(vector<int> vec);
int main() {
    int n; cout << "N:"; cin >> n;
    vector<int> vec(n), vec2;
    for( int &elem : vec) {
        elem = rand() % 30 + 1;
    }
    imprimir(vec);
    vec2 = sin_multiplos_3(vec);
    cout << "\nSin multiplos de 3:";
    imprimir(vec2);
    return 0;
}
void imprimir(vector<int> vec) {
    for (int elem : vec) {
        cout << elem << " ";
    }
}
vector<int> sin_multiplos_3(vector<int> vec) {
    vector<int> res;
    for (int elem : vec) {
        if (elem % 3 != 0) {
            res.emplace_back( elem );
        }
    }
    return res;
}