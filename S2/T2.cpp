#include <iostream>
using namespace std;

int main() {
    int n_bill;
    cout << "Ingrese billete: ";
    cin >> n_bill;

    switch (n_bill) {
        case 1:
            cout << "George Washington" << endl;
            break;
        case 2:
            cout << "Thomas Jefferson" << endl;
            break;
        case 5:
            cout << "Abraham Lincoln" << endl;
            break;
        case 10:
            cout << "Alexander Hamilton" << endl;
            break;
        case 20:
            cout << "Andrew Jackson" << endl;
            break;
        case 50:
            cout << "Ulises S. Grant" << endl;
            break;
        case 100:
            cout << "Benjamin Franklin" << endl;
            break;
        case 500: case 1000: case 5000: case 10000:
            cout << "Denomiacion descontinuada" << endl;
            break;
        default:
            cout << "No existe esa denominacion." << endl;
    }
}
