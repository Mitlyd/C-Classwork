//Tablas de multiplicar
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero: ";
    cin >> n;

    cout << "Tabla de multiplicar del " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}