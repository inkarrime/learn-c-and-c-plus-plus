#include "Gandalf.h"

int main() {
    Gandalf g;
    g.comer(new Abarrote);
    cout << g.getEstadoAnimo() << endl;
    return 0;
}
