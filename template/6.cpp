// Write a C++ Program to find Sum of Array using function template


#include<iostream>
using namespace std;
template <class T>
T array( T a[], T length)
{
    int sum=0;
    for (int i = 0; i < length; i++)
    {
         sum=sum+a[i];
        
    }
    return sum;


}
int main()
{
    int ar[5];
    int n;
    int i;
    cout<<"Enter element in the array :"<<endl;
    for (int i = 0; i < 5 ; i++)
    {
        cin>>ar[i];
    }  

    cout<<" the sum of array is : "<<array(ar,5)<<endl;

    return 0;
}