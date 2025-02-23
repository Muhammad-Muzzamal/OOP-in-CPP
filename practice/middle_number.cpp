#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter the values of num1 num2 and num3:" << endl;
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num2 > num3)
    {
        cout << num2;
    }
    else if (num2 > num1 && num1 > num3)
    {
        cout << num1;
    }
    else if (num2 > num3 && num3 > num1)
    {
        cout << num2;
    }

    return 0;
}