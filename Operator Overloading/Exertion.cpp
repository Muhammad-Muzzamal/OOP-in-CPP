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
    Student(int rolln, string n, double cgpa) : rollNo(rolln), name(n), CGPA(cgpa) {}
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
    friend ostream &operator<<(ostream &out, Student &obj)
    {
        out << "Roll # " << obj.rollNo << endl;
        out << "Name: " << obj.name << endl;
        out << "cgpa: " << obj.CGPA << endl;
    }
};
int main()
{
    Student s(110837,"Muhammad Muzzamal",3.03);
    Student s1;
    // s.display();
    cout<<s;
    cout<<"Student # 2\n";
    cin>>s1;
    cout<<s1;
    return 0;
}