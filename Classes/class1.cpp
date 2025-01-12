#include <iostream>
#define PI 3.14
using namespace std;
class circle
{
    int rad;

public:
    void getradius(int rad)
    {
        this->rad = rad;
    }
    void area()
    {
        int area = PI * rad * rad;
        cout << "Area: " << area << endl;
    }
    void circum()
    {
        int circum = 2 * PI * rad;
        cout << "Circumfarance: " << circum << endl;
    }
};
int main()
{
    circle c1;
    int rad;
    cout<<"Enter the radius: ";
    cin>>rad;
    c1.getradius(rad);
    c1.area();
    c1.circum();


    return 0;
}