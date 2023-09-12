// reate a map, use a member function to tell whether a map is empty or not and then
// insert some pairs into the map and find the size of map

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;

    if(mp.empty())
    {
        cout<<"map is Empty";
    }
    else
    {
        cout<<"map is not empty";
    }
    cout<<endl;
    mp.insert({2,20});
    mp.insert({3,30});

    cout<<"The size of map is : "<< mp.size();
    return 0;
}