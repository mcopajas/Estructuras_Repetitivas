#include <iostream>
using namespace std;

int main() {
    int numero;
    int divisores = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        cout << "\nEl numero " << numero << " es primo." << endl;
    } else {
        cout << "\nEl numero " << numero << " no es primo." << endl;
    }

    return 0;
}