#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollNumber;
    double marks;

public:
    Student()
    {
        name = "";
        rollNumber = 0;
        marks = 0.0;
    }
    Student(string n, int rn, double m)
    {
        name = n;
        rollNumber = rn;
        marks = m;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll # " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Student student[3] = {Student("Ahmad", 1102, 11.2),
                          Student("kamal", 1103, 12.3),
                          Student("subhan", 1104, 13.4)};
    for (int i = 0; i < 3; i++)
    {
        cout<<"\nDetail of Student # "<<i<<endl;
        student[i].display();
    }
    

    return 0;
}   