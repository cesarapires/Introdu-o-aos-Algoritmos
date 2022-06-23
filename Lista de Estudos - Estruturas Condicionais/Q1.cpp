#include <iostream>

using namespace std;

int main () {
    int dividendo;
    int divisor;

    cin >> dividendo;
    cin >> divisor;

    if (divisor != 0) {
        cout << dividendo/divisor << endl;
        cout << dividendo%divisor << endl;
    } else {
        cout << "erro" << endl;
    }

    return 0;
}