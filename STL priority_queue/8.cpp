// Given an array arr[] of N elements, the task is to perform using priority_queue and
// the following operation:
// ● Pick the two largest element from the array and remove these element. If the
// elements are unequal then insert the absolute difference of the elements into the
// array.
// ● Perform the above operations until the array has 1 or no element in it. If the array has
// only one element left then print that element, else print “-1”.
// Example:
// Input: arr[] = { 3, 5, 2, 7 }
// Output: 1
// Explanation:
// The two largest elements are 7 and 5. Discard them. Since both are not equal, insert
// 7 – 5 = 2 into the array. Hence, arr[] = { 3, 2, 2 }
// The two largest elements are 3 and 2. Discard them. Since both are not equal, insert
// 3 – 2 = 1 into the array. Hence, arr[] = { 1, 2 }
// The two largest elements are 2 and 1. Discard them. Since both are not equal, insert
// 2 – 1 = 1 into the array. Hence, arr[] = { 1 }
// The only element left is 1. Print the value of the only element left.


#include<bits/stdc++.h>
using namespace std;

int large(int arr[],int n)
{
    priority_queue<int> heap;
    for (int i = 0; i < n ; i++)
    heap.push(arr[i]);

    while (heap.size()> 1)
    {
        int x  = heap.top();
        heap.pop();
        int y = heap.top();
        heap.pop();

        if(x!=y)
        {
        int  diff =  abs( x - y);
        heap.push(diff);

        }

    }
    if(heap.size() == 1)
    {
        cout<<heap.top()<<endl;

    }
    else
    {
        cout<<"-1"<<endl;
    }
}
int main()
{
    int arr[4]={3,5,2,7};

    int n = sizeof(arr)/sizeof(arr[0]);

    large(arr,n);

    return 0;
}