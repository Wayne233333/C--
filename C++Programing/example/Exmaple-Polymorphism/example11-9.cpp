#include<iostream>
using namespace std;

class Vehicle{
private:
    double speed,weight;
public:
    Vehicle(double s,double w): speed(s),weight(w){  cout<<"Constructing Vehicle\n"; }
    virtual void run() const{
        cout << "Weight:"<<weight<<", speed:"<<speed<<endl;
    }
};
class Car: public Vehicle{
private:
    int seatNum;
public:
    Car(double s,double w,int n):Vehicle(s,w),seatNum(n) {cout<<"\tConstructing Car\n";}
    void run() const{
        Vehicle::run();
        cout << "\tseatNum: " << seatNum<<endl;
    }
};

class Bicycle: public Vehicle{
private:
    int height;
public:
    Bicycle(double s,double w,int h):Vehicle(s,w),height(h){ cout<<"\tConstructing Bicycle\n";}
    void run() const{
        Vehicle::run();
        cout <<"\theight: " << height << endl;
    }
};

int main()
{
    Car c1(100,10,6);
    Vehicle v1 = c1; // 赋值构造
    Vehicle a1(100,200);
    int x;
    // Car a2 = a1;  //基类给派生类初始化，不允许
    Car a2(70,70,4);
    // a2 =a1;      //基类给派生类赋值，不允许
    Car a3(100,80,5);
    a1 = a3;        //派生类给基类赋值，允许
    Vehicle a4 = a2; //派生类给基类初始化，允许
    
    Bicycle bicycle(20,20,26);
    Vehicle &rv1 = c1;
    Vehicle &rv2 = bicycle;
    rv2.run();
    Vehicle *pv = &bicycle;
    pv->run();
    
    return 0;
}


