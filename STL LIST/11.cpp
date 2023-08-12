//  Creating a list by assigning the all elements of another list C++ STL

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list < int> l1 = { 2,3,4,5};
    list<int>l2;

    l2.assign(l1.begin(), l1.end());

    
    list<int> :: iterator x;
    cout<<"The element in the another list is : ";
    for(x=l1.begin(); x != l1.end();x++)
    {
        cout<<*x<<' ';
    }
    cout<<endl;
    list<int> :: iterator y;
    cout<<"assigning element from another list is : ";
    for(y=l2.begin(); y != l2.end();y++)
    {
        cout<<*y<<' ';
    }
    return 0;
}