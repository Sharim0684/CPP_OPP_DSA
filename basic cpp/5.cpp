// . Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
    int br,len,wid;
    cout<<"Enter the value of br,len and wid";
    cin>>br>>len>>wid;
    int cal = br*len*wid;
    cout<<"volume of cuboid is "<<cal;
}