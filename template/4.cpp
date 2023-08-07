// Write a C++ Program to Swap data using function template.

#include<iostream>
using namespace std;
template<class T > 
T swap(int x , int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;

    
} 
int main()
{
   int a,b;
   cout<<"Enter a value :"<<endl;
   cin>>a;
   cout<<"Enter b value  "<<endl;
   cin>>b;

   swap(a,b);

   cout<<"the value of a = "<<a <<" the value of b =  "<<b<<endl;
   return 0;
}