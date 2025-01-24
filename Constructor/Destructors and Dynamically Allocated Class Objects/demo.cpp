#include <iostream>
using namespace std;
class Demo
{
private:
    int num1,
        num2;

public:
    Demo(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    int add()
    {
        return num1 + num2;
    }
    ~Demo() {}
};
int main()
{
    Demo* d1;
    d1 = new Demo(11,45);
    cout<<"Sum: "<<d1->add();
    return 0;
}