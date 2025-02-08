#include <iostream>
using namespace std;
class DayofYear
{
private:
    int day;
    static int days_in_month[12];
    static string month[12];

public:
    DayofYear(int day)
    {
        if (day < 0 || day > 365)
        {
            cout << "Enter valid number of day (1-365)!\n";
        }
        else
        {
            this->day = day;
        }
    }
    int operator++()
    {
        day = ++day;
        return day;
    }
    void print()
    {
        int remaining_day = day;
        for (int i = 0; i < 12; ++i)
        {
            if (remaining_day <= days_in_month[i])
            {
                cout << month[i] << " " << remaining_day<<endl;
                return;
            }
            remaining_day -= days_in_month[i];
        }
    }
};
int DayofYear::days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string DayofYear::month[12] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "Octuber", "November", "December"};
int main()
{
    DayofYear d(35);
    d.print();
    ++d;
    d.print();

    return 0;
}