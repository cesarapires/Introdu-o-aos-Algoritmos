#include <iostream>

using namespace std;

int main () {
    double salario;
    int horasTrabalhadas;

    cin >> salario;
    cin >> horasTrabalhadas;

    double valorHoraTrabalhada = salario*0.05;

    double salarioBruto = valorHoraTrabalhada*horasTrabalhadas;

    double imposto = salarioBruto*0.23;

    double salarioLiquido = salarioBruto-imposto;

    cout << salarioLiquido << endl;

    return 0;
}