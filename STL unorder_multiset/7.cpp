// Write a C++ program to illustrate the find() function in unordered_multiset.


#include<bits/stdc++.h>
using  namespace std;
int main()
{
    unordered_multiset<int> i({13,22,10,2,1});
    int key = 22;
    if(i.find(key) == i.end())
    {
        cout<<"key not found: ";

    }
    else
    {
        cout<<"key found ";
    }

    return 0;
}