#include"Date.h"
#include<iostream>
#include<string>
using namespace std;

const int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
// const int WEEKDAY_OFFSET = 0; //1900-1-1
const string WEEKDAYS[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const string weekdays[7] = {"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"};

Date::Date(int y, int m, int d, char c): year(y), month(m), day(d), connector(c){
}

Date::~Date(){
}

void Date::Set(int y,int m, int d){
    
    year = y;
    month = m;
    day = d;
    connector = '-';
}

void Date::Set(const string& date){
    sscanf(date.c_str(), "%d%c%d%c%d", &year, &connector, &month, &connector, &day);
}

bool Date::isLeapYear(){
    return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void Date::ShowDate(){
    printf("%d%c%d%c%d", year, connector, month, connector, day);
}

int Date::getTotalDays(){

    int totalDays = 0;
    for (int i = 1900; i < year; i++) {
        totalDays += 365 + (Date(i).isLeapYear() ? 1 : 0);
    }
    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth[i - 1];
        if (i == 2 && Date(year).isLeapYear()) {
            totalDays += 1;
        }
    }
    totalDays += day;
    return totalDays;
}

void Date::calculateDaysBetween(Date& other){

    int days1 = this->getTotalDays();
    int days2 = other.getTotalDays();
    int diff = abs(days1 - days2);
    cout << "There are " << diff << "Day(s) between ";
    this->ShowDate();
    cout << " and ";
    other.ShowDate();
    cout << endl;
}

void Date::calculateWeekday(){


}

void Date::showMonthCalendar(){

}