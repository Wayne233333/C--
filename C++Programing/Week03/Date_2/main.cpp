#include "Date.h"
#include<iostream>
using namespace std;

int main(){

    Date date(2026, 3, 27);
    date.ShowDate();
    date.setConnector(':');
    date.ShowDate();
}

//  g++.exe -fdiagnostics-color=always -g Date.cpp main.cpp -o main.exe
//  ./main.exe