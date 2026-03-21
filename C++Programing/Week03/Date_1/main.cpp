#include "Date.h"
#include <iostream>
using namespace std;

int main(){

    Date d1(2001,10,01),d2;
    cout<<"d1: ";
    d1.ShowDate();
    d2 = d1.nextDay();
    cout<<"d2: ";
    d2.ShowDate();
    d2.nextDay();
    return 0;
}

//  g++.exe -fdiagnostics-color=always -g Date.cpp main.cpp -o main.exe
//  ./main.exe
