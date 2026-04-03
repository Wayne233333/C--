#ifndef DATE_H
#define DATE_H

class Date{

private:

    int year, month, day;
    char connector;

public:

    Date(int y=1900, int m=1,int d=1, char c='-');
    ~Date();
    void ShowDate();
    void setConnector(char c);
};
#endif