#include"Date.h"
#include<iostream>

const int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date(int y, int m, int d): year(y), month(m), day(d){
    
    printf("Contruct\n");
}

Date::~Date(){

    printf("Destruct\n");
}

void Date::Set(int y,int m, int d){
    year = y;
    month = m;
    day = d;
}

bool Date::isLeapYear(){

    return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void Date::ShowDate(){

    printf("%d-%d-%d\n", year, month, day);
}

Date Date::nextDay(){
    
    Date nextday(year, month, day);
    nextday.day++;
    if(nextday.day > daysInMonth[month-1] && !isLeapYear() || (month == 2 && nextday.day > 29)){

        nextday.day = 1;
        nextday.month++;
        if(nextday.month > 12){

            nextday.month = 1;
            nextday.year++;
        }
    }
    return nextday;
}
   
//孤对象：创建（Contruct）完后即刻销毁（Destruct），代码中的d1.nextday()和d2.nextDay()就是孤对象
//通过d2 = d1.nextDay();这条代码调用后的输出（Contruct Destruct）可知，
//在d1.nextDay()给d2赋值之后就被销毁了
//可知孤对象在产生后立即销毁，不会被视为定义了的对象。
//同理可知，输出最后三个Destruct中的第一个即是d2.nextDay()的Destruct

