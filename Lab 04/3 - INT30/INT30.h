#include <bits/stdc++.h>

using namespace std;

class INT30 {
private:
    int num[31];
    int len;

    void inicializar() {
        for (int i = 0; i < 31; i++)
            num[i] = 0;
    }

public:
    INT30() {
        inicializar();
    }

    ~INT30() {}

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
};
