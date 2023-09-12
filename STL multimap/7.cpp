// Write a program to find a lower bound.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int> m;
    m.insert({2, 20});
    m.insert({3, 30});
    m.insert({4, 40});
    m.insert({5, 50});
    m.insert({6, 60});
    auto x = m.lower_bound(2);
    cout<<"Lower Bound of 2 is ";
    cout<<x->first<<" "<<x->second<<endl;

    return 0;
}