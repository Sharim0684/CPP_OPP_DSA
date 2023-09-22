// Write a C++ program to delete all copies from an unordered_multiset.
// Example:
// Input - 6 4 2 7 3 3 1 1 1
// Output - 6 4 2 7 3 1


#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> s ({6,4,2,7,3,3,1,1,1});

    unordered_multiset<int> :: iterator x;
    for(x=s.begin(); x!=s.end(); x++)
    {
        cout<<*x<<" ";
    }

    cout<< endl;
    unordered_set<int> I(s.begin(), s.end());

    for (x = I.begin(); x!=I.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}