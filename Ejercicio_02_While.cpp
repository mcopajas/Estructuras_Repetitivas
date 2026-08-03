#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;

    while (numero != 0) {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;
    }

    cout << "\nPrograma finalizado." << endl;

    return 0;
}