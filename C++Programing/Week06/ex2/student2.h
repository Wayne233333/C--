#ifndef STUDENT2_H
#define STUDENT2_H

class Student{

private:

    char *name;

public:

    Student();
    Student(char *n);
    Student(const Student &o);
    ~Student();
    char *GetName();
    void ChangeName(char *n);
};

#endif