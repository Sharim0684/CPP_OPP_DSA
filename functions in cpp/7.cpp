// Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;
int ss(int , int ,int=0);
int main()
{
    int a,b;
    cout<<"Enter a two number";
    cin>>a>>b;
  cout<<"sum is = "<<ss(a,b);

  cout<<endl;
  int c;
  cout<<"Enter a three number ";
  cin>>a>>b>>c;
cout<<"addition of three number is "<<ss(a,b,c);
    return 0;
}
int ss(int x,int y,int z)
{
    
     return x+y+z;
}