#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    string name;
    string id;
public:
    Student(const char *names, const char *ids) { name = names;  id = ids;    }
    
    //Student(const char *names, const char *ids):name(names), id(ids) {;}
    void print();
   
};
int main(){
    Student st1("Lily","10001000");
    st1.print();
    return 0;
}
void Student::print()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID  : "<<id<<endl;
}
