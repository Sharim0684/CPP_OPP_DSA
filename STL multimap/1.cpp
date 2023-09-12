// Write a c++ program to demonstrate the implementation of multimap

#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int , int>mp;

    mp.insert(pair<int,int>(1,10));
    mp.insert(pair<int,int>(2,20));
    mp.insert(pair<int,int>(3,30));
    mp.insert(pair<int,int>(3,40));

    multimap<int,int> :: iterator x;

    for(x = mp.begin(); x!=mp.end(); x++)
    {
        cout<<"key: "<<x->first<< " , value: "<<x->second<<endl;
    }
    cout<<"size of the multimap is : "<<mp.size()<<endl;
    mp.erase(2);
    cout<<"after erasing and Element two is : "<<endl;
    for(x = mp.begin(); x!=mp.end(); x++)
    {
        cout<<"key: "<<x->first<< " , value: "<<x->second<<endl;
    }
    return 0;
}