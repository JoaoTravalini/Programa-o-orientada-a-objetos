#include <bits/stdc++.h>

using namespace std;

int main() {

    int count = 0;
    int num = 2;

    cout << "Os 20 primeiros numeros primos sao:\n";

    while (count < 20) {
        bool primo = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            cout << num << " ";
            count++;
        }

        num++;
        
    }

    cout << endl;

    return 0;
}
