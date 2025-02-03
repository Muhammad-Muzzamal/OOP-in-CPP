#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int img)
    {
        real = r;
        imag = img;
    }
    void display()
    {
        cout << real << " + " << imag << "i \n";
    }
    friend Complex add(const Complex &c1, const Complex &c2);
};
Complex add(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    Complex c1(11, 23),
            c2(12, 58);
    Complex c3=add(c1,c2);
    c3.display();

    return 0;
}