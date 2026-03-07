#include"Array.h"
#include<iostream>
using namespace std;

int main(){

    Array a;

    a.addr(1);
    a.addr(2);
    a.addr(3);

    a.print();

    printf("count: %d\n", a.printcnt());

    printf("2 is ");
    if(a.isExist(2))   printf("exist\n");
    else    printf("not exist\n");

    printf("4 is ");
    if(a.isExist(4))   printf("exist\n");
    else    printf("not exist\n");

    a.pop();

    a.print();

    return 0;
}

//  g++.exe -fdiagnostics-color=always -g Array.cpp main.cpp -o main.exe
//  ./main.exe