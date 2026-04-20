#include<iostream>
#include"MyString.h"
using namespace std;

int main(){

    MyString s1;
    s1 = "hello";
    MyString s2("world");
    MyString s3 = s1 + " " + s2;
    cout << s3 << endl;

    MyString s4(s3);
    
    cout << s4 << endl;
    s4 = s4 + s4;
    cout << s4 << endl;
    cout << s3 << endl;
    s4[0] = 'H';
    cout << s4[0] << endl;
    cout << s4 << endl;
    s4 = s4;
    cout << s4 << endl;

    return 0;
}

//      g++ -o main.exe main.cpp MyString.cpp
//      .\main.exe
