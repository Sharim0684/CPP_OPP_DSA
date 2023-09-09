// Create a c++ program using multiset and returns the number of elements in the
// multiset –> O(1)


#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m;
    m.insert(3);
    m.insert(2);
    m.insert(7);
    m.insert(6);

    multiset<int > :: iterator x;
    for (auto x = m.begin(); x != m.end();x++)

    {
        cout<<*x<<" ";
    }
    return 0;
}