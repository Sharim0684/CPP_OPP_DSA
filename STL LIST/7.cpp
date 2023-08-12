//  Insert the element at beginning and end of the list | C++ STL


#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> i1;

    i1.push_back(100);
    i1.push_back(200);
    i1.push_back(300);
    i1.push_back(400);
    i1.push_back(500);

    i1.push_front(600);
    i1.push_back(700);

    list<int> :: iterator x;
    for (x  = i1.begin(); x != i1.end(); x++)
    {
        cout<<*x<<" ";
    }
    return 0;
    
}