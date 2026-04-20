#include<iostream>
using namespace std;

class Clock {
private:

    int hour;
    int minute;
    int second;

    string int2str(int n){

        string str = "";
        if (n < 10){

            str += "0";
            str += char(n + '0');
        }
        else{

            str = char(n%10 + '0');
            str = char(n/10 + '0') + str;
        }
        return str;
    }

public:

    Clock(): hour(0), minute(0), second(0){

        cout << "Clock 默认构造函数" << showTime() << endl;
    }

    Clock(int h, int m, int s){
        
        hour = h;
        minute = m;
        second = s;
        cout << "Clock 参数构造函数" << showTime() << endl;
    }

    Clock(Clock& other): hour(other.hour), minute(other.minute), second(other.second){
        
        cout << "Clock 拷贝构造函数" << showTime() << endl;
    }

    ~Clock(){
        
        cout << "Clock 析构函数" << showTime() << endl;
    }

    void setTime(int h, int m, int s){

        hour = h;
        minute = m;
        second = s;
    }

    string showTime(){

        string timestr = "";
        timestr += int2str(hour) + ":";
        timestr += int2str(minute) + ":";
        timestr += int2str(second);
        return timestr;
    }

};

class Clock_0 { //没有构造、析构函数

private:

    int hour = 0;
    int minute = 0;
    int second;

    string int2str(int n){

        string str = "";
        if (n < 10){

            str += "0";
            str += char(n + '0');
        }
        else{

            str = char(n%10 + '0');
            str = char(n/10 + '0') + str;
        }
        return str;
    }

public:
    
    string showTime(){

        string timestr = "";
        timestr += int2str(hour) + ":";
        timestr += int2str(minute) + ":";
        timestr += int2str(second);
        return timestr;
    }

    void setTime(int h, int m, int s){

        hour = h;
        minute = m;
        second = s;
    }
};

void runClock(){

    Clock clock3(8, 30, 3);
    return;
}

int main() {

    Clock clock1;
    // Clock clock2(8, 30); 初始化时必须严格按照参数顺序与数量输入
    Clock clock2(8, 30, 2);
    runClock();
    Clock clock4 = clock2;
    clock4.setTime(8, 30, 4);
    cout << clock4.showTime() << endl;

    Clock_0 clock5;
    cout << clock5.showTime() << " 秒数部分为垃圾值" << endl;
    clock5.setTime(8, 30, 5);
    cout << clock5.showTime() << endl;

    return 0;
}

//有构造函数的类，能根据输入的值，自动调用合适的构造函数以初始化对象。
//没有构造函数的类，将使用默认值初始化对象（未赋予时为垃圾值）。
//有析构函数的类，会在对象被销毁时调用析构函数，用于释放内存（按照栈的后进先出顺序）。
//没有析构函数的类，不会在对象被销毁时调用析构函数，也不会释放内存。

//构造函数与析构函数并非必要。
//构造函数可以多样化地初始化对象（多个构造函数可以以不同形式传入参数）。
//析构函数可以在类离开作用域时释放内存（如runClock()函数中clock3对象离开作用域时调用析构函数）。
//若在构造函数中动态分配了内存，则需要析构函数来释放内存，否则会导致内存泄漏问题。