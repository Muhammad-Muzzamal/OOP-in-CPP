#include<iostream>
using namespace std;
class test{
    private:
    int n;
    public:
    void input()
    {
        cout<<"enter the number: ";
        cin>>n;
    }
    void output()
    {
        cout<<"Number: "<<n;
    }
};
int main(){
    test *ptr;
    ptr= new test;
    ptr->input();
    ptr->output();

return 0;
}