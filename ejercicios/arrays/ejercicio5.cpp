//Invertir los elementos de un arreglo

// Invertir los elementos de un arreglo
#include <iostream>
using namespace std;

int main() {
    int arr[10];  // ahora el arreglo tiene espacio para 10 números
    cout << "Ingrese 10 números: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Números en orden inverso: ";
    for (int i = 9; i >= 0; i--) {  // empieza desde el último (índice 9)
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
