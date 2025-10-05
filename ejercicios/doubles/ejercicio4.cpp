//Calcular el promedio de tres números double

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, promedio;

    cout << "Ingrese tres números decimales: ";
    cin >> num1 >> num2 >> num3;

    promedio = (num1 + num2 + num3) / 3;

    cout << "El promedio es: " << promedio << endl;
    return 0;
}
