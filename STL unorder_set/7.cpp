// Given an array of strings arr[] of size N, the task is to print all the distinct strings
// present in the given array.
// Examples:
// Input: arr[] = { “Good”, “God”, “Good”, “God”, “god” }
// Output: god Good God


#include<bits/stdc++.h>
using namespace std;
void distict(vector<string>&arr, int n)
{
    unordered_set<string> s;
    for (int i = 0; i < n ; i++)
    {
       if(!s.count(arr[i]))
       {
         s.insert(arr[i]);
       }
    }
    for (auto string : s)
    {
       cout<<string<<" ";
    }
    
    
}
int main()
{
    vector<string> arr = { "Good", "God", "Good","God","god" };
    int n = arr.size();
    distict(arr,n);
    return 0;
}