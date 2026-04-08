#include<iostream>
using namespace std;

class Complex{
private:
    double real, imag;
public:
    Complex(double x =0,double y=0):real(x),imag(y){}
    double getReal()const { return real; }
    double getImag()const { return imag; }
    friend Complex add(Complex &a, Complex &b);
    Complex operator+(Complex &a);
    /*friend Complex operator+(Complex &a, Complex &b);
     */
    friend Complex operator-(Complex &a, Complex &b);
    
    void print() const;
};
void Complex::print()const {
    cout<<real<<(imag<0?"":"+")<<imag<<"i\n";
}
Complex add(Complex &a,Complex &b){
    Complex c(a.real+b.real, a.imag+b.imag);
    return c;
}
int main()
{
    Complex c1(1,1),c2(2,2),c3;
    c1.print();
    c2.print();
    c3 = add(c1,c2);
    c3=c1-c2;  // wrong
     c3.print();
   /* c3 = 3+c2;
                     */
    c3 = c1+c2;
    c3.print();
    return 0;
}

/*

Complex operator+(Complex &a,Complex &b)
{
    Complex c(a.real+b.real, a.imag+b.imag);
    return c;
}
 */

Complex operator-(Complex &a,Complex &b)
{
    Complex c(a.real-b.real, a.imag-b.imag);
    return c;
}
 
 

Complex Complex::operator+(Complex &a)
{
    Complex c(a.real+real, a.imag+imag);
    return c;
}



