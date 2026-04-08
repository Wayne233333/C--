
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
class Shape{
public:
    virtual double area()const {return 0; }
    virtual void showArea()const {}
    virtual ~Shape(){}
};
class Circle:public Shape{
    double radius;
public:
    Circle(double r):radius(r){}
    ~Circle(){cout<<"Circle destroyed\n";}
    void showArea() const{cout<<"(Circle)"<<area()<<"\n";}
    double area() const  {return radius*radius*3.1415;   }
    
};
class Triangle :public Shape{
    double a,b,c;
public:
    Triangle(double aa,double bb,double cc):a(aa),b(bb),c(cc){}
    ~Triangle(){cout<<"Triangle destroyed\n";}

    void showArea()const{cout<<"(Triangle)"<<area()<<"\n";}
    double area()const{
        double s = (a+b+c)/2.0;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};
class Square : public Shape{
    double length;
public:
    Square(double len):length(len){}
    ~Square(){cout<<"Square destroyed\n";}
    void showArea()const{ cout<<"(Square)"<<area()<<"\n"; }
    double area()const  {return length*length;}
};
class Rectangle : public Shape{
    double length,width;
public:
    Rectangle(double len,double wid):length(len),width(wid){}
    ~Rectangle(){cout<<"Rectangle destroyed\n";}
    void showArea()const{ cout<<"(Rectangle)"<<area()<<"\n";}
    double area()const  { return length*width;}
};
    
bool cmp(Shape *p1, Shape *p2){
    return p1->area()< p2->area();
}

int main(){
    Shape* shapes [600];
    Shape* p;
    double a,b,c;
    int cnt = 0;
    for(int no; cin>>no; )
    {
        switch( no )
        {
            case 0: cin>>a; p = new Circle(a);  break;
            case 1: cin>>a>>b>>c; p = new Triangle(a,b,c);break;
            case 2: cin>>a; p = new Square(a); break;
            case 3: cin>>a>>b; p = new Rectangle(a,b);break;
            default: p = new Circle(0);
        }
        shapes[cnt++] = p;
    }
    sort(shapes,shapes+cnt,cmp );
    for(int i=0; i<cnt;++i){
        shapes[i]->showArea();
        delete shapes[i];
    }
    return 0;
}
