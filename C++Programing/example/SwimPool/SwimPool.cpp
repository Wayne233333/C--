#include<iostream>
#include "SwimPool.h"
using namespace std;

#define PI 3.1415926
void SwimPool::Design(float w, float d)
{
    diameter = w;
    width    = d;
    
}
void SwimPool::ConstructionCost(float price_of_fense, float price_of_corridor)
{
    cost = PI * diameter + PI*( (diameter/2.0+width)*(diameter/2.0+width) - diameter*diameter/4.0);
}
void SwimPool::ConstructionPlan()
{
    ConstructionCost(36.4, 167.5);
    cout<<"Diameter of Swim pool: "<<diameter<<endl;
    cout<<"Width of corridor: "<<width<<endl;
    cout<<"\t Total Costs: "<<cost<<endl<<endl;
    
}
