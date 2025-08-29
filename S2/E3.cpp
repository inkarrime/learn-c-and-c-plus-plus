#include <iostream>
using namespace std;

int main() {
    double t_pi;
    for(int i=1; i<=60; i++) {
        if (i%2==0) {
            t_pi -= 4 / ((i + 2) * (i + 3) * (i + 4))
        } else {
            t_pi += 4 / ((i + 2) * (i + 3) * (i + 4))
        }
    }
    cout << t_pi << endl;
}