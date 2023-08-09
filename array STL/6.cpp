// Using STL to check whether an array is empty or not.


#include<iostream>
#include<array>
using namespace std;
int main() 
{

    array<int,5> ar = {1,2,4,5,6};
    array<int,0> ar2;

    if (ar.empty())
    {
        cout<<"array is empty";
    }
    else
    {
        cout<<"array is not empty";
    }
    cout<<endl;
    if (ar2.empty())
    {
        cout<<"array is empty ";
    }
    else
    {
       cout<<"array is not empty "; 
    }
    return 0;
}