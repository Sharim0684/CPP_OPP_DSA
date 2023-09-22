//  Create a function in Array to reverse an array.

#include<bits/stdc++.h>
using namespace std;
void reverse(int a[], int n)
{
    cout<<"reverse array is : ";
    for (int i = n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int arr[5];
    int n  = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter Element in the array ";
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);

    return 0;
}