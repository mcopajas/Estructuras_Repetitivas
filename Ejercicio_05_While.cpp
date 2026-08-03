#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int menor, i = 1;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 < num2)
        menor = num1;
    else
        menor = num2;

    cout << "\nLos divisores comunes son: ";

    while (i <= menor) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }

        i++;
    }

    cout << endl;

    return 0;
}