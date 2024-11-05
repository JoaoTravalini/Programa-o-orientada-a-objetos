#include "Cilindro.h"
#include <bits/stdc++.h>

using namespace std;

Cilindro::Cilindro(double x, double y, double raio, double altura) : Circulo(x, y, raio), altura(altura) {}

void Cilindro::imprime() const {
    Circulo::imprime();
    cout << "Altura: " << altura << endl;
}
