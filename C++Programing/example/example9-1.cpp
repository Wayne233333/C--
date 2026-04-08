#include<iostream>
#include<iomanip>
using namespace std;

class Complex
{
private:
    float real , imag ;
public:
    
    Complex(int a, int b)
    {
        real = a;
        imag = b;
        cout<<s<<endl;
    }
     
    void init(float,float);
    float GetReal();
    float GetImag();
};

int main()
{
    stirng s = "dddd";
    Complex a(3,5);
   // a.init(3,5);
    cout<<fixed<<setprecision(2);
    cout<<a.GetReal()<<" + "<<a.GetImag()<<"i"<<endl;
    return 0;
}

void Complex::init(float x,float y)
{
    real = x; imag = y;
}
float Complex::GetReal() {   return real;   }
float Complex::GetImag() {   return imag;   }







/*
Complex::Complex(float x, float y)
{
    real = x;
    imag = y;
}
 */
