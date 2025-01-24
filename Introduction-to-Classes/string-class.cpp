#include<iostream>
#include<string> 
using namespace std;
int main(){
    string cityname; //string is a basically a class and cityname is an instance of string class means an object
    cityname = "Lahore";  // Object data
    cout<<cityname;
    cout<<"\nSize:"<<cityname.size();
    cout<<"\nApend function:"<<cityname.append(" Beauty of Pakistan."); // it adds the new leteral in the current string and store ot in the new object and this member function is already defined in the sring class 

return 0;
}