#include"car.h"
#include<iostream>

//rule:前半小时不收费，之后每小时收费10元，不满1小时按1小时计算

Car::Car(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

Car::~Car() {
}

void Car::leave(int hour, int minute, int second) {
    
    int checkin = this->hour * 3600 + this->minute * 60 + this->second;
    int checkout = hour * 3600 + minute * 60 + second;
    if(checkin > checkout){
        checkout += 24 * 3600;
        hour += 24;
    }

    int tot_h = hour - this->hour;
    int tot_m = minute - this->minute;
    int tot_s = second - this->second;
    if(tot_s < 0){
        tot_s += 60;
        tot_m -= 1;
    }
    if(tot_m < 0){
        tot_m += 60;
        tot_h -= 1;
    }

    int tot_time = checkout - checkin;
    if(tot_time <= 1800){
        printf("Total time: %dh %dm %ds, Total cost: 0\n", tot_h, tot_m, tot_s);
    } else {
        int cost = (tot_time - 1800) / 3600;
        if((tot_time - 1800) % 3600 != 0){
            cost += 1;
        }

        printf("Total time: %dh %dm %ds, Total cost: %d\n", tot_h, tot_m, tot_s, cost * 10);
    }
}