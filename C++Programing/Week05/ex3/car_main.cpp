#include"car.h"
#include<iostream>
using namespace std;

int main(){

    Car(10, 30, 2).leave(10, 45, 45);
    Car(10, 32, 14).leave(12, 30, 23);
    Car(13, 11, 23).leave(15, 45, 30);
    Car(12, 10, 55).leave(9, 8, 5);

}
//  g++.exe -fdiagnostics-color=always -g car.cpp car_main.cpp -o car_main.exe
//  ./main.exe


// 进入10: 30:02 离开 10:45:45
// 进入 10:32:14 离开 12:30:23
// 进入 13:11:23 离开 15:45:30
// 进入 12:10:55 离开 9:08:05
