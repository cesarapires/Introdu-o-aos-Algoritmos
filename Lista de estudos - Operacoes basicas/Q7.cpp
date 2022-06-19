#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    double tamanhoDerrapagem;
    double velocidadeCarro;

    cin >> tamanhoDerrapagem;

    velocidadeCarro = 14.6*sqrt(tamanhoDerrapagem);

    cout << fixed << setprecision(3) << velocidadeCarro << endl;

    return 0;
}
