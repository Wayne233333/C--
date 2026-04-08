#include <iostream>
using namespace std;

class Vector
{
private:
    int cap;
    int sz;
    int * buf;
public:
    Vector(){sz =0,cap =4; buf = new int[4]; }
    Vector(unsigned n, int val =0);
    void print();
    int & operator[] (int i)
    {
        return buf[i];
    }
};
Vector::Vector(unsigned n, int val)
{
    buf = new int[n];
    cap = sz = n;
    for(int i =0;i<sz-1; i++)
        buf[i] = val;
}
void Vector::print()
{
    for(int i=0;i<sz-1;i++)
        cout<<buf[i]<<" ";
    cout<<buf[sz-1]<<endl;
}
int main()
{
    Vector a(10,7);
    Vector b = a; // Copy
    b[0] = 1; b[1] = 0;
    b[9] = 6;
    a.print();
    b.print();
    return 0;
}
