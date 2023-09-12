// Write a program to find the upper bound.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> mp;
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp.insert({5,50});

    auto x = mp.upper_bound(3);
    cout<<"upper bound of 3 is : ";
    cout<<x->first<<" "<<x->second;

    return 0;
}