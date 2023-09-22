// write a C++ program to count the frequency of elements in unordered_multiset.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> s ({2,2,2,4,1,5});

    cout<<"the frequency of Element two is : "<<s.count(2);

    return 0;
}