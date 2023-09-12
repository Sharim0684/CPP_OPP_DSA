// Create a map, insert some pairs and print all elements in reverse order using rbegin
// and rend function.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(4,40));

    map<int,int> :: iterator x;
    for (auto x = m.rbegin(); x !=m.rend();x++)
    {
        cout<<"key: "<<x->first<< " , value: "<< x->second<<endl;
    }
    return 0;
}