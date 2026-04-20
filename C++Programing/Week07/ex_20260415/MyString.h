#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
using namespace std;

class MyString{

private:

    char* str;
    int length;

public:

    MyString(const char* s = "");
    MyString(const MyString& other);
    ~MyString();

    MyString operator+(const MyString& other) const;
    MyString& operator=(const MyString& other);
    char& operator[](int index);
    friend ostream& operator<<(ostream& os, const MyString& s);
};

#endif