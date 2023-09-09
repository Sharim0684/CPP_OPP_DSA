// Create a c++ program using multiset and returns an iterator to the theoretical
// element that follows the last element in the multiset –> O(1)


#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m;
    m.insert(2);
    m.insert(5);
    m.insert(7);
    m.insert(8);
    m.insert(9);
    multiset<int> :: iterator x = m.end();
    if(x!= m.begin())
    {
        cout<<"last Element is: "<<*x<<endl;
    }
    else
    {
        cout<<"multiset is empty";
    }
    return 0;
}