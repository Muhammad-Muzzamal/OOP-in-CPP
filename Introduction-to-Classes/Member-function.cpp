#include <iostream>
using namespace std;
class Rectangle // try to write the first latter of the class name is capital because it is not the variable name it is just for the visual
{

private:
    double Length;
    double width;

public:
    void setLength(double l);
    void setWidth(double w);
    double getLength();
    double gettWidth();
    double calcArea();
};
// ReturnType ClassName::functionName(ParameterList){....code.......}
void Rectangle::setLength(double l)
{
    Length = l;
}
void Rectangle::setWidth(double w)
{
    width = w;
}
double Rectangle::getLength()
{
    return Length;
}
double Rectangle::gettWidth()
{
    return width;
}
double Rectangle::calcArea()
{
    return (Length * width);
}
int main()
{
    Rectangle R1;
    R1.setLength(23);
    R1.setWidth(45);
    cout<<"Length: "<<R1.getLength()<<endl;
    cout<<"Width: "<<R1.gettWidth()<<endl;
    cout<<"Area: "<<R1.calcArea()<<endl;

    return 0;
}