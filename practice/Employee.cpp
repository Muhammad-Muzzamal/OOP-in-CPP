#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee(string n = "", int idn = 0, string dpt = "", string pos = "")
    {
        name = n;
        idNumber = idn;
        department = dpt;
        position = pos;
    }
    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID Number: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
    }
};
int main()
{
    Employee e;
    e.display();

    return 0;
}