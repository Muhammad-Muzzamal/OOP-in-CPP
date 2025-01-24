#ifndef RECTANGLE_H
#define RECTANGLE_H
class R
{
private:
    double length;
    double width;

public:
    R();
    void setlength(double);
    void setwidth(double);
    double getlength();
    double getwidth();
    double calcArea();
};
#endif