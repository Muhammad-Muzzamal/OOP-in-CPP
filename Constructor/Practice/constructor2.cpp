#include <iostream>
using namespace std;
class Student
{
private:
    int X, Y;

public:
    Student(int x, int y)
    {
        X = x;
        Y = y;
    }
    void display()
    {
        cout << "X= " << X << endl;
        cout << "X= " << Y << endl;
    }
};
int main()
{
    Student s1(10,20);
    s1.display();

    return 0;
}