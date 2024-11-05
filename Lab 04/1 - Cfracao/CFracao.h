#include <bits/stdc++.h>
using namespace std;

#ifndef ID_CFRACAO
#define ID_CFRACAO

class CFracao {
protected:
    int m_numerador;
    int m_denominador;

    CFracao Reduzida() const;

public:
    CFracao() : m_numerador(1), m_denominador(1) {}
    CFracao(int Num, int Denom) : m_numerador(Num), m_denominador(Denom) {}
    CFracao(const CFracao& f) : m_numerador(f.m_numerador), m_denominador(f.m_denominador) {}
    ~CFracao() {}

    int getNumerador() const { return m_numerador; }
    int getDenominador() const { return m_denominador; }

    CFracao operator+(const CFracao& f) const;
    CFracao operator-(const CFracao& f) const;
    CFracao operator*(const CFracao& f) const;
    CFracao operator/(const CFracao& f) const;

    bool operator<(const CFracao& f) const;
    bool operator>(const CFracao& f) const;
    bool operator<=(const CFracao& f) const;
    bool operator>=(const CFracao& f) const;
    bool operator==(const CFracao& f) const;
    bool operator!=(const CFracao& f) const;

    operator float() const;

    friend ostream& operator<<(ostream& out, const CFracao& f);
    friend istream& operator>>(istream& in, CFracao& f);

    void Print() const;
};

#endif // ID_CFRACAO
