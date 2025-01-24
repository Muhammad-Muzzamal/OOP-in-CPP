// this is valid to wite the the members in the public and private access specifier

#include<iostream>
using namespace std;
class Rectangle
{
private:
    double length;
public:
    void setlength(double t);
    void setwidth(double w);
    double calcArea()
    {
        return (length * width);
    }
private:
    double width;
};
int main(){

return 0;
}