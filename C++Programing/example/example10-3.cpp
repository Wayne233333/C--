#include <iostream>
using namespace std;

class Vector{
private:
    int cap; // capacity
    int sz;  // size
    int * buf;// pointer to dynamic-array
public:
    Vector(){sz = 0; cap = 4; buf =new int[4]; }
    Vector(int n,int v=0);
    Vector(const Vector &a); //Vector v3 = v1
    ~Vector() {delete [] buf; }
    const int & operator[](unsigned i) const ;
    void print();
};

int main()
{
    const Vector a(10,7);
    
    a[4] =4;
    cout<<a[4]<<endl;
    
    /*
    Vector b = a; // Copy
    b[0] = 1; b[1] = 0;
    b[9] = 6; // b.operator[](9)
    b.operator[](9) = 7;
    a.print();
    b.print();
     */
    return 0;
}



const int & Vector::operator[](unsigned i)const
{
    if (i>=sz) exit(1);
    return buf[i];
}
void Vector::print()
{
    int i;
    for(i=0;i<sz;i++)
        cout<<buf[i]<<" ";
    cout<<endl;
}
Vector::Vector(int n,int v)
{
    sz = n;
    cap = n;
    buf = new int[n];
    for (int i=0;i<cap;i++)
        buf[i] = v;
}
Vector::Vector(const Vector &a)
{
    buf =new int[a.cap];
    sz = a.sz;
    cap =a.cap;
    memcpy(buf,a.buf,sz*sizeof(int));
}


