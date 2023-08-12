// Get the first and last element of the list C++ STL


#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;

    for (int i = 0; i < 5 ; i++)
    {
        l1.push_back(i*100);
    }
    l1.pop_front();
    cout<<"First  Element is : "<<l1.front()<<endl;
    cout<<"last Element is : "<<l1.back()<<endl;
    list<int> :: iterator x;

    for(x = l1.begin() ; x != l1.end(); x++)

    {
        cout<<*x<<" ";
    }
    return 0;
}