#include <iostream>
using namespace std;
class Geomatry
{
private:
    double width;  // Member variable
    double length;   //Member variable

public:
    void setwidth(double w) // member functions
    {
        width = w;
    }

    void setlength(double l) // member functions
    {
        length = l;
    }

    double getlength() // member functions
    {
        return length;
    }

    double getwidth() // member functions
    {
        return width;
    }

    double calcArea() // member functions
    {
        return (length * width);
    }
};
 int main()
{
    double length,width;
    cout<<"Enter the length and width:"<<endl;
    cin>>length>>width;
    Geomatry rectangle;
    rectangle.setlength(length);
    rectangle.setwidth(width);
    cout<<"Length: "<<rectangle.getlength()<<endl;
    cout<<"Width: "<<rectangle.getwidth()<<endl;
    cout<<"Area: "<<rectangle.calcArea()<<endl;

    return 0;
}