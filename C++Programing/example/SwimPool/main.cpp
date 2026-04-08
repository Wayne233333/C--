#include <iostream>
#include "SwimPool.h"
using namespace std;

int main()
{
    SwimPool pool1, pool2,pool3, pool4,pool5;
    pool1.Design(12.2, 3.0);
    pool2.Design(5.0, 2.8);
    pool3.Design(4.8, 1.0);
    pool4.Design(6.0, 1.4);
    pool5.Design(8.7, 2.3);
    
    pool1.ConstructionPlan();
    pool2.ConstructionPlan();
    pool3.ConstructionPlan();
    pool4.ConstructionPlan();
    pool5.ConstructionPlan();
    return 0;
}
