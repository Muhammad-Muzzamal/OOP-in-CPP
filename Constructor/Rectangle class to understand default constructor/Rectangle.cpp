#include <iostream>
#include <cstdlib>
#include "Rectangle.h"
using namespace std;
R::R()
{
    width = 0.0;
    length = 0.0;
}
void R::setlength(double l)
{
    if (length > 0)
    {
        length = l;
    }
    else
    {
        cout << "Invalid Length\n";
        exit(EXIT_FAILURE);
    }
}
void R::setwidth(double w)
{
    if (width > 0)
    {
        width = w;
    }
    else
    {
        cout << "invalid Width\n";
        exit(EXIT_FAILURE);
    }
}
double R::getlength()
{
    return length;
}
double R::getwidth()
{
    return width;
}
double R::calcArea()
{
    return length * width;
}
