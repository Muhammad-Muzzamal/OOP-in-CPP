#include <iostream>
using namespace std;
class Test
{
public:
    Test()  //default constructor 
    {
        cout << "Object created......" << endl;
    }
};
int main()
{
    Test t1; //constructor is automatically called when object is craeted.

    return 0;
}