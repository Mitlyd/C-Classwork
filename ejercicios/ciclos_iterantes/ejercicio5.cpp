//Mostrar los números pares del 1 al 20 usando while
#include <iostream>
using namespace std;

int main() {
    int i = 2;

    cout << "Números pares del 1 al 20:" << endl;

    while (i <= 20) {
        cout << i << " ";
        i += 2;
    }

    cout << endl;
    return 0;
}
