// Write a C++ program to demonstrate the addition of multiple types of data using
// generic functions or templates

#include<iostream>
using namespace std;
template < class T, class F >
F Add( T x , F y)
{
     return(x+y);
}
int main()
{
    float sum = Add<int, float>(2,3.5);
    cout<<"Addition is "<<sum;
}