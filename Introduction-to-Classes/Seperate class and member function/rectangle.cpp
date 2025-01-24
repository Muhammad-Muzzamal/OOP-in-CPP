#include<iostream>
#include "Rectangle.h"
using namespace std;
int main(){
    Rectangle r1;
    r1.setlength(12);
    r1.setwidth(45);
    cout<<"Length: "<<r1.getlength();
    cout<<"\nWidth: "<<r1.getwidth();
    cout<<"\nArea: "<<r1.clacArea();

return 0;
}