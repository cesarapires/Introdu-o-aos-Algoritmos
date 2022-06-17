#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double valorReal;

    cin >> valorReal;

    cout << fixed << setprecision(2) << valorReal/2.13 << endl;
    cout << fixed << setprecision(2) << valorReal/2.84 << endl;
    cout << fixed << setprecision(2) << valorReal/3.34 << endl;

    return 0;
}