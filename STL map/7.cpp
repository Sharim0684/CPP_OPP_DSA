// Sort a given map in descending order based on values instead of keys in C++ STL.
// Key value
// 1 6
// 2 8
// 6 3
// 8 2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp={{"shaikh",6},{"sharim",8},{"abhi",3}};

    cout<<"the map sorted by keys, is: "<<endl;
    map<string,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first <<": "<<it->second<<endl;
    }
    cout<<endl;

    multimap<int,string> mp1 = invert(mp);
    cout<<"the map , sorted by value is : "<<endl;
    multimap<int,string> ::iterator iter;
    for(iter = mp1.begin(); iter != mp1.end(); iter++)
    {
          cout<<iter->second << ": "<<iter->first<<endl;        
    }
    return 0;
}