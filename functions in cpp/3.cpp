// Define a function to calculate x raised to the power y.

#include<iostream>
#include<math.h>
using namespace std;
int power(int a , int b)
{
      return pow(a,b);
}
int main()
{
    int x,y;
    cout<<"Enter a value of x & y ";
    cin>>x>>y;
  int val = power(x,y);
    
    cout<<"the  value is "<<val;
}