// Write a program to erase all the entries of the key.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m;

    m.insert({2,30});
    m.insert({3,40});
    m.insert({5,50});
    m.insert({6,70});

    multimap<int,int> :: iterator x;
    for (x = m.begin(); x != m.end(); x++)
    {
        cout<<"key: "<<x->first<<" , value : "<<x->second<<endl;
    }

    m.erase(m.begin(),m.end());
   
    for (x = m.begin(); x != m.end();x++)
    {
        cout<<"key: "<<x->first<< " , value : "<<x->second<<endl;
    }
     cout<<"the Element after removing : "<<endl;
    return 0;
}