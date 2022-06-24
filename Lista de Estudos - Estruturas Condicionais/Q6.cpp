#include <iostream>
#include <iomanip>

using namespace std;


int main () {
    string cor1;
    string cor2;
    int numero;

    cin >> cor1;
    cin >> cor2;
    cin >> numero;

    int digito1;
    int digito2;
    int digito3;
    int digito4;
    int digito5;
    int digito6;

    digito1 = numero / 100000;
    numero = numero % 100000;

    digito2 = numero / 10000;
    numero = numero % 10000;

    digito3 = numero / 1000;
    numero = numero % 1000;
    
    digito4 = numero / 100;
    numero = numero % 100;
    
    digito5 = numero / 10;
    digito6 = numero % 10;

    if (digito1 == digito6 and digito2 == digito5 and digito3 == digito4) {
        cout << cor1 << endl;
    } else {
        cout << cor2 << endl;
    }
    
    
    return 0;
}