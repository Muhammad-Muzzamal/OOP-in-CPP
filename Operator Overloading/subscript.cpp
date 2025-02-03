#include <iostream>
using namespace std;
class Array
{
private:
    int *data;
    int size;

public:
    // constructor:
    Array(int s) : size(s)
    {
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = 0;
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "data[" << i << "] = " << data[i] << endl;
        }
    }
    int &operator[](int index)
    {
        if (index >= 0 && index < size)
        {
            return data[index];
        }
        else
        {
            cout << "index out of range" << endl;
        }
    }
    ~Array()
    {
        delete[] data;
    }
};
int main()
{
    Array a(5);
    for (int i = 0; i < 5; i++)
    {
        cout<<"["<<i<<"]=";
        cin>>a[i];

    }
    
    a.display();

    return 0;
}