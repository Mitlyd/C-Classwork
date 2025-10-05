//Determinar el clima según la temperatura (if–else if–else)
#include <iostream>
using namespace std;

int main() {
    int temperatura;
    cout << "Ingrese la temperatura en °C: ";
    cin >> temperatura;

    if (temperatura < 15)
        cout << "Hace frío 🥶" << endl;
    else if (temperatura >= 15 && temperatura <= 25)
        cout << "El clima es templado 🌤️" << endl;
    else
        cout << "Hace calor 🔥" << endl;

    return 0;
}
