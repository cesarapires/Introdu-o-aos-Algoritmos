#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int codigoProduto;
    float pesoProduto;
    int paisOrigemProduto;
    
    cin >> codigoProduto;
    cin >> pesoProduto;
    cin >> paisOrigemProduto;

    float porcentagemImposto;
    switch (paisOrigemProduto){
        case 1:
            porcentagemImposto = 0;
            break;
        case 2:
            porcentagemImposto = 0.15;
            break;
        case 3:
            porcentagemImposto = 0.25;
            break;
    }

    int valorProduto;
    if (codigoProduto >= 1 && codigoProduto <= 4) {
        valorProduto = 10;
    } else if (codigoProduto >= 5 && codigoProduto <= 7) {
        valorProduto = 25;
    } else {
        valorProduto = 35;
    }

    float pesoGramas = pesoProduto*1000;
    float precoBruto = valorProduto*pesoGramas;
    float impostoSobreProduto = precoBruto*porcentagemImposto; 
    float precoLiquido = precoBruto + impostoSobreProduto;

    cout << fixed << setprecision(1) << pesoGramas << endl; 
    cout << fixed << setprecision(1) << precoBruto << endl; 
    cout << fixed << setprecision(1) << impostoSobreProduto << endl; 
    cout << fixed << setprecision(1) << precoLiquido << endl; 

    return 0;
}