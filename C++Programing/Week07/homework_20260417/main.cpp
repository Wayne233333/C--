#include<iostream>
#include"Vector.h"
using namespace std;

int main(){

    Vector a(10,7), b(6,3);
    
    a.print();
    b.print();
    
    a[4] = 4;
    b = a;
    
    a.print();
    b.print();

    return 0;
}