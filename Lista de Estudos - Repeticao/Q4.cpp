#include <iostream>

using namespace std;

int main () {
    int numerosLinhas;
    int contador = 1;
    cin >> numerosLinhas;

    while (contador <= numerosLinhas) {
        int contadorLetra = 0;
        while (contadorLetra < contador){
            cout << char(97 + contadorLetra) << " ";
            contadorLetra++;
        }
        cout << endl;
        contador++;
    }
    return 0;
}