#include <bits/stdc++.h>

using namespace std;

void printInt(int n, int base);

int main() {
    int n = 100;
    int base = 16;
    printInt(n, base);
    return 0;
}

void printInt(int n, int base) {
    char array[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                      '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    if (n >= base)
        printInt(n / base, base);
    cout << array[n % base];
}
