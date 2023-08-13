// Write a c++ code, in which create a forward list and assign values to it at the time of
// initialization and print it on the console screen.

#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list<int>l1;
    forward_list<int>l2;
    forward_list<int>l3;

    l1.assign({1,2,3,4});

    cout<<"The element in the forward list is : ";
    forward_list<int> :: iterator x;
    for ( x = l1.begin();x != l1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
     l2.assign(3,10);
     cout<<"The Element in the list is : ";
    for ( x = l2.begin();x != l2.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    cout<<"The Element in the list is : ";
    l3.assign(l1.begin(), l1.end());
    for ( x = l3.begin();x != l3.end();x++)
    {
        cout<<*x<<" ";
    }
    
    return 0;
}