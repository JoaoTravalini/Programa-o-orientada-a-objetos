#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <bits/stdc++.h>

using namespace std;

class Complexo {
private:
    double real_, imag_;
    static int n;

public:
    Complexo();
    Complexo(double a, double b);
    Complexo(const Complexo& c);
    ~Complexo();

    Complexo operator+(Complexo);
    Complexo operator-(Complexo);
    Complexo operator*(Complexo);
    Complexo operator/(Complexo);
    bool operator==(Complexo);
    bool operator!=(Complexo);

    Complexo somar(Complexo);
    Complexo subtrair(Complexo);
    Complexo multiplicar(Complexo);
    Complexo dividir(Complexo);

    void setReal(double a);
    void setImaginario(double a);
    double getReal();
    double getImaginario();
    int getObjetos();
    double modulo();
    void print();

    friend ostream& operator<<(ostream&, const Complexo&);
    friend istream& operator>>(istream&, Complexo&);
};

#endif
