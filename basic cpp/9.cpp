// Write a C++ program to find the maximum of two numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a two number ";
    cin>>a>>b;
    if (a>b)
    {
       cout<<"a is greater";      
    }
    else if(a<b)
    {
        cout<<"b is greater";
    }
    return 0;
}