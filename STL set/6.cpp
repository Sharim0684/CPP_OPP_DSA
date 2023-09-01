// How to find the lower bound of any desired element from the set.

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;

    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    set<int> :: iterator x ;
    for (auto x= s.begin();x != s.end(); x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    auto c =  s.lower_bound(2);
    if(  c != s.end())
    {
        cout<<"The lower bound of 2 key is : ";
        cout<<(*c);
    }
    else
    {
        cout<<"The Lower bound is greater than is key value ";
    }
    return 0;
}