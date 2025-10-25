#include <iostream>
#include <vector>
using namespace std;

int main() {
    string texto;
    cout<< "Texto:";
    getline(cin, texto);

    vector<int> vec(256);
    for ( auto car : texto ) {
        vec[ car ]++;
    }

    for (int i = 0; i < 256; i++) {
        if (vec[i] > 0 )
            cout << i << " " << char(i)
                << "  " << vec[i] << endl;
    }

    return 0;
}