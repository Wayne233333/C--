#include "student1.h"
#include <cstring>

Student::Student(){

    name[0] = '\0';
}

Student::Student(char *n){

    strncpy(name, n, 20);
}

Student::Student(const Student &o){

    strncpy(name, o.name, 20);
}

Student::~Student(){
}

char *Student::GetName(){

    return name;
}

void Student::ChangeName(char *n){

    strncpy(name, n, 20);
}
