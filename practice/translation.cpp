#include <iostream>
using namespace std;
class Number
{
private:
    int number;
    static string lessThan20[20];
    static string tens[10];
    static string thousand;
    static string hunderds;

public:
    Number(int num) : number(num) {}
    void display()
    {
        if (number < 0 || number > 9999)
        {
            cout << "Enter a valid number(1-9999): " << endl;
        }
        int num = number;
        if (num / 1000 > 0)
        {
            cout << lessThan20[num / 1000] << " " << thousand << " ";
            num %= 1000;
        }
        if (num / 100 > 0)
        {
            cout << lessThan20[num / 100] << " " << hunderds << " ";
            num %= 100;
        }
        if (num >= 20)
        {
            cout << tens[num / 10] << " ";
            num %= 10;
        }
        if (num > 0)
        {
            cout << lessThan20[num];
        }
        cout << endl;
    }
};
string Number::lessThan20[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                                 "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string Number::tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
string Number::thousand = "thousands";
string Number::hunderds = "hunderds";

int main()
{
    Number n(9999);
    n.display();

    return 0;
}