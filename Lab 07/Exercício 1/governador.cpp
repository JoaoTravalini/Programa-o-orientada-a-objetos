#include "Governador.h"
#include <bits/stdc++.h>

using namespace std;

Governador::Governador(const string &nome, const string &partido, const string &estado)
    : Politico(nome, partido), estado(estado) {}

void Governador::imprime() const {
    Politico::imprime();
    cout << "Estado: " << estado << endl;
}
