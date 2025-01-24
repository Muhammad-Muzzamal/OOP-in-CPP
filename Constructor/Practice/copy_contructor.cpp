#include <iostream>
using namespace std;
class Demo
{
private:
    int n;

public:
    Demo()
    {
        n = 10;
    }
    Demo(Demo &z)
    {
        n = z.n;
    }
    void putdata()
    {
        cout << "A= " << n << endl;
    }
};
int main()
{
    Demo aa;
    aa.putdata();
    Demo bb(aa);
    bb.putdata();
    Demo cc=aa;
    cc.putdata();

    return 0;
}