#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, siguiente;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    cout << "\nSerie de Fibonacci:\n";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";

        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    cout << endl;

    return 0;
}