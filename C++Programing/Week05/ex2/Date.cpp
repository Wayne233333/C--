#include"Date.h"
#include<iostream>
#include<string>
using namespace std;

const int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
const string WEEKDAYS[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const string weekdays[7] = {"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"};

Date::Date(int y, int m, int d, char c): year(y), month(m), day(d), connector(c){
}

Date::~Date(){
}

void Date::Set(int y,int m, int d, char c){
    
    year = y;
    month = m;
    day = d;
    connector = c;
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

int Date::getTotalDays(){          //不足之处：用1900年作为基准年，就无法计算1900年之前的日期

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
    cout << "There are " << diff << " Day(s) between ";
    this->ShowDate();
    cout << " and ";
    other.ShowDate();
    cout << endl;
}

void Date::calculateWeekday(){

    int totalDays = this->getTotalDays();
    int weekdayIndex = totalDays % 7;
    cout << "The weekday for ";
    this->ShowDate();
    cout << " is " << WEEKDAYS[weekdayIndex] << endl;
}

void Date::showMonthCalendar(){

    Date firstDay(year, month, 1, connector);
    int weekdayIndex = firstDay.getTotalDays() % 7;

    cout << "Calendar for " << year << connector << month << endl;
    for(int i = 0; i < 7; i++){
        cout << weekdays[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < weekdayIndex; i++){
        cout << "   ";
    }

    int totdays = daysInMonth[month - 1];
    if(month == 2 && isLeapYear()){
        totdays += 1;
    }

    for(int day = 1; day <= totdays; day++){
        if(day < 10){
            cout << " " << day << " ";
        } else {
            cout << day << " ";
        }
        if((weekdayIndex + day) % 7 == 0){
            cout << endl;
        }
    }
}