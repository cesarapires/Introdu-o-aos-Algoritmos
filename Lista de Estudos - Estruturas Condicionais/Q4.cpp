#include <iostream>

using namespace std;

int main () {
    float n1, n2, n3, n4;
    float soma = 0;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    if (n1 > n2) {
        soma += n1;
        if (n2 > n3) {
            soma += n2;
            if (n3 > n4) {
                soma += n3;
            } else {
                soma += n4;
            }
        } else {
            soma += n3;
             if (n2 > n4) {
                soma += n2;
            } else {
                soma += n4;
            }
        }
    } else {
        soma += n2;
        if (n1 > n3) {
            soma += n1;
            if (n3 > n4) {
                soma += n3;
            } else {
                soma += n4;
            }
        } else {
            soma += n3;
             if (n1 > n4) {
                soma += n1;
            } else {
                soma += n4;
            }
        }
    }

    cout << soma << endl;

    return 0;
}