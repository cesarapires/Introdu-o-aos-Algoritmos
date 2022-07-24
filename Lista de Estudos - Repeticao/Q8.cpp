#include <iostream>

using namespace std;

int main () {
    int contador = 1;
    int maior;
    int segundoMaior = 0;
    int somatorio = 0;

    while (contador <= 7) {
        int valor;
        cin >> valor;

        if (contador == 1){
            maior = valor;
        } else if (valor > maior) {
            segundoMaior = maior;
            maior = valor;
        } else if (valor > segundoMaior) {
            segundoMaior = valor;
        }

        somatorio += valor;
        contador++;
    }

    cout << maior << endl;
    cout << segundoMaior << endl;
    cout << (somatorio-maior-segundoMaior)/5 << endl;

    return 0;
}