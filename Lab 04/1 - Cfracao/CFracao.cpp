#include "CFracao.h"
#include <bits/stdc++.h>

CFracao CFracao::Reduzida() const {
    int gcd = std::__gcd(m_numerador, m_denominador);
    return CFracao(m_numerador / gcd, m_denominador / gcd);
}

CFracao CFracao::operator+(const CFracao& f) const {
    CFracao temp(m_numerador * f.m_denominador + m_denominador * f.m_numerador, m_denominador * f.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::operator-(const CFracao& f) const {
    CFracao temp(m_numerador * f.m_denominador - m_denominador * f.m_numerador, m_denominador * f.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::operator*(const CFracao& f) const {
    CFracao temp(m_numerador * f.m_numerador, m_denominador * f.m_denominador);
    return temp.Reduzida();
}

CFracao CFracao::operator/(const CFracao& f) const {
    CFracao temp(m_numerador * f.m_denominador, m_denominador * f.m_numerador);
    return temp.Reduzida();
}

bool CFracao::operator<(const CFracao& f) const {
    return ((float)(*this) < (float)f);
}

bool CFracao::operator>(const CFracao& f) const {
    return ((float)(*this) > (float)f);
}

bool CFracao::operator<=(const CFracao& f) const {
    return ((float)(*this) <= (float)f);
}

bool CFracao::operator>=(const CFracao& f) const {
    return ((float)(*this) >= (float)f);
}

bool CFracao::operator==(const CFracao& f) const {
    return ((float)(*this) == (float)f);
}

bool CFracao::operator!=(const CFracao& f) const {
    return ((float)(*this) != (float)f);
}

CFracao::operator float() const {
    return static_cast<float>(m_numerador) / m_denominador;
}

ostream& operator<<(ostream& out, const CFracao& f) {
    out << f.m_numerador << "/" << f.m_denominador;
    return out;
}

istream& operator>>(istream& in, CFracao& f) {
    in >> f.m_numerador >> f.m_denominador;
    return in;
}

void CFracao::Print() const {
    cout << m_numerador << "/" << m_denominador;
}
