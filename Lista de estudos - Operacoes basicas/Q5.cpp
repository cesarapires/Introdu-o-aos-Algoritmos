#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double alturaDegraus;
    double alturaEscada;
    
    cin >> alturaDegraus;
    cin >> alturaEscada;

    alturaEscada = alturaEscada * 100;

    cout << ceil(alturaEscada/alturaDegraus) << endl;

    return 0;
}