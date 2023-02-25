// Define a function to check whether a given number is a Prime number or not.

#include<iostream> 
using namespace std;

int prime(int n )
{
  int c=0;
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
        
    }
    if (c==2)
    {
        cout<<"number is prime";
    }
    else 
    {
        cout<<"number is not prime";
    }
    return 0;
    
}

int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    prime(a);
}