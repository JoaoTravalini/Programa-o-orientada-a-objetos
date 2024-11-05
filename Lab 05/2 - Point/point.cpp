#include <bits/stdc++.h>
#include "point.h"

using namespace std;

Point::Point(int xx, int yy) : x{xx}, y{yy} {}

Point Point::operator+(Point& p) {
    int xx = x + p.x;
    int yy = y + p.y;
    return Point{xx, yy};
}

Point Point::operator+(int value) {
    int xx = x + value;
    int yy = y + value;
    return Point{xx, yy};
}

Point operator+(int value, Point& p) {
    int xx = p.x + value;
    int yy = p.y + value;
    return Point{xx, yy};
}

bool Point::operator!() const {
    return (x == 0 && y == 0);
}

Point& Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int value) {
    Point temp = *this;
    ++(*this);
    return temp;
}

Point Point::operator--(int value) {
    Point temp = *this;
    --(*this);
    return temp;
}

Point& Point::operator--() {
    x--;
    y--;
    return *this;
}

Point::operator int() {
    return sqrt(x*x + y*y);
}

ostream& operator<<(ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

istream& operator>>(istream& in, Point& p) {
    in >> p.x >> p.y;
    return in;
}

bool Point::operator==(Point& p) {
    return (x == p.x && y == p.y);
}

bool Point::operator!=(Point& p) {
    return !(*this == p);
}
