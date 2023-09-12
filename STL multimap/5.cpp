// Write a program to erase only a single value based on position.

#include<bits/stdc++.h>
using namespace std;
int main()
    {
       multimap<int,int> m;
       m.insert({2,20});
       m.insert({3,30});
       m.insert({4,40});
       m.insert({5,50});
       m.insert({6,60});

       multimap<int,int> :: iterator x;
       cout<<"before removing an Element : "<<endl;
       for (x = m.begin(); x != m.end(); x++)
       {
         cout<<"key: "<<x->first<<", value: "<<x->second<<endl;

       }
       x = m.find(2);
       m.erase(2);
       cout<<"after removing an Element : "<<endl;
       for(x = m.begin(); x != m.end(); x++)
       {
        cout<<"key: "<<x->first<<" , value : "<<x->second<<endl;
       }
    }