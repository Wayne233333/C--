#ifndef ARRAY_H
#define ARRAY_H

class Array{

private:

    int a[101];
    int cnt;

public:

    Array();    //初始化

    void addr(int num);

    void pop();

    void print();

    int printcnt();
    
    bool isExist(int num);
};

#endif