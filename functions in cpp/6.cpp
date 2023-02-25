// Define a function to swap data of two int variables using call by reference

#include<iostream>
#include<math.h>
using namespace std;
int ss(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int main()
{
    int a,b;
    cout<<"Enter a two number ";
    cin>>a>>b;
     ss(&a,&b);
     cout<<"swap number is a = " <<a<<"b = "<<b;
}