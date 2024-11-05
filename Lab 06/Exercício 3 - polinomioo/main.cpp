#include <bits/stdc++.h>
#include "polinomio.h"
#include "polinomio.h"
using namespace std;

int main() {
    Polinomio p0(2);
    cin >> p0;
    cout << "Inicial: " << p0 << endl;
    cout << "A funcao " << p0 << " para (x = 2) eh " << p0.calcula(2) << endl;

    Polinomio derivada = p0.derivada();
    cout << endl << "A derivada eh " << derivada << endl;

    int n_inicial = 20, iteracoes = 2000000;
    cout << "Raiz aproximada " << p0.raiz(n_inicial, iteracoes) << endl;
}
