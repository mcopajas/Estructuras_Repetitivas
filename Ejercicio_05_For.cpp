#include <iostream>
using namespace std;

int main() {
    int cantidad;
    int aprobados = 0;
    int desaprobados = 0;
    float nota;
    float suma = 0;
    float promedio, porcentaje;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;

        suma = suma + nota;

        if (nota < 10.5) {
            desaprobados++;
        } else {
            aprobados++;
        }
    }

    promedio = suma / cantidad;
    porcentaje = (desaprobados * 100.0) / cantidad;

    cout << "\nCantidad de aprobados: " << aprobados << endl;
    cout << "Porcentaje de desaprobados: " << porcentaje << "%" << endl;
    cout << "Nota promedio del salon: " << promedio << endl;

    return 0;
}