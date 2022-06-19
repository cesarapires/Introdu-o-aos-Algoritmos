#include <iostream>

using namespace std;

int main () {
    int N;

    cin >> N;

    int NumeroDeDiagonais = (N * (N - 3)) / 2;

    cout << NumeroDeDiagonais << endl;

    return 0;
}