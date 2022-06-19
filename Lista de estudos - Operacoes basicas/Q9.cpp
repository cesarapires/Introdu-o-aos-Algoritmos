#include <iostream>

using namespace std;

int main () {
    int milessegundos;
    int horas;
    int minutos;
    double segundos;

    cin >> milessegundos;

    horas = milessegundos / 3600000;
    milessegundos = milessegundos % 3600000;

    minutos = milessegundos / 60000;
    milessegundos = milessegundos % 60000;

    segundos = milessegundos / 1000.0;

    cout << horas << " : " << minutos << " : " << segundos << endl;

    return 0;
}