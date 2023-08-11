// Write a program to find sum of vector elements

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v { 2,3,1,6,8};

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" " ;
        
    }
       cout <<endl;
    int sum=0;
    cout<<"sum of vector is : ";
    for (int i = 0; i <v.size(); i++)
    {
        sum = sum+v[i];
    }
    cout<<sum;

    return 0; 
}