#include "Circulo.h"
#include <bits/stdc++.h>

using namespace std;

Circulo::Circulo(double x, double y, double raio) : Ponto(x, y), raio(raio) {}

void Circulo::imprime() const {
    Ponto::imprime();
    cout << "Raio: " << raio << endl;
}
