#include <iostream>

using namespace std;

int main () {
    int contador = 0;
    int quantidadeFichas;
    cin >> quantidadeFichas;

    int quantidadeHomens = 0;
    int quantidadeMulhures = 0;
    double maiorAltura = 0;
    double menorAltura = 100;
    double somatorioHomens = 0.0;
    double somatorioMulhres = 0;

    while (contador < quantidadeFichas) {
        double altura;
        char sexo;

        cin >> altura >> sexo;

        if (sexo == 'm'){
            somatorioHomens += altura;
            quantidadeHomens++;
        } else if (sexo == 'f') {
            somatorioMulhres += altura;
            quantidadeMulhures++;
        }

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }

        if (altura < menorAltura) {
            menorAltura = altura;
        }

        contador++;
    }

    cout << maiorAltura << endl;
    cout << menorAltura << endl;

    if (quantidadeMulhures > 0){
        cout << somatorioMulhres/quantidadeMulhures << endl;
    } else {
        cout << "erro" << endl;
    }

    if (quantidadeHomens > 0){
        cout << somatorioHomens/quantidadeHomens << endl;
    } else {
        cout << "erro" << endl;
    }

    cout << (somatorioHomens+somatorioMulhres)/quantidadeFichas << endl;

    return 0;
}

