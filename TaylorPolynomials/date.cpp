#include "date.h"

Date::Date(int yyyy, int mm, int dd)
{
    year = yyyy;
    month = mm;
    day = dd;
}

int Date::getDayOfWeek()
{
    int m = month-1;
    if(month > 2)
        m -= 2;
    else
        m += 10;
    //return m;

    int y = year % 100;
    int c = year / 100;
    int w = static_cast<int>(day + (2.6 * m - 0.2) + y + y/4 + c/4 - 2*c ) % 7;
    if (w < 0)
        w += 7;
    return w;

}

int Date::getYear() const
{
    return year;
}

void Date::setYear(int year)
{
    this->year = year;
}

//          jan feb mar apr maj jun jul aug sep okt nov dec
// Shifted: mar apr maj jun jul aug sep okt nov dec jan feb

//          00 01 02 03 04 05 06 07 08 09 10 11
// Shifted: 10 11 00 01 02 03 04 05 06 07 08 09
