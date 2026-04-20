#include "student2.h"
#include <cstring>
// #include <cstdlib>

Student::Student(){

    name = new char[1];
    name[0] = '\0';
}

Student::Student(char *n){

    name = new char[strlen(n)];
    strcpy(name, n);
}

Student::Student(const Student &o){
    
    name = new char[strlen(o.name)];
    strcpy(name, o.name);
}

Student::~Student(){

    delete[] name;
}

char *Student::GetName(){
    return name;
}

void Student::ChangeName(char *n){

    delete[] name;
    name = new char[strlen(n)];
    strcpy(name, n);
}
