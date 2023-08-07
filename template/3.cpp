//  Write a C++ program to find the largest of three elements using a template.

#include<iostream>
using namespace std;
template<class T>
T Element(T x, T y, T z)

{
    if(x>y && x>z)
    return x;
    else if(y>x && y>z)
    return y;
    else
    return z;
}
int main()
{
    int x,y,z;
    cout<<"Enter three number is : ";
    cin>>x>>y>>z;

    cout<<"largest number among three is "<<Element<int>(x,y,z);
}