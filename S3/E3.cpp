#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, copia;
    do {
        cout << "Número [mayor a 10]: ";
        cin >> number;
    }while (number <= 10);

    copia = number;
    while(true) {
        number++;
        bool es_primo = true;
        for (int div = 2; div < sqrt(number); div++) {
            if (number % div == 0) {
                es_primo = false;
                break;
            }
            if(es_primo) {
                cout << "El siguiente numero primo es: " << number << endl;
                break;
            }
        }
    }
    number = copia;
    while(true) {
        number--;
        bool es_primo = true;
        for (int div = 2; div < sqrt(number); div++) {
            if (number % div == 0) {
                es_primo = false;
                break;
            }
            if(es_primo) {
                cout << "El anterior numero primo es: " << number << endl;
                break;
            }
        }
    }

    return 0;
}
