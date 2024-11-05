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
    CPilha(int memoria = 0); 
    virtual ~CPilha(void); 
    int pop(int &pop_to);
    int push(int push_this); 
    CPilha(const CPilha&); 
    CPilha& operator=(const CPilha&); 
    friend ostream& operator<<(ostream&, const CPilha&);
    friend istream& operator>>(istream&, CPilha&);
};

#endif
