#include <iostream>
using namespace std;

int mul(int a, int b);
int pot(int x, int y);

int main() {
    cout << mul(5, 4) << endl;
    cout << pot(7, 3) << endl;
    return 0;
}

int mul(int a, int b) {
    if (b == 1) {
        return a * a;
    }
}