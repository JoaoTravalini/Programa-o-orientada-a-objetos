#include <bits/stdc++.h>
#include "polinomio.cpp"
#include "polinomio.h"

using namespace std;

int main() {
    Polinomio a(3), b(4), c(4);
    cin >> a >> b;
    cout << a << endl;
    cout << b << endl;
    c = b - a;
    cout << c << endl;
    c = a + b;
    cout << c << endl;
    return 0;
}
