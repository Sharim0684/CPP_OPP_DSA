// Create a map, insert at least 5 pairs of keys and values and print it.


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

    // OR

    // m[1]=10;
    // m[2]=20;
    // m[3]=30;
    // m[5]=50;
    // m[4]=40;

    map<int,int> :: iterator x;
    for (x = m.begin(); x!=m.end(); x++)
    {
        cout<<"key: "<<x->first<< " value: "<<x->second<<endl;
    }
    return 0;
}