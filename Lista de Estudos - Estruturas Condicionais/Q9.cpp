#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int opcao;
    float angulo = 0;
    float angulo2 = 1;
    float resultado;

    cin >> opcao;
    cin >> angulo;

    float radianos = (angulo*M_PI)/180;

    switch (opcao){
        case 1:
            resultado = (sin(radianos));
            break;
        case 2:
            resultado = (cos(radianos));
            break;
        case 3:
            cin >> angulo2;
            resultado = angulo * angulo2;
            break;
    }

    cout << resultado << endl;

    return 0;
}