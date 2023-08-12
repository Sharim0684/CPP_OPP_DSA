// Merge two lists C++ STL

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1 = { 2,3,4,5,6};
    list <int>l2 = {7,8,9};

    l1.merge(l2);

    list<int> :: iterator x;
    cout<<"the element after merging is : ";
    for (x=l1.begin(); x!=l1.end();x++)
    {
        cout<<*x<<' ';
    }
    return 0;
}