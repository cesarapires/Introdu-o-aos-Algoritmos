#include <iostream>

using namespace std;

int main () {
    int dividendo;
    int divisor;
    int contador = 0;
    int fator = 1;

    cin >> dividendo;
    cin >> divisor;

    do
    {
        contador++;
        fator = divisor*contador;
    } while (fator < dividendo);

    if (fator > dividendo){
        contador--;
    }
    
    cout << contador << endl;

    return 0;
}