#include<iostream>
using namespace std;
class Pet{
public:
    virtual void Speak() {cout<<"??????"<<endl;}
};//-----------------------------------
class Cat:public Pet{
public:
    void Speak(int i) {cout<<"miao! miao!"<<endl;}
}; //---------------------------------------
int main(){
    Pet obj,*p1;
    Cat cat1;
    p1=&cat1;
    p1->Speak();
    Pet &w=cat1;
    w.Speak();
    cat1.Speak(1);
    cat1.Pet::Speak();
    return 0;
}

