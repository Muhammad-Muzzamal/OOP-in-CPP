#include <iostream>
using namespace std;
class Student
{
private:
    string Name;
    int rollNo;
    int marks[];

public:
    void input()
    {
        cout << "Name: ";
        getline(cin, Name);
        cout << "Roll # ";
        cin >> rollNo;
        cout << "Marks: \n";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    void show()
    {
        cout << "Name = " << Name << endl;
        cout << "Roll No = " << rollNo << endl;
        cout << "marks : \n";
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks[" << i + 1 << "] : " << marks[i] << "\n";
        }
    }
    int total()
    {
        int total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
        cout << "Total : " << total<<endl;
    }
    float avg()
    {
        float total;
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
        float avg=total/3.0;
        cout<<"Average : "<<avg<<endl;
    }
};
int main()
{
    Student s1;
    s1.input();
    s1.show();
    s1.total();
    s1.avg();
    return 0;
}
