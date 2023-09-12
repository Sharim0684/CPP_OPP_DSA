// Write a program to find some key value pairs and print on the console.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int> mp;
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({2, 200});
    mp.insert({2, 203});

    int key = 2;
    multimap<int, int>::iterator x;
    for (auto x = mp.begin(); x != mp.end(); x++)
        
    if (x->first == key)
        cout << x->first << "  " << x->second << endl;

    return 0;
}