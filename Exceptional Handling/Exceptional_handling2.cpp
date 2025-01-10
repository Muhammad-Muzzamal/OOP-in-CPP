#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the values of a and b:" << endl;
    cin >> a >> b;
    try
    {

        if (b == 0)
        {
            throw "divide by 0 is not possible.\n";
        }
        int c = a / b;
        cout << c << endl;
    }
    catch (const char *e)
    {
        cout << "EXCEPTION OCCURED: " << e << endl;
    }
    return 0;
}