#include<iostream>
#define PI 3.14
using namespace std;
//base class
class shape
{
    public:
    virtual void area()=0;
};

// derived classes
class Rectangle:public shape
{
    private:
    double length;
    double width;
    public:
    Rectangle()
    {
        length=0.0;
        width=0.0;
    }
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    void area () override
    {
        cout<<"Area: "<<length*width<<endl;
    }
};
// derived class
class Circle:public shape
{
    private:
    double radius;
    public:
    Circle()
    {
        radius=0.0;
    }
    Circle(double r)
    {
        radius=r;
    }
    void area() override
    {
        cout<<"Area: "<<PI*radius*radius<<endl;
    }
};
int main(){
    shape *ptr[2];
    ptr[0]=new Rectangle(12,13);
    ptr[1]=new Circle(22.2);
    ptr[0]->area();
    ptr[1]->area();
    delete ptr[0];
    delete ptr[1];

return 0;
}