#include <iostream>

using namespace std;

int main () {
    int matricula;
    int notaFinal;
    int assiduidade;
    char conceito;

    cin >> matricula;
    cin >> notaFinal;
    cin >> assiduidade;

    if ((assiduidade >= 75 and notaFinal >= 60) or (assiduidade >= 65 and notaFinal >= 70)) {
        conceito = 'A';
    } else {
        conceito = 'R';
    }

    cout << matricula %100000 << conceito << endl;

    return 0;
}