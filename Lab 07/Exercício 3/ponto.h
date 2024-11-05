#ifndef PONTO_H
#define PONTO_H

class Ponto {
protected:
    double x, y;

public:
    Ponto(double x = 0.0, double y = 0.0);
    virtual ~Ponto() = default;

    virtual void imprime() const;
};

#endif // PONTO_H
