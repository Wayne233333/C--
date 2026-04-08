#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.1415926

const double wayPrice = 167.5;
const double fencePrice = 36.4;

double calculatePrice(double diameter, double width){
    
    double way = pow(diameter / 2 + width, 2) * PI - pow(diameter / 2, 2) * PI;
    double fence = diameter * PI;
    return way * wayPrice + fence * fencePrice;
}

void printPrice(double diameter, double width){

    double totalCost = calculatePrice(diameter, width);
    cout << "Diameter of Swim pool: " << diameter << endl;
    cout << "Width of corridor: " << width << endl;
    cout << "Total Costs: " << totalCost << endl << endl;
}

int main(){

    double diameter[5] = {12.2, 5.0, 4.8, 6.0, 8.7};
    double width[5] = {3.0, 2.8, 1.0, 1.4, 2.3};

    for(int i = 0; i <5; i++){

        printPrice(diameter[i], width[i]);
    }

}


    // pool1.Design(12.2, 3.0);
    // pool2.Design(5.0, 2.8);
    // pool3.Design(4.8, 1.0);
    // pool4.Design(6.0, 1.4);
    // pool5.Design(8.7, 2.3);


// Diameter of Swim pool: 12.2
// Width of corridor: 3
//          Total Costs: 181.584