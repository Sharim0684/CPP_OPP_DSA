// Create a c++ program using multiset and removes all the elements from the multise

#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout<<"before removing the multiset is : ";
    for (auto x = s.begin(); x!=s.end() ;x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    s.clear();

    cout<<"after removing all element in the set is ";
    for (auto x=s.begin(); x!=s.end();x++ )
    {
        cout<<*x<<" ";
    }
       return 0;
}