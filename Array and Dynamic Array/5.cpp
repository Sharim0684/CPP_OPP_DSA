// Create a function in Array to check the size of an array.


#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,5,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"the size of an array is : "<<n;

    return 0;
}