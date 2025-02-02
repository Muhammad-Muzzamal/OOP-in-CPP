#include<iostream>
using namespace std;
class count
{
private:
    int num;
public:
    // paramerterized constructor
    count(int n):num(n){}

    //display the output 

    void display()
    {
        cout<<"Num: "<<num<<endl;
    }
    
    //operator overloading ++num

    count operator ++ ()
    {
        ++num;
        return *this;
    }

};
int main(){
    count c(11);
    c.display();
    ++c;
    c.display();
    ++c;
    c.display();
return 0;
}