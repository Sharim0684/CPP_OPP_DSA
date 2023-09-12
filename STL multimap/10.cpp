// . Write a program that checks whether a given multimap is empty or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> mp;
    cout<<"Initially map is Empty "<<mp.empty()<<endl;

    mp.insert({1,20});
    mp.insert({2,20});
    mp.insert({3,30});

    cout<<"after initialize the Element in the map. map is not empty:  "<<mp.empty();

    return 0;
}