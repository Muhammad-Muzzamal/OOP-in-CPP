#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double length;
    double width;
public:
    void setlength(double l);
    void setwidth(double w);
    double getlength();
    double getwidth();
    double clacArea();

// we can define the member funcyion in the seperate .cpp file
/*public:
    void setlength(double l)
    {
        length = l;
    }
    void setwidth(double w)
    {
        width = w;
    }
    double getlength()
    {
        return length;
    }
    double getwidth()
    {
        return width;
    }
    double clacArea()
    {
        return (length*width);
    }*/
};
#endif
