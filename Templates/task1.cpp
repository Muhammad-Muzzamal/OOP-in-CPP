#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int x,y;
    cout<<"Enter the value of a and b"<<endl;
    cin>>x>>y;
    int result=Max(x,y);
    cout<<"the maximum number is: "<<result;

    return 0;
}