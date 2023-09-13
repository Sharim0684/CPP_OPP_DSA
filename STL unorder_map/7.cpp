// Create an unordered_map and Initialize it from another map using the copy
// constructor

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> s;
    s["ABC"] = 100;
    s["XYZ"] = 200;
    s["AXZ"] = 300;
    s["XVZ"] = 400;

    unordered_map<string,int> :: iterator x;
    cout<<"First Unordered map is: "<<endl;
    for (x = s.begin(); x!= s.end();x++)
    {
        cout<<"key: "<<x->first<<" , value: "<<x->second<<endl;
    }
    cout<<endl;

    unordered_map<string,int> s1 (s);
    cout<<"copy constructor :"<<endl;
    cout<<endl;
    for(x = s1.begin(); x != s1.end();x++)
    {
        cout<<"key: "<<x->first<<" , value: "<< x->second<<endl;
    }
}