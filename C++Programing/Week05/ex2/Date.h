#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date{

private:

    int year, month, day;
    char connector;

public:

    Date(int y=2000, int m=1, int d=1, char c='-');
    ~Date();
    void Set(int y,int m, int d);
    void Set(const string& date);
    bool isLeapYear();
    void ShowDate();
    int getTotalDays();
    void calculateWeekday();
    void calculateDaysBetween(Date& other);
    void showMonthCalendar();
};
#endif
