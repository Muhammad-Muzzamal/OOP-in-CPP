#include <iostream>
using namespace std;
class Test
{
private:
    int num;

public:
    Test(int n) : num(n) {}
    void display()
    {
        cout << "NUmber: " << num << endl;
    }
    bool operator>(Test &obj)
    {
        return (num > obj.num);
    }
};
int main()
{
    Test t1(33), t2(22);
    if (t1 > t2)
    {
        cout << "Obj1 is Greater than Obj2";
    }

    return 0;
}