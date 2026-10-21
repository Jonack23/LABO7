#include <iostream>
using namespace std;

int main() {
    int n =0 ;
    int suma = 0, i = 1;
    
    cout << "ingrese el numero hasta donde desea que se sume " << endl;
    cin >> n;

    while (i <= n) {
        suma = suma + i;
        i = i + 1;
    }

    cout << suma << endl;

    return 0;
}