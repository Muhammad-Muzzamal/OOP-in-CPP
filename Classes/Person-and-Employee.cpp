#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person
{
private:
    double salary;

public:
    Employee() : Person()
    {
        salary = 0.0;
    }
    Employee(string n, int ag, double s) : Person(n, ag)
    {
        salary = s;
    }
    void display()
    {
        cout << endl;
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e("Ahmad", 19, 37000);
    e.display();

    return 0;
}