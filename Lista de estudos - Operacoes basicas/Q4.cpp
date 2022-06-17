#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    float baseMaior;
    float baseMenor;
    float altura;

    cin >> baseMaior;
    cin >> baseMenor;
    cin >> altura;

    float area = ((baseMaior+baseMenor)*altura)/2;

    cout << area << endl;

    return 0;
}
