// Create a c++ program using multiset and returns an iterator to the first element in
// the multiset –> O(1)


#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m;
    m.insert(1);
    m.insert(3);
    m.insert(6);
    m.insert(6);

    multiset<int> :: iterator x = m.begin();
    if(x !=m.end())
    {
        cout<<"first Element "<<*x<<endl;
    }
    else
    {
        cout<<"multiset is Empty";
    }
    
    return 0;
}
    
    
    
    
    