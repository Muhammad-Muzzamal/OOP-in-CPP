#include <iostream>
#define PI 3.14
using namespace std;
class Circle
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    void setradius(double r)
    {
        if (r > 0)
        {
            radius = r;
        }
        else
        {
            cout << "Enter valid number! \n";
        }
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return PI * radius * radius;
    }
};
int main()
{
    Circle c(11);
    // c.setradius(11.5);
    cout << "Area: " << c.getArea() << endl;

    return 0;
}