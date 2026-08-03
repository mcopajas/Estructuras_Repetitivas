#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "SUMA DE NUMEROS\n\n";

    cout << "Escriba un numero: ";
    cin >> numero;

    while (numero >= 0) {
        suma = suma + numero;

        cout << "Escriba un numero: ";
        cin >> numero;
    }

    cout << "\nLa suma de los numeros positivos introducidos es " << suma << "." << endl;

    return 0;
}