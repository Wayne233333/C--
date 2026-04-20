#include"Vector.h"
#include<iostream>
using namespace std;

Vector::Vector(int n,int v){

    sz = n; cap = n; buf =new int[n];
    for(int i = 0; i < n; i++){
        
        buf[i] = v;
    }
}

Vector::Vector(const Vector &a){

    sz = a.sz; cap = a.cap; buf = new int[cap];
    for(int i = 0; i < sz; i++){
        
        buf[i] = a.buf[i];
    }
}

int & Vector::operator[](unsigned i){

    return buf[i];
}

void Vector::print(){

    for(int i = 0; i < sz; i++){
        
        cout << buf[i] << " ";
    }
    cout << endl;
}

Vector& Vector::operator=(const Vector &other){

    if(this != &other){

        delete [] buf;
        sz = other.sz;
        cap = other.cap;
        buf = new int[cap];
        for(int i = 0; i < sz; i++){
            
            buf[i] = other.buf[i];
        }
    }
    return *this;
}