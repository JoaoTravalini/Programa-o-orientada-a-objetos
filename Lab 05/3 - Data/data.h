#ifndef Data_H
#define Data_H

#include <bits/stdc++.h>

class Data {
    friend std::ostream& operator<<(std::ostream&, const Data&);

public:
    Data(int d = 1, int m = 1, int y = 1900);
    void setData(int, int, int);
    Data& operator++();
    Data operator++(int);
    Data& operator+=(unsigned int);
    static bool anoBissexto(int);
    bool endOfMonth(int) const;

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
    static const int days[13];
    void helpIncrement();
};

#endif
