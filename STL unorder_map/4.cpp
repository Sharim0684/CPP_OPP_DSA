// Write a c++ program to demonstrate implementation of find function in
// unordered_map.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char,int> m;
    m.insert({'a',1});
    m.insert({'b',2});
    m.insert({'c',3});
    m.insert({'d',4});

    char key = 'c';

    if(m.find(key)==m.end())
    {
        cout<<"key not found";
    }
    else
    {
        cout<<"key found ";
    }
    return 0;
}