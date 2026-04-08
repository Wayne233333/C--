#include<iostream>
using namespace std;
class Pet{
public:
    virtual void Speak() {cout<<"????"<<endl;}
};

class Cat:public Pet{
    void Speak() {cout<<"miao!miao!"<<endl;}
};
class Dog :public Pet{
    void Speak() {cout<<"wang!wang!"<<endl;}
};

int main(){
    Pet obj,*p1;
    Dog dog1;
    Cat cat1;
    obj=dog1; //用Dog类对象给Pet对象赋值
    obj.Speak();
    p1=&cat1; //用Cat类对象地址给基类指针赋值
    p1->Speak();
    p1=&dog1;
    p1->Speak();
    Pet &w=cat1; //以Cat类对象初始化Pet类引用
    w.Speak();
  }

