#include <bits/stdc++.h>
#include "data.h"
using namespace std;

const int Data::days[13]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Data::Data(int day, int month, int year) {
    setData(day, month, year);
}

void Data::setData(int dd, int mm, int yy) {
    if (mm >= 1 && mm <= 12)
        month = mm;
    else
        month = 1;

    if (yy >= 1900 && yy <= 2100)
        year = yy;
    else
        year = 2021;

    if ((month == 2 && anoBissexto(year) && dd >= 1 && dd <= 29) || (dd >= 1 && dd <= days[month]))
        day = dd;
    else
        day = 1;
}

Data& Data::operator++() {
    helpIncrement();
    return *this;
}

Data Data::operator++(int) {
    Data temp{*this};
    helpIncrement();
    return temp;
}

Data& Data::operator+=(unsigned int additionalDays) {
    for (unsigned int i = 0; i < additionalDays; ++i) {
        helpIncrement();
    }
    return *this;
}

bool Data::anoBissexto(int testYear) {
    return (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0));
}

bool Data::endOfMonth(int testDay) const {
    if (month == 2 && anoBissexto(year)) {
        return testDay == 29;
    } else {
        return testDay == days[month];
    }
}

void Data::helpIncrement() {
    if (!endOfMonth(day)) {
        ++day;
    } else {
        if (month < 12) {
            ++month;
            day = 1;
        } else {
            ++year;
            month = 1;
            day = 1;
        }
    }
}

ostream& operator<<(ostream& output, const Data& d) {
    static string monthName[13]{"", "Janeiro", "Fevereiro",
                                "Março", "Abril", "Maio", "Junho", "Julho", "Agosto",
                                "Setembro", "Outubro", "Novembro", "Dezembro"};
    output << d.day << " de " << monthName[d.month] << " de " << d.year;
    return output;
}
