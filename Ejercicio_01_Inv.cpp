#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int opcion;
    int resultado = 0;
    int i;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 < 0 || num2 < 0) {
        cout << "Los numeros deben ser no negativos." << endl;
        return 0;
    }

    cout << "\nSeleccione una operacion:" << endl;
    cout << "1. Multiplicacion" << endl;
    cout << "2. Division" << endl;
    cout << "3. Potencia" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            resultado = 0;

            for (i = 0; i < num2; i++) {
                resultado = resultado + num1;
            }

            cout << "\nResultado: " << resultado << endl;
            break;

        case 2:
            if (num2 == 0) {
                cout << "\nNo se puede dividir entre cero." << endl;
            } else {
                resultado = 0;

                while (num1 >= num2) {
                    num1 = num1 - num2;
                    resultado++;
                }

                cout << "\nResultado: " << resultado << endl;
            }
            break;

        case 3:
            resultado = 1;

            for (i = 1; i <= num2; i++) {
                resultado = resultado * num1;
            }

            cout << "\nResultado: " << resultado << endl;
            break;

        default:
            cout << "\nOpcion invalida." << endl;
    }

    return 0;
}