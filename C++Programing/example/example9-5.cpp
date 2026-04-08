//
//  Date.cpp
//  
//
//  Created by Jinshan Xu on 2025/3/12.
//

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Date{
private:
    int year,month,day;
public:
    Date(const string& s);
    Date(int y=2020, int m=1,int d=1): year(y), month(m), day(d) {;}
    void print();
};
int main(){
    Date d1=2000; //发生类型转换
    d1.print();
    string s("2000/12/11");
    Date d2;
    d2 = s; //发生类型转换
    d2.print();
    // Date d3="2000/12/12"; //error
}

Date::Date(const string& s){
    year = atoi(s.substr(0,4).c_str());
    month = atoi(s.substr(5,2).c_str());
    day = atoi(s.substr(8,2).c_str());
}
void Date::print()
{
    cout<<setfill('0');
    cout<<year<<"-"<<setw(2)<<month<<"-"<<setw(2)<<day<<endl;
}
