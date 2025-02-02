#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
class Account
{
private:
    double balance;
    int transections;
    double interestRate;
    double interest;
    double interestperiod;

public:
    Account(double bal, double interestR = 0.045)
    {
        balance = bal;git 
        interestRate = interestR;
        interest = 0;
        transections = 0;
    }
    void setinterestRate(double iRate)
    {
        interestRate = iRate;
    }
    void makeDeposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Balance is insufficient\n";
        }
        else
        {
            balance -= amount;
            transections++;
        }
    }

    void clacinterest()
    {
        interest = balance * interestRate;
    }
    double interestRate()
    {
        return interestRate;
    }
    double getbalance()
    {
        return balance;
    }
    double getinterest()
    {
        return interest;
    }
    int gettransactions()
    {
        return transections;
    }
};
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);
int main()
{

    return 0;
}
void displayMenu()
{
    cout << "#######\t Menu \t#######\n";
    cout << "A) Show Balancea\n";
    cout << "B) Make Deposit\n";
    cout << "c) Withraw Cash\n";
    cout << "D) Display number of transaction\n";
    cout << "E) Display interest earn in tis period\n";
    cout << "F) Add interest for this period\n";
    cout << "G) Exit the Program\n\n";
    cout << "Enter your choice:  ";
}

void makeDeposit(Account &acnt)
{
    double dollars;
    cout << "Enter the amount of the deposit: ";
    cin >> dollars;
    cin.ignore();
    acnt.makeDeposit(dollars);
}