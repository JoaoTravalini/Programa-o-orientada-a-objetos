#include <bits/stdc++.h>

#ifndef INT30_H
#define INT30_H

class INT30 {
private:
    int num[31];
    int len;

    void inicializar() {
        for(int i = 0; i < 31; i++)
            num[i] = 0;
    }

public:
    INT30() {
        inicializar();
    }

    ~INT30() {}

    void leia();
    void print();
    INT30 soma(INT30);
    INT30 subtrai(INT30);
};

#endif
