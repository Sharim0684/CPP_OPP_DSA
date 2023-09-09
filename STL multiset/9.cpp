// Create a c++ program using multiset and remove only one instance of element from
// multiset having same value


#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);

    cout<<"before erase an element : ";
    multiset<int> :: iterator x;
    for(x=s.begin(); x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    s.erase(s.erase(20));
    cout<<"after erase an element : ";
    
    for(x=s.begin(); x!=s.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}