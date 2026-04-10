#include"Date.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
    Date date1;
    Date date2;

    date1.Set(2026, 4, 1, '~');

    date1.ShowDate();
    cout << endl;
    date2.ShowDate();
    cout << endl;

    date2.Set("2027/4/1");

    date2.ShowDate();
    cout << endl;
    
    date1.calculateWeekday();
    
    date1.calculateDaysBetween(date2);
    date1.showMonthCalendar();

    return 0;
}

//  g++.exe -fdiagnostics-color=always -g Date.cpp main.cpp -o main.exe
//  ./main.exe