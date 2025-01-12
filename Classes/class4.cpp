#include <iostream>
using namespace std;
class Array
{
private:
    int arr[5];

public:
    void fill()
    {
        cout << "Fill the Array: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void displa()
    {
        cout << "You enter the following integers: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Array[" << i << "] : " << arr[i] << endl;
            ;
        }
    }
    void max()
    {
        int max = arr[0];
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout<<"Maximun Number: "<<max<<endl;
    }
    void min()
    {
        int min = arr[0];
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout<<"Minimun Number: "<<min<<endl;

    }
};
int main()
{
    Array arr1;
    arr1.fill();
    arr1.displa();
    arr1.max();
    arr1.min();
    return 0;
}