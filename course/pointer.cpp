#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x; // Declaramos un puntero p y asignamos con direccion de memoria de x
    cout << *p << endl; // Imprime 10

    *p = 25;
    cout << x << endl; // Imprime 25

    // Puntero a char
    char letra = 'A';
    char* ptr = &letra;
    cout << *ptr << endl;

    // Punteros y arreglos
    int nums[] = {5, 10, 15};
    int* ptr2 = nums; // nums ya es un puntero al primer elemento del array = &nums[0]
    cout << *(ptr2 + 1) << endl; // Muestra 10, porque estamos moviendonos de posicion de elementos dentro del array

    return 0;
}