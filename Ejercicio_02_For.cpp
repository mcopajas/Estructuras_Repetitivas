#include <iostream>
using namespace std;

int main() {
    int n, numero, mayor;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    cout << "Ingrese el numero 1: ";
    cin >> mayor;

    for (int i = 2; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;

        if (numero > mayor) {
            mayor = numero;
        }
    }

    cout << "\nEl numero mayor es: " << mayor << endl;

    return 0;
}