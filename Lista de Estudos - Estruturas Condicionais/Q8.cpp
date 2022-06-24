#include <iostream>

using namespace std;

int main () {
    string cor1;
    string cor2;

    cin >> cor1;
    cin >> cor2;

    if (cor1 == "azul" or cor2 == "azul") {
        if (cor1 == cor2) {
            cout << "azul" << endl;
        } else if (cor1 == "amarelo" or cor2 == "amarelo") {
            cout << "verde" << endl;
        } else {
            cout << "violeta" << endl;
        }
    } else if (cor1 == "amarelo" or cor2 == "amarelo") {
        if (cor1 == cor2) {
            cout << "amarelo" << endl;
        } else if (cor1 == "vermelho" or cor2 == "vermelho") {
            cout << "laranja" << endl;
        } else {
            cout << "violeta" << endl;
        }
    } else if (cor1 == "vermelho" or cor2 == "vermelho") {
        if (cor1 == cor2) {
            cout << "vermelho" << endl;
        }  else if (cor1 == "azul" or cor2 == "azul") {
            cout << "violeta" << endl;
        } else {
            cout << "laranja" << endl;
        }
    }

    

    return 0;
}