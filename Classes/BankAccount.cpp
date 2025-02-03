#include <iostream>
using namespace std;
class BankAccount
{
private:
    string name;
    double balance;

public:
    BankAccount()
    {
        name = "";
        balance = 0.0;
    }
    BankAccount(string n, double bal)
    {
        name = n;
        balance = bal;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << "$ id credit successfully\n";
        }
        else
        {
            cout<<"Amount should be greater than zero (0)!\n";
        }
    }
    void withdraw(double amount)
    {
        if (amount < balance && amount > 0)
        {
            balance -= amount;
            cout << amount << "$ is debit successfully.\n";
        }
        else if (amount <= 0)
        {
            cout << "Enter valid amount!\n";
        }
        else
        {
            cout << "Your balance is low\n";
        }
    }
    double getBalance()
    {
        cout<<"Balance: "<<balance<<"$\n";
        return balance;
    }
};
int main()
{
    BankAccount A1("123456789",0.0);
    A1.deposit(1100);
    A1.withdraw(120);
    // A1.getBalance();

    return 0;
}