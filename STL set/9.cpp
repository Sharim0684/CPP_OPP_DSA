// Converting String into Set in C++ STL


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name = "sharim shaikh ";

    set<int> s (name.begin(), name.end());

    set<int> :: iterator x;
    for (auto x = s.begin(); x != s.end(); x++ )
    {
        cout<<*x<<" ";
    }
    return 0;
}