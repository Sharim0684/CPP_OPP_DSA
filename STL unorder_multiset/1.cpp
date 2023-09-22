// Write a C++ program to initialise the unordered_multiset and print it on the screen

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> s;
    s.insert(12);
    s.insert(13);
    s.insert(22);
    s.insert(10);

    unordered_multiset<int> :: iterator x;
    for (x = s.begin(); x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(12);

     for (x = s.begin(); x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0 ;
}