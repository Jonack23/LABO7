#include <iostream>
using namespace std;

int main() {
    int opcion;
    float saldo = 1000.0, monto=0.0;

    do {
        cout << "CAJERO AUTOMATICO" << endl;
        cout << "1. Depositar" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: " << endl;
        cin >> opcion;

        if (opcion == 1) {
            cout << "Monto a depositar: ";
            cin >> monto;
            if (monto > 0) {
                saldo = saldo + monto;
                cout << "Saldo actual: " << saldo << endl;
            } else {
                cout << "Monto invalido";
            }
        } else if (opcion == 2) {
            cout << "Monto a retirar: ";
            cin >> monto;
            if (monto > 0 && monto <= saldo) {
                saldo = saldo - monto;
                cout << "Saldo actual: " << saldo << endl;
            } else if (monto > saldo) {
                cout << "Saldo insuficiente\n";
            } else {
                cout << "Monto invalido\n";
            }
        } else if (opcion != 3) {
            cout << "Opcion no valida\n";
        }

    } while (opcion != 3);

    cout << "Gracias por usar nuestro cajero, VUELVA PRONTO!!!";

    return 0;
}