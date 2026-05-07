#include<iostream>
using namespace std;
class Date{

private:

    int year, month, day;
    static char connector;
    
public:

    Date(int y=1900, int m=1,int d=1){
            
        year = y;
        month = m;
        day = d;
    }

    ~Date(){}
    void ShowDate(){
        printf("Date: %d%c%d%c%d\n", year, Date::connector, month, Date::connector, day);
    }
    static void setConnector(char c){
        Date::connector = c;
    }
};

char Date::connector = '-';

int main(){

    Date date1(2026, 3, 27);
    Date date2(2026, 4, 30);
    date1.ShowDate();
    date2.ShowDate();
    Date::setConnector(':');
    date1.ShowDate();
    date2.ShowDate();

    return 0;
}