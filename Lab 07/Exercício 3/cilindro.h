#ifndef CILINDRO_H
#define CILINDRO_H

#include "Circulo.h"

class Cilindro : public Circulo {
private:
    double altura;

public:
    Cilindro(double x = 0.0, double y = 0.0, double raio = 1.0, double altura = 1.0);
    void imprime() const override;
};

#endif // CILINDRO_H
