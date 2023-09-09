// Create a c++ program using multiset and removes all the occurrences of x

#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(50);
    s.insert(40);
    s.insert(80);


    multiset<int> :: iterator x;
    cout<<"first multiset is : ";
    for (auto x = s.begin(); x!=s.end(); x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    multiset<int> s1(s.begin(), s.end());
    cout<<"second multiset is : ";
    s1.erase(s1.begin(), s1.find(40));
    
    for(auto x = s1.begin(); x!=s1.end();x++)
    {
        cout<<*x<<" ";
    }

  
    return 0;
}