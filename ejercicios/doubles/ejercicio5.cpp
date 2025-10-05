//Conversión de dólares a pesos colombianos
#include <iostream>
using namespace std;

int main() {
    double dolares, tasaCambio, pesos;

    cout << "Ingrese la cantidad en dólares: ";
    cin >> dolares;

    cout << "Ingrese la tasa de cambio actual (COP por USD): ";
    cin >> tasaCambio;

    pesos = dolares * tasaCambio;

    cout << "Equivalente en pesos colombianos: $" << pesos << endl;
    return 0;
    }