// Write a c++ code, to demonstrate the forward list.

#include<bits/stdc++.h>
using namespace std ;
int main()

{
    forward_list<int> l1;
    
    l1.assign({1,2,3,4,5,6});
   
    forward_list<int> :: iterator x;
    for (x = l1.begin(); x != l1.end();x++)
    {
        cout<<*x<<' ';
    }
    return 0;
}