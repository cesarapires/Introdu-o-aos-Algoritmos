#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int quantidadeHomens;
    cin >> quantidadeHomens;

    int quantidadeCaravelas = ceil((quantidadeHomens - 1000)/80.0);

    cout << quantidadeCaravelas << endl;

    return 0;
}