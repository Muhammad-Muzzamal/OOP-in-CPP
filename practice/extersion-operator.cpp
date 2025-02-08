#include<iostream>
using namespace std;
class Test
{
    private:
    string name;
    public:
    Test(string n):name(n){}
    friend ostream& operator << (ostream &out,const Test &obj)
    {
        out<<"Name: "<<obj.name<<endl;
        return out;
    }
};
int main(){
    Test t("Muzzamal");
    cout<<t<<endl;

return 0;
}