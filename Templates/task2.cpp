#include<iostream>
using namespace std;
template<class T>
T min(T arr[],int n)
{
    T min;
    min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    return min;
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout<<"minimun Value in the int array is: "<<min(arr,7)<<endl;
    float farr[]={11.2,33.8,66.9,22.6,33.5,55.6};
    cout<<"minimun Value in the float array  is: "<<min(farr,6)<<endl;

return 0;
}