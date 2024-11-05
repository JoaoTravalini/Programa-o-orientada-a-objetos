#include "Prefeito.h"
#include <bits/stdc++.h>

using namespace std;

Prefeito::Prefeito(const string &nome, const string &partido, const string &cidade)
    : Politico(nome, partido), cidade(cidade) {}

void Prefeito::imprime() const {
    Politico::imprime();
    cout << "Cidade: " << cidade << endl;
}
