#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
// need to exit function
using namespace std;

void Rectangle::setlength(double l)
{
    if (length > 0)
    {
        length = l;
    }
    else
    {
        cout << "Invalid lenth\n";
        exit(EXIT_FAILURE);
    }
}
void Rectangle::setwidth(double w)
{
    if (width > 0)
    {
        width = w;
    }
    else
    {
        cout << "Invalid Width\n";
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
double Rectangle::clacArea()
{
   return (length*width); 
}