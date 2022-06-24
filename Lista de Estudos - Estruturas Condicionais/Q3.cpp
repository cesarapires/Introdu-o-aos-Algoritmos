#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    float saldoMedio;
    cin >> saldoMedio;
    
    float creditoDisponivel = 0;
    
    if (saldoMedio > 0 && saldoMedio < 200) {
        creditoDisponivel = saldoMedio*0.1;
    } else if (saldoMedio < 400) {
        creditoDisponivel = saldoMedio*0.15;
    } else if (saldoMedio < 800) {
        creditoDisponivel = saldoMedio*0.2;
    } else if (saldoMedio < 1600) {
        creditoDisponivel = saldoMedio*0.25;
    } else {
        creditoDisponivel = saldoMedio*0.3;
    }

    cout << fixed << setprecision(2) << saldoMedio << endl;
    cout << fixed << setprecision(2) << creditoDisponivel << endl;

    return 0;
}