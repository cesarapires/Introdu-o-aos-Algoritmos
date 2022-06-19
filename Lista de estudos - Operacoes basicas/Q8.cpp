#include <iostream>

using namespace std;

int main () {
    int valorEntrada;

    cin >> valorEntrada;

    cout << valorEntrada/100 << endl;
    valorEntrada = valorEntrada%100;

    cout << valorEntrada/50 << endl;
    valorEntrada = valorEntrada%50;

    cout << valorEntrada/20 << endl;
    valorEntrada = valorEntrada%20;

    cout << valorEntrada/10 << endl;
    valorEntrada = valorEntrada%10;

    cout << valorEntrada/5 << endl;
    valorEntrada = valorEntrada%5;

    cout << valorEntrada/2 << endl;
    valorEntrada = valorEntrada%2;

    cout << valorEntrada << endl;
    
    return 0;
}