#include <iostream>

using namespace std;

int main () {
    int contador = 0;
    int numA = 0;
    int numB = 0;

    while (contador < 10){
        char letra;
        cin >> letra;

        if (letra == 'a') {
            numA++;
        } else {
            numB++;
        }

        contador++;
    }

    if (numA < numB) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}