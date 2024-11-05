#include <bits/stdc++.h>
#include "INT30.cpp"


using namespace std;

int main() {
    INT30 a, b, soma, subtracao;

    cout << "Digite o primeiro número (30 dígitos ou menos): ";
    cin >> a;

    cout << "Digite o segundo número (30 dígitos ou menos): ";
    cin >> b;

    soma = a + b;
    subtracao = a - b;

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;

    if (a < b) cout << a << " < " << b << endl;
    if (a > b) cout << a << " > " << b << endl;
    if (a <= b) cout << a << " <= " << b << endl;
    if (a >= b) cout << a << " >= " << b << endl;
    if (a == b) cout << a << " == " << b << endl;
    if (a != b) cout << a << " != " << b << endl;

    return 0;
}
