// Write a c++ program to demonstrate functionality of unordered_map.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> s ={{"ABC",2},{"IAS",3},{"sas",4},{"xtz",5}};

    string key = "ABC";
    if(s.find(key)==s.end())
    {
        cout<<"key not found";
    }
    else
    {
        cout<<"key found";

    }
    cout<<endl;
    unordered_map<string,int> :: iterator x;
    for(x=s.begin();x!=s.end(); x++)
    {
        cout<<x->first<<" "<< x->second<<endl;
    }
    return 0;
}