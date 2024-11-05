#include "Ponto.h"
#include <bits/stdc++.h>

using namespace std;

Ponto::Ponto(double x, double y) : x(x), y(y) {}

void Ponto::imprime() const {
    cout << "Ponto (" << x << ", " << y << ")" << endl;
}
