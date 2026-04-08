#include<iostream>
#include<iomanip>
#include<ctime>
#include<cmath>
using namespace std;

const int Days_in_Months[13]={0, 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};

class Date{
private:
    int year, month, day, date;
public:
    void SetDate(int y, int m, int d);
    void ShowDate();
    int ShowWeek();
    int Days_to_Date(Date d );
    bool IsLeepYear();
    int  Days_to_end_year();
    int Days_Since_start_year();
};

int main()
{
    Date d1,d2;
    d1.SetDate(2025,3,1);
    cout<<d1.Days_Since_start_year()<<endl;
    
    cout<<d1.Days_to_end_year()<<endl;
    
    d2.SetDate(2028,4,5);
    
    d1.ShowDate();
    d2.ShowDate();
    
    cout<< d2.Days_to_Date(d1)<<endl;
    d2.ShowWeek();
    

    return 0;
    
}


void Date::SetDate(int y,int m, int d )
{
    year = y; month = m; day = d;
    date = ShowWeek();
}
void Date::ShowDate()
{
    string weekdays[] ={"Sun","Mon","Tue","Wed","Thue","Fri","Sat"};
    cout<<setfill('0');
    cout<<setw(4)<<year<<"-"<<setw(2)<<month<<"-"<<setw(2)<<day;
    cout<<setfill(' ')<<setw(7)<<weekdays[date]<<endl;
}
int Date::ShowWeek()
{
    time_t rawtime;
    Date today;
    int days_diff,d ;
    
    time_t now = time(nullptr); // obtaining current time stamp
    tm* localTime = localtime(&now); // convert to local time
    
    today.year  = localTime->tm_year +1900;
    today.month = localTime->tm_mon +1;
    today.day   = localTime->tm_mday;
    today.date  = localTime->tm_wday;
    days_diff = Days_to_Date(today);
    d      = (today.date + days_diff)% 7;
    
    
    return d;
}

bool Date::IsLeepYear()
{
    return (year%4==0 && year%100 !=0 || year %400 ==0);
}

int Date:: Days_to_end_year()
{
    int days_to_end_year = 0;
    int i ;
    for(i=month+1; i<=12;i++)
    {
        days_to_end_year += Days_in_Months[i];
    }
  
    days_to_end_year   += Days_in_Months[month]-day;
   
    if(  IsLeepYear() &&   month <=2)  // 当前是闰年，而月份没有超过2，则到年底多加一天
        days_to_end_year +=1;
    
    return days_to_end_year;
    
}




int Date:: Days_Since_start_year() // 计算 距离d1.year-01-01 过了多少天了
{
    int days_since_start_year = 0;
    int i ;
    for(i=1; i< month; i++)
    {
        days_since_start_year += Days_in_Months[i];  //   完整月份包含的天数
    }
    days_since_start_year +=  day;                // 这个月（d1.month）过去的天数
    
    if( IsLeepYear() && month >=2)
        days_since_start_year +=1;
    
    return days_since_start_year;
    
}



int Date::Days_to_Date(Date d)
{
    int ds1,ds2, diff,i;
    Date tmp;
    if (year >d.year)     // 自身对象 2025-06-21          //d: 2023-03-18
    {
        ds1 = Days_Since_start_year ();          //25年过了多少天了
        ds2 = d.Days_to_end_year      ();          // 到23年年底还有多少天
        diff = ds1 +ds2;
        for( i =d.year+1;i<year;i++ )          // 两个日期之间有多少个完整的年
        {
            tmp.SetDate(i,1,1);
            if ( tmp.IsLeepYear()   )     diff +=366;       //闰年是366 天
            else                    diff +=365;       // 平年是365天
        }
    }
    else  if (year >d.year)                  // // 自身对象: 2021-06-21          //目标对象 d: 2023-03-18
    {
        ds1 = d.Days_Since_start_year ();
        ds2 = Days_to_end_year      ();
        diff = ds1 +ds2;
        for( i =year+1;i< d.year;i++ )
        {
            tmp.SetDate(i,1,1);
            if ( tmp.IsLeepYear())      diff +=366;
            else                        diff +=365;
        }
        
    }
    else   // 自身对象：2025-03-01， 目标对象：2025-03-06
    {
        ds1 = d.Days_Since_start_year ();
        ds2 = Days_Since_start_year      ();
        diff = abs(ds2-ds1);
    }
    
    return diff;
}
