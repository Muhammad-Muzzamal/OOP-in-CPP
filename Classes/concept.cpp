// class basically is a blue print of any object just like the blue print of a house 
#include<iostream>
using namespace std;
class Test{
    // by default the variables are private 
 int n;  
 char c;
 float x;
 public:
 void getdata();
 void setdata();
};
// member fuction can be define outside the class 
void Test::getdata()
{
    cout<<"Enter an integer: ";
    cin>>n;
    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Enter a float value: ";
    cin>>x;
}

void Test::setdata()
{
    cout<<"You Enter the following: "<<endl;
    cout<<"Integer: "<<n<<endl;
    cout<<"character: "<<c<<endl;
    cout<<"float: "<<x<<endl;

}

int main(){
    Test t1;
    t1.getdata();
    t1.setdata();

return 0;
}