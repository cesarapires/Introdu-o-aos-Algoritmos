#include <iostream>

using namespace std;

float media(float valor1, float valor2){
    float media;

    media = (valor1 + valor2)/2;

    return media;
}

int main () {
    float valor1;
    float valor2;

    cin >> valor1;
    cin >> valor2;

    cout << media(valor1, valor2) << endl;

    return 0;
}