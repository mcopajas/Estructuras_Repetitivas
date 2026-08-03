#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numeroSecreto, numeroUsuario;
    int intentos = 0;

    srand(time(0));
    numeroSecreto = (rand() % 10) + 1;

    cout << "=== JUEGO: ADIVINA EL NUMERO ===" << endl;
    cout << "He pensado un numero entre 1 y 10." << endl;

    do {
        cout << "\nIngrese un numero: ";
        cin >> numeroUsuario;

        intentos++;

        if (numeroUsuario < numeroSecreto) {
            cout << "El numero secreto es mayor." << endl;
        } else if (numeroUsuario > numeroSecreto) {
            cout << "El numero secreto es menor." << endl;
        }

    } while (numeroUsuario != numeroSecreto);

    cout << "\nFelicidades! Adivinaste el numero." << endl;
    cout << "Numero secreto: " << numeroSecreto << endl;
    cout << "Intentos realizados: " << intentos << endl;

    return 0;
}