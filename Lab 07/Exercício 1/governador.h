#ifndef GOVERNADOR_H
#define GOVERNADOR_H

#include "Politico.h"

using namespace std;

class Governador : public Politico {
private:
    string estado;

public:
    Governador(const string &nome, const string &partido, const string &estado);
    void imprime() const override;
};

#endif // GOVERNADOR_H
