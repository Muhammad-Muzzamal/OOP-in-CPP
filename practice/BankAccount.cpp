#include <iostream>
using namespace std;
class BankAccount
{
private:
    string accountType;
    double balance;
    double interestRate;

public:
    BankAccount() : accountType(""), balance(0.0), interestRate(0.0) {}
    BankAccount(string acType, double bal, double iRate = 0.15)
    {
        accountType = accountType;
        balance = bal;
        interestRate = iRate;
    }

    // matutor functions (setter functions)
    void setaccountType(string acctype)
    {
        accountType = acctype;
    }
    void setiRate(double irate)
    {
        interestRate = irate;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Amount should be greater than zer(0) ! \n";
        }
    }
    void withdraw(double amount)
    {
        if (amount < balance && amount >= 0)
        {
            balance -= amount;
        }
        else if (amount < 0)
        {
            cout << "Amount should be greater than zero (0) ! \n";
        }
        else if (amount > balance)
        {
            cout << "oops! Balance is low\n";
        }
    }

    // Accesser function
    double getbalance()
    {
        return balance;
    }
    double calcinterest()
    {
        return balance + interestRate;
    }
};
void manue()
    {
        cout << "\n------------------MENUE----------------------\n";
        cout << "A) Set Account type.\n";
        cout << "B) Check Balance.\n";
        cout << "C) Deposit Amount.\n";
        cout << "D) Withdraw Amount.\n";
        cout << "E) Interest rate of current year.\n";
        cout << "F) Interest Earned.\n";
        cout << "G) Exit Program.\n\n";
    }

int main()
{
    BankAccount a;

    
    manue();
    switch (char)
    {
    case 'A':
    case 'a':
        cout<<"Enter Account Type: ";
        getline(cin,acctype);
        a.setaccountType(acctype)
        break;
    
    default:
        break;
    }
    return 0;
}
