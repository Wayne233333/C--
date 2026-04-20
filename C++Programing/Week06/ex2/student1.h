#ifndef STUDENT1_H
#define STUDENT1_H

class Student{

private:

    char name[20];

public:
    
    Student();
    Student(char *n);
    Student(const Student &o);
    //void operator=(const Student& o);
    ~Student();
    char *GetName();
    void ChangeName(char *n);
};

#endif