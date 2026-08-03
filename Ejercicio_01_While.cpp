#include <iostream>
using namespace std;

int main() {
    int cantidad, edad;
    int i = 1;
    int suma = 0;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;

    while (i <= cantidad) {
        cout << "Edad del estudiante " << i << ": ";
        cin >> edad;

        suma = suma + edad;

        i++;
    }

    cout << "\nLa suma de las edades es: " << suma << endl;

    return 0;
}