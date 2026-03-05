#include<iostream>
#include<algorithm>
using namespace std;

class point{

private:

    double x;
    double y;

    void Respone(){

        printf("Success!\n");
    }

public:

    double z;

    void SetValue(double a, double b){

        x = a;
        y = b;
        z = a + b;
    }

    void Display(){

        printf("%.2lf %.2lf %.2lf\n", x, y, z); //私有公有均可访问
    }

    void Respone2(){

        Respone();
    }

};

int main(){

    point a;
    a.SetValue(1, 2);
    a.Display();

    //printf("%.2lf %.2lf %.2lf",a.x ,a.y ,a.z);  报错：私有成员不可访问
    printf("%.2lf\n",a.z);

    //a.Respone();    报错：私有成员不可访问
    a.Respone2();
}