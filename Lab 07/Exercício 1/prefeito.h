#ifndef PREFEITO_H
#define PREFEITO_H

#include "Politico.h"

using namespace std;

class Prefeito : public Politico {
private:
    string cidade;

public:
    Prefeito(const string &nome, const string &partido, const string &cidade);
    void imprime() const override;
};

#endif // PREFEITO_H
