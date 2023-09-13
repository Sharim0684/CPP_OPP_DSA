// Create an unordered_map and Initialize it using assignment and subscript operator

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> s;
    s[1]=100;
    s[2]=200;
    s[3]=300;
    s[4]=400;

    unordered_map<int ,int> :: iterator x;
    for(x = s.begin(); x!=s.end();x++)
    {
        cout<<"key: "<<x->first<< " , value: "<<x->second<<endl;
    }
    return 0;
}