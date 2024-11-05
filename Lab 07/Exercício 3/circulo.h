#ifndef CIRCULO_H
#define CIRCULO_H

#include "Ponto.h"

class Circulo : public Ponto {
protected:
    double raio;

public:
    Circulo(double x = 0.0, double y = 0.0, double raio = 1.0);
    void imprime() const override;
};

#endif // CIRCULO_H
