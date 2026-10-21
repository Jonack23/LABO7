#include <iostream>

using namespace std;

int main() {
    int num;
    cout << " Inegrese numero de la tabla que desea ver ";
    cin >> num;

    cout << "TABLA DEL " << num << endl;

    int i = 1;
    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}