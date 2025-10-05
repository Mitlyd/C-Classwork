//Contar vocales en una cadena
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una palabra o frase (sin espacios): ";
    cin >> texto;

    int contador = 0;
    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
    }

    cout << "Número de vocales: " << contador << endl;
    return 0;
}