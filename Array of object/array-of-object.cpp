#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    Student(string n, int rollno)
    {
        name = n;
        rollNo = rollno;
    }
    Student(string n)
    {
        name = n;
        rollNo = 0;
    }
    Student() {}
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll # " << rollNo << endl;
    }
};
int main()
{
    // it does't matter which construster is called in the array i run two types to cobstructors
    Student students[] = {Student("Muzzamal", 110837),
                          Student("Ali", 110826),
                          Student("Imran Ali", 110855),
                          Student("Waseem", 110812),
                          Student("Kashif", 110774),
                          Student("Faran")};
    for (int i = 0; i < 6; i++)
    {
        cout << "\nStudent # " << (i + 1) << endl;
        students[i].display();
    }

    return 0;
}