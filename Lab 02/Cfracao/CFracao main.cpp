#include <bits/stdc++.h>
#include "CFracao.h"
#include "CFracao.cpp"
#include "poligonos.h"

using namespace std;

int main() {
    CFracao f1(8, 4);
    cout << "Numerador F1 = " << f1.getNumerador() << endl;
    cout << "Denominador F1 = " << f1.getDenominador() << endl << endl;

    CFracao f2(4, 2);
    cout << "Numerador F2 = " << f2.getNumerador() << endl;
    cout << "Denominador F2 = " << f2.getDenominador() << endl << endl;

    CFracao f3 = f1.Somar(f2);
    cout << "Soma = ";
    f3.Print();
    cout << endl;

    f3 = f1.Subtrair(f2);
    cout << "Subtracao = ";
    f3.Print();
    cout << endl;

    f3 = f1.Multiplicar(f2);
    cout << "Multiplicacao = ";
    f3.Print();
    cout << endl;

    f3 = f1.Dividir(f2);
    cout << "Divisao = ";
    f3.Print();
    cout << endl;

    if (f1.MenorQue(f2)) {
        cout << "Menor = ";
        f1.Print();
        cout << endl;
    } else {
        cout << "Menor = ";
        f2.Print();
        cout << endl;
    }

    if (f1.MaiorQue(f2)) {
        cout << "Maior = ";
        f1.Print();
        cout << endl << endl;
    } else {
        cout << "Maior = ";
        f2.Print();
        cout << endl << endl;
    }

    if (f1.Igual(f2)) {
        cout << "Iguais" << endl;
    } else {
        cout << "Nao Iguais" << endl;
    }

    cout << "Como Float = " << f3.ComoFloat();
    f3.Print();

    return 0;
}
