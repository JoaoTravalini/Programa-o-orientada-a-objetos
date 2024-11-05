#include <bits/stdc++.h>
#include "INT30.h"
#include "INT30.cpp"
using namespace std;

int main() {
    INT30 nums[5];

    cout << "Digite 5 numeros (cada um com ate 30 digitos):" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    cout << "Resultados:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": " << (nums[i].isPalindrome() ? "E palindromo" : "Nao e palindromo") << endl;
    }

    return 0;
}
