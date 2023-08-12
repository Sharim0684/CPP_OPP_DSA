//  Iterate a list C++ STL

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    for (int i = 0; i < 5 ; i++)
    {
       l.push_back(i*100);

    }

    list<int>::iterator x;

    for (auto x = l.begin(); x != l.end(); x++)
    {
       cout<<*x<<" ";
    }
    
    return 0;

}
    
