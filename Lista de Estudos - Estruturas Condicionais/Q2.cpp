#include <iostream>

using namespace std;

int main () {
    float notaMatematica;
    float notaCienciaNatureza;
    float notaLinguagens;
    float notaRedacao;
    float notaHumanas;

    cin >> notaMatematica;
    cin >> notaCienciaNatureza;
    cin >> notaLinguagens;
    cin >> notaRedacao;
    cin >> notaHumanas;

    int media = -1;
    if (notaRedacao >= 200) {
        media = (
        (notaMatematica*3)+
        (notaCienciaNatureza*2)+
        (notaLinguagens*2)+
        (notaRedacao*2)+
        notaHumanas)
        /10;
    }

    cout << media << endl;



    return 0;
}