#ifndef DATE_H
#define DATE_H

class Date{

private:

    int year, month, day;

public:

    Date(int y=1900, int m=1,int d=1);  // 初始化构造函数
    ~Date();  // 析构函数：在对象生命周期结束时，析构函数会自动被调用，用于清理资源。
    void Set(int y,int m, int d);
    bool isLeapYear();
    void ShowDate();
    Date nextDay();
};
#endif
