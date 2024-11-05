#include <iostream>

using namespace std;

#ifndef RETANGULO_H
#define RETANGULO_H

class CRetangulo{
    private:
        int largura, comprimento;
    public:
    CRetangulo();
    CRetangulo(int c, int l);
    ~CRetangulo(){
        cout << endl;
        cout << "Destruindo retângulo.. " << endl;
    }
    int getLarg();
    int getComp();
    void setLarg(int l);
    void setComp(int c);
    bool is_valid(int c, int l);
    int area();
    int perimetro();
    bool isQuadrado();
    void imprime_ret(char b, char p);
    void leitura();
    void imprime();
};

#endif