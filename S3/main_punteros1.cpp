#include <iostream>
using namespace std;


int main() {
    int a, b, c;
    double x;
    int *p;

    a = 4;
    cout<<&a<<"\n";
    cout<<&b<<"\n";
    cout<<&c<<"\n";

    p = &a;

    *p = 7;
    cout<<a;

    b = *p;

    cout<<"\n-------------\n";
    cout<<*p;


    return 0;
}
