#include <bits/stdc++.h>
#include "INT30.h"

using namespace std;

void INT30::leia() {
    string a;
    cin >> a;
    len = a.length();
    for(int i = 0; i < len; i++) {
        num[i] = a[len - i - 1] - '0';
    }
}

void INT30::print() {
    for(int i = len - 1; i >= 0; i--) {
        cout << num[i];
    }
    cout << endl;
}

INT30 INT30::soma(INT30 b) {
    INT30 c;
    c.len = 0;
    for(int i = 0, vaiUm = 0; vaiUm || i < max(len, b.len); i++) {
        int x = vaiUm;
        if(i < len) x += num[i];
        if(i < b.len) x += b.num[i];
        c.num[c.len++] = x % 10;
        vaiUm = x / 10;
    }
    return c;
}

INT30 INT30::subtrai(INT30 b) {
    INT30 c;
    c.len = 0;
    for(int i = 0; i < max(len, b.len); i++) {
        int x = 0;
        if(i < len) x += num[i];
        if(i < b.len) {
            if(num[i] >= b.num[i]) x -= b.num[i];
            else {
                x += 10 - b.num[i];
                num[i + 1]--;
            }
        }
        c.num[c.len++] = x;
    }
    return c;
}
