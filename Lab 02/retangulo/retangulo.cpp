#include <bits/stdc++.h>
#include "retangulo.h"

CRetangulo::CRetangulo(){
    largura = 1;
    comprimento = 1;
    cout << endl;
    cout << "Foi criado um objeto padrao!" << endl; // ( 2 )
}

CRetangulo::CRetangulo(int c, int l){
    setLarg(l);
    setComp(c);
    cout << endl;
    cout << "Foi criado um objeto personalizado!" << endl;
}

int CRetangulo::getLarg(){
    return largura; 
}

int CRetangulo::getComp(){
    return comprimento; 
}

void CRetangulo::setComp(int c){
    if(c>=1 && c<=20)
    comprimento = c;
    else comprimento = 1;
}

void CRetangulo::setLarg(int l){
    if(l>=1 && l<=20)
    largura = l;
    else largura = 1;
}

bool CRetangulo::is_valid(int c, int l){
 return (c>=1 && c<=20 && l>=1 && c<=20);
}

int CRetangulo::area(){
 return largura*comprimento;
}

int CRetangulo::perimetro(){
 return 2*(largura + comprimento);
}

bool CRetangulo::isQuadrado(){
 return (largura == comprimento);
}

void CRetangulo::imprime(){
    cout << "largura: " << largura << " comprimento: " << comprimento << endl;
}

void CRetangulo::leitura(){
    int c, l;
    cout << "Digite um comprimento: "; cin >> c;
    cout << "Digite uma largura: "; cin >> l;

    while(!is_valid(c, l)){
    cout << "Digite novamente um comprimento: "; cin >> c;
    cout << "Digite novamente uma largura: "; cin >> l;
    }

    setLarg(l);
    setComp(c);
}

void CRetangulo::imprime_ret(char b, char p){
    int lin = largura;
    int col = comprimento;
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            if(i == 0 || j == 0 || i == lin - 1 || j == col - 1)
                cout << b;
            else cout << p;
        }
    cout << endl;
    }
}
