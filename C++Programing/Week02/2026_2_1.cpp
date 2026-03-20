#include<iostream>
using namespace std;

class Clock{

private:

    int hours;

public:

    Clock (int h=0): hours(h%24)
    {   cout<<"Clock:"<<hours<<endl;    }
    Clock(const Clock &c): hours((c.hours+6)%24)
    {   cout<<"Copy Clock("<<hours<<")"<<endl;    }
    int getTime() {if (hours<0|| hours>=24) hours=12; return hours; }
};

class Timer{

private:

    Clock c1,c2;

public:

    Timer(int a,int b):c2(b),c1(c2.getTime())
    {   cout<<"Clock:"<<c1.getTime()<<","<<c2.getTime()<<endl; }
    Timer(const Timer &t ): c2(t.c1)
    {   cout<<"CopyClock:"<<c1.getTime()<<","<<c2.getTime()<<endl; }
};

int main(){

    Timer t(1,2);
    return 0;
}

//main函数中创建了一个Timer对象t，传入参数1和2。Timer的构造函数首先用Clock初始化c1，再初始化c2。（按照声明顺序初始化）
//由于c1的初始化依赖于c2的getTime()，此时c2还未被初始化，是Clock类型的未初始化对象，故向c1返回编译器默认值0，并非c1内部给h定义的默认值0（改为Timer(int a,int b):c2(b),c1()）时，才是c1内部给h定义的默认值0），再由hours(h%24)给hours赋值0，第一行输出Clock:0。
//接着初始化c2，调用Clock的构造函数，传入参数b=2，得到hours=2%24=2，第二行输出Clock:2。
//最后调用c1.getTime()和c2.getTime()，分别返回hours值0和2，第三行输出Clock:0,2。