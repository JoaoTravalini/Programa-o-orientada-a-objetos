#include "retangulo.h"
#include "retangulo.cpp"
#include <bits/stdc++.h>

using namespace std;

int main()
{

    CRetangulo r[5];

    cout << endl << "---Leitura dos objetos---" << endl;
    cout << "Digite dois caracteres: ";
    char x, y;
    cin >> x >> y;

    for(int i = 0; i < 5; i++)
    {
        r[i].leitura();
    }

    cout << endl << "Impressao dos objetos: " << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "--Objeto " << i+1 << "--"<< endl << endl;
        r[i].imprime_ret(x, y);
        r[i].imprime();

        if(r[i].isQuadrado())   cout << "E um quadrado" << endl << endl;
        else cout << "Nao e um quadrado" << endl << endl;
    }

    CRetangulo *ret = new CRetangulo;
    ret -> leitura();
    cout << endl;
    cout << "--Objeto 6--" << endl << endl;
    ret -> imprime_ret(x,y);
    ret -> imprime();
    if(ret->isQuadrado())   cout << "E um quadrado" << endl;
    else cout << "Nao e um quadrado" << endl;
    

    delete ret;
}