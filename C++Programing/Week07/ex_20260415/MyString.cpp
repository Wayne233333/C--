#include"MyString.h"
#include<cstring>

MyString::MyString(const char* s){

    length = strlen(s);
    str = new char[length + 1];     //字符串尾为结束符\0
    strcpy(str, s);
}

MyString::MyString(const MyString& other){   //深拷贝

    length = other.length;
    str = new char[length + 1];
    strcpy(str, other.str);
}

// MyString::MyString(const MyString& other){   //浅拷贝

//     length = other.length;
//     str = new char[length + 1];
//     str = other.str;
// }

MyString::~MyString(){

    delete[] str;
}

MyString MyString::operator+(const MyString& other) const{

    MyString result;
    result.length = length + other.length;
    result.str = new char[result.length + 1];
    strcpy(result.str, str);
    strcat(result.str, other.str);
    return result;
}

MyString& MyString::operator=(const MyString& other){

    if(this != &other){

        // delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }
    return *this;
}

// MyString& MyString::operator=(const MyString& other){    //无自赋值检查

//     delete[] str;
//     length = other.length;
//     str = new char[length + 1];
//     strcpy(str, other.str);

//     return *this;
// }

char& MyString::operator[](int index){
    
    return str[index];
}

ostream& operator<<(ostream& os, const MyString& s){

    os << s.str;
    return os;
}