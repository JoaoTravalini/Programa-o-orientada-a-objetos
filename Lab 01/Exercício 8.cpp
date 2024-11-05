#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int binario;
    int decimal = 0, expoente = 0;

    cout << "Digite um número binário (contendo apenas 0s e 1s): ";
    cin >> binario;

    while (binario != 0) {
        int digito = binario % 10;

        decimal += digito * pow(2, expoente);
        binario /= 10;
        expoente++;
    }

    cout << "O equivalente decimal é: " << decimal << endl;

    return 0;
}
