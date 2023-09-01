// Using inbuilt function and insert an element to the set container.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(3);
    s.insert(1);
    s.insert(5);

    set<int> :: iterator x;
    for (auto x = s.begin(); x != s.end(); x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}