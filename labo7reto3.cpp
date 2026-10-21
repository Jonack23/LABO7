#include <iostream>
#include <string>

using namespace std;

int main() {
    string clave;
    do {
        cout << "Ingresa la contraseña " << endl;
        cin >> clave;

        if (clave != "secreta123") {
            cout << "Incorrecta. Intenta de nuevo " << endl;
        }
    } while (clave != "secreta123");

    cout << "Acceso concedido!! CONTRA CORRECTA !!" << endl;

    return 0;
}