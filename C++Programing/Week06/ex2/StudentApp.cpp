// #include"student1.h"
#include"student2.h"
#include<iostream>
using namespace std;

int main(){

    Student stu1, stu2("Jennie Wang"), stu3(stu2), stu4("John Smith");

    cout << "stu1:" << stu1.GetName() << endl;
    cout << "stu2:" << stu2.GetName() << endl;
    cout << "stu3:" << stu3.GetName() << endl;
    cout << "stu4:" << stu4.GetName() << endl;

    //stu1=stu4;
    //cout<<"stu1:"<<stu1.GetName()<<endl;

    stu1.ChangeName("Peter");
    cout << "stu1:" << stu1.GetName() << endl;

    stu3.ChangeName("Tom");
    cout << "stu3:" << stu3.GetName() << endl;

    return 0;
}

//  g++ -o StudentApp.exe StudentApp.cpp student1.cpp 
//  g++ -o StudentApp.exe StudentApp.cpp student2.cpp
//  ./StudentApp.exe

//两者运行结果一致：
//stu1采用固定数组，stu2采用指针
//stu1无需在析构函数中手动释放内存，拷贝和赋值操作比较简单
//stu2必须在析构函数中手动释放内存（在构造函数中采用了new对name进行内存的动态分配），拷贝和赋值操作需要深拷贝，否则两者会指向同一内存。