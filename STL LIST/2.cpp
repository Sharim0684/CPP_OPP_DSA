// Assign the elements to the list (different methods) - Example of list::assign() | C++
// STL

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;

       l.assign(5,100);

    for (int itr : l)
    {
        cout<<itr<<" ";
    }
    return 0;
}