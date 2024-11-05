#ifndef INT30_H
#define INT30_H

#include <bits/stdc++.h>
using namespace std;

class INT30 {
private:
    int num[31];
    int len;

    void inicializar();

public:
    INT30();
    ~INT30();

    void leia();
    void print();

    INT30 operator+(const INT30&);
    INT30 operator-(const INT30&);
    bool operator<(const INT30&);
    bool operator>(const INT30&);
    bool operator<=(const INT30&);
    bool operator>=(const INT30&);
    bool operator==(const INT30&);
    bool operator!=(const INT30&);

    friend ostream& operator<<(ostream&, const INT30&);
    friend istream& operator>>(istream&, INT30&);

    bool isPalindrome();
    INT30& operator++(); // Pré-incremento
    INT30 operator++(int); // Pós-incremento
    INT30& operator+=(const INT30&);
};

#endif
