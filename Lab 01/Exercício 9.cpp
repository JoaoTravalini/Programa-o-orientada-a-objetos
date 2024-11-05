#include <bits/stdc++.h>

using namespace std;

int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    string numeroString = to_string(numero);
    string numeroInvertido = numeroString;
    reverse(numeroInvertido.begin(), numeroInvertido.end());

    if (numeroString == numeroInvertido) {
        cout << "O numero " << numero << " e um palindromo." << endl;
    } else {
        cout << "O numero " << numero << " nao e um palindromo." << endl;
    }

    return 0;
}
