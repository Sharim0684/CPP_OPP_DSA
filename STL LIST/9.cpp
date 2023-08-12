// Remove all consecutive duplicate elements from the list | C++ STL

#include<bits/stdc++.h>

using namespace std;
int main()
{
    list<int> l1;

    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(5);
    l1.push_back(2);
    l1.push_back(6);
    l1.push_back(6);
    l1.push_back(2);
   

    list<int> :: iterator x;
    cout<<"The Element in the list is : ";
    for (x=l1.begin(); x!=l1.end(); x++)
    {
        cout<<*x<<' ';
    }
     l1.unique();
     cout<<endl;
    cout<<"Removing consecutive element list is : ";
    for (x=l1.begin(); x!=l1.end(); x++)
    {
        cout<<*x<<' ';
    }
    return 0;
    
}