#include<iostream>
using namespace std;
class Pet{
public:
    virtual void speak() { }
    virtual ~Pet(){}
};

class Cat:public Pet{
public:
    virtual void speak()
    {  cout << "miao! miao!" << endl;  }
    virtual ~Cat(){}
};

class Dog:public Pet{
public:
     virtual void speak()
   {  cout << " wang! wang! " << endl; }
   virtual ~Dog(){}
};


int main(){
    Pet *p[10];
    for(int i=0;i<10;++i){
        if(i%2) p[i] = new Dog;
        else p[i] = new Cat;
    }
    for(int i=0;i<10;++i) p[i]->speak();
    for(int i=0;i<10;++i) delete p[i];
}

