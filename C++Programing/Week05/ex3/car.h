#ifndef CAR_H
#define CAR_H

class Car{

private:

    int hour;
    int minute;
    int second;

public:

    Car(int hour, int minute, int second);
    ~Car();
    void leave(int hour, int minute, int second);
};
#endif