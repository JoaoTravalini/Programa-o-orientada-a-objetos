#ifndef PRESIDENTE_H
#define PRESIDENTE_H

#include "Politico.h"

using namespace std;

class Presidente : public Politico {
private:
    string pais;

public:
    Presidente(const string &nome, const string &partido, const string &pais);
    void imprime() const override;
};

#endif // PRESIDENTE_H
