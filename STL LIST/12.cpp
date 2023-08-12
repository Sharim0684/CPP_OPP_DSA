// Assign a list with array elements C++ STL


#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1;

    int arr[]={10,20,30,40,50,60};

    list<int> :: iterator x;
    cout<<"Element in the list is :";
    for (x = l1.begin(); x != l1.end(); x++)
    {
        cout<<*x<<' ';
    }
    cout<<endl;
    l1.assign(arr+0 ,arr+6);
    
    list<int> :: iterator y;
    cout<<"Element in the list are : ";
    for ( y = l1.begin(); y != l1.end(); y++)
    {
        cout<<*y<<" ";   
    }
    
    return 0;
}