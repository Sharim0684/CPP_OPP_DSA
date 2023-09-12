// Create a map, and insert some pairs and find one pair out of the inserted pair and
// replace it with another pair and print map.


#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int,int> mp;
    mp.insert(pair<int,int>(1,10));
    mp.insert(pair<int,int>(2,20));
    mp.insert(pair<int,int>(3,30));

    map<int,int> :: iterator x;
    cout<<"before find and replace: "<<endl;
    for (auto x = mp.begin();x!=mp.end(); x++)
    {
        cout<<"key: "<<x->first << " , value : "<<x->second<<endl;
    }
    
    cout<<endl;
    mp[2]=200;
    mp[3]=400;
    cout<<"after find and replace: "<<endl;
    for (auto x = mp.begin(); x!=mp.end(); x++)
    {
        cout<<"key : "<< x->first << " value : "<<x->second<<endl;
    }
    return 0;
}