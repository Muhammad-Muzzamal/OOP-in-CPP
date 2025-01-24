#include <iostream>
#include <cstdlib>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double, double);
    // void setlength(double);
    // void setwidth(double);
    double getlength();
    double getwidth();
    double calcArea();
};
Rectangle::Rectangle(double l, double w)
{
    if (length >= 0 && width >= 0)
    {
        length = l;
        width = w;
    }
    else
    {
        cout << "Invalid Instruction\n";
        exit(EXIT_FAILURE);
    }
}
double Rectangle::getlength()
{
    return length;
}
double Rectangle::getwidth()
{
    return width;
}
double Rectangle::calcArea()
{
    return length * width;
}
int main()
{
    Rectangle r1(11.5, 45.6);
    cout << "Length: " << r1.getlength() << endl;
    cout << "Width: " << r1.getwidth() << endl;
    cout<<"Area: "<<r1.calcArea()<<endl;

    return 0;
}