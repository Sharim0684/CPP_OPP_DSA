// Create a c++ program using multiset and returns the maximum number of elements
// that the multiset can hold –> O(1)


#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m;
    m.insert(4);
    m.insert(3);
    m.insert(7);
    
    cout<<"maximum number is : "<<m.max_size();

    return 0;
}