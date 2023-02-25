//  Write a C++ program to add all the numbers of an array of size 10.

#include<iostream> 
using namespace std;
int main()
{
    int arr[4];
    int size=4,i;
      int sum=0;
    cout<<"Enter a 10 value in the array";
    for (int i = 0; i < size  ; i++)
    {
    cin>>arr[i];
     sum += arr[i];
    }
    cout<<"sum of an array is "<<sum;
    return 0;
}