// Write a function to print the element of a vector and take input from the user.


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
   int n=0;
    cout<<"Enter Element in the array";
     vector<int>v;
    for (int i = 0; i < 5 ; i++)
    {
        cin>>n;
        v.push_back(n);
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}