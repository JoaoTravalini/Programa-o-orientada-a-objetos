#include "Presidente.h"
#include <bits/stdc++.h>

using namespace std;

Presidente::Presidente(const string &nome, const string &partido, const string &pais)
    : Politico(nome, partido), pais(pais) {}

void Presidente::imprime() const {
    Politico::imprime();
    cout << "País: " << pais << endl;
}
