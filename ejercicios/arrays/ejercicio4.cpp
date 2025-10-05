//Encontrar el número mayor y menor en un arreglo

#include <iostream>
using namespace std;

int main() {
    int arr[10];  
    cout << "Ingrese 10 números: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int mayor = arr[0];
    int menor = arr[0];

    
    for (int i = 1; i < 10; i++) {
        if (arr[i] > mayor)
            mayor = arr[i];
        if (arr[i] < menor)
            menor = arr[i];
    }

    cout << "Número mayor: " << mayor << endl;
    cout << "Número menor: " << menor << endl;

    return 0;
}

