#include<iostream>
using namespace std;
class Demo
{
    public:
    Demo()
    {
        cout<<"Object is created......."<<endl;
 
   }
   ~Demo()
   {
    cout<<"Object is destroyed.........."<<endl;
   }
};
int main(){
    Demo d;

return 0;
}