#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <bits/stdc++.h>
using namespace std;

class Polinomio {
private:
    double *valores;
    int n;

public:
    Polinomio();
    Polinomio(int);
    Polinomio(const Polinomio&);
    ~Polinomio();
    Polinomio operator=(const Polinomio&);
    Polinomio operator+(Polinomio);
    Polinomio operator-(Polinomio);
    double& operator[](int);
    friend ostream& operator<<(ostream&, Polinomio&);
    friend istream& operator>>(istream&, Polinomio&);
    bool operator>(const Polinomio&);
    bool operator<(const Polinomio&);
    bool operator>=(const Polinomio&);
    bool operator<=(const Polinomio&);
    bool operator==(const Polinomio&);
    bool operator!=(const Polinomio&);
};

#endif
