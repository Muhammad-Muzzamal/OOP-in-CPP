#include <iostream>
#include <string.h>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
    static const string months[];

public:
    Date(int d, int m, int y = 2000)
    {
        day = d;
        month = m;
        year = y;
    }
    void setday(int d)
    {
        day = d;
    }
    void setmonth(int m)
    {
        month = m;
    }
    void setyear(int y)
    {
        year = y;
    }
    void display1()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
    void display2()
    {
        cout << months[month - 1] << "/" << day << ", " << year << endl;
    }
    void display3()
    {
        cout << day << " " << months[month - 1] << " " << year << endl;
    }
};
const string Date::months[] = {"january", "Feburary", "March", "April", "May", "June", "July", "August", "September", "Octuber", "November", "December"};
int main()
{
    Date d(25, 10, 2018);
    d.display1();
    d.display2();
    d.display3();

    return 0;
}