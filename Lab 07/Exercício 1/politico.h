#ifndef POLITICO_H
#define POLITICO_H

#include <bits/stdc++.h>

using namespace std;

class Politico {
protected:
    string nome;
    string partido;

public:
    Politico(const string &nome, const string &partido);
    virtual ~Politico() = default;

    virtual void imprime() const;
};

#endif // POLITICO_H
