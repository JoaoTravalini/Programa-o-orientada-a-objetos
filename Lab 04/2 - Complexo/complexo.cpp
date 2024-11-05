#include "complexo.h"
#include <bits/stdc++.h>

using namespace std;

int Complexo::n = 0;

Complexo::Complexo() : real_(1), imag_(1) {
    n++;
}

Complexo::Complexo(double a, double b) : real_(a), imag_(b) {
    n++;
}

Complexo::Complexo(const Complexo& c) : real_(c.real_), imag_(c.imag_) {
    n++;
}

Complexo::~Complexo() {
    n--;
}

Complexo Complexo::operator+(Complexo c) {
    return Complexo(real_ + c.real_, imag_ + c.imag_);
}

Complexo Complexo::operator-(Complexo c) {
    return Complexo(real_ - c.real_, imag_ - c.imag_);
}

Complexo Complexo::operator*(Complexo c) {
    return Complexo(real_ * c.real_ - imag_ * c.imag_, real_ * c.imag_ + imag_ * c.real_);
}

Complexo Complexo::operator/(Complexo c) {
    double a = (real_ * c.real_ + imag_ * c.imag_) / (pow(c.real_, 2) + pow(c.imag_, 2));
    double b = (c.real_ * imag_ - real_ * c.imag_) / (pow(c.real_, 2) + pow(c.imag_, 2));
    return Complexo(a, b);
}

bool Complexo::operator==(Complexo c) {
    return (real_ == c.real_ && imag_ == c.imag_);
}

bool Complexo::operator!=(Complexo c) {
    return !(*this == c);
}

void Complexo::setReal(double a) {
    real_ = a;
}

void Complexo::setImaginario(double a) {
    imag_ = a;
}

double Complexo::getReal() {
    return real_;
}

double Complexo::getImaginario() {
    return imag_;
}

int Complexo::getObjetos() {
    return n;
}

double Complexo::modulo() {
    return sqrt(pow(real_, 2) + pow(imag_, 2));
}

void Complexo::print() {
    cout << real_ << " ";
    if (imag_ < 0) cout << imag_ << "i" << endl;
    else cout << "+" << imag_ << "i" << endl;
}

ostream& operator<<(ostream& output, const Complexo& complexo) {
    output << complexo.real_ << " ";
    if (complexo.imag_ < 0) output << complexo.imag_ << "i";
    else output << "+" << complexo.imag_ << "i";
    return output;
}

istream& operator>>(istream& input, Complexo& complexo) {
    input >> complexo.real_ >> complexo.imag_;
    return input;
}
