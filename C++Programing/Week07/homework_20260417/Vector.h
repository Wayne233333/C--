#ifndef VECTOR_H
#define VECTOR_H

class Vector{

private:

    int cap;
    int sz;
    int * buf;

public:

    Vector(){sz = 0; cap = 4; buf =new int[4]; }
    Vector(int n,int v=0);
    Vector(const Vector &a);
    ~Vector() {delete [] buf; }
    int & operator[](unsigned i);
    void print();

    // 完成operator=的声明
    Vector& operator=(const Vector &other);
};

#endif