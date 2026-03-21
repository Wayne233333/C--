#ifndef DATE_H
#define DATE_H

class Date{

private:

    int year, month, day;

public:

    Date(int y=1900, int m=1,int d=1);
    ~Date();
    void Set(int y,int m, int d);
    bool isLeapYear();
    void ShowDate();
    Date nextDay();
};
#endif
