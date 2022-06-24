#include <iostream>

using namespace std;

int main () {
    int numero;
    int digitoAnalise;
    int numerosPares = 0;
    int numerosImpares = 0;

    cin >> numero;

    digitoAnalise = numero/10000;
    numero = numero%10000;
    if (digitoAnalise%2 == 0) {
        numerosPares++;
    } else {
        numerosImpares++;
    }

    digitoAnalise = numero/1000;
    numero = numero%1000;
    if (digitoAnalise%2 == 0) {
        numerosPares++;
    } else {
        numerosImpares++;
    }

    digitoAnalise = numero/100;
    numero = numero%100;
    if (digitoAnalise%2 == 0) {
        numerosPares++;
    } else {
        numerosImpares++;
    }

    digitoAnalise = numero/10;
    numero = numero%10;
    if (digitoAnalise%2 == 0) {
        numerosPares++;
    } else {
        numerosImpares++;
    }

    if (numero%2 == 0) {
        numerosPares++;
    } else {
        numerosImpares++;
    }

    cout << numerosPares << endl;
    cout << numerosImpares << endl; 

    return 0;
}