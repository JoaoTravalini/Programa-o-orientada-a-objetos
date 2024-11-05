#include <bits/stdc++.h>
#include "Politico.h"

using namespace std;

Politico::Politico(const string &nome, const string &partido)
    : nome(nome), partido(partido) {}

void Politico::imprime() const {
    cout << "Nome: " << nome << ", Partido: " << partido << endl;
}
