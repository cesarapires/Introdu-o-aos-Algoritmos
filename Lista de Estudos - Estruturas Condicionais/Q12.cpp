#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    int delta = (b*b)-4*a*c;

    if (delta >= 0) {
        float raiz1 = (-b-sqrt(delta))/(2*a);
        float raiz2 = (-b+sqrt(delta))/(2*a);
        cout << raiz1 << " " << raiz2 << endl;
    } else {
        cout << "nenhuma raiz" << endl;
    }
}