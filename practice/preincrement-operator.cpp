#include <iostream>
using namespace std;
class Demo
{
    int num;

public:
    Demo(int n) : num(n) {}
    void display()
    {
        cout << num << endl;
    }
    double operator++()
    {
        return ++num;
    }
    bool operator>(const Demo &obj)
    {
        bool status;
        if (num > obj.num)
        {
            status = true;
        }
        else
        {
            status = false;
        }
        return status;
    }
};
int main()
{
    Demo d(11), d1(22);
    d1>d1;

    cout << ++d << endl;

    return 0;
}