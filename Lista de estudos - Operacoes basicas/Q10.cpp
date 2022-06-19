#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int bensProduzidos;

    cin >> bensProduzidos;

    int embalagensComum = ceil((bensProduzidos*2)/3.0);
    int embalagensLuxo = bensProduzidos - embalagensComum;

    cout << embalagensComum << endl;
    cout << embalagensLuxo << endl;

    return 0;
}