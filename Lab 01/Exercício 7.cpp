#include <bits/stdc++.h>

using namespace std;

int mdc(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return mdc(y, x % y);
    }
}

int main() {
    int num1, num2;
    cout << "Digite dois números inteiros para encontrar o MDC: ";
    cin >> num1 >> num2;

    int resultado = mdc(num1, num2);
    cout << "O MDC de " << num1 << " e " << num2 << " é: " << resultado << endl;

    return 0;
}
