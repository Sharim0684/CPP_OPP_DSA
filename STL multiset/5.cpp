//  Create a c++ program using multiset and returns whether the multiset is empty –>

#include<bits/stdc++.h>
using namespace std;
int main()

{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    if(s.empty())

    {
        cout<<"multiset is empty";
    }
    else{
        cout<<"mutiet is not empty";
    }
    return 0;
}