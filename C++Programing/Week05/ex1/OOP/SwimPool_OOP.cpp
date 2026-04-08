#include "SwimPool_OOP.h"
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.1415926

const double wayPrice = 167.5;
const double fencePrice = 36.4;

SwimPool::SwimPool(){
}

SwimPool::~SwimPool(){
}

void SwimPool::Design(double diameter, double width){
    this->diameter = diameter;
    this->width = width;
}

void SwimPool::calculatePrice(){

    double way = pow(diameter / 2 + width, 2) * PI - pow(diameter / 2, 2) * PI;
    double fence = diameter * PI;
    totalCost = way * wayPrice + fence * fencePrice;
}

void SwimPool::printPrice(){

    std::cout << "Diameter of Swim pool: " << diameter << std::endl;
    std::cout << "Width of corridor: " << width << std::endl;
    std::cout << "Total Costs: " << totalCost << std::endl << std::endl;
}