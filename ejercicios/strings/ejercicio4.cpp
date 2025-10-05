//Verificar si una palabra es palíndromo


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    string invertida = palabra;
    reverse(invertida.begin(), invertida.end());

    if (palabra == invertida)
        cout << "La palabra es un palíndromo" << endl;
    else
        cout << "La palabra no es un palíndromo" << endl;

    return 0;
}