#include<iostream>
#include<cmath>
using namespace std;

const float PI = 3.1415926;
float SurfaceArea(float a){
    cout<<"=========Square Surface Calculator=======\n";
    return a*a;
}
float SurfaceArea(float a, float b, float theta){
    cout<<"=========Triangle Surface Calculator=======\n";
    return a*b*sin(theta/180*PI)/2.0;
}
int main(){
    float Ss, Ts;
    float length =2, side_a =3, side_b = 4, theta = 30;
    Ss = SurfaceArea(3);
    Ts = SurfaceArea(side_a,side_b,theta);
    return 0;
}

