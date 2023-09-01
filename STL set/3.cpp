// Erase an element from a set.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(8);

    set<int>::iterator x;
    for (auto x = s.begin(); x != s.end(); x++)
    {
        cout << *x << " ";
    }
    int num = s.erase(4);
    cout << endl;
    set<int>::iterator y;
    for (auto y = s.begin(); y != s.end(); y++)
    {
        cout << *y << " ";
    }
    return 0;
}