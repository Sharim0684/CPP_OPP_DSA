// how to find the upper bound of any desired element from the set.

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(2);
    s.insert(4);
    s.insert(6);


    set<int> :: iterator x;
    for (x = s.begin() ; x != s.end(); x++)
    {
        cout<<*x<<" ";
    }
cout<<endl;
    auto  a = s.upper_bound(4);

        cout<<"the upper bound of key 4 is : ";
        cout<<*a;
    
}