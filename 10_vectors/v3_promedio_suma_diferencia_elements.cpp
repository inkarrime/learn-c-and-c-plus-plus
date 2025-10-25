#include <iostream>
#include <vector>
using namespace std;

void    imprimir(vector<int> v);
void    imprimir(vector<double> v);

double  promedio(vector<int> v);
int     suma_menores_70(vector<int> v);
vector<double> vector_diferencias(vector<int> v);

int main() {
    int n; cout << "N: "; cin >> n;
    vector<int> v(n);
    for( int &elem : v)
        elem = rand() % 100;

    imprimir(v);
    cout << "\nPromedio:" << promedio(v) << endl;
    cout << "\nSuma menores 70:" << suma_menores_70(v) << endl;
    vector<double> v2 = vector_diferencias(v);
    cout << "\nVector de diferencias:" << endl;
    imprimir(v2);
    return 0;
}
void imprimir(vector<int> v) {
    cout << endl;
    for(int elem : v) {
        cout << elem << " ";
    }
}
void imprimir(vector<double> v) {
    cout << endl;
    for(int elem : v) {
        cout << elem << " ";
    }
}
double  promedio(vector<int> v) {
    double suma = 0;
    for(int elem : v) {
        suma += elem;
    }
    return suma / v.size();
}
int suma_menores_70(vector<int> v) {
    int suma = 0;
    for(int elem : v) {
        if (elem < 70) {
            suma += elem;
        }
    }
    return suma;
}
vector<double> vector_diferencias(vector<int> v) {
    vector<double> v2;
    double prom = promedio(v);
    for(int elem : v) {
        v2.push_back(elem - prom);
    }
    return v2;
}