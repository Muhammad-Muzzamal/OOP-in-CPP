#include<iostream>
using namespace std;
class Student
{
private:
	string name;
	int rollNumber;
public:
	Student(string n="",int rn=0):name(n),rollNumber(rn) {}
	void display()
		{	cout<<"Name: "<<name<<endl;
			cout<<"Roll Number: "<<rollNumber<<endl;
		}
	~Student()
	{	cout<<"OBJECT Destroyed ! "<<endl;	}
};
int main()
{
	Student s("Ahmad",110836);
	s.display();
	return 0;
}