//
//  Date.cpp
//  
//
//  Created by Jinshan Xu on 2025/3/12.
//

#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
private:
    int year, month, day;
public:
    void SetDate(int, int, int);
    void DisplayDate();
    bool IsLeapYear();
    Date();
};
int main()
{
    Date d1;
    d1.DisplayDate();
    return 0;
}
Date::Date()
{
    year  = 2025;
    month = 01;
    day   = 01;
}
void Date::SetDate(int y,int m, int d)
{
    year = y; month = m; day = d;
}
bool Date::IsLeapYear()
{
    return (year %4==0 && year%100 !=0 || year %400 ==0);
}
void Date::DisplayDate()
{
    cout<<setfill('0');
    cout<<setw(4)<<year<<"-"<<setw(2)<<month<<"-"<<setw(2)<<day<<endl;
}
