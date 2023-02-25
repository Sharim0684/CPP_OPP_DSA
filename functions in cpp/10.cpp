// Write functions using function overloading to add two numbers having different data
// types

#include<iostream>
using  namespace std;
int ss(int x, int y)
{
    return (x+y);
}
float ss(float x, float y)
{
    return (x+y); 
}
int main()
{
    int a,b;
    cout<<"Enter a two integer number ";
    cin>>a>>b;
    float c,d;
    cout<<"Enter a two floating number ";
    cin>>c>>d;
    cout<<"addition of two integer num is "<<ss(a,b);
    cout<<"addition of two floating num is "<<ss(c,d);
    return 0;
}