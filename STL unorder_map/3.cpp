// Write a c++ program to find freq of every word using unordered_map

#include<bits/stdc++.h>
using namespace std;
void find(string str)
{
    unordered_map<char,int> mp;
    for (int i = 0; str[i]; i++)
    {
        if(mp.find(str[i])==mp.end())
        {
            mp.insert(make_pair(str[i],1));

        }
        else
        {
            mp[str[i]]++;
        }
    }
    unordered_map<char, int > :: iterator x;
    for (x = mp.begin(); x!=mp.end();x++)
    {
        cout<<x->first << " "<<x->second<<endl;
    }
    
    
}
int main()
{
    string str = "Sharim Shaikh";
    find(str);

    return 0;

}