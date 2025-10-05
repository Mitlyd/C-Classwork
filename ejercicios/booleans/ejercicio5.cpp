//Comprobar si una persona puede votar
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    bool puedeVotar = (edad >= 18);

    cout << "¿Puede votar? " << (puedeVotar ? "Sí" : "No") << endl;

    return 0;
}
