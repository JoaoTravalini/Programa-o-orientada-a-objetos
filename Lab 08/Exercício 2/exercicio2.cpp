#include <bits/stdc++.h>
using namespace std;

int main() {
    double *p;
    try {
        while(1) {
            p = new double[10000000000];
            p[0] = 1;
        }
    } catch(bad_alloc &e) {
        cout << e.what() << endl;
    }
}
