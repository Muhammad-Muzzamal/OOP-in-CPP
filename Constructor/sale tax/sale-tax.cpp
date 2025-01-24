#include <iostream>
#include <cstdlib>
using namespace std;
class Sale
{
private:
    double itemCost;
    double taxRate;

public:
    Sale(double Itemcost, double taxrate)
    {
        itemCost = Itemcost;
        taxRate = taxrate;
    }
    double getcost()
    {
        return itemCost;
    }
    double gettaxrate()
    {
        return taxRate;
    }
    double gettax()
    {
        return itemCost * taxRate;
    }
    double gettotal()
    {
        return (itemCost + gettax());
    }
};
int main()
{
    Sale s(100,0.07);
    cout<<"Cost: "<<s.getcost()<<endl;
    cout<<"Tax Rate: "<<s.gettaxrate()<<endl;
    cout<<"Tax: "<<s.gettax()<<endl;
    cout<<"Total cost: "<<s.gettotal()<<endl;


    return 0;
}