#include <bits/stdc++.h>
#include "complexo.h"

using namespace std;

int Complexo::n = 0;

Complexo Complexo::somar(Complexo _complexo) {
    Complexo temp(getReal() + _complexo.getReal(),
                  getImaginario() + _complexo.getImaginario());
    return temp;
}

Complexo Complexo::subtrair(Complexo _complexo) {
    Complexo temp(getReal() - _complexo.getReal(),
                  getImaginario() - _complexo.getImaginario());
    return temp;
}

Complexo Complexo::multiplicar(Complexo _complexo) {
    Complexo temp(
        getReal() * _complexo.getReal() - getImaginario() * _complexo.getImaginario(),
        getReal() * _complexo.getImaginario() + getImaginario() * _complexo.getReal());
    return temp;
}

Complexo Complexo::dividir(Complexo _c) {
    double a = (real * _c.real + imag * _c.imag) /
               (pow(_c.real, 2) + pow(_c.imag, 2));
    double b = (_c.real * imag - real * _c.imag) /
               (pow(_c.real, 2) + pow(_c.imag, 2));
    Complexo temp(a, b);
    return temp;
}

double Complexo::modulo() {
    return sqrt(pow(getReal(), 2) + pow(getImaginario(), 2));
}

void Complexo::print() {
    cout << getReal() << " ";
    if (getImaginario() < 0)
        cout << getImaginario() << "i" << endl;
    else
        cout << "+" << getImaginario() << "i" << endl;
}
