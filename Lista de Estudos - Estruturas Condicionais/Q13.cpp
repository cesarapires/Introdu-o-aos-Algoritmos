#include <iostream>

using namespace std;

int main () {
    int numeroCartas;
    int posicaoAntesCorte;

    cin >> numeroCartas;
    cin >> posicaoAntesCorte;

    int posicaoDepoisCorte;
    if (posicaoAntesCorte < numeroCartas/2) {
        posicaoDepoisCorte = posicaoAntesCorte + (posicaoAntesCorte + 1);
        
    } else {
        posicaoDepoisCorte = (posicaoAntesCorte - (numeroCartas/2)) * 2;
    }

    cout << posicaoDepoisCorte;

    return 0;
}