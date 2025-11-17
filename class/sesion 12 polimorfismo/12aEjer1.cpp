#include "Estrella.h"
#include <vector>
int main() {
    vector<Estrella*> est;

    est.push_back(new Simple("AA"));
    est.push_back(new Binaria("BB"));

    for (auto &pEst : est ) {
        cout << pEst->imprimir() << endl;
    }

    return 0;
}
