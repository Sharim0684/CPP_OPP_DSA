// Write a C++ program to illustrate the swapping of data between two
// unordered_multiset.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> s ({1,2,3,4,5});
    unordered_multiset<int> i ({6,7,8,9});

    unordered_multiset<int> :: iterator x;
    cout<<"Before Swapping: "<<endl;
    cout<<"s unordered multiset is : ";
    for(x = s.begin(); x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    cout<<"i unordered multiset is : ";
    for (x = i.begin(); x!=i.end();x++)
    {
        cout<<*x<<" ";
    }
    
    cout<<endl;
    s.swap(i);
    cout<<"After swapping : "<<endl;

     cout<<"s unordered multiset is : ";
    for(x = s.begin(); x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

     cout<<"i unordered multiset is : ";
    for(x = i.begin(); x!=i.end();x++)
    {
        cout<<*x<<" ";
    }
return 0;
}