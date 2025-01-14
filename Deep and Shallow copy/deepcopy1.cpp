#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    double *cgpaPtr;
    Student(string n, double cgpa)
    {
        name = n;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj)
    {
        name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr; // the same has to be stored in  new pony=ter of an abject
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};
int main()
{
    Student s1("Muzzamal", 3.7);
    s1.display();
    Student s2(s1);
    // s2.display();
    *(s2.cgpaPtr) = 3.8;
    // s1.display();  // this is change due to same memory allocation
    s2.display();
    s1.display();
    return 0;
}