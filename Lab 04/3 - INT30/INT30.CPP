#include <bits/stdc++.h>
#include "INT30.h"

using namespace std;

void INT30::leia() {
    string a;
    cin >> a;
    len = a.length();
    for (int i = 0; i < len; i++) {
        num[i] = a[len - i - 1] - '0';
    }
}

void INT30::print() {
    for (int i = len - 1; i >= 0; i--) {
        cout << num[i];
    }
    cout << endl;
}

INT30 INT30::operator+(const INT30& b) {
    INT30 c;
    c.len = 0;
    int vaiUm = 0;
    for (int i = 0; vaiUm || i < max(len, b.len); i++) {
        int x = vaiUm;
        if (i < len) x += num[i];
        if (i < b.len) x += b.num[i];
        c.num[c.len++] = x % 10;
        vaiUm = x / 10;
    }
    return c;
}

INT30 INT30::operator-(const INT30& b) {
    INT30 c;
    c.len = 0;
    for (int i = 0; i < max(len, b.len); i++) {
        int x = 0;
        if (i < len) x += num[i];
        if (i < b.len) {
            if (num[i] >= b.num[i]) x -= b.num[i];
            else {
                x += 10 - b.num[i];
                num[i + 1]--;
            }
        }
        c.num[c.len++] = x;
    }
    return c;
}

bool INT30::operator<(const INT30& b) {
    if (len != b.len) {
        return len < b.len;
    } else {
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] != b.num[i]) return num[i] < b.num[i];
        }
        return false;  // Igual
    }
}

bool INT30::operator>(const INT30& b) {
    if (len != b.len) {
        return len > b.len;
    } else {
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] != b.num[i]) return num[i] > b.num[i];
        }
        return false;  // Igual
    }
}

bool INT30::operator<=(const INT30& b) {
    return !(*this > b);
}

bool INT30::operator>=(const INT30& b) {
    return !(*this < b);
}

bool INT30::operator==(const INT30& b) {
    if (len != b.len) return false;
    for (int i = 0; i < len; i++) {
        if (num[i] != b.num[i]) return false;
    }
    return true;
}

bool INT30::operator!=(const INT30& b) {
    return !(*this == b);
}

ostream& operator<<(ostream& output, const INT30& num) {
    for (int i = num.len - 1; i >= 0; i--) {
        output << num.num[i];
    }
    return output;
}

istream& operator>>(istream& input, INT30& num) {
    string a;
    input >> a;
    num.len = a.length();
    for (int i = 0; i < num.len; i++) {
        num.num[i] = a[num.len - i - 1] - '0';
    }
    return input;
}
