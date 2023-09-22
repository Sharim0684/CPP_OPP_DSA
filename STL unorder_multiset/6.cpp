// Write a C++ program to illustrate the emplace() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> s;
    s.emplace(13);
    s.emplace(10);
    s.emplace(2);
    s.emplace(22);

    unordered_multiset<int> :: iterator x;
    for(x=s.begin(); x != s.end(); x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}