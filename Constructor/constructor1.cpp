#include <iostream>
using namespace std;
class Test
{
private:
    int x, y;

public:
    Test()
    {
        x = y = 100;
    }
    void avg()
    {
        cout<<"X= "<<x<<endl;
        cout<<"Y= "<<y<<endl;
        float avg=(x+y)/2;
        cout<<"Average: "<<avg<<endl;
    }
};
int main()
{
    Test t1;
    t1.avg();

    return 0;
}