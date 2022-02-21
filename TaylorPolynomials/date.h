#ifndef DATE_H
#define DATE_H


class Date
{
public:
    Date(int yyyy, int mm, int dd);
    int getDayOfWeek();
    int getYear() const;
    void setYear(int year);

private:
    int year;
    int month;
    int day;
};

#endif // DATE_H
