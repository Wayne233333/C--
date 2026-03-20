#include<iostream>
using namespace std;

class Matrix{

public:

    Matrix (int size):size(size)
    {   cout<<"Matrix构造 (size="<<size<<")"<<endl;   }
    Matrix(const Matrix &t)
    {   cout<<"Matrix复制构造 (size="<<t.size<<")"<<endl;  }

private:

    int size;
};

void f(){

    Matrix *mats[3];
    for(int i=0;i<3;i++)    mats[i] = new Matrix(i+2);
    Matrix arr(*mats[0]);
}

int main(){

    f();
    return 0;
}


//程序一共输出四行

//Matrix构造 (size=2)
//Matrix构造 (size=3)
//Matrix构造 (size=4)
//Matrix复制构造 (size=2)

//程序运行时，首先在函数f()中创建了一个指向Matrix对象的指针数组mats，长度为3。此处并没有创建任何Matrix对象，只是创建了指针，所以没有输出。
//接着通过循环，依次创建了三个Matrix对象，分别传入参数2、3、4。
//此处调用了Matrix参数为int的构造函数，分别给size赋值2、3、4，并输出了三行：
//Matrix构造 (size=2)
//Matrix构造 (size=3)
//Matrix构造 (size=4)
//并且使mats数组的每个元素指向对应的Matrix对象，其中mats[0]指向size=2，mats[1]指向size=3，mats[2]指向size=4。

//最后，调用Matrix(arr(*mats[0]))这行代码：
//其中*mats[0]表示解引用指针mats[0]，得到size=2的Matrix对象。
//Matrix arr(*mats[0])：创建了一个新的Matrix对象arr，传入size=2的Matrix对象作为参数，调用了Matrix参数为const Matrix &的构造函数，并输出了第四行：
//Matrix复制构造 (size=2)