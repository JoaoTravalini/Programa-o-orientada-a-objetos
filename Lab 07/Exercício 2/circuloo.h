#ifndef CIRCULOO_H
#define CIRCULOO_H

#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415

class Ponto {
protected:
    double x, y;

public:
    Ponto(double x = 0, double y = 0) : x{x}, y{y} {}
    virtual ~Ponto() {}

    virtual void read() { cin >> x >> y; }
    virtual void print() const { cout << "C(" << x << "," << y << ")"; }
    virtual double area() { return 0; }
    virtual double volume() { return 0; }

    friend istream& operator>>(istream& input, Ponto& in);
    friend ostream& operator<<(ostream& output, const Ponto& out);
};

class Circulo : public Ponto {
protected:
    double raio;

public:
    Circulo(double x = 0, double y = 0, double r = 0) : Ponto{x, y}, raio{r} {}
    ~Circulo() {}

    void read() override { cin >> x >> y >> raio; }
    void print() const override { Ponto::print(); cout << " RAIO = " << raio; }
    double area() override { return PI * raio * raio; }
    double volume() override { return 0; }
};

class Cilindro : public Circulo {
protected:
    double altura;

public:
    Cilindro(double x = 0, double y = 0, double raio = 0, double a = 0) : Circulo{x, y, raio}, altura{a} {}
    ~Cilindro() {}

    void read() override { cin >> x >> y >> raio >> altura; }
    void print() const override { Circulo::print(); cout << " ALTURA = " << altura; }
    double area() override { return (2 * Circulo::area()) + 2 * PI * raio * altura; }
    double volume() override { return (Circulo::area()) * altura; }
};

istream& operator>>(istream& input, Ponto& in);
ostream& operator<<(ostream& output, const Ponto& out);

#endif // CIRCULOO_H
