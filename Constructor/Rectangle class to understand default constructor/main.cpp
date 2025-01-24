#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
    R r;
    r.setlength(11.2);
    r.setwidth(12.5);
    cout << "Length: " << r.getlength() << endl;
    cout << "Width: " << r.getwidth() << endl;
    cout << "Area: " << r.calcArea() << endl;

    return 0;
}