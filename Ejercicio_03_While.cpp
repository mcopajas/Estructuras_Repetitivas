#include <iostream>
using namespace std;

int main() {
    int minimo, maximo, numero;
    int intentos = 0;

    cout << "Ingrese el numero minimo: ";
    cin >> minimo;

    cout << "Ingrese el numero maximo: ";
    cin >> maximo;

    cout << "Ingrese un numero entre " << minimo << " y " << maximo << ": ";
    cin >> numero;

    while (numero >= minimo && numero <= maximo) {
        intentos++;

        cout << "Ingrese otro numero entre " << minimo << " y " << maximo << ": ";
        cin >> numero;
    }

    cout << "\nCantidad de intentos exitosos: " << intentos << endl;

    return 0;
}