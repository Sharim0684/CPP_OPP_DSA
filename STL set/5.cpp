// Make a c++ program to insert unique element in set



#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(5);



    cout<<"set is : ";
    set<int> :: iterator x;
    for (auto x = s.begin() ; x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}
