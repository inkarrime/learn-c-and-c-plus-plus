#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI = 3.1415;

int main()
{
    double radius, volume;
    cout << "Radius: ";
    cin >> radius;

    volume = 4.0/3.0 * PI * pow(radius,3);

    cout << "The volume is: " << volume << "\n";
    cout << "The volumen is: " << fixed << setprecision(7) << volume;
    return 0;

}