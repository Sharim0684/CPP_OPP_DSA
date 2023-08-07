// Write a C++ Program to Add two numbers using function template

#include<iostream>
using namespace std;
template<class T , class F>
T add( T a, F b)
{
    return (a+b);
}
int main()

{
    int x;
    float y;
    cout<<"Enter first number  :";
    cin>>x;
    cout<<"Enter second number :";
    cin>>y;



    cout<<"additionof two number is "<<add<float>(x,y)<<endl;

    return 0;
}