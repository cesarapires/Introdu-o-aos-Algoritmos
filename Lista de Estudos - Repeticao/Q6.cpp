#include <iostream>

using namespace std;

int main () {
    int valueN;
    cin >> valueN;

    int contador = 1;

    int fibonacci1 = 0;
    int fibonacci2 = 1;
    while (contador <= valueN) {
        int fibonacci;
        if (contador == 1){
            fibonacci = fibonacci1;
        } else if (contador == 2) {
            fibonacci = fibonacci2;
        } else {
            fibonacci = fibonacci2 + fibonacci1;
            fibonacci1 = fibonacci2;
            fibonacci2 = fibonacci;
        }
        cout << fibonacci << endl;
        contador++;
    }
    return 0;
}