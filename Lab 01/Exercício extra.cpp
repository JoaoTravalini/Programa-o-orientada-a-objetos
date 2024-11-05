#include <bits/stdc++.h>

using namespace std;

class Retangulo {
private:
    double comprimento;
    double largura;

public:
    Retangulo(double c = 1, double l = 1) {
        setComprimento(c);
        setLargura(l);
    }

    void setComprimento(double c) {
        if (c >= 0 && c <= 20) {
            comprimento = c;
        } else {
            cerr << "Valor invalido para comprimento. Usando valor padrao (1)." << endl;
            comprimento = 1;
        }
    }

    void setLargura(double l) {
        if (l >= 0 && l <= 20) {
            largura = l;
        } else {
            cerr << "Valor invalido para largura. Usando valor padrao (1)." << endl;
            largura = 1;
        }
    }

    double getComprimento() const {
        return comprimento;
    }

    double getLargura() const {
        return largura;
    }

    double calcularArea() const {
        return comprimento * largura;
    }

    double calcularPerimetro() const {
        return 2 * (comprimento + largura);
    }

    bool ehQuadrado() const {
        return comprimento == largura;
    }

    void imprimirRetangulo() const {
        for (int i = 0; i < largura; i++) {
            for (int j = 0; j < comprimento; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    Retangulo ret(5, 4);
    
    cout << "Comprimento: " << ret.getComprimento() << endl;
    cout << "Largura: " << ret.getLargura() << endl;
    cout << "Area: " << ret.calcularArea() << endl;
    cout << "Perimetro: " << ret.calcularPerimetro() << endl;
    
    if (ret.ehQuadrado()) {
        cout << "O retangulo e um quadrado." << endl;
    } else {
        cout << "O retangulo nao e um quadrado." << endl;
    }

    cout << "Imprimir Retangulo:" << endl;
    ret.imprimirRetangulo();

    return 0;
}
