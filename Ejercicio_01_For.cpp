#include <iostream>
using namespace std;

int main() {
    int a, b;
    int multiplo, suma = 0;

    cout << "Ingrese el numero a: ";
    cin >> a;

    cout << "Ingrese la cantidad de multiplos (b): ";
    cin >> b;

    cout << "\nLos primeros " << b << " multiplos de "
         << a << " son:\n";

    for (int i = 0; i < b; i++) {
        multiplo = a * i;
        cout << multiplo << endl;
        suma = suma + multiplo;
    }

    cout << "\nLa sumatoria de los multiplos es: " << suma << endl;

    return 0;
}