// Create a function in Array to sort the given array


#include<bits/stdc++.h>
using namespace std;
void sort(int a[], int n)
{
    int temp;

    cout<<"sorted array is: ";
    for (int  i = 0; i < n ; i++)
    {
        for (int  j = 0; j <n ; j++)
        {
            if(a[i]> a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter Element in the array: ";
    for (int i = 0; i <n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);

    return 0;
}