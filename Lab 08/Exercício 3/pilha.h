#ifndef PILHA_H
#define PILHA_H

#include <bits/stdc++.h>
using namespace std;

class CPilha {
private:
    int *m_dados;
    int m_ponteirodaPilha;
    int m_tamanho;

public:
    CPilha(int memoria); 
    CPilha(void); 
    ~CPilha(void); 
    int pop(int *pop_to); 
    int push(int push_this); 
};

#endif
