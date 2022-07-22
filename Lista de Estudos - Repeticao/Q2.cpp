#include <iostream>

using namespace std;

int main () {
    int matricula;
    float nota;
    int matriculaMaior;
    float notaMaior = 0;
    int matriculaMenor;
    float notaMenor = 0;
    do {
        cin >> matricula;
        if (matricula > 0) {
            cin >> nota;
            if (nota > notaMaior) {
                notaMenor = notaMaior;
                notaMaior = nota;

                matriculaMenor = matriculaMaior;
                matriculaMaior = matricula;
            }
        }



    } while (matricula > 0);
    cout << matriculaMaior << " " << notaMaior << endl;
    cout << matriculaMenor << " " << notaMenor << endl;
    return 0;
}