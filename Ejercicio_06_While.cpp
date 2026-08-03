#include <iostream>
using namespace std;

int main() {
    int numerador, denominador;
    int a, b, residuo, mcd;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    if (denominador == 0) {
        cout << "Error: el denominador no puede ser cero." << endl;
        return 0;
    }

    a = numerador;
    b = denominador;

    while (b != 0) {
        residuo = a % b;
        a = b;
        b = residuo;
    }

    mcd = a;

    cout << "\nFraccion reducida: "
         << numerador / mcd
         << "/"
         << denominador / mcd
         << endl;

    return 0;
}