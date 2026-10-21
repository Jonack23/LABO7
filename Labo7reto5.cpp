#include <iostream>

using namespace std;

int main() {
    int i = 1, contador = 0;

    cout << "Numeros pares entre 1 y 100." << endl;

    while (i <= 100) {
        if (i % 2 == 0) {
            contador = contador + 1;
        }
        i = i + 1;
    }

    cout << "La cantidad total de numeros pares entre 1 y 100 es: " << contador << endl;

    return 0;
}