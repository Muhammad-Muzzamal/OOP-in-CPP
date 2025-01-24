#include <iostream>
using namespace std;
class demo
{
    public:
    demo();
};
demo::demo()
{
    cout<<"Default Constructor called !"<<endl;
}
int main()
{
    demo d;

    return 0;
}