// Write a C++ Program to find Largest among two numbers using function template.

#include<iostream>
using namespace std;
template < class T>

T large( T x , T y)
{
    if(x>y)
    return x;
    else
    return y;

}
int main()
{
    int x, y;
    cout<<"Enter a number "<<endl;
    cin>>x>>y;
    
    cout<<"larger among two number is "<<large<int>(x,y);
    return 0;

}