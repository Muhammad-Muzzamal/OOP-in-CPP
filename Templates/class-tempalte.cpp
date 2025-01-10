#include <iostream>
using namespace std;
template <class T>
class Min
{
    T arr[5];

public:
    void input()
    {
        cout << "Enter tye values:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void output()
    {
        cout << "Your output is:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "arr[" << i << "]" << "= " << arr[i] << endl;
        }
    }
};
int main()
{
    Min<int> min1;
    min1.input();
    min1.output();
    Min<char> min2;
    min2.input();
    min2.output();

    return 0;
}