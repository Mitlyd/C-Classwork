//Mayor de tres números enteros
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres números enteros: ";
    cin >> a >> b >> c;

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    cout << "El número mayor es: " << mayor << endl;
    return 0;
}