#include <iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;
    double CGPA;

public:
    Student() {}
    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Roll # " << rollNo << endl;
        cout << "cgpa: " << CGPA << endl;
    }
    friend istream &operator>>(istream &in, Student &obj)
    {
        cout << "Enter the following details:" << endl;
        cout << "Roll # ";
        in >> obj.rollNo;
        cout << "Name: ";
        in >> obj.name;
        cout << "Cgpa: ";
        in >> obj.CGPA;
    }
};
int main()
{
    Student s;
    cin>>s;
    s.display();
    return 0;
}