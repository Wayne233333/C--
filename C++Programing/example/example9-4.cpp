//
//  Date.cpp
//  
//
//  Created by Jinshan Xu on 2025/3/12.
//

#include <iostream>
#include <cstring>
using namespace std;

class StudentID
{
    int a;
public:
    StudentID()
    {
        a = 1;
        cout<<"Student ID: "<<a<<endl;
    }
};

class Student
{
    string name;
    StudentID id;
public:
    Student(string n)
    {
        cout<<"Student: " << name<<endl;
        name = n;
        cout<<"Student: " << name<<endl;
    }
};
int main()
{
    Student s("Lily"),s1("a");
    return 0;
}

