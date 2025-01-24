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
// / ReturnType ClassName::functionName(ParameterList) { ....code....... }
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
    Rectangle kitchen, bedroom, den;
    double length, width;
    // Kitchem's Details
    cout << "What is the kitchen's length? ";
    cin >> length;
    kitchen.setLength(length);
    cout << "What is the kitchen's width? ";
    cin >> width;
    kitchen.setWidth(width);
    //Bedroom's details
    cout << "What is the Bedroom's length? ";
    cin >> length;
    bedroom.setLength(length);
    cout << "What is the Bedroom's width? ";
    cin >> width;
    bedroom.setWidth(width);
    cout << "What is the Den's length? ";
    cin >> length;
    den.setLength(length);
    cout << "What is the Den's width? ";
    cin >> width;
    den.setWidth(width);
    double total_areal=kitchen.calcArea()+bedroom.calcArea()+den.calcArea();
    cout<<"The total area of the three rooms is "<<total_areal;

    return 0;
}