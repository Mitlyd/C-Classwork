
//Verificar si un número es par y positivo
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    bool esPar = (n % 2 == 0);
    bool esPositivo = (n > 0);

    cout << "¿Es par? " << (esPar ? "Sí" : "No") << endl;
    cout << "¿Es positivo? " << (esPositivo ? "Sí" : "No") << endl;

    if (esPar && esPositivo)
        cout << "El número es par y positivo ✅" << endl;
    else
        cout << "El número no cumple ambas condiciones ❌" << endl;

    return 0;
}
