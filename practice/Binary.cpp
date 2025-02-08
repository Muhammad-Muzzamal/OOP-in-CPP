#include <iostream>
using namespace std;
class Binary
{
private:
    int x, y;

public:
    Binary()
    {
        x = 0;
        y = 0;
    }
    Binary(int xvalue, int yvalue)
    {
        x = xvalue;
        y = yvalue;
    }
    Binary(const Binary &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    friend istream &operator>>(istream &in, Binary &obj)
    {
        cout << "Enter the value of X(0,1): ";
        in >> obj.x;
        cout << "Enter the value of Y(0,1): ";
        in >> obj.y;
        return in;
    }
    Binary *getequalBinary(Binary arr[], int size, int newsize)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i].x == x && arr[i].y == y)
            {
                count++;
            }
        }
        if (count == 0)
        {
            newsize = 0;
            return NULL;
        }
        Binary *newArr = new Binary[count];
        int index = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i].x == x && arr[i].y == y)
            {
                newArr[index++] = arr[i];
            }
        }
        newsize = count;
        return newArr;
    }
    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    int size;
    cout<<"Enter te size of array: ";   
    cin>>size;
    Binary *arr=new Binary[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[size];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i].display();
        cout<<endl;
    }
    
    

    return 0;
}