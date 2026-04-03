#include "Date.h"
#include<iostream>

Date::Date(int y, int m, int d, char c){
    
    year = y;
    month = m;
    day = d;
    connector = c;
}

Date::~Date(){}

void Date::ShowDate(){

    printf("Date: %d%c%d%c%d\n", year, connector, month, connector, day);
}

void Date::setConnector(char c){
    connector = c;
}