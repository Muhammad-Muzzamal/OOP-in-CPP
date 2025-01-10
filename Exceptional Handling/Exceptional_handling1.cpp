#include <iostream>
using namespace std;
class Customer
{
private:
    string name;
    int balance, account_number;

public:
    Customer(string name, int acount_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " rs is credit successfully.\n";
        }
        else
        {
            throw "Amount should be greater than 0\n";
        }
    }
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rs is Debit successfully\n";
        }
        else if (amount > balance)
        {
            throw "Balance is low.\n";
        }
        else
        {
            throw "Amount should be greater than 0\n";
        }
    }
};
int main()
{
    Customer C1("Muzzamal", 1234567890, 1200);
    try
    {
        C1.deposit(120);
        C1.withdraw(12000); //excepton occured
        C1.deposit(1000); //dont exicute this line of code whisc make this easy foe coder to identified the error in run time otherwise the code could not find the error in the rumtime 

    }
    catch (const char *e)
    {
        cout<<"Esception Occured:\n"<<e;
    }

    return 0;
}

