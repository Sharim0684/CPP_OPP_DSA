// Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main()

{
    int a,b,c;
    cout<<"Enter a three number ";
    cin>>a>>b>>c;
    float avg = a*b*c/3;
    cout<<"average of three number is "<<avg;
    return 0;
}