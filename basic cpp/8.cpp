// Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a ,b;
    cout<<"Enter a two number";
    cin>>a>>b;
    swap(a,b);
    cout<<"swap number is a= "<<a<<"and b= "<<b;
    return 0;
}