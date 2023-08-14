// . Given an array, print the Next Greater Element (NGE) for every element using stack.
// Example:
// Input: arr[] = [ 4 , 5 , 2 , 25 ]
// Output: 4 –> 5
// 5 –> 25
// 2 –> 25
// 25 –> -1

#include<bits/stdc++.h>
using namespace std;
void greater(int arr[], int n)
{
    int next, i,j;
    for (int i = 0; i < n ; i++)
    {
        next=-1;
        for (int j = i+1 ; j <  n; j++)
        {
            if(arr[i]< arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout<<"Next Element in the array : "<< next<< " ";
    }
    
}
int main()
{
    int arr[]= {4 , 5 , 2 , 25 };
    int n = sizeof(arr)/sizeof(arr[0]);
    greater(arr,n);
    return 0;
}