//
//  Date.cpp
//  
//
//  Created by Jinshan Xu on 2025/3/12.
//

#include <iostream>
#include <iomanip>
using namespace std;

class X{
    int r;
    int b;
public:
    X(int i, int j): r(i), b(j%r) {}
    void display()
    {
        cout << r << " " << b<< endl;
    }
};

int main(){
    X x(100,7);
    x.display();
    return 0;
}
