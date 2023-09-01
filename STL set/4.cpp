// Checks whether the set is empty or not.if it is empty insert 5 elements in the set

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    s.insert(3);

    
    if(s.empty())
    {
        cout<<"Set is Empty";

    }
    else
    {
        cout<<"set is not Empty";
    }
    return 0;
}