#include <iostream>
using namespace std;
class Book
{
    string BookID;
    int page;
    int price;

public:
    void getdata()
    {
        cout << "BookID: ";
        cin >> BookID;
        cout << "Page: ";
        cin >> page;
        cout << "Price: ";
        cin >> price;
    }
    void show()
    {
        cout << "BookID = " << BookID << endl;
        cout << "Page = " << page << endl;
        cout << "Price = " << price << endl;
    }

    void setdata(string bookid, int pg, int pr)
    {
        BookID = bookid;
        page = pg;
        price = pr;
    }
    int getprice()
    {
        return price;
    }
};
int main()
{
    Book b1,b2;
    b1.getdata();
    // b1.show();
    b2.setdata("Pir-kamil",250,200);
    // b2.show();
    if(b1.getprice() > b2.getprice())
    {
        b1.show();
    }
    else
    {
     b2.show();   
    }


    return 0;
}