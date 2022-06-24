#include <iostream>

using namespace std;

int main () {
    double numA, numB;
    int opcao;
    double resultado;

    cin >> numA;
    cin >> numB;
    cin >> opcao;

    switch (opcao) {
        case 1:
            resultado = (numA + numB)/2;
            cout << resultado << endl;
            break;
        case 2:
            if (numA > numB) {
                resultado = numA - numB; 
            } else {
                resultado = numB - numA;
            }
            cout << resultado << endl;
            break;
        case 3:
            resultado = numA * numB;
            cout << resultado << endl;
            break;
        case 4:
            if (numB == 0) {
                cout << "ERRO" << endl;
            } else {
                resultado = numA / numB;
                cout << resultado << endl;
            }
            break;
        default:
            cout << "ERRO" << endl;
            break;
    }
    
    return 0;
}