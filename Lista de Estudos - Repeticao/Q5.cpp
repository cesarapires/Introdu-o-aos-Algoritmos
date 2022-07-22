#include <iostream>

using namespace std;

int main () {
    int valorN;
    cin >> valorN;
    int contador = valorN;
    int somatorio = 0;

    while (contador > 0){
        somatorio += contador;
        contador--;
    }

    cout << somatorio << endl;

    return 0;
}