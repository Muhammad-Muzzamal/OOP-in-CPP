#include <iostream>
#define PI 3.14
using namespace std;
class Circle
{
private:
    double radius;

public:
    Circle() : radius(0.0) {}
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
    double radius;
    Circle c[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the radius of circle # " << i + 1 << ": ";
        cin >> radius;
        c[i].setradius(radius);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Raduis of Circle # " << i + 1 << "= " << c[i].getRadius() << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Area of Circle # " << i + 1 << "= " << c[i].getArea() << endl;
    }

    return 0;
}