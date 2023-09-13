// Given an array arr[] consisting of N integers, the task is to find the maximum element
// with the minimum frequency using unordered_map.
// Example:
// Input: arr[] = {2, 2, 5, 50, 1}
// Output: 50
// Explanation:
// The element with minimum frequency is {1, 5, 50}. The maximum element among
// these element is 50


#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[], int n)
{
    unordered_map<int,int> s;
    for(int i = 0 ; i<n ; i++)
    {
        s[arr[i]]++;
    }
    int minfreq = INT16_MAX;
    int maxvalue = INT16_MIN;

     
    for(auto x : s)
    {
        int num = x.first;
        int  freq  = x.second;

        if(freq < minfreq)
        {
            minfreq = freq;
            maxvalue = num;
            
        }
        else if(freq == minfreq && maxvalue < num)
        {
            maxvalue = num;
        }
    }
   cout<<maxvalue;
}
int main()
{
    int arr[] ={2,2,5,50,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);

    return 0;
}