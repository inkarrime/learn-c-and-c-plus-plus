#include <iostream>
using namespace std;
const double PI = 3.1415;

int main()
{
    double radius, area;
    cout << "Radius: ";
    cin >> radius;

    area = 4 * PI * radius * radius;

    cout << "The area is: " << area << endl;
    return 0;
}