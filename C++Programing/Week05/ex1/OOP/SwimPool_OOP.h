#ifndef SWIMPOOL_OOP_H
#define SWIMPOOL_OOP_H

class SwimPool{

private:

    double diameter;
    double width;
    double totalCost;

public:

    SwimPool();
    ~SwimPool();
    void Design(double diameter, double width);
    void calculatePrice();
    void printPrice();
};
#endif